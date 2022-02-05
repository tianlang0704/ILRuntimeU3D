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
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct IDictionary_2_t9503DE0744217071D554CC415B2890C454070024;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>
struct IDictionary_2_t7037018E841645C8CC47160428BCE39BD2F1926E;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t73B53956961988A5FAB9EFC83D2E4AF305C8EAC9;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct IDictionary_2_t2292CF3E61E26C073773D8A4C74878781B494F6D;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>
struct IDictionary_2_tC7BAD2687CDF91C9763BF50D50FC20E785685F1B;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>
struct IDictionary_2_t3744398584159821F6BD98B75BD2A77F3637BB89;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>
struct IDictionary_2_t674CC07B69C53F8E967B72700623A139C7DB4345;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IList_1_t2AFD07F22E0BC548C68CF53A315DFB03EEE0BD6A;
// System.Collections.Generic.IList`1<LitJson.JsonData>
struct IList_1_t456F54140B90EA486BEA348DBD9B8EBAAB570FEE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct KeyCollection_tE8399140098D3D8028A8D5FB2CBF88B0965541B7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32[]>
struct KeyCollection_tC542A7519E04306FF4830698FC8A485843209C5F;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct ValueCollection_t28FD47FCC4F1763B936C9A4BB2A8B2276E633FEF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32[]>
struct ValueCollection_t6D44D0A2B65933FB953BE36FD019130BBA243B59;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>[]
struct EntryU5BU5D_tDFD4E62BB3F1C0F3B7819DAEE99FF5E659B06D91;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32[]>[]
struct EntryU5BU5D_tE39FFA41A51BE829EA4A822560291EDF5752730D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// LitJson.WriterContext[]
struct WriterContextU5BU5D_tC639F2F269D5AB1952B5737D7A98753AB89F0AE5;
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// LitJson.ExporterFunc
struct ExporterFunc_tB691EB1A5697067DEDB3C83576D72DA6839AD99A;
// LitJson.FsmContext
struct FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// LitJson.IJsonWrapper
struct IJsonWrapper_tC214AE2200D749A1E1E350081097A3BC3D032141;
// LitJson.ImporterFunc
struct ImporterFunc_tE175C70AF3C5BDECBB457FD49BE2D07C961B3F24;
// LitJson.JsonData
struct JsonData_t76AE5878BEDE5F257E8918DB846290C8932DEBE3;
// LitJson.JsonException
struct JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69;
// LitJson.JsonMockWrapper
struct JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006;
// LitJson.JsonReader
struct JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494;
// LitJson.JsonWriter
struct JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435;
// LitJson.Lexer
struct Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8;
// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// LitJson.WrapperFactory
struct WrapperFactory_t2C6F4CEF6E26879400458C6D5B6199ECCDB1D044;
// LitJson.WriterContext
struct WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7;
// LitJson.JsonMapper/<>c
struct U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1;
// LitJson.Lexer/StateHandler
struct StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonData_t76AE5878BEDE5F257E8918DB846290C8932DEBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_t48F715F5648F382339977CF85BAC5BB93E4D3CF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_7_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral057118C49B28F31FA4955B194753088DDCD94999;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7B6EE056E549534162451A09C7F0AFAC372DBD06;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral84BE6DF7F5E86A94476E7ED44C8A9ACA10E6236A;
IL2CPP_EXTERN_C String_t* _stringLiteral8E284AA45C643AAA8D3553AA7AB6A1C3BC3E32D1;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA;
IL2CPP_EXTERN_C String_t* _stringLiteralC63496F78F80F09E4841EF5CD0DA8DAF7028FB4B;
IL2CPP_EXTERN_C String_t* _stringLiteralCDA723AA4DBB226A906416AA9BF1C2D4CEC53C89;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE7535349ADB76DD55B08451D311FC3CF06A19C;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader_Read_m467AC7843F283BA69EE3A7CA69888FE674DBD63C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader__ctor_m312C8202E80CDEBBDBA1DEC509D310232F1A3DBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter__ctor_m4FBA51D6C15EE24709EF71C26D10F9C59AB1C3BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_NextToken_m6C6E5501F74234A8F7D2482F5FE1466DC8AA7F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State10_mD20BAD42D19A04C4CC4066E445AF9B745B2C8155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State11_m7394496791E628CD4841014341DFE26D87064E6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State12_m21F2715CC930035B274AFD3354BCD8C4DF26AE6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State13_mBB60E23B964848D5CD32BFB8AE34571C40164768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State14_mACC0D81896EEBDB80CA5C375A86F1C4C3CB9FC2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State15_m50D6254DBE5ED72BFA415EBE0D500558F7FCB582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State16_mFD14872FBF79D5390877E2278908CD15061FA383_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State17_mA1EDADC5408B395011CE6C6D5C2F91F7B77A1035_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State18_m625E881043BE9B3679D23551D2EEBBBC20BCE5C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State19_mEEDC75FF00F86D6167F99BE7E0CD77E7AD7FCC40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State1_mE1D4CC18357FCDD71593DCA9FB33607465581B9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State20_m34BC54B016F3C4C19B97C92C54F6857DF7A8E85F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State21_m7C32345D61DF540554F100EAF61DBCB45BA10D1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State22_mA366497048DA61CAEDB3473F4F20F6FAECB84BD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State23_m1933F34481F4635E15CA05C548E8EDF7BA499E8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State24_m6E37544DE90FECD7F70281C1005AF431BFB936DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State25_mA8FC8BE95D9F48E85C08FC7D3116FD32CF35255E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State26_mD40250CDA3A58435831966388F2EB7E2AF5B8332_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State27_m8917409C60853C0A7C1D34A7197FEC4D084AD0F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State28_m80FD6ECAF458CB8FC729312341EC2EE2FAD76339_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State2_m503B3FD14B4944DEB48801B9336877C850A874ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State3_m8C69C28E96ED765E88AB2B20F4E253A840DAC716_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State4_m87426942C2AA9228B403F42C03AEB6247D4E9946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State5_m0EE355365B40185FDE83FD441994F6C5F1ACCD85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State6_m610FC1EFDA8A4D44966A571562903B131830950D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State7_mC5632A29061661F483CC8633DFFDDB4CA029569F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State8_mA27ECF5502BCC0BC629259BD77FAEF86BC46086A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State9_mE8BCDEF35B8B55ACED025FB0216E59DEF08C6B92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_m1393729ADC22437BD76E49D2DB1132CDBE40BB34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_mDF1BA36BB9B3203CE81EEA79DBFA9DFF34B8CFBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mEBB8CF1BDA8FD4ADC74D9863812E5A599B3188DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mB8A0F2A30CD8E257DF66B2016E42679454E3E68A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mADA1A11FFA45C2125F784F0B3343913A9E0E07C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m3F0C49B15DB918205286F0376A04E4C3D784C4FD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDFD4E62BB3F1C0F3B7819DAEE99FF5E659B06D91* ____entries_1;
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
	KeyCollection_tE8399140098D3D8028A8D5FB2CBF88B0965541B7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t28FD47FCC4F1763B936C9A4BB2A8B2276E633FEF* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE39FFA41A51BE829EA4A822560291EDF5752730D* ____entries_1;
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
	KeyCollection_tC542A7519E04306FF4830698FC8A485843209C5F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6D44D0A2B65933FB953BE36FD019130BBA243B59* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	WriterContextU5BU5D_tC639F2F269D5AB1952B5737D7A98753AB89F0AE5* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};
struct Il2CppArrayBounds;

// LitJson.FsmContext
struct FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949  : public RuntimeObject
{
	// System.Boolean LitJson.FsmContext::Return
	bool ___Return_0;
	// System.Int32 LitJson.FsmContext::NextState
	int32_t ___NextState_1;
	// LitJson.Lexer LitJson.FsmContext::L
	Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* ___L_2;
	// System.Int32 LitJson.FsmContext::StateStack
	int32_t ___StateStack_3;
};

// LitJson.JsonMapper
struct JsonMapper_t48F715F5648F382339977CF85BAC5BB93E4D3CF4  : public RuntimeObject
{
};

struct JsonMapper_t48F715F5648F382339977CF85BAC5BB93E4D3CF4_StaticFields
{
	// System.Int32 LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth_0;
	// System.IFormatProvider LitJson.JsonMapper::datetime_format
	RuntimeObject* ___datetime_format_1;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::base_exporters_table
	RuntimeObject* ___base_exporters_table_2;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::custom_exporters_table
	RuntimeObject* ___custom_exporters_table_3;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::base_importers_table
	RuntimeObject* ___base_importers_table_4;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::custom_importers_table
	RuntimeObject* ___custom_importers_table_5;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata> LitJson.JsonMapper::array_metadata
	RuntimeObject* ___array_metadata_6;
	// System.Object LitJson.JsonMapper::array_metadata_lock
	RuntimeObject* ___array_metadata_lock_7;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> LitJson.JsonMapper::conv_ops
	RuntimeObject* ___conv_ops_8;
	// System.Object LitJson.JsonMapper::conv_ops_lock
	RuntimeObject* ___conv_ops_lock_9;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata> LitJson.JsonMapper::object_metadata
	RuntimeObject* ___object_metadata_10;
	// System.Object LitJson.JsonMapper::object_metadata_lock
	RuntimeObject* ___object_metadata_lock_11;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>> LitJson.JsonMapper::type_properties
	RuntimeObject* ___type_properties_12;
	// System.Object LitJson.JsonMapper::type_properties_lock
	RuntimeObject* ___type_properties_lock_13;
	// LitJson.JsonWriter LitJson.JsonMapper::static_writer
	JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* ___static_writer_14;
	// System.Object LitJson.JsonMapper::static_writer_lock
	RuntimeObject* ___static_writer_lock_15;
};

// LitJson.JsonMockWrapper
struct JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006  : public RuntimeObject
{
};

// LitJson.JsonWriter
struct JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435  : public RuntimeObject
{
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* ___context_1;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* ___ctx_stack_2;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___hex_seq_4;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t* ___inst_string_builder_7;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer_10;
};

struct JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_StaticFields
{
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___number_format_0;
};

// LitJson.Lexer
struct Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131  : public RuntimeObject
{
	// System.Boolean LitJson.Lexer::allow_comments
	bool ___allow_comments_2;
	// System.Boolean LitJson.Lexer::allow_single_quoted_strings
	bool ___allow_single_quoted_strings_3;
	// System.Boolean LitJson.Lexer::end_of_input
	bool ___end_of_input_4;
	// LitJson.FsmContext LitJson.Lexer::fsm_context
	FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___fsm_context_5;
	// System.Int32 LitJson.Lexer::input_buffer
	int32_t ___input_buffer_6;
	// System.Int32 LitJson.Lexer::input_char
	int32_t ___input_char_7;
	// System.IO.TextReader LitJson.Lexer::reader
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader_8;
	// System.Int32 LitJson.Lexer::state
	int32_t ___state_9;
	// System.Text.StringBuilder LitJson.Lexer::string_buffer
	StringBuilder_t* ___string_buffer_10;
	// System.String LitJson.Lexer::string_value
	String_t* ___string_value_11;
	// System.Int32 LitJson.Lexer::token
	int32_t ___token_12;
	// System.Int32 LitJson.Lexer::unichar
	int32_t ___unichar_13;
};

struct Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_StaticFields
{
	// System.Int32[] LitJson.Lexer::fsm_return_table
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___fsm_return_table_0;
	// LitJson.Lexer/StateHandler[] LitJson.Lexer::fsm_handler_table
	StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* ___fsm_handler_table_1;
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

// LitJson.WriterContext
struct WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7  : public RuntimeObject
{
	// System.Int32 LitJson.WriterContext::Count
	int32_t ___Count_0;
	// System.Boolean LitJson.WriterContext::InArray
	bool ___InArray_1;
	// System.Boolean LitJson.WriterContext::InObject
	bool ___InObject_2;
	// System.Boolean LitJson.WriterContext::ExpectingValue
	bool ___ExpectingValue_3;
	// System.Int32 LitJson.WriterContext::Padding
	int32_t ___Padding_4;
};

// LitJson.JsonMapper/<>c
struct U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1  : public RuntimeObject
{
};

struct U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1_StaticFields
{
	// LitJson.JsonMapper/<>c LitJson.JsonMapper/<>c::<>9
	U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* ___U3CU3E9_0;
	// LitJson.WrapperFactory LitJson.JsonMapper/<>c::<>9__23_0
	WrapperFactory_t2C6F4CEF6E26879400458C6D5B6199ECCDB1D044* ___U3CU3E9__23_0_1;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_0
	ExporterFunc_tB691EB1A5697067DEDB3C83576D72DA6839AD99A* ___U3CU3E9__24_0_2;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_1
	ExporterFunc_tB691EB1A5697067DEDB3C83576D72DA6839AD99A* ___U3CU3E9__24_1_3;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_2
	ExporterFunc_tB691EB1A5697067DEDB3C83576D72DA6839AD99A* ___U3CU3E9__24_2_4;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_3
	ExporterFunc_tB691EB1A5697067DEDB3C83576D72DA6839AD99A* ___U3CU3E9__24_3_5;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_4
	ExporterFunc_tB691EB1A5697067DEDB3C83576D72DA6839AD99A* ___U3CU3E9__24_4_6;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_5
	ExporterFunc_tB691EB1A5697067DEDB3C83576D72DA6839AD99A* ___U3CU3E9__24_5_7;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_6
	ExporterFunc_tB691EB1A5697067DEDB3C83576D72DA6839AD99A* ___U3CU3E9__24_6_8;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_7
	ExporterFunc_tB691EB1A5697067DEDB3C83576D72DA6839AD99A* ___U3CU3E9__24_7_9;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_8
	ExporterFunc_tB691EB1A5697067DEDB3C83576D72DA6839AD99A* ___U3CU3E9__24_8_10;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_0
	ImporterFunc_tE175C70AF3C5BDECBB457FD49BE2D07C961B3F24* ___U3CU3E9__25_0_11;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_1
	ImporterFunc_tE175C70AF3C5BDECBB457FD49BE2D07C961B3F24* ___U3CU3E9__25_1_12;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_2
	ImporterFunc_tE175C70AF3C5BDECBB457FD49BE2D07C961B3F24* ___U3CU3E9__25_2_13;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_3
	ImporterFunc_tE175C70AF3C5BDECBB457FD49BE2D07C961B3F24* ___U3CU3E9__25_3_14;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_4
	ImporterFunc_tE175C70AF3C5BDECBB457FD49BE2D07C961B3F24* ___U3CU3E9__25_4_15;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_5
	ImporterFunc_tE175C70AF3C5BDECBB457FD49BE2D07C961B3F24* ___U3CU3E9__25_5_16;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_6
	ImporterFunc_tE175C70AF3C5BDECBB457FD49BE2D07C961B3F24* ___U3CU3E9__25_6_17;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_7
	ImporterFunc_tE175C70AF3C5BDECBB457FD49BE2D07C961B3F24* ___U3CU3E9__25_7_18;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_8
	ImporterFunc_tE175C70AF3C5BDECBB457FD49BE2D07C961B3F24* ___U3CU3E9__25_8_19;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_9
	ImporterFunc_tE175C70AF3C5BDECBB457FD49BE2D07C961B3F24* ___U3CU3E9__25_9_20;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_10
	ImporterFunc_tE175C70AF3C5BDECBB457FD49BE2D07C961B3F24* ___U3CU3E9__25_10_21;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_11
	ImporterFunc_tE175C70AF3C5BDECBB457FD49BE2D07C961B3F24* ___U3CU3E9__25_11_22;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_12
	ImporterFunc_tE175C70AF3C5BDECBB457FD49BE2D07C961B3F24* ___U3CU3E9__25_12_23;
	// LitJson.WrapperFactory LitJson.JsonMapper/<>c::<>9__30_0
	WrapperFactory_t2C6F4CEF6E26879400458C6D5B6199ECCDB1D044* ___U3CU3E9__30_0_24;
	// LitJson.WrapperFactory LitJson.JsonMapper/<>c::<>9__31_0
	WrapperFactory_t2C6F4CEF6E26879400458C6D5B6199ECCDB1D044* ___U3CU3E9__31_0_25;
	// LitJson.WrapperFactory LitJson.JsonMapper/<>c::<>9__32_0
	WrapperFactory_t2C6F4CEF6E26879400458C6D5B6199ECCDB1D044* ___U3CU3E9__32_0_26;
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

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
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

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112
struct __StaticArrayInitTypeSizeU3D112_t338F22B6F3CC67FDBAE2DB73218458D355AA2089 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_t338F22B6F3CC67FDBAE2DB73218458D355AA2089__padding[112];
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

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::A0D673A85CA2CEE9AFDD1A9BAC40D741D2F8F94C97C59385CDD5B8891D35F237
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___A0D673A85CA2CEE9AFDD1A9BAC40D741D2F8F94C97C59385CDD5B8891D35F237_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>::C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82
	__StaticArrayInitTypeSizeU3D112_t338F22B6F3CC67FDBAE2DB73218458D355AA2089 ___C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_7;
};

// LitJson.Condition
struct Condition_t8BE1C1F57E06041E01653C38FDFB5FC05C922D26 
{
	// System.Int32 LitJson.Condition::value__
	int32_t ___value___2;
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

// LitJson.JsonToken
struct JsonToken_tA3E7B157311DDFD3C08ADBFB541179BA465276F4 
{
	// System.Int32 LitJson.JsonToken::value__
	int32_t ___value___2;
};

// LitJson.JsonType
struct JsonType_t77BFB8552F2F911ADBB9690BBB3F8DCF58DD5EBA 
{
	// System.Int32 LitJson.JsonType::value__
	int32_t ___value___2;
};

// System.Globalization.NumberStyles
struct NumberStyles_t567C6CBC2A2B5B5A2C43B2855D158949984A810C 
{
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;
};

// LitJson.ParserToken
struct ParserToken_tD47802298AD2AC469050E7A6EDE906AA6A984C5D 
{
	// System.Int32 LitJson.ParserToken::value__
	int32_t ___value___2;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.String System.IO.StringReader::_s
	String_t* ____s_2;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_3;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_4;
};

// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t* ____sb_6;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_7;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// LitJson.JsonData
struct JsonData_t76AE5878BEDE5F257E8918DB846290C8932DEBE3  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<LitJson.JsonData> LitJson.JsonData::inst_array
	RuntimeObject* ___inst_array_0;
	// System.Boolean LitJson.JsonData::inst_boolean
	bool ___inst_boolean_1;
	// System.Double LitJson.JsonData::inst_double
	double ___inst_double_2;
	// System.Int32 LitJson.JsonData::inst_int
	int32_t ___inst_int_3;
	// System.Int64 LitJson.JsonData::inst_long
	int64_t ___inst_long_4;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData> LitJson.JsonData::inst_object
	RuntimeObject* ___inst_object_5;
	// System.String LitJson.JsonData::inst_string
	String_t* ___inst_string_6;
	// System.String LitJson.JsonData::json
	String_t* ___json_7;
	// LitJson.JsonType LitJson.JsonData::type
	int32_t ___type_8;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.JsonData::object_list
	RuntimeObject* ___object_list_9;
};

// LitJson.JsonReader
struct JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494  : public RuntimeObject
{
	// System.Collections.Generic.Stack`1<System.Int32> LitJson.JsonReader::automaton_stack
	Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ___automaton_stack_1;
	// System.Int32 LitJson.JsonReader::current_input
	int32_t ___current_input_2;
	// System.Int32 LitJson.JsonReader::current_symbol
	int32_t ___current_symbol_3;
	// System.Boolean LitJson.JsonReader::end_of_json
	bool ___end_of_json_4;
	// System.Boolean LitJson.JsonReader::end_of_input
	bool ___end_of_input_5;
	// LitJson.Lexer LitJson.JsonReader::lexer
	Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* ___lexer_6;
	// System.Boolean LitJson.JsonReader::parser_in_string
	bool ___parser_in_string_7;
	// System.Boolean LitJson.JsonReader::parser_return
	bool ___parser_return_8;
	// System.Boolean LitJson.JsonReader::read_started
	bool ___read_started_9;
	// System.IO.TextReader LitJson.JsonReader::reader
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader_10;
	// System.Boolean LitJson.JsonReader::reader_is_owned
	bool ___reader_is_owned_11;
	// System.Boolean LitJson.JsonReader::skip_non_members
	bool ___skip_non_members_12;
	// System.Object LitJson.JsonReader::token_value
	RuntimeObject* ___token_value_13;
	// LitJson.JsonToken LitJson.JsonReader::token
	int32_t ___token_14;
};

struct JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_StaticFields
{
	// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> LitJson.JsonReader::parse_table
	RuntimeObject* ___parse_table_0;
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

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// LitJson.JsonException
struct JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};

// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// LitJson.Lexer/StateHandler
struct StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595  : public RuntimeArray
{
	ALIGN_FIELD (8) StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* m_Items[1];

	inline StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;

// System.Void LitJson.JsonMapper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCFB017055FB267950803883CA4BFAF056E44B190 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonMockWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper__ctor_m4746A854D94B8B2FA5F16F5C1319FF2AF7AE33B3 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mD6F4F8BC8041480EBBF52F8CA11D1386A5EE019D (uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mC7EB791A944814F863EEAA7E96E8FA7489BBA53C (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, int32_t ___number0, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m58C791495049866C9E7439FBF2A14A402F1C81B6 (Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mACDBEDE6C28A31B52469A5B83A376AA35E5D7460 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.DateTime,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m0AB90DC9AD2EF0AA0A6146013665DC60A8C52702 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mE98B93B4E25EC8CA118B34A57913CB155CC5A793 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___number0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m14B15FFD8B821CBF1EB2641AAEF7CB00157D9B8E (int8_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mFE6E311A5AE91912673E6C7026A4A5C19C2C0F9B (int16_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mCB03F1E460F2D07CB009ACAFDB2DB0D9B5D97B2B (uint16_t ___value0, const RuntimeMethod* method) ;
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_mFBB976BA9AB1A83325F642219BF1D8F04030768D (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m553DA91F6BC75B5DFC90E15332D8DA59428F27EC (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, uint64_t ___number0, const RuntimeMethod* method) ;
// System.Byte System.Convert::ToByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mFF10E9758B7414E9C187C95ECB27FB1DFD7904B2 (int32_t ___value0, const RuntimeMethod* method) ;
// System.UInt64 System.Convert::ToUInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m7899B63591257E56EC9B6BFB19396C3890F41233 (int32_t ___value0, const RuntimeMethod* method) ;
// System.SByte System.Convert::ToSByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m48FEC408BB749C81B91BAB51AC744EF05C7B1B25 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Int16 System.Convert::ToInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m01293E1E7E09858C74DE663E5EE1819A5D75FADB (int32_t ___value0, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m1F3173B70669A0F9B101B4AF6A2D0DFD4D95F8D6 (int32_t ___value0, const RuntimeMethod* method) ;
// System.UInt16 System.Convert::ToUInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_m574A6C8E905EEADA4FC733AE24C6DFCB8CAB0017 (int32_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 System.Convert::ToUInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m7E15E7E39C7E0835A13F3D3D54CB1723D7BF17E3 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Single System.Convert::ToSingle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_mB562D40271078F5561C203FB30E15B8913667C2C (int32_t ___value0, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mD35A1BDDC7FE214E53E1B57C867B50B6BB5E61B9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_m0817E542B617E7D00740EBA8687EA52092CED34C (double ___value0, const RuntimeMethod* method) ;
// System.UInt32 System.Convert::ToUInt32(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m9F3F4B62B8DA5A3EDC7FDD1A9893259C745DABE6 (int64_t ___value0, const RuntimeMethod* method) ;
// System.Char System.Convert::ToChar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mF72D47BC87DE73EFF5A7F04046BFAF064FEB0100 (String_t* ___value0, const RuntimeMethod* method) ;
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Convert_ToDateTime_m0CD0FAC3FF3ED01FFEA1264742D5E4BDAC79EA4A (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m62F330D1904225608F24A2E92107E3E95522F662 (JsonData_t76AE5878BEDE5F257E8918DB846290C8932DEBE3* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer::get_AllowComments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_AllowComments_mE127B8980AEB483FAE7BC0397B8F12DC2113F744_inline (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) ;
// System.Void LitJson.Lexer::set_AllowComments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Lexer_set_AllowComments_m34F1833C87ADE5991A27C5075537033C2DBBF224_inline (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer::get_AllowSingleQuotedStrings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_AllowSingleQuotedStrings_mE980CAA0A511C0DF4B91EF5371DF344536999379_inline (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) ;
// System.Void LitJson.Lexer::set_AllowSingleQuotedStrings(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Lexer_set_AllowSingleQuotedStrings_m91CF3DB803C0FF7B46193BFED1F011DEE2D978A0_inline (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::PopulateParseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_PopulateParseTable_m338DD5EEE3C870C960703E3BA07927990ED346E4 (const RuntimeMethod* method) ;
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0 (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m312C8202E80CDEBBDBA1DEC509D310232F1A3DBE (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, bool ___owned1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
inline void Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
inline void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, int32_t, const RuntimeMethod*))Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared)(__this, ___item0, method);
}
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_mECD890C23651871E30FF91B33DB47522549C2C30 (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor()
inline void Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0 (Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddRow_mEA71AF521F19D0EB76C74DDF660D3D2A891EF694 (int32_t ___rule0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E (int32_t ___row0, int32_t ___col1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___symbols2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>::.ctor()
inline void Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m6939FA2B8DCF60C46E0B859746DD9622450E7DD9 (String_t* ___s0, double* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m61AAE5CC4A0B716556765798C22FE12D87554986 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.UInt64::TryParse(System.String,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_TryParse_m71B0751A67936F47D60CA54DFCECDB1995F55EA2 (String_t* ___s0, uint64_t* ___result1, const RuntimeMethod* method) ;
// System.String LitJson.Lexer::get_StringValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_m51C044FBCD7254C4FC2076A0CCA326BBFB5D567C_inline (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessNumber_m92FFECA88AFD55D673F496CBAB01E268B3F8D0BE (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, String_t* ___number0, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_NextToken_m6C6E5501F74234A8F7D2482F5FE1466DC8AA7F22 (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer::get_EndOfInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_m2D53062A15EAF139239C01418891EEF98559DA3E_inline (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_mFAC25114A841018DA40EA1B391FBC11764392BCD (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, const RuntimeMethod* method) ;
// System.Int32 LitJson.Lexer::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_m4FE4DBE440BEF05CF0B3FFB57DF0BA07D3DB71C6_inline (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
inline void Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_gshared)(__this, method);
}
// System.Boolean LitJson.JsonReader::ReadToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_ReadToken_mDB544E5F896ED42A8C8D0294381E859360B92989 (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
inline int32_t Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_gshared)(__this, method);
}
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
inline int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared)(__this, method);
}
// System.Void LitJson.JsonReader::ProcessSymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessSymbol_mE870CF44384FBB1D61AAD563474BBA41A2959C25 (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m3A92B9FDBB3AB36DB2306B9B2D4021F335792DE5 (JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mAD83C5F2B09850728FD82628DCB1B1C0387A5F7D (JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69* __this, int32_t ___token0, Exception_t* ___inner_exception1, const RuntimeMethod* method) ;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_get_InvariantInfo_m08BD3BFBBBE015F2EDCF6DE969ACFB327E453621 (const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mF38CB8046B79DEF523E427B7F41CA3135671D0C8 (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_mF1AB3850230AAC769A4B242D3DA0E609E3D74695 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m4FBA51D6C15EE24709EF71C26D10F9C59AB1C3BC (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::.ctor()
inline void Stack_1__ctor_mADA1A11FFA45C2125F784F0B3343913A9E0E07C9 (Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_mBF2C1F02C5C6D2753DD0D06D9C14FABDD93D10ED (WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Push(T)
inline void Stack_1_Push_mB8A0F2A30CD8E257DF66B2016E42679454E3E68A (Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* __this, WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329*, WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mE36D22231B5E68244183A2966E910A4DA497AD59 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, bool ___add_comma0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_m6AF288334D8F464C4D349F32C2A7FFC13404AAC6 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_m7C38604C163AD17D6A43E36C13F29BDDB80800C9 (int32_t ___n0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___hex1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Clear()
inline void Stack_1_Clear_m1393729ADC22437BD76E49D2DB1132CDBE40BB34 (Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329*, const RuntimeMethod*))Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared)(__this, method);
}
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90 (StringBuilder_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, int32_t ___cond0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m1411C40D9BDB3FADBFF54D4E8C5C4A09623AE822 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Decimal,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m968749D791BDDE9D6ECB2D71DDE205221B27953D (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Double,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m7E8CB36CAB0CAC9E6E8D7C3CA8238A6A2D8E8D06 (double ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m8EFAEC53F711584BCA70AC094729CA6F88BB4910 (int32_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Int64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mF003FE14E8D6095D655814A1DB1CA3D8C43DCF56 (int64_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_mB3B4DAEA9710B0F8061B76F09CF74EAD2FB80305 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.UInt64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m7DC566A684B01894703BF5DD80425842A7B1DF6C (uint64_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<LitJson.WriterContext>::Pop()
inline WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* Stack_1_Pop_mEBB8CF1BDA8FD4ADC74D9863812E5A599B3188DE (Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* __this, const RuntimeMethod* method)
{
	return ((  WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* (*) (Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Stack`1<LitJson.WriterContext>::get_Count()
inline int32_t Stack_1_get_Count_m3F0C49B15DB918205286F0376A04E4C3D784C4FD_inline (Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Stack`1<LitJson.WriterContext>::Peek()
inline WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* Stack_1_Peek_mDF1BA36BB9B3203CE81EEA79DBFA9DFF34B8CFBA (Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* __this, const RuntimeMethod* method)
{
	return ((  WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* (*) (Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329*, const RuntimeMethod*))Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared)(__this, method);
}
// System.Void LitJson.JsonWriter::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Unindent_mB61C70BD0FE7F41D1A50DD3397CF90D31CF5BF8F (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Indent_m53063FF0A2CE8C64FE619A23541A95D0E048EBCB (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) ;
// System.Void LitJson.Lexer::PopulateFsmTables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_m87AA12F622E8386603A7C49412C174F853186CD6 (const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void LitJson.FsmContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmContext__ctor_m6727115353ADDC2B77DE942D8679ED032C945A22 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* __this, const RuntimeMethod* method) ;
// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) ;
// System.Void LitJson.Lexer::UngetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_UngetChar_mD6529748542F221E31C69008F3FE0759EA4960AE (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) ;
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_m6854BB99C40444F9BF2E0D853364590FA461A286 (int32_t ___esc_char0, const RuntimeMethod* method) ;
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_m15A8EEE787816BE6618B27E14B5516F0380C8B05 (int32_t ___digit0, const RuntimeMethod* method) ;
// System.Int32 LitJson.Lexer::NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_mED43E8CAB901D2B37F63B2AB751D73A47F64FA46 (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_inline (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) ;
// System.Void LitJson.JsonException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m3D9EF4D35E8F00CD9CBC6F7317E0DB2AA6EB99BE (JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69* __this, int32_t ___c0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonMapper/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m68E04C804957FEBD0AB440787087E0E3A6A2CF48 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* L_0 = (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1*)il2cpp_codegen_object_new(U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mCFB017055FB267950803883CA4BFAF056E44B190(L_0, NULL);
		((U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCFB017055FB267950803883CA4BFAF056E44B190 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper/<>c::<ReadSkip>b__23_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CReadSkipU3Eb__23_0_m0B48FC76E1BF409A8D9063100D3C5F0822FA7C9E (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// delegate { return new JsonMockWrapper (); }, reader);
		JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* L_0 = (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006*)il2cpp_codegen_object_new(JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonMockWrapper__ctor_m4746A854D94B8B2FA5F16F5C1319FF2AF7AE33B3(L_0, NULL);
		return L_0;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_0(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m171AE2DA096FA2EC93D34C55442DCC5844E90E79 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___obj0, JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write (Convert.ToInt32 ((byte) obj));
		JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mD6F4F8BC8041480EBBF52F8CA11D1386A5EE019D(((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_mC7EB791A944814F863EEAA7E96E8FA7489BBA53C(L_0, L_2, NULL);
		// };
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_1(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_mB11AC60569D85F718EBBC3501CFF6A103C9F470F (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___obj0, JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write (Convert.ToString ((char) obj));
		JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m58C791495049866C9E7439FBF2A14A402F1C81B6(((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_1, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_mACDBEDE6C28A31B52469A5B83A376AA35E5D7460(L_0, L_2, NULL);
		// };
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_2(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_m643DA0FD59360B81AA5EA37A0F520B280964043D (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___obj0, JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t48F715F5648F382339977CF85BAC5BB93E4D3CF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write (Convert.ToString ((DateTime) obj,
		//                                 datetime_format));
		JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t48F715F5648F382339977CF85BAC5BB93E4D3CF4_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((JsonMapper_t48F715F5648F382339977CF85BAC5BB93E4D3CF4_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t48F715F5648F382339977CF85BAC5BB93E4D3CF4_il2cpp_TypeInfo_var))->___datetime_format_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToString_m0AB90DC9AD2EF0AA0A6146013665DC60A8C52702(((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)))), L_2, NULL);
		NullCheck(L_0);
		JsonWriter_Write_mACDBEDE6C28A31B52469A5B83A376AA35E5D7460(L_0, L_3, NULL);
		// };
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_3(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_mA005FC4AA8E99DA384DC411C4FA6E0D4FB6608D0 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___obj0, JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write ((decimal) obj);
		JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_mE98B93B4E25EC8CA118B34A57913CB155CC5A793(L_0, ((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))), NULL);
		// };
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_4(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_mEE9CD83D941A558E03519C565687CBE15A1A22A6 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___obj0, JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write (Convert.ToInt32 ((sbyte) obj));
		JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_m14B15FFD8B821CBF1EB2641AAEF7CB00157D9B8E(((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_1, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_mC7EB791A944814F863EEAA7E96E8FA7489BBA53C(L_0, L_2, NULL);
		// };
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_5(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_m98A1DC76549119D099CB1387D884CE3756C17C26 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___obj0, JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write (Convert.ToInt32 ((short) obj));
		JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mFE6E311A5AE91912673E6C7026A4A5C19C2C0F9B(((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_1, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_mC7EB791A944814F863EEAA7E96E8FA7489BBA53C(L_0, L_2, NULL);
		// };
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_6(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_mEA7CE1A8B5821F79DF3A6F0411630C651EB905BF (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___obj0, JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write (Convert.ToInt32 ((ushort) obj));
		JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mCB03F1E460F2D07CB009ACAFDB2DB0D9B5D97B2B(((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_1, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_mC7EB791A944814F863EEAA7E96E8FA7489BBA53C(L_0, L_2, NULL);
		// };
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_7(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_mDB916B44E4BFA1C1C1D422ECE2DE65FE784A52D7 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___obj0, JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write (Convert.ToUInt64 ((uint) obj));
		JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = Convert_ToUInt64_mFBB976BA9AB1A83325F642219BF1D8F04030768D(((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_1, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_m553DA91F6BC75B5DFC90E15332D8DA59428F27EC(L_0, L_2, NULL);
		// };
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_8(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_mEB634B0F6B6111619F52375870924C82A533A5AC (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___obj0, JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write ((ulong) obj);
		JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m553DA91F6BC75B5DFC90E15332D8DA59428F27EC(L_0, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_1, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))), NULL);
		// };
		return;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_m86EB41B20C1C6DE3DB8C0E6ACD5DC1006B418520 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToByte ((int) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_1;
		L_1 = Convert_ToByte_mFF10E9758B7414E9C187C95ECB27FB1DFD7904B2(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		uint8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_mE2AB23441C385E872226AC2D48AA5BC709F821E6 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToUInt64 ((int) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = Convert_ToUInt64_m7899B63591257E56EC9B6BFB19396C3890F41233(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_2(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_m498587094560B43FD6B4B7844DF5E5B75E7E2350 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToSByte ((int) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int8_t L_1;
		L_1 = Convert_ToSByte_m48FEC408BB749C81B91BAB51AC744EF05C7B1B25(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		int8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_3(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m949FA230BF1C46500322C279B81BF334634B1C51 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToInt16 ((int) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int16_t L_1;
		L_1 = Convert_ToInt16_m01293E1E7E09858C74DE663E5EE1819A5D75FADB(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		int16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_4(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_mC4EEB35B4CFB2B7667324B8A09A3F4A07C10D4C9 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToInt64((int)input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = Convert_ToInt64_m1F3173B70669A0F9B101B4AF6A2D0DFD4D95F8D6(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		int64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_5(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_mF36AD4D6D6246CE9AD5E043AF41B6BCAC4C872F0 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToUInt16 ((int) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint16_t L_1;
		L_1 = Convert_ToUInt16_m574A6C8E905EEADA4FC733AE24C6DFCB8CAB0017(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		uint16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_6(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_m7EDE4352D67B3A7294AEB4DAD848A96B172467C5 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToUInt32 ((int) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_m7E15E7E39C7E0835A13F3D3D54CB1723D7BF17E3(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		uint32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_7(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_mFD1BEA29AB0151C25375EB4E2ABDF5E554F0E97B (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToSingle ((int) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Convert_ToSingle_mB562D40271078F5561C203FB30E15B8913667C2C(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_8(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_mBCEB88BA872F41AB55E6CC27CDF1888397ABFA5A (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToDouble ((int) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Convert_ToDouble_mD35A1BDDC7FE214E53E1B57C867B50B6BB5E61B9(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		double L_2 = L_1;
		RuntimeObject* L_3 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_9(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_m78029482E462C07C93C6C9D3FD3E0D2C1B5BC03D (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToDecimal ((double) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = Convert_ToDecimal_m0817E542B617E7D00740EBA8687EA52092CED34C(((*(double*)((double*)(double*)UnBox(L_0, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))), NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = L_1;
		RuntimeObject* L_3 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_10(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_m0419F46872D82F665017D9EB19A7CB821E92F42B (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToUInt32 ((long) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_m9F3F4B62B8DA5A3EDC7FDD1A9893259C745DABE6(((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_0, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))), NULL);
		uint32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_11(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_m2060342878B35A175E2A15920AB373362E9AFA85 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar ((string) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_1;
		L_1 = Convert_ToChar_mF72D47BC87DE73EFF5A7F04046BFAF064FEB0100(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), NULL);
		Il2CppChar L_2 = L_1;
		RuntimeObject* L_3 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_12(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_12_m013B228BB0912F0B98E20E01BB1102B6252DB650 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t48F715F5648F382339977CF85BAC5BB93E4D3CF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToDateTime ((string) input, datetime_format);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t48F715F5648F382339977CF85BAC5BB93E4D3CF4_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_t48F715F5648F382339977CF85BAC5BB93E4D3CF4_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t48F715F5648F382339977CF85BAC5BB93E4D3CF4_il2cpp_TypeInfo_var))->___datetime_format_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = Convert_ToDateTime_m0CD0FAC3FF3ED01FFEA1264742D5E4BDAC79EA4A(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = L_2;
		RuntimeObject* L_4 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper/<>c::<ToObject>b__30_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CToObjectU3Eb__30_0_m7F827CCB6813DCDE46D0B30384D7A7B82D3E5F20 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t76AE5878BEDE5F257E8918DB846290C8932DEBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// delegate { return new JsonData (); }, reader);
		JsonData_t76AE5878BEDE5F257E8918DB846290C8932DEBE3* L_0 = (JsonData_t76AE5878BEDE5F257E8918DB846290C8932DEBE3*)il2cpp_codegen_object_new(JsonData_t76AE5878BEDE5F257E8918DB846290C8932DEBE3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonData__ctor_m62F330D1904225608F24A2E92107E3E95522F662(L_0, NULL);
		return L_0;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper/<>c::<ToObject>b__31_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CToObjectU3Eb__31_0_m8AC62AB8963D8E57D511AD19AD1CD1BBB3134CD1 (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t76AE5878BEDE5F257E8918DB846290C8932DEBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// delegate { return new JsonData (); }, json_reader);
		JsonData_t76AE5878BEDE5F257E8918DB846290C8932DEBE3* L_0 = (JsonData_t76AE5878BEDE5F257E8918DB846290C8932DEBE3*)il2cpp_codegen_object_new(JsonData_t76AE5878BEDE5F257E8918DB846290C8932DEBE3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonData__ctor_m62F330D1904225608F24A2E92107E3E95522F662(L_0, NULL);
		return L_0;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper/<>c::<ToObject>b__32_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CToObjectU3Eb__32_0_m69196C35180A693AF8489F784E08DE41DFF6C87F (U3CU3Ec_tAD4C2CE3714010452DD2F195D1760A7A9927ADD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t76AE5878BEDE5F257E8918DB846290C8932DEBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// delegate { return new JsonData (); }, json);
		JsonData_t76AE5878BEDE5F257E8918DB846290C8932DEBE3* L_0 = (JsonData_t76AE5878BEDE5F257E8918DB846290C8932DEBE3*)il2cpp_codegen_object_new(JsonData_t76AE5878BEDE5F257E8918DB846290C8932DEBE3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonData__ctor_m62F330D1904225608F24A2E92107E3E95522F662(L_0, NULL);
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
// System.Boolean LitJson.JsonMockWrapper::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_get_IsArray_m8C3068081AEA194541C274556388FC5DCA0E9C05 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsArray   { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean LitJson.JsonMockWrapper::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_get_IsBoolean_m3EFEDDEDAA07FF085B9E9D2A9BE777D606A84E2D (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsBoolean { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean LitJson.JsonMockWrapper::get_IsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_get_IsDouble_m850BA4385BACBC34FBF434EFAD35064A29D6301E (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDouble  { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean LitJson.JsonMockWrapper::get_IsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_get_IsInt_m9E4C1FE81C0A0743A053CC873A522BA40FE772F5 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInt     { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean LitJson.JsonMockWrapper::get_IsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_get_IsLong_mACC86AF223A83F841AE3259F5E681DD928AEBD76 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsLong    { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean LitJson.JsonMockWrapper::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_get_IsObject_mB71155DAB42CF665D7595D5BE762AFF42B485BC0 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsObject  { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean LitJson.JsonMockWrapper::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_get_IsString_mAA2EBBA227D9C34158F79B81276AB9B23B2CCDC5 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsString  { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean LitJson.JsonMockWrapper::GetBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_GetBoolean_m05BC402C0A8A380AAFDD8C8CF2A31E756D6851BF (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// public bool     GetBoolean ()  { return false; }
		return (bool)0;
	}
}
// System.Double LitJson.JsonMockWrapper::GetDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonMockWrapper_GetDouble_mA359852E9FBD34FAD0ADC901256CCCF33C3EC65B (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// public double   GetDouble ()   { return 0.0; }
		return (0.0);
	}
}
// System.Int32 LitJson.JsonMockWrapper::GetInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonMockWrapper_GetInt_mFB7A89F9E3BE7670DB1C1E659094C6D0F0F63EA8 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// public int      GetInt ()      { return 0; }
		return 0;
	}
}
// LitJson.JsonType LitJson.JsonMockWrapper::GetJsonType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonMockWrapper_GetJsonType_m8021A4E6ECBC9D8BFD7513EAAD080302EBDAA2EE (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// public JsonType GetJsonType () { return JsonType.None; }
		return (int32_t)(0);
	}
}
// System.Int64 LitJson.JsonMockWrapper::GetLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonMockWrapper_GetLong_m1C899B5BD9277C9F9DE79B900F4D8F948AE1A489 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// public long     GetLong ()     { return 0L; }
		return ((int64_t)0);
	}
}
// System.String LitJson.JsonMockWrapper::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMockWrapper_GetString_m9D275367944152458BE321BD102171028DF3BE3A (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string   GetString ()   { return ""; }
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void LitJson.JsonMockWrapper::SetBoolean(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetBoolean_m47F48BACD3EFF081CA728B5F3BF42AEEB2E610F6 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, bool ___val0, const RuntimeMethod* method) 
{
	{
		// public void SetBoolean  (bool val)      {}
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::SetDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetDouble_m377683904B09A831C64465A98251880BC2F07949 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, double ___val0, const RuntimeMethod* method) 
{
	{
		// public void SetDouble   (double val)    {}
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::SetInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetInt_mF2DBC628D6D4EB55D07B6991BB202CDFBA3722E0 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, int32_t ___val0, const RuntimeMethod* method) 
{
	{
		// public void SetInt      (int val)       {}
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::SetJsonType(LitJson.JsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetJsonType_m52388FA3795A3B949141432890BEE55ED495D28A (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	{
		// public void SetJsonType (JsonType type) {}
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::SetLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetLong_mEB6DF9C705ACCD7B5DB5D3A8F5FEA37DB36C98DD (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, int64_t ___val0, const RuntimeMethod* method) 
{
	{
		// public void SetLong     (long val)      {}
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::SetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetString_mD7EF38B3DC31EE72E94F8320DD016D579A30082B (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, String_t* ___val0, const RuntimeMethod* method) 
{
	{
		// public void SetString   (string val)    {}
		return;
	}
}
// System.String LitJson.JsonMockWrapper::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMockWrapper_ToJson_m15728978271C464B1914059136B907F47CFE83FF (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string ToJson ()                  { return ""; }
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void LitJson.JsonMockWrapper::ToJson(LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_ToJson_mB234D9462C8F88F5BFA34710AB7E7C67A2B5BDA9 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* ___writer0, const RuntimeMethod* method) 
{
	{
		// public void   ToJson (JsonWriter writer) {}
		return;
	}
}
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IList.get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_IList_get_IsFixedSize_m4222051A6F7C59C509D77DA14FE861AF2D8EE32F (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// bool IList.IsFixedSize { get { return true; } }
		return (bool)1;
	}
}
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IList.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_IList_get_IsReadOnly_mF84AF5C25F0F177AE3224B77C8A52B84CAB10C68 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// bool IList.IsReadOnly  { get { return true; } }
		return (bool)1;
	}
}
// System.Object LitJson.JsonMockWrapper::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_IList_get_Item_m0B4F09C323E7F31B2073947CC0929E011B092569 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// get { return null; }
		return NULL;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IList_set_Item_mA58856E17AFEC5F3EDC78AA3A4E3F3E5E89DA4E4 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// set {}
		return;
	}
}
// System.Int32 LitJson.JsonMockWrapper::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonMockWrapper_System_Collections_IList_Add_mA8C8282403B47241023BD20B75655C6763650136 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// int  IList.Add (object value)       { return 0; }
		return 0;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IList_Clear_m7DBBDE1F40A895918626C90364A13B2A986AB0E5 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// void IList.Clear ()                 {}
		return;
	}
}
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IList.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_IList_Contains_mC767A4503506A70FAB9CA0AE5E7B86F566F5C14F (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// bool IList.Contains (object value)  { return false; }
		return (bool)0;
	}
}
// System.Int32 LitJson.JsonMockWrapper::System.Collections.IList.IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonMockWrapper_System_Collections_IList_IndexOf_m79A5FBB1AF8A1A80FA208F8A46C21CBA1BE7BEDA (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// int  IList.IndexOf (object value)   { return -1; }
		return (-1);
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IList_Insert_m96954E4451E91DDA633AC8677DA2782A619F3095 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, int32_t ___i0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	{
		// void IList.Insert (int i, object v) {}
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IList_Remove_mF531A8D2269569FFE0F7C7C829C8AA272FC226FD (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// void IList.Remove (object value)    {}
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IList_RemoveAt_m38B67F8209617A94182F6616454A8EE25769125C (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// void IList.RemoveAt (int index)     {}
		return;
	}
}
// System.Int32 LitJson.JsonMockWrapper::System.Collections.ICollection.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonMockWrapper_System_Collections_ICollection_get_Count_mDD0C050006630D32F482E2B127AD1CE7C38CB9BF (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// int    ICollection.Count          { get { return 0; } }
		return 0;
	}
}
// System.Boolean LitJson.JsonMockWrapper::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_ICollection_get_IsSynchronized_mADC24471A851B9F3B3190201D31EA29E8DCAAA16 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// bool   ICollection.IsSynchronized { get { return false; } }
		return (bool)0;
	}
}
// System.Object LitJson.JsonMockWrapper::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_ICollection_get_SyncRoot_mAA8C1E056BE771D31C9D135061BA87E5A7764114 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// object ICollection.SyncRoot       { get { return null; } }
		return NULL;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_ICollection_CopyTo_m736735707711F30D0054CE8A1366AE234A8E80C3 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		// void ICollection.CopyTo (Array array, int index) {}
		return;
	}
}
// System.Collections.IEnumerator LitJson.JsonMockWrapper::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_IEnumerable_GetEnumerator_m481C1D3F6FF5CF27499DC7DA6C4EA0EABEDE6485 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// IEnumerator IEnumerable.GetEnumerator () { return null; }
		return (RuntimeObject*)NULL;
	}
}
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IDictionary.get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_IDictionary_get_IsFixedSize_m809D29CE5F38753F1B97B748DD32955B581CF6A2 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// bool IDictionary.IsFixedSize { get { return true; } }
		return (bool)1;
	}
}
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IDictionary.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_IDictionary_get_IsReadOnly_m3B5437E181D97E0790E3A1441D463ED08B5D5A78 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// bool IDictionary.IsReadOnly  { get { return true; } }
		return (bool)1;
	}
}
// System.Collections.ICollection LitJson.JsonMockWrapper::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_IDictionary_get_Keys_m5E7B323366052BAD9688981BA9491557D1166E82 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// ICollection IDictionary.Keys   { get { return null; } }
		return (RuntimeObject*)NULL;
	}
}
// System.Collections.ICollection LitJson.JsonMockWrapper::System.Collections.IDictionary.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_IDictionary_get_Values_mC8EE0F9594C4562E15A6241964DDF7F7DDC565EA (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// ICollection IDictionary.Values { get { return null; } }
		return (RuntimeObject*)NULL;
	}
}
// System.Object LitJson.JsonMockWrapper::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_IDictionary_get_Item_mFB7F116ECF15EB7674DCA830ED7B093984E72393 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// get { return null; }
		return NULL;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IDictionary_set_Item_m10DFA9E5463C556F99F73ABF14A0DD15AE942646 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// set {}
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.IDictionary.Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IDictionary_Add_m85622493EC904BFDF075AA73860A9FA6A261D076 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, RuntimeObject* ___k0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	{
		// void IDictionary.Add (object k, object v) {}
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.IDictionary.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IDictionary_Clear_mD9BBED2C89FBD876CD67FCA6E536FD38AC35FD05 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// void IDictionary.Clear ()                 {}
		return;
	}
}
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_IDictionary_Contains_mDD85E2EC1BBD9F844D5E3BDCB47B849F6850682C (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// bool IDictionary.Contains (object key)    { return false; }
		return (bool)0;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.IDictionary.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IDictionary_Remove_mA4B0217A07B18ED22C54F9DB8CEE8BE8EAA0910D (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// void IDictionary.Remove (object key)      {}
		return;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonMockWrapper::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_IDictionary_GetEnumerator_mA677E7736FF88C8A4C44DDBFD52C4633D675838E (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// IDictionaryEnumerator IDictionary.GetEnumerator () { return null; }
		return (RuntimeObject*)NULL;
	}
}
// System.Object LitJson.JsonMockWrapper::System.Collections.Specialized.IOrderedDictionary.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_Specialized_IOrderedDictionary_get_Item_mBAFD062871149EC21D0A19BF9DA88066B835AEE5 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	{
		// get { return null; }
		return NULL;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.Specialized.IOrderedDictionary.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_Specialized_IOrderedDictionary_set_Item_mAC4891750CDE40953126F1D5363E01D87653146F (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, int32_t ___idx0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// set {}
		return;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonMockWrapper::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m019FE541849D0B0E7A67E10A09AC501E2A3EF239 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
{
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.Specialized.IOrderedDictionary.Insert(System.Int32,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_Specialized_IOrderedDictionary_Insert_mDCFD1A61C4E4E1573238D6DE4492A24F10C61097 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, int32_t ___i0, RuntimeObject* ___k1, RuntimeObject* ___v2, const RuntimeMethod* method) 
{
	{
		// void IOrderedDictionary.Insert   (int i, object k, object v) {}
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.Specialized.IOrderedDictionary.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_Specialized_IOrderedDictionary_RemoveAt_m1E00B97EFFDA665941E82970A83620E4830900AD (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		// void IOrderedDictionary.RemoveAt (int i) {}
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper__ctor_m4746A854D94B8B2FA5F16F5C1319FF2AF7AE33B3 (JsonMockWrapper_t6C6207C0268F8AA988CEDB7C8EF60AAB01C8C006* __this, const RuntimeMethod* method) 
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
// System.Boolean LitJson.JsonReader::get_AllowComments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_AllowComments_m74BCDB5D1C15DDD64870ED3816E0CFD21DA927E0 (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, const RuntimeMethod* method) 
{
	{
		// get { return lexer.AllowComments; }
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_0 = __this->___lexer_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = Lexer_get_AllowComments_mE127B8980AEB483FAE7BC0397B8F12DC2113F744_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonReader::set_AllowComments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_set_AllowComments_m3D839C50BDC89E02C5C9BFD760B22C1E761D461E (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { lexer.AllowComments = value; }
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_0 = __this->___lexer_6;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Lexer_set_AllowComments_m34F1833C87ADE5991A27C5075537033C2DBBF224_inline(L_0, L_1, NULL);
		// set { lexer.AllowComments = value; }
		return;
	}
}
// System.Boolean LitJson.JsonReader::get_AllowSingleQuotedStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_AllowSingleQuotedStrings_mAC364058950A2B67ABB0964BD6AE82E137C8398B (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, const RuntimeMethod* method) 
{
	{
		// get { return lexer.AllowSingleQuotedStrings; }
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_0 = __this->___lexer_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = Lexer_get_AllowSingleQuotedStrings_mE980CAA0A511C0DF4B91EF5371DF344536999379_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonReader::set_AllowSingleQuotedStrings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_set_AllowSingleQuotedStrings_mE34650F5E7FAFB0876E56EBD3A4E7EC87B72A8CB (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { lexer.AllowSingleQuotedStrings = value; }
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_0 = __this->___lexer_6;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Lexer_set_AllowSingleQuotedStrings_m91CF3DB803C0FF7B46193BFED1F011DEE2D978A0_inline(L_0, L_1, NULL);
		// set { lexer.AllowSingleQuotedStrings = value; }
		return;
	}
}
// System.Boolean LitJson.JsonReader::get_SkipNonMembers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_SkipNonMembers_m9E9E073BC08D84A5544319E65C095C1935941EB2 (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, const RuntimeMethod* method) 
{
	{
		// get { return skip_non_members; }
		bool L_0 = __this->___skip_non_members_12;
		return L_0;
	}
}
// System.Void LitJson.JsonReader::set_SkipNonMembers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_set_SkipNonMembers_m067EB4D3CB3DC6917A939F99AD04BBBEBC6ED9CA (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { skip_non_members = value; }
		bool L_0 = ___value0;
		__this->___skip_non_members_12 = L_0;
		// set { skip_non_members = value; }
		return;
	}
}
// System.Boolean LitJson.JsonReader::get_EndOfInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_EndOfInput_mB771AD4EB351C474BE7E7385C3B167021073CD89 (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, const RuntimeMethod* method) 
{
	{
		// get { return end_of_input; }
		bool L_0 = __this->___end_of_input_5;
		return L_0;
	}
}
// System.Boolean LitJson.JsonReader::get_EndOfJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_EndOfJson_mA862A4942D4F05F8BCF4A6A382E20625A3F65342 (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, const RuntimeMethod* method) 
{
	{
		// get { return end_of_json; }
		bool L_0 = __this->___end_of_json_4;
		return L_0;
	}
}
// LitJson.JsonToken LitJson.JsonReader::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_m859B0821E04E24485F5F29E3A5FFF1578893AE60 (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, const RuntimeMethod* method) 
{
	{
		// get { return token; }
		int32_t L_0 = __this->___token_14;
		return L_0;
	}
}
// System.Object LitJson.JsonReader::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_get_Value_m2FBB40F5C94B641450A6A71203DFB97AE061F69C (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, const RuntimeMethod* method) 
{
	{
		// get { return token_value; }
		RuntimeObject* L_0 = __this->___token_value_13;
		return L_0;
	}
}
// System.Void LitJson.JsonReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__cctor_mDE33F7433C8D220062AF8F305B9C096F88E6F7E5 (const RuntimeMethod* method) 
{
	{
		// PopulateParseTable ();
		JsonReader_PopulateParseTable_m338DD5EEE3C870C960703E3BA07927990ED346E4(NULL);
		// }
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m9D147B96D3B663AD584C36C3997E67A2B730120F (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, String_t* ___json_text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this (new StringReader (json_text), true)
		String_t* L_0 = ___json_text0;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_1, L_0, NULL);
		JsonReader__ctor_m312C8202E80CDEBBDBA1DEC509D310232F1A3DBE(__this, L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mB7AC387907C7DDCB20F6EFBDE3618BBFBA4E5A41 (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, const RuntimeMethod* method) 
{
	{
		// this (reader, false)
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_0 = ___reader0;
		JsonReader__ctor_m312C8202E80CDEBBDBA1DEC509D310232F1A3DBE(__this, L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m312C8202E80CDEBBDBA1DEC509D310232F1A3DBE (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, bool ___owned1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private JsonReader (TextReader reader, bool owned)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (reader == null)
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_0 = ___reader0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException ("reader");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAC83771A00C701043A940F621CC1C765D30D31)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader__ctor_m312C8202E80CDEBBDBA1DEC509D310232F1A3DBE_RuntimeMethod_var)));
	}

IL_0014:
	{
		// parser_in_string = false;
		__this->___parser_in_string_7 = (bool)0;
		// parser_return    = false;
		__this->___parser_return_8 = (bool)0;
		// read_started = false;
		__this->___read_started_9 = (bool)0;
		// automaton_stack = new Stack<int> ();
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_2 = (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*)il2cpp_codegen_object_new(Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1(L_2, Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var);
		__this->___automaton_stack_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___automaton_stack_1), (void*)L_2);
		// automaton_stack.Push ((int) ParserToken.End);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_3 = __this->___automaton_stack_1;
		NullCheck(L_3);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_3, ((int32_t)65553), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		// automaton_stack.Push ((int) ParserToken.Text);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_4 = __this->___automaton_stack_1;
		NullCheck(L_4);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_4, ((int32_t)65543), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		// lexer = new Lexer (reader);
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_5 = ___reader0;
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_6 = (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131*)il2cpp_codegen_object_new(Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Lexer__ctor_mECD890C23651871E30FF91B33DB47522549C2C30(L_6, L_5, NULL);
		__this->___lexer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lexer_6), (void*)L_6);
		// end_of_input = false;
		__this->___end_of_input_5 = (bool)0;
		// end_of_json  = false;
		__this->___end_of_json_4 = (bool)0;
		// skip_non_members = true;
		__this->___skip_non_members_12 = (bool)1;
		// this.reader = reader;
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_7 = ___reader0;
		__this->___reader_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_10), (void*)L_7);
		// reader_is_owned = owned;
		bool L_8 = ___owned1;
		__this->___reader_is_owned_11 = L_8;
		// }
		return;
	}
}
// System.Void LitJson.JsonReader::PopulateParseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_PopulateParseTable_m338DD5EEE3C870C960703E3BA07927990ED346E4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_7_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parse_table = new Dictionary<int, IDictionary<int, int[]>> ();
		Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249* L_0 = (Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249*)il2cpp_codegen_object_new(Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0(L_0, Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_il2cpp_TypeInfo_var);
		((JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_il2cpp_TypeInfo_var))->___parse_table_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_il2cpp_TypeInfo_var))->___parse_table_0), (void*)L_0);
		// TableAddRow (ParserToken.Array);
		JsonReader_TableAddRow_mEA71AF521F19D0EB76C74DDF660D3D2A891EF694(((int32_t)65548), NULL);
		// TableAddCol (ParserToken.Array, '[',
		//              '[',
		//              (int) ParserToken.ArrayPrime);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)91));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65549));
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65548), ((int32_t)91), L_3, NULL);
		// TableAddRow (ParserToken.ArrayPrime);
		JsonReader_TableAddRow_mEA71AF521F19D0EB76C74DDF660D3D2A891EF694(((int32_t)65549), NULL);
		// TableAddCol (ParserToken.ArrayPrime, '"',
		//              (int) ParserToken.Value,
		// 
		//              (int) ParserToken.ValueRest,
		//              ']');
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_5, L_6, NULL);
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65549), ((int32_t)34), L_5, NULL);
		// TableAddCol (ParserToken.ArrayPrime, '[',
		//              (int) ParserToken.Value,
		//              (int) ParserToken.ValueRest,
		//              ']');
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_9 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_8, L_9, NULL);
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65549), ((int32_t)91), L_8, NULL);
		// TableAddCol (ParserToken.ArrayPrime, ']',
		//              ']');
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)93));
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65549), ((int32_t)93), L_11, NULL);
		// TableAddCol (ParserToken.ArrayPrime, '{',
		//              (int) ParserToken.Value,
		//              (int) ParserToken.ValueRest,
		//              ']');
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_13, L_14, NULL);
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65549), ((int32_t)123), L_13, NULL);
		// TableAddCol (ParserToken.ArrayPrime, (int) ParserToken.Number,
		//              (int) ParserToken.Value,
		//              (int) ParserToken.ValueRest,
		//              ']');
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_16, L_17, NULL);
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65549), ((int32_t)65537), L_16, NULL);
		// TableAddCol (ParserToken.ArrayPrime, (int) ParserToken.True,
		//              (int) ParserToken.Value,
		//              (int) ParserToken.ValueRest,
		//              ']');
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_20 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_19, L_20, NULL);
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65549), ((int32_t)65538), L_19, NULL);
		// TableAddCol (ParserToken.ArrayPrime, (int) ParserToken.False,
		//              (int) ParserToken.Value,
		//              (int) ParserToken.ValueRest,
		//              ']');
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = L_21;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_23 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_22, L_23, NULL);
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65549), ((int32_t)65539), L_22, NULL);
		// TableAddCol (ParserToken.ArrayPrime, (int) ParserToken.Null,
		//              (int) ParserToken.Value,
		//              (int) ParserToken.ValueRest,
		//              ']');
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = L_24;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_26 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_25, L_26, NULL);
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65549), ((int32_t)65540), L_25, NULL);
		// TableAddRow (ParserToken.Object);
		JsonReader_TableAddRow_mEA71AF521F19D0EB76C74DDF660D3D2A891EF694(((int32_t)65544), NULL);
		// TableAddCol (ParserToken.Object, '{',
		//              '{',
		//              (int) ParserToken.ObjectPrime);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_27;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)123));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = L_28;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65545));
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65544), ((int32_t)123), L_29, NULL);
		// TableAddRow (ParserToken.ObjectPrime);
		JsonReader_TableAddRow_mEA71AF521F19D0EB76C74DDF660D3D2A891EF694(((int32_t)65545), NULL);
		// TableAddCol (ParserToken.ObjectPrime, '"',
		//              (int) ParserToken.Pair,
		//              (int) ParserToken.PairRest,
		//              '}');
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = L_30;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_32 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_31, L_32, NULL);
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65545), ((int32_t)34), L_31, NULL);
		// TableAddCol (ParserToken.ObjectPrime, '}',
		//              '}');
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = L_33;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)125));
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65545), ((int32_t)125), L_34, NULL);
		// TableAddRow (ParserToken.Pair);
		JsonReader_TableAddRow_mEA71AF521F19D0EB76C74DDF660D3D2A891EF694(((int32_t)65546), NULL);
		// TableAddCol (ParserToken.Pair, '"',
		//              (int) ParserToken.String,
		//              ':',
		//              (int) ParserToken.Value);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = L_35;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_37 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_36, L_37, NULL);
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65546), ((int32_t)34), L_36, NULL);
		// TableAddRow (ParserToken.PairRest);
		JsonReader_TableAddRow_mEA71AF521F19D0EB76C74DDF660D3D2A891EF694(((int32_t)65547), NULL);
		// TableAddCol (ParserToken.PairRest, ',',
		//              ',',
		//              (int) ParserToken.Pair,
		//              (int) ParserToken.PairRest);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = L_38;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_40 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_39, L_40, NULL);
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65547), ((int32_t)44), L_39, NULL);
		// TableAddCol (ParserToken.PairRest, '}',
		//              (int) ParserToken.Epsilon);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = L_41;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65547), ((int32_t)125), L_42, NULL);
		// TableAddRow (ParserToken.String);
		JsonReader_TableAddRow_mEA71AF521F19D0EB76C74DDF660D3D2A891EF694(((int32_t)65552), NULL);
		// TableAddCol (ParserToken.String, '"',
		//              '"',
		//              (int) ParserToken.CharSeq,
		//              '"');
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = L_43;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_45 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_44, L_45, NULL);
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65552), ((int32_t)34), L_44, NULL);
		// TableAddRow (ParserToken.Text);
		JsonReader_TableAddRow_mEA71AF521F19D0EB76C74DDF660D3D2A891EF694(((int32_t)65543), NULL);
		// TableAddCol (ParserToken.Text, '[',
		//              (int) ParserToken.Array);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = L_46;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65543), ((int32_t)91), L_47, NULL);
		// TableAddCol (ParserToken.Text, '{',
		//              (int) ParserToken.Object);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = L_48;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65543), ((int32_t)123), L_49, NULL);
		// TableAddRow (ParserToken.Value);
		JsonReader_TableAddRow_mEA71AF521F19D0EB76C74DDF660D3D2A891EF694(((int32_t)65550), NULL);
		// TableAddCol (ParserToken.Value, '"',
		//              (int) ParserToken.String);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = L_50;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65552));
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65550), ((int32_t)34), L_51, NULL);
		// TableAddCol (ParserToken.Value, '[',
		//              (int) ParserToken.Array);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = L_52;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65550), ((int32_t)91), L_53, NULL);
		// TableAddCol (ParserToken.Value, '{',
		//              (int) ParserToken.Object);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = L_54;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65550), ((int32_t)123), L_55, NULL);
		// TableAddCol (ParserToken.Value, (int) ParserToken.Number,
		//              (int) ParserToken.Number);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = L_56;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65537));
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65550), ((int32_t)65537), L_57, NULL);
		// TableAddCol (ParserToken.Value, (int) ParserToken.True,
		//              (int) ParserToken.True);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = L_58;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65538));
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65550), ((int32_t)65538), L_59, NULL);
		// TableAddCol (ParserToken.Value, (int) ParserToken.False,
		//              (int) ParserToken.False);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = L_60;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65539));
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65550), ((int32_t)65539), L_61, NULL);
		// TableAddCol (ParserToken.Value, (int) ParserToken.Null,
		//              (int) ParserToken.Null);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = L_62;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65540));
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65550), ((int32_t)65540), L_63, NULL);
		// TableAddRow (ParserToken.ValueRest);
		JsonReader_TableAddRow_mEA71AF521F19D0EB76C74DDF660D3D2A891EF694(((int32_t)65551), NULL);
		// TableAddCol (ParserToken.ValueRest, ',',
		//              ',',
		//              (int) ParserToken.Value,
		//              (int) ParserToken.ValueRest);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = L_64;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_66 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_65, L_66, NULL);
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65551), ((int32_t)44), L_65, NULL);
		// TableAddCol (ParserToken.ValueRest, ']',
		//              (int) ParserToken.Epsilon);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = L_67;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E(((int32_t)65551), ((int32_t)93), L_68, NULL);
		// }
		return;
	}
}
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddCol_m2DB67F137FBD36A750CE7B92FE3671B18D13055E (int32_t ___row0, int32_t ___col1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___symbols2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parse_table[(int) row].Add (col, symbols);
		il2cpp_codegen_runtime_class_init_inline(JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_il2cpp_TypeInfo_var))->___parse_table_0;
		int32_t L_1 = ___row0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(TKey) */, IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var, L_0, L_1);
		int32_t L_3 = ___col1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___symbols2;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::Add(TKey,TValue) */, IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddRow_mEA71AF521F19D0EB76C74DDF660D3D2A891EF694 (int32_t ___rule0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parse_table.Add ((int) rule, new Dictionary<int, int[]> ());
		il2cpp_codegen_runtime_class_init_inline(JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_il2cpp_TypeInfo_var))->___parse_table_0;
		int32_t L_1 = ___rule0;
		Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* L_2 = (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9*)il2cpp_codegen_object_new(Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A(L_2, Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::Add(TKey,TValue) */, IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessNumber_m92FFECA88AFD55D673F496CBAB01E268B3F8D0BE (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, String_t* ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	uint64_t V_2 = 0;
	double V_3 = 0.0;
	{
		// if (number.IndexOf ('.') != -1 ||
		//     number.IndexOf ('e') != -1 ||
		//     number.IndexOf ('E') != -1) {
		String_t* L_0 = ___number0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_0, ((int32_t)46), NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ___number0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_2, ((int32_t)101), NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_4 = ___number0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_4, ((int32_t)69), NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_003f;
		}
	}

IL_0021:
	{
		// if (Double.TryParse (number, out n_double)) {
		String_t* L_6 = ___number0;
		bool L_7;
		L_7 = Double_TryParse_m6939FA2B8DCF60C46E0B859746DD9622450E7DD9(L_6, (&V_3), NULL);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		// token = JsonToken.Double;
		__this->___token_14 = 8;
		// token_value = n_double;
		double L_8 = V_3;
		double L_9 = L_8;
		RuntimeObject* L_10 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_9);
		__this->___token_value_13 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)L_10);
		// return;
		return;
	}

IL_003f:
	{
		// if (Int32.TryParse (number, out n_int32)) {
		String_t* L_11 = ___number0;
		bool L_12;
		L_12 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_11, (&V_0), NULL);
		if (!L_12)
		{
			goto IL_005d;
		}
	}
	{
		// token = JsonToken.Int;
		__this->___token_14 = 6;
		// token_value = n_int32;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		__this->___token_value_13 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)L_15);
		// return;
		return;
	}

IL_005d:
	{
		// if (Int64.TryParse (number, out n_int64)) {
		String_t* L_16 = ___number0;
		bool L_17;
		L_17 = Int64_TryParse_m61AAE5CC4A0B716556765798C22FE12D87554986(L_16, (&V_1), NULL);
		if (!L_17)
		{
			goto IL_007b;
		}
	}
	{
		// token = JsonToken.Long;
		__this->___token_14 = 7;
		// token_value = n_int64;
		int64_t L_18 = V_1;
		int64_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_19);
		__this->___token_value_13 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)L_20);
		// return;
		return;
	}

IL_007b:
	{
		// if (UInt64.TryParse(number, out n_uint64))
		String_t* L_21 = ___number0;
		bool L_22;
		L_22 = UInt64_TryParse_m71B0751A67936F47D60CA54DFCECDB1995F55EA2(L_21, (&V_2), NULL);
		if (!L_22)
		{
			goto IL_0099;
		}
	}
	{
		// token = JsonToken.Long;
		__this->___token_14 = 7;
		// token_value = n_uint64;
		uint64_t L_23 = V_2;
		uint64_t L_24 = L_23;
		RuntimeObject* L_25 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_24);
		__this->___token_value_13 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)L_25);
		// return;
		return;
	}

IL_0099:
	{
		// token = JsonToken.Int;
		__this->___token_14 = 6;
		// token_value = 0;
		int32_t L_26 = 0;
		RuntimeObject* L_27 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_26);
		__this->___token_value_13 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)L_27);
		// }
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessSymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessSymbol_mE870CF44384FBB1D61AAD563474BBA41A2959C25 (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (current_symbol == '[')  {
		int32_t L_0 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0019;
		}
	}
	{
		// token = JsonToken.ArrayStart;
		__this->___token_14 = 4;
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0019:
	{
		// } else if (current_symbol == ']')  {
		int32_t L_1 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0032;
		}
	}
	{
		// token = JsonToken.ArrayEnd;
		__this->___token_14 = 5;
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0032:
	{
		// } else if (current_symbol == '{')  {
		int32_t L_2 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_004b;
		}
	}
	{
		// token = JsonToken.ObjectStart;
		__this->___token_14 = 1;
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_004b:
	{
		// } else if (current_symbol == '}')  {
		int32_t L_3 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0064;
		}
	}
	{
		// token = JsonToken.ObjectEnd;
		__this->___token_14 = 3;
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0064:
	{
		// } else if (current_symbol == '"')  {
		int32_t L_4 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_009d;
		}
	}
	{
		// if (parser_in_string) {
		bool L_5 = __this->___parser_in_string_7;
		if (!L_5)
		{
			goto IL_0085;
		}
	}
	{
		// parser_in_string = false;
		__this->___parser_in_string_7 = (bool)0;
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0085:
	{
		// if (token == JsonToken.None)
		int32_t L_6 = __this->___token_14;
		if (L_6)
		{
			goto IL_0095;
		}
	}
	{
		// token = JsonToken.String;
		__this->___token_14 = ((int32_t)9);
	}

IL_0095:
	{
		// parser_in_string = true;
		__this->___parser_in_string_7 = (bool)1;
		return;
	}

IL_009d:
	{
		// } else if (current_symbol == (int) ParserToken.CharSeq) {
		int32_t L_7 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)65541)))))
		{
			goto IL_00bc;
		}
	}
	{
		// token_value = lexer.StringValue;
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_8 = __this->___lexer_6;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Lexer_get_StringValue_m51C044FBCD7254C4FC2076A0CCA326BBFB5D567C_inline(L_8, NULL);
		__this->___token_value_13 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)L_9);
		return;
	}

IL_00bc:
	{
		// } else if (current_symbol == (int) ParserToken.False)  {
		int32_t L_10 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)65539)))))
		{
			goto IL_00e5;
		}
	}
	{
		// token = JsonToken.Boolean;
		__this->___token_14 = ((int32_t)10);
		// token_value = false;
		bool L_11 = ((bool)0);
		RuntimeObject* L_12 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_11);
		__this->___token_value_13 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)L_12);
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_00e5:
	{
		// } else if (current_symbol == (int) ParserToken.Null)  {
		int32_t L_13 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)65540)))))
		{
			goto IL_0102;
		}
	}
	{
		// token = JsonToken.Null;
		__this->___token_14 = ((int32_t)11);
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0102:
	{
		// } else if (current_symbol == (int) ParserToken.Number)  {
		int32_t L_14 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)65537)))))
		{
			goto IL_0128;
		}
	}
	{
		// ProcessNumber (lexer.StringValue);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_15 = __this->___lexer_6;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Lexer_get_StringValue_m51C044FBCD7254C4FC2076A0CCA326BBFB5D567C_inline(L_15, NULL);
		JsonReader_ProcessNumber_m92FFECA88AFD55D673F496CBAB01E268B3F8D0BE(__this, L_16, NULL);
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0128:
	{
		// } else if (current_symbol == (int) ParserToken.Pair)  {
		int32_t L_17 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)65546)))))
		{
			goto IL_013d;
		}
	}
	{
		// token = JsonToken.PropertyName;
		__this->___token_14 = 2;
		return;
	}

IL_013d:
	{
		// } else if (current_symbol == (int) ParserToken.True)  {
		int32_t L_18 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)65538)))))
		{
			goto IL_0165;
		}
	}
	{
		// token = JsonToken.Boolean;
		__this->___token_14 = ((int32_t)10);
		// token_value = true;
		bool L_19 = ((bool)1);
		RuntimeObject* L_20 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_19);
		__this->___token_value_13 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)L_20);
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
	}

IL_0165:
	{
		// }
		return;
	}
}
// System.Boolean LitJson.JsonReader::ReadToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_ReadToken_mDB544E5F896ED42A8C8D0294381E859360B92989 (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, const RuntimeMethod* method) 
{
	{
		// if (end_of_input)
		bool L_0 = __this->___end_of_input_5;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// lexer.NextToken ();
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = __this->___lexer_6;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_NextToken_m6C6E5501F74234A8F7D2482F5FE1466DC8AA7F22(L_1, NULL);
		// if (lexer.EndOfInput) {
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_3 = __this->___lexer_6;
		NullCheck(L_3);
		bool L_4;
		L_4 = Lexer_get_EndOfInput_m2D53062A15EAF139239C01418891EEF98559DA3E_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// Close ();
		JsonReader_Close_mFAC25114A841018DA40EA1B391FBC11764392BCD(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_002b:
	{
		// current_input = lexer.Token;
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_5 = __this->___lexer_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Lexer_get_Token_m4FE4DBE440BEF05CF0B3FFB57DF0BA07D3DB71C6_inline(L_5, NULL);
		__this->___current_input_2 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Void LitJson.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_mFAC25114A841018DA40EA1B391FBC11764392BCD (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, const RuntimeMethod* method) 
{
	{
		// if (end_of_input)
		bool L_0 = __this->___end_of_input_5;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// end_of_input = true;
		__this->___end_of_input_5 = (bool)1;
		// end_of_json  = true;
		__this->___end_of_json_4 = (bool)1;
		// if (reader_is_owned)
		bool L_1 = __this->___reader_is_owned_11;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// reader.Close ();
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_2 = __this->___reader_10;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_2);
	}

IL_002a:
	{
		// reader = null;
		__this->___reader_10 = (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_10), (void*)(TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7*)NULL);
		// }
		return;
	}
}
// System.Boolean LitJson.JsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_Read_m467AC7843F283BA69EE3A7CA69888FE674DBD63C (JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* V_1 = NULL;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (end_of_input)
		bool L_0 = __this->___end_of_input_5;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (end_of_json) {
		bool L_1 = __this->___end_of_json_4;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// end_of_json = false;
		__this->___end_of_json_4 = (bool)0;
		// automaton_stack.Clear ();
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_2 = __this->___automaton_stack_1;
		NullCheck(L_2);
		Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0(L_2, Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var);
		// automaton_stack.Push ((int) ParserToken.End);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_3 = __this->___automaton_stack_1;
		NullCheck(L_3);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_3, ((int32_t)65553), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		// automaton_stack.Push ((int) ParserToken.Text);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_4 = __this->___automaton_stack_1;
		NullCheck(L_4);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_4, ((int32_t)65543), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
	}

IL_0044:
	{
		// parser_in_string = false;
		__this->___parser_in_string_7 = (bool)0;
		// parser_return    = false;
		__this->___parser_return_8 = (bool)0;
		// token       = JsonToken.None;
		__this->___token_14 = 0;
		// token_value = null;
		__this->___token_value_13 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)NULL);
		// if (! read_started) {
		bool L_5 = __this->___read_started_9;
		if (L_5)
		{
			goto IL_0079;
		}
	}
	{
		// read_started = true;
		__this->___read_started_9 = (bool)1;
		// if (! ReadToken ())
		bool L_6;
		L_6 = JsonReader_ReadToken_mDB544E5F896ED42A8C8D0294381E859360B92989(__this, NULL);
		if (L_6)
		{
			goto IL_0079;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0079:
	{
		// if (parser_return) {
		bool L_7 = __this->___parser_return_8;
		if (!L_7)
		{
			goto IL_009c;
		}
	}
	{
		// if (automaton_stack.Peek () == (int) ParserToken.End)
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_8 = __this->___automaton_stack_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66(L_8, Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)65553)))))
		{
			goto IL_009a;
		}
	}
	{
		// end_of_json = true;
		__this->___end_of_json_4 = (bool)1;
	}

IL_009a:
	{
		// return true;
		return (bool)1;
	}

IL_009c:
	{
		// current_symbol = automaton_stack.Pop ();
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_10 = __this->___automaton_stack_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748(L_10, Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		__this->___current_symbol_3 = L_11;
		// ProcessSymbol ();
		JsonReader_ProcessSymbol_mE870CF44384FBB1D61AAD563474BBA41A2959C25(__this, NULL);
		// if (current_symbol == current_input) {
		int32_t L_12 = __this->___current_symbol_3;
		int32_t L_13 = __this->___current_input_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_00f2;
		}
	}
	{
		// if (! ReadToken ()) {
		bool L_14;
		L_14 = JsonReader_ReadToken_mDB544E5F896ED42A8C8D0294381E859360B92989(__this, NULL);
		if (L_14)
		{
			goto IL_0079;
		}
	}
	{
		// if (automaton_stack.Peek () != (int) ParserToken.End)
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_15 = __this->___automaton_stack_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66(L_15, Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)65553))))
		{
			goto IL_00e6;
		}
	}
	{
		// throw new JsonException (
		//     "Input doesn't evaluate to proper JSON text");
		JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69* L_17 = (JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		JsonException__ctor_m3A92B9FDBB3AB36DB2306B9B2D4021F335792DE5(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B6EE056E549534162451A09C7F0AFAC372DBD06)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Read_m467AC7843F283BA69EE3A7CA69888FE674DBD63C_RuntimeMethod_var)));
	}

IL_00e6:
	{
		// if (parser_return)
		bool L_18 = __this->___parser_return_8;
		if (!L_18)
		{
			goto IL_00f0;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00f0:
	{
		// return false;
		return (bool)0;
	}

IL_00f2:
	{
	}
	try
	{// begin try (depth: 1)
		// entry_symbols =
		//     parse_table[current_symbol][current_input];
		il2cpp_codegen_runtime_class_init_inline(JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_il2cpp_TypeInfo_var);
		RuntimeObject* L_19 = ((JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t47EA0ACB950B8D9EC88D0C3D2A7CB1CC96D90494_il2cpp_TypeInfo_var))->___parse_table_0;
		int32_t L_20 = __this->___current_symbol_3;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(TKey) */, IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var, L_19, L_20);
		int32_t L_22 = __this->___current_input_2;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23;
		L_23 = InterfaceFuncInvoker1< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::get_Item(TKey) */, IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var, L_21, L_22);
		V_0 = L_23;
		// } catch (KeyNotFoundException e) {
		goto IL_011f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0111;
		}
		throw e;
	}

CATCH_0111:
	{// begin catch(System.Collections.Generic.KeyNotFoundException)
		// } catch (KeyNotFoundException e) {
		V_1 = ((KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)IL2CPP_GET_ACTIVE_EXCEPTION(KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*));
		// throw new JsonException ((ParserToken) current_input, e);
		int32_t L_24 = __this->___current_input_2;
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_25 = V_1;
		JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69* L_26 = (JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		JsonException__ctor_mAD83C5F2B09850728FD82628DCB1B1C0387A5F7D(L_26, L_24, L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Read_m467AC7843F283BA69EE3A7CA69888FE674DBD63C_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_011f:
	{
		// if (entry_symbols[0] == (int) ParserToken.Epsilon)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = 0;
		int32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((((int32_t)L_29) == ((int32_t)((int32_t)65554))))
		{
			goto IL_0079;
		}
	}
	{
		// for (int i = entry_symbols.Length - 1; i >= 0; i--)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_0;
		NullCheck(L_30);
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_30)->max_length)), 1));
		goto IL_0146;
	}

IL_0134:
	{
		// automaton_stack.Push (entry_symbols[i]);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_31 = __this->___automaton_stack_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_31, L_35, Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		// for (int i = entry_symbols.Length - 1; i >= 0; i--)
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
	}

IL_0146:
	{
		// for (int i = entry_symbols.Length - 1; i >= 0; i--)
		int32_t L_37 = V_2;
		if ((((int32_t)L_37) >= ((int32_t)0)))
		{
			goto IL_0134;
		}
	}
	{
		// while (true) {
		goto IL_0079;
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
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_mBF2C1F02C5C6D2753DD0D06D9C14FABDD93D10ED (WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* __this, const RuntimeMethod* method) 
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
// System.Int32 LitJson.JsonWriter::get_IndentValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriter_get_IndentValue_m54181E636EA984FEFF9C845961CDD83929623957 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) 
{
	{
		// get { return indent_value; }
		int32_t L_0 = __this->___indent_value_6;
		return L_0;
	}
}
// System.Void LitJson.JsonWriter::set_IndentValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_IndentValue_m1AD30CE6C3065366DE920144D43B0CF4AF81DFED (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// indentation = (indentation / indent_value) * value;
		int32_t L_0 = __this->___indentation_5;
		int32_t L_1 = __this->___indent_value_6;
		int32_t L_2 = ___value0;
		__this->___indentation_5 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_0/L_1)), L_2));
		// indent_value = value;
		int32_t L_3 = ___value0;
		__this->___indent_value_6 = L_3;
		// }
		return;
	}
}
// System.Boolean LitJson.JsonWriter::get_PrettyPrint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriter_get_PrettyPrint_mD61371A356368C25D3CD04C97C9C1B1A6E61718D (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) 
{
	{
		// get { return pretty_print; }
		bool L_0 = __this->___pretty_print_8;
		return L_0;
	}
}
// System.Void LitJson.JsonWriter::set_PrettyPrint(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_PrettyPrint_m2CB8C1D2D882FF5517F409B2161CEFDDA3FC2F81 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { pretty_print = value; }
		bool L_0 = ___value0;
		__this->___pretty_print_8 = L_0;
		// set { pretty_print = value; }
		return;
	}
}
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* JsonWriter_get_TextWriter_m1413074FED066818D2C17CC0D2CF158EEF889442 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) 
{
	{
		// get { return writer; }
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = __this->___writer_10;
		return L_0;
	}
}
// System.Boolean LitJson.JsonWriter::get_Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriter_get_Validate_mDCF4D3B9844FB03A4516479B01CBC88E15DDFAB9 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) 
{
	{
		// get { return validate; }
		bool L_0 = __this->___validate_9;
		return L_0;
	}
}
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_mDDAAFAD771B7337E9FE11850C4BAADBCE6AFBA5F (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { validate = value; }
		bool L_0 = ___value0;
		__this->___validate_9 = L_0;
		// set { validate = value; }
		return;
	}
}
// System.Void LitJson.JsonWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__cctor_m77373F91E1DA113DE776BBD473BBB88C23957775 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// number_format = NumberFormatInfo.InvariantInfo;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m08BD3BFBBBE015F2EDCF6DE969ACFB327E453621(NULL);
		((JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var))->___number_format_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var))->___number_format_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m97ADA34AC7B72B40DE5E3A98543D88A1E76C6103 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JsonWriter ()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// inst_string_builder = new StringBuilder ();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->___inst_string_builder_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_string_builder_7), (void*)L_0);
		// writer = new StringWriter (inst_string_builder);
		StringBuilder_t* L_1 = __this->___inst_string_builder_7;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringWriter__ctor_mF38CB8046B79DEF523E427B7F41CA3135671D0C8(L_2, L_1, NULL);
		__this->___writer_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___writer_10), (void*)L_2);
		// Init ();
		JsonWriter_Init_mF1AB3850230AAC769A4B242D3DA0E609E3D74695(__this, NULL);
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_mC3AE9786F8BE44FAB524D825624498D742687AC0 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this (new StringWriter (sb))
		StringBuilder_t* L_0 = ___sb0;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringWriter__ctor_mF38CB8046B79DEF523E427B7F41CA3135671D0C8(L_1, L_0, NULL);
		JsonWriter__ctor_m4FBA51D6C15EE24709EF71C26D10F9C59AB1C3BC(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m4FBA51D6C15EE24709EF71C26D10F9C59AB1C3BC (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) 
{
	{
		// public JsonWriter (TextWriter writer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (writer == null)
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = ___writer0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException ("writer");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter__ctor_m4FBA51D6C15EE24709EF71C26D10F9C59AB1C3BC_RuntimeMethod_var)));
	}

IL_0014:
	{
		// this.writer = writer;
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_2 = ___writer0;
		__this->___writer_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___writer_10), (void*)L_2);
		// Init ();
		JsonWriter_Init_mF1AB3850230AAC769A4B242D3DA0E609E3D74695(__this, NULL);
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, int32_t ___cond0, const RuntimeMethod* method) 
{
	{
		// if (! context.ExpectingValue)
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_0 = __this->___context_1;
		NullCheck(L_0);
		bool L_1 = L_0->___ExpectingValue_3;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		// context.Count++;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_2 = __this->___context_1;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Count_0;
		NullCheck(L_3);
		L_3->___Count_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0020:
	{
		// if (! validate)
		bool L_5 = __this->___validate_9;
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		// return;
		return;
	}

IL_0029:
	{
		// if (has_reached_end)
		bool L_6 = __this->___has_reached_end_3;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// throw new JsonException (
		//     "A complete JSON symbol has already been written");
		JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69* L_7 = (JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		JsonException__ctor_m3A92B9FDBB3AB36DB2306B9B2D4021F335792DE5(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E284AA45C643AAA8D3553AA7AB6A1C3BC3E32D1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B_RuntimeMethod_var)));
	}

IL_003c:
	{
		int32_t L_8 = ___cond0;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0057;
			}
			case 1:
			{
				goto IL_0072;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_00bf;
			}
			case 4:
			{
				goto IL_00e4;
			}
		}
	}
	{
		return;
	}

IL_0057:
	{
		// if (! context.InArray)
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_9 = __this->___context_1;
		NullCheck(L_9);
		bool L_10 = L_9->___InArray_1;
		if (L_10)
		{
			goto IL_0116;
		}
	}
	{
		// throw new JsonException (
		//     "Can't close an array here");
		JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69* L_11 = (JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		JsonException__ctor_m3A92B9FDBB3AB36DB2306B9B2D4021F335792DE5(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral057118C49B28F31FA4955B194753088DDCD94999)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B_RuntimeMethod_var)));
	}

IL_0072:
	{
		// if (! context.InObject || context.ExpectingValue)
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_12 = __this->___context_1;
		NullCheck(L_12);
		bool L_13 = L_12->___InObject_2;
		if (!L_13)
		{
			goto IL_008f;
		}
	}
	{
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_14 = __this->___context_1;
		NullCheck(L_14);
		bool L_15 = L_14->___ExpectingValue_3;
		if (!L_15)
		{
			goto IL_0116;
		}
	}

IL_008f:
	{
		// throw new JsonException (
		//     "Can't close an object here");
		JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69* L_16 = (JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		JsonException__ctor_m3A92B9FDBB3AB36DB2306B9B2D4021F335792DE5(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEE7535349ADB76DD55B08451D311FC3CF06A19C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B_RuntimeMethod_var)));
	}

IL_009a:
	{
		// if (context.InObject && ! context.ExpectingValue)
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_17 = __this->___context_1;
		NullCheck(L_17);
		bool L_18 = L_17->___InObject_2;
		if (!L_18)
		{
			goto IL_0116;
		}
	}
	{
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_19 = __this->___context_1;
		NullCheck(L_19);
		bool L_20 = L_19->___ExpectingValue_3;
		if (L_20)
		{
			goto IL_0116;
		}
	}
	{
		// throw new JsonException (
		//     "Expected a property");
		JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69* L_21 = (JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		JsonException__ctor_m3A92B9FDBB3AB36DB2306B9B2D4021F335792DE5(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCDA723AA4DBB226A906416AA9BF1C2D4CEC53C89)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B_RuntimeMethod_var)));
	}

IL_00bf:
	{
		// if (! context.InObject || context.ExpectingValue)
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_22 = __this->___context_1;
		NullCheck(L_22);
		bool L_23 = L_22->___InObject_2;
		if (!L_23)
		{
			goto IL_00d9;
		}
	}
	{
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_24 = __this->___context_1;
		NullCheck(L_24);
		bool L_25 = L_24->___ExpectingValue_3;
		if (!L_25)
		{
			goto IL_0116;
		}
	}

IL_00d9:
	{
		// throw new JsonException (
		//     "Can't add a property here");
		JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69* L_26 = (JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		JsonException__ctor_m3A92B9FDBB3AB36DB2306B9B2D4021F335792DE5(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84BE6DF7F5E86A94476E7ED44C8A9ACA10E6236A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B_RuntimeMethod_var)));
	}

IL_00e4:
	{
		// if (! context.InArray &&
		//     (! context.InObject || ! context.ExpectingValue))
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_27 = __this->___context_1;
		NullCheck(L_27);
		bool L_28 = L_27->___InArray_1;
		if (L_28)
		{
			goto IL_0116;
		}
	}
	{
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_29 = __this->___context_1;
		NullCheck(L_29);
		bool L_30 = L_29->___InObject_2;
		if (!L_30)
		{
			goto IL_010b;
		}
	}
	{
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_31 = __this->___context_1;
		NullCheck(L_31);
		bool L_32 = L_31->___ExpectingValue_3;
		if (L_32)
		{
			goto IL_0116;
		}
	}

IL_010b:
	{
		// throw new JsonException (
		//     "Can't add a value here");
		JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69* L_33 = (JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69_il2cpp_TypeInfo_var)));
		NullCheck(L_33);
		JsonException__ctor_m3A92B9FDBB3AB36DB2306B9B2D4021F335792DE5(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC63496F78F80F09E4841EF5CD0DA8DAF7028FB4B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B_RuntimeMethod_var)));
	}

IL_0116:
	{
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_mF1AB3850230AAC769A4B242D3DA0E609E3D74695 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mB8A0F2A30CD8E257DF66B2016E42679454E3E68A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mADA1A11FFA45C2125F784F0B3343913A9E0E07C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// has_reached_end = false;
		__this->___has_reached_end_3 = (bool)0;
		// hex_seq = new char[4];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___hex_seq_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hex_seq_4), (void*)L_0);
		// indentation = 0;
		__this->___indentation_5 = 0;
		// indent_value = 4;
		__this->___indent_value_6 = 4;
		// pretty_print = false;
		__this->___pretty_print_8 = (bool)0;
		// validate = true;
		__this->___validate_9 = (bool)1;
		// ctx_stack = new Stack<WriterContext> ();
		Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* L_1 = (Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329*)il2cpp_codegen_object_new(Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stack_1__ctor_mADA1A11FFA45C2125F784F0B3343913A9E0E07C9(L_1, Stack_1__ctor_mADA1A11FFA45C2125F784F0B3343913A9E0E07C9_RuntimeMethod_var);
		__this->___ctx_stack_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ctx_stack_2), (void*)L_1);
		// context = new WriterContext ();
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_2 = (WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7*)il2cpp_codegen_object_new(WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WriterContext__ctor_mBF2C1F02C5C6D2753DD0D06D9C14FABDD93D10ED(L_2, NULL);
		__this->___context_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_2);
		// ctx_stack.Push (context);
		Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* L_3 = __this->___ctx_stack_2;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_4 = __this->___context_1;
		NullCheck(L_3);
		Stack_1_Push_mB8A0F2A30CD8E257DF66B2016E42679454E3E68A(L_3, L_4, Stack_1_Push_mB8A0F2A30CD8E257DF66B2016E42679454E3E68A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_m7C38604C163AD17D6A43E36C13F29BDDB80800C9 (int32_t ___n0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___hex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < 4; i++) {
		V_1 = 0;
		goto IL_0030;
	}

IL_0004:
	{
		// num = n % 16;
		int32_t L_0 = ___n0;
		V_0 = ((int32_t)(L_0%((int32_t)16)));
		// if (num < 10)
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)10))))
		{
			goto IL_001a;
		}
	}
	{
		// hex[3 - i] = (char) ('0' + num);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___hex1;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(3, L_3))), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)48), L_4))));
		goto IL_0027;
	}

IL_001a:
	{
		// hex[3 - i] = (char) ('A' + (num - 10));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___hex1;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(3, L_6))), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)65), ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)10)))))));
	}

IL_0027:
	{
		// n >>= 4;
		int32_t L_8 = ___n0;
		___n0 = ((int32_t)(L_8>>4));
		// for (int i = 0; i < 4; i++) {
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0030:
	{
		// for (int i = 0; i < 4; i++) {
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Indent_m53063FF0A2CE8C64FE619A23541A95D0E048EBCB (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) 
{
	{
		// if (pretty_print)
		bool L_0 = __this->___pretty_print_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// indentation += indent_value;
		int32_t L_1 = __this->___indentation_5;
		int32_t L_2 = __this->___indent_value_6;
		__this->___indentation_5 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_m6AF288334D8F464C4D349F32C2A7FFC13404AAC6 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (pretty_print && ! context.ExpectingValue)
		bool L_0 = __this->___pretty_print_8;
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_1 = __this->___context_1;
		NullCheck(L_1);
		bool L_2 = L_1->___ExpectingValue_3;
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		// for (int i = 0; i < indentation; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_0019:
	{
		// writer.Write (' ');
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_3 = __this->___writer_10;
		NullCheck(L_3);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)32));
		// for (int i = 0; i < indentation; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_002a:
	{
		// for (int i = 0; i < indentation; i++)
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___indentation_5;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0019;
		}
	}

IL_0033:
	{
		// writer.Write (str);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_7 = __this->___writer_10;
		String_t* L_8 = ___str0;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m1411C40D9BDB3FADBFF54D4E8C5C4A09623AE822 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) 
{
	{
		// PutNewline (true);
		JsonWriter_PutNewline_mE36D22231B5E68244183A2966E910A4DA497AD59(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mE36D22231B5E68244183A2966E910A4DA497AD59 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, bool ___add_comma0, const RuntimeMethod* method) 
{
	{
		// if (add_comma && ! context.ExpectingValue &&
		//     context.Count > 1)
		bool L_0 = ___add_comma0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_1 = __this->___context_1;
		NullCheck(L_1);
		bool L_2 = L_1->___ExpectingValue_3;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_3 = __this->___context_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Count_0;
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		// writer.Write (',');
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_5 = __this->___writer_10;
		NullCheck(L_5);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)44));
	}

IL_002b:
	{
		// if (pretty_print && ! context.ExpectingValue)
		bool L_6 = __this->___pretty_print_8;
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_7 = __this->___context_1;
		NullCheck(L_7);
		bool L_8 = L_7->___ExpectingValue_3;
		if (L_8)
		{
			goto IL_004d;
		}
	}
	{
		// writer.Write ('\n');
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_9 = __this->___writer_10;
		NullCheck(L_9);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, ((int32_t)10));
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_mB3B4DAEA9710B0F8061B76F09CF74EAD2FB80305 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		// Put (String.Empty);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		JsonWriter_Put_m6AF288334D8F464C4D349F32C2A7FFC13404AAC6(__this, L_0, NULL);
		// writer.Write ('"');
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_1 = __this->___writer_10;
		NullCheck(L_1);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)34));
		// int n = str.Length;
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		V_0 = L_3;
		// for (int i = 0; i < n; i++) {
		V_1 = 0;
		goto IL_0145;
	}

IL_0026:
	{
		// switch (str[i]) {
		String_t* L_4 = ___str0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 8)))
		{
			case 0:
			{
				goto IL_00d2;
			}
			case 1:
			{
				goto IL_0087;
			}
			case 2:
			{
				goto IL_005d;
			}
			case 3:
			{
				goto IL_00e4;
			}
			case 4:
			{
				goto IL_00c0;
			}
			case 5:
			{
				goto IL_0072;
			}
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_009c;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_00e4;
	}

IL_005d:
	{
		// writer.Write ("\\n");
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_10 = __this->___writer_10;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_10, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		// continue;
		goto IL_0141;
	}

IL_0072:
	{
		// writer.Write ("\\r");
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_11 = __this->___writer_10;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		// continue;
		goto IL_0141;
	}

IL_0087:
	{
		// writer.Write ("\\t");
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_12 = __this->___writer_10;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		// continue;
		goto IL_0141;
	}

IL_009c:
	{
		// writer.Write ('\\');
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_13 = __this->___writer_10;
		NullCheck(L_13);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)92));
		// writer.Write (str[i]);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_14 = __this->___writer_10;
		String_t* L_15 = ___str0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, L_16, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_14, L_17);
		// continue;
		goto IL_0141;
	}

IL_00c0:
	{
		// writer.Write ("\\f");
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_18 = __this->___writer_10;
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_18, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		// continue;
		goto IL_0141;
	}

IL_00d2:
	{
		// writer.Write ("\\b");
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_19 = __this->___writer_10;
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_19, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		// continue;
		goto IL_0141;
	}

IL_00e4:
	{
		// if ((int) str[i] >= 32 && (int) str[i] <= 126) {
		String_t* L_20 = ___str0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_20, L_21, NULL);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)32))))
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_23 = ___str0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, L_24, NULL);
		if ((((int32_t)L_25) > ((int32_t)((int32_t)126))))
		{
			goto IL_010e;
		}
	}
	{
		// writer.Write (str[i]);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_26 = __this->___writer_10;
		String_t* L_27 = ___str0;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		Il2CppChar L_29;
		L_29 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_27, L_28, NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_26, L_29);
		// continue;
		goto IL_0141;
	}

IL_010e:
	{
		// IntToHex ((int) str[i], hex_seq);
		String_t* L_30 = ___str0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		Il2CppChar L_32;
		L_32 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_30, L_31, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = __this->___hex_seq_4;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var);
		JsonWriter_IntToHex_m7C38604C163AD17D6A43E36C13F29BDDB80800C9(L_32, L_33, NULL);
		// writer.Write ("\\u");
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_34 = __this->___writer_10;
		NullCheck(L_34);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		// writer.Write (hex_seq);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_35 = __this->___writer_10;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_36 = __this->___hex_seq_4;
		NullCheck(L_35);
		VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char[]) */, L_35, L_36);
	}

IL_0141:
	{
		// for (int i = 0; i < n; i++) {
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0145:
	{
		// for (int i = 0; i < n; i++) {
		int32_t L_38 = V_1;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0026;
		}
	}
	{
		// writer.Write ('"');
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_40 = __this->___writer_10;
		NullCheck(L_40);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_40, ((int32_t)34));
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Unindent_mB61C70BD0FE7F41D1A50DD3397CF90D31CF5BF8F (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) 
{
	{
		// if (pretty_print)
		bool L_0 = __this->___pretty_print_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// indentation -= indent_value;
		int32_t L_1 = __this->___indentation_5;
		int32_t L_2 = __this->___indent_value_6;
		__this->___indentation_5 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.String LitJson.JsonWriter::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonWriter_ToString_m847001C0830E75A9B8EE433B6DE448F11CB8D379 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inst_string_builder == null)
		StringBuilder_t* L_0 = __this->___inst_string_builder_7;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return String.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		// return inst_string_builder.ToString ();
		StringBuilder_t* L_2 = __this->___inst_string_builder_7;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void LitJson.JsonWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Reset_m068FE75A9713E1202E1013521758A86B86038C9C (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m1393729ADC22437BD76E49D2DB1132CDBE40BB34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mB8A0F2A30CD8E257DF66B2016E42679454E3E68A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// has_reached_end = false;
		__this->___has_reached_end_3 = (bool)0;
		// ctx_stack.Clear ();
		Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* L_0 = __this->___ctx_stack_2;
		NullCheck(L_0);
		Stack_1_Clear_m1393729ADC22437BD76E49D2DB1132CDBE40BB34(L_0, Stack_1_Clear_m1393729ADC22437BD76E49D2DB1132CDBE40BB34_RuntimeMethod_var);
		// context = new WriterContext ();
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_1 = (WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7*)il2cpp_codegen_object_new(WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WriterContext__ctor_mBF2C1F02C5C6D2753DD0D06D9C14FABDD93D10ED(L_1, NULL);
		__this->___context_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_1);
		// ctx_stack.Push (context);
		Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* L_2 = __this->___ctx_stack_2;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_3 = __this->___context_1;
		NullCheck(L_2);
		Stack_1_Push_mB8A0F2A30CD8E257DF66B2016E42679454E3E68A(L_2, L_3, Stack_1_Push_mB8A0F2A30CD8E257DF66B2016E42679454E3E68A_RuntimeMethod_var);
		// if (inst_string_builder != null)
		StringBuilder_t* L_4 = __this->___inst_string_builder_7;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// inst_string_builder.Remove (0, inst_string_builder.Length);
		StringBuilder_t* L_5 = __this->___inst_string_builder_7;
		StringBuilder_t* L_6 = __this->___inst_string_builder_7;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_6, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_5, 0, L_7, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mD0C53346AA5268F60D1AC464ADAC41D8A331AF1D (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, bool ___boolean0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* G_B2_0 = NULL;
	JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* G_B3_1 = NULL;
	{
		// DoValidation (Condition.Value);
		JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B(__this, 4, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m1411C40D9BDB3FADBFF54D4E8C5C4A09623AE822(__this, NULL);
		// Put (boolean ? "true" : "false");
		bool L_0 = ___boolean0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0018:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		NullCheck(G_B3_1);
		JsonWriter_Put_m6AF288334D8F464C4D349F32C2A7FFC13404AAC6(G_B3_1, G_B3_0, NULL);
		// context.ExpectingValue = false;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_1 = __this->___context_1;
		NullCheck(L_1);
		L_1->___ExpectingValue_3 = (bool)0;
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mE98B93B4E25EC8CA118B34A57913CB155CC5A793 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.Value);
		JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B(__this, 4, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m1411C40D9BDB3FADBFF54D4E8C5C4A09623AE822(__this, NULL);
		// Put (Convert.ToString (number, number_format));
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m968749D791BDDE9D6ECB2D71DDE205221B27953D(L_0, L_1, NULL);
		JsonWriter_Put_m6AF288334D8F464C4D349F32C2A7FFC13404AAC6(__this, L_2, NULL);
		// context.ExpectingValue = false;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_3 = __this->___context_1;
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = (bool)0;
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mCF1549B5E06AC32F45F655687B8655A0724334F8 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, double ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// DoValidation (Condition.Value);
		JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B(__this, 4, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m1411C40D9BDB3FADBFF54D4E8C5C4A09623AE822(__this, NULL);
		// string str = Convert.ToString (number, number_format);
		double L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m7E8CB36CAB0CAC9E6E8D7C3CA8238A6A2D8E8D06(L_0, L_1, NULL);
		V_0 = L_2;
		// Put (str);
		String_t* L_3 = V_0;
		JsonWriter_Put_m6AF288334D8F464C4D349F32C2A7FFC13404AAC6(__this, L_3, NULL);
		// if (str.IndexOf ('.') == -1 &&
		//     str.IndexOf ('E') == -1)
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_4, ((int32_t)46), NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_6, ((int32_t)69), NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0046;
		}
	}
	{
		// writer.Write (".0");
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_8 = __this->___writer_10;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA);
	}

IL_0046:
	{
		// context.ExpectingValue = false;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_9 = __this->___context_1;
		NullCheck(L_9);
		L_9->___ExpectingValue_3 = (bool)0;
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mC7EB791A944814F863EEAA7E96E8FA7489BBA53C (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, int32_t ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.Value);
		JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B(__this, 4, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m1411C40D9BDB3FADBFF54D4E8C5C4A09623AE822(__this, NULL);
		// Put (Convert.ToString (number, number_format));
		int32_t L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m8EFAEC53F711584BCA70AC094729CA6F88BB4910(L_0, L_1, NULL);
		JsonWriter_Put_m6AF288334D8F464C4D349F32C2A7FFC13404AAC6(__this, L_2, NULL);
		// context.ExpectingValue = false;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_3 = __this->___context_1;
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = (bool)0;
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m129EF61C04825B6630A094DD2D9A2BC0D0C18C94 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, int64_t ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.Value);
		JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B(__this, 4, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m1411C40D9BDB3FADBFF54D4E8C5C4A09623AE822(__this, NULL);
		// Put (Convert.ToString (number, number_format));
		int64_t L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_mF003FE14E8D6095D655814A1DB1CA3D8C43DCF56(L_0, L_1, NULL);
		JsonWriter_Put_m6AF288334D8F464C4D349F32C2A7FFC13404AAC6(__this, L_2, NULL);
		// context.ExpectingValue = false;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_3 = __this->___context_1;
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = (bool)0;
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mACDBEDE6C28A31B52469A5B83A376AA35E5D7460 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.Value);
		JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B(__this, 4, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m1411C40D9BDB3FADBFF54D4E8C5C4A09623AE822(__this, NULL);
		// if (str == null)
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// Put ("null");
		JsonWriter_Put_m6AF288334D8F464C4D349F32C2A7FFC13404AAC6(__this, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		goto IL_0024;
	}

IL_001d:
	{
		// PutString (str);
		String_t* L_1 = ___str0;
		JsonWriter_PutString_mB3B4DAEA9710B0F8061B76F09CF74EAD2FB80305(__this, L_1, NULL);
	}

IL_0024:
	{
		// context.ExpectingValue = false;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_2 = __this->___context_1;
		NullCheck(L_2);
		L_2->___ExpectingValue_3 = (bool)0;
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m553DA91F6BC75B5DFC90E15332D8DA59428F27EC (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, uint64_t ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.Value);
		JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B(__this, 4, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m1411C40D9BDB3FADBFF54D4E8C5C4A09623AE822(__this, NULL);
		// Put (Convert.ToString (number, number_format));
		uint64_t L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m7DC566A684B01894703BF5DD80425842A7B1DF6C(L_0, L_1, NULL);
		JsonWriter_Put_m6AF288334D8F464C4D349F32C2A7FFC13404AAC6(__this, L_2, NULL);
		// context.ExpectingValue = false;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_3 = __this->___context_1;
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = (bool)0;
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_m869105435D1EE5BAA4E1C344A5D61ABE7E7495B8 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_mDF1BA36BB9B3203CE81EEA79DBFA9DFF34B8CFBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mEBB8CF1BDA8FD4ADC74D9863812E5A599B3188DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m3F0C49B15DB918205286F0376A04E4C3D784C4FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.InArray);
		JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B(__this, 0, NULL);
		// PutNewline (false);
		JsonWriter_PutNewline_mE36D22231B5E68244183A2966E910A4DA497AD59(__this, (bool)0, NULL);
		// ctx_stack.Pop ();
		Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* L_0 = __this->___ctx_stack_2;
		NullCheck(L_0);
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_1;
		L_1 = Stack_1_Pop_mEBB8CF1BDA8FD4ADC74D9863812E5A599B3188DE(L_0, Stack_1_Pop_mEBB8CF1BDA8FD4ADC74D9863812E5A599B3188DE_RuntimeMethod_var);
		// if (ctx_stack.Count == 1)
		Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* L_2 = __this->___ctx_stack_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_get_Count_m3F0C49B15DB918205286F0376A04E4C3D784C4FD_inline(L_2, Stack_1_get_Count_m3F0C49B15DB918205286F0376A04E4C3D784C4FD_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// has_reached_end = true;
		__this->___has_reached_end_3 = (bool)1;
		goto IL_004e;
	}

IL_0031:
	{
		// context = ctx_stack.Peek ();
		Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* L_4 = __this->___ctx_stack_2;
		NullCheck(L_4);
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_5;
		L_5 = Stack_1_Peek_mDF1BA36BB9B3203CE81EEA79DBFA9DFF34B8CFBA(L_4, Stack_1_Peek_mDF1BA36BB9B3203CE81EEA79DBFA9DFF34B8CFBA_RuntimeMethod_var);
		__this->___context_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_5);
		// context.ExpectingValue = false;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_6 = __this->___context_1;
		NullCheck(L_6);
		L_6->___ExpectingValue_3 = (bool)0;
	}

IL_004e:
	{
		// Unindent ();
		JsonWriter_Unindent_mB61C70BD0FE7F41D1A50DD3397CF90D31CF5BF8F(__this, NULL);
		// Put ("]");
		JsonWriter_Put_m6AF288334D8F464C4D349F32C2A7FFC13404AAC6(__this, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_mD8B65FFC8626C58FB62D357B9355BD6B9ED39037 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mB8A0F2A30CD8E257DF66B2016E42679454E3E68A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.NotAProperty);
		JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B(__this, 2, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m1411C40D9BDB3FADBFF54D4E8C5C4A09623AE822(__this, NULL);
		// Put ("[");
		JsonWriter_Put_m6AF288334D8F464C4D349F32C2A7FFC13404AAC6(__this, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		// context = new WriterContext ();
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_0 = (WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7*)il2cpp_codegen_object_new(WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WriterContext__ctor_mBF2C1F02C5C6D2753DD0D06D9C14FABDD93D10ED(L_0, NULL);
		__this->___context_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_0);
		// context.InArray = true;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_1 = __this->___context_1;
		NullCheck(L_1);
		L_1->___InArray_1 = (bool)1;
		// ctx_stack.Push (context);
		Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* L_2 = __this->___ctx_stack_2;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_3 = __this->___context_1;
		NullCheck(L_2);
		Stack_1_Push_mB8A0F2A30CD8E257DF66B2016E42679454E3E68A(L_2, L_3, Stack_1_Push_mB8A0F2A30CD8E257DF66B2016E42679454E3E68A_RuntimeMethod_var);
		// Indent ();
		JsonWriter_Indent_m53063FF0A2CE8C64FE619A23541A95D0E048EBCB(__this, NULL);
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_m1885E49506C006C0B501EA8A7EEA8994DB45F858 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_mDF1BA36BB9B3203CE81EEA79DBFA9DFF34B8CFBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mEBB8CF1BDA8FD4ADC74D9863812E5A599B3188DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m3F0C49B15DB918205286F0376A04E4C3D784C4FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.InObject);
		JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B(__this, 1, NULL);
		// PutNewline (false);
		JsonWriter_PutNewline_mE36D22231B5E68244183A2966E910A4DA497AD59(__this, (bool)0, NULL);
		// ctx_stack.Pop ();
		Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* L_0 = __this->___ctx_stack_2;
		NullCheck(L_0);
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_1;
		L_1 = Stack_1_Pop_mEBB8CF1BDA8FD4ADC74D9863812E5A599B3188DE(L_0, Stack_1_Pop_mEBB8CF1BDA8FD4ADC74D9863812E5A599B3188DE_RuntimeMethod_var);
		// if (ctx_stack.Count == 1)
		Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* L_2 = __this->___ctx_stack_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_get_Count_m3F0C49B15DB918205286F0376A04E4C3D784C4FD_inline(L_2, Stack_1_get_Count_m3F0C49B15DB918205286F0376A04E4C3D784C4FD_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// has_reached_end = true;
		__this->___has_reached_end_3 = (bool)1;
		goto IL_004e;
	}

IL_0031:
	{
		// context = ctx_stack.Peek ();
		Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* L_4 = __this->___ctx_stack_2;
		NullCheck(L_4);
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_5;
		L_5 = Stack_1_Peek_mDF1BA36BB9B3203CE81EEA79DBFA9DFF34B8CFBA(L_4, Stack_1_Peek_mDF1BA36BB9B3203CE81EEA79DBFA9DFF34B8CFBA_RuntimeMethod_var);
		__this->___context_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_5);
		// context.ExpectingValue = false;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_6 = __this->___context_1;
		NullCheck(L_6);
		L_6->___ExpectingValue_3 = (bool)0;
	}

IL_004e:
	{
		// Unindent ();
		JsonWriter_Unindent_mB61C70BD0FE7F41D1A50DD3397CF90D31CF5BF8F(__this, NULL);
		// Put ("}");
		JsonWriter_Put_m6AF288334D8F464C4D349F32C2A7FFC13404AAC6(__this, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_m22EE887E3F142507760AB8898C4E3A4E8CBBBFE1 (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mB8A0F2A30CD8E257DF66B2016E42679454E3E68A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.NotAProperty);
		JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B(__this, 2, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m1411C40D9BDB3FADBFF54D4E8C5C4A09623AE822(__this, NULL);
		// Put ("{");
		JsonWriter_Put_m6AF288334D8F464C4D349F32C2A7FFC13404AAC6(__this, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		// context = new WriterContext ();
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_0 = (WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7*)il2cpp_codegen_object_new(WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WriterContext__ctor_mBF2C1F02C5C6D2753DD0D06D9C14FABDD93D10ED(L_0, NULL);
		__this->___context_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_0);
		// context.InObject = true;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_1 = __this->___context_1;
		NullCheck(L_1);
		L_1->___InObject_2 = (bool)1;
		// ctx_stack.Push (context);
		Stack_1_tCFB4139C0225DC8D9D9330F7A7A487806D9BB329* L_2 = __this->___ctx_stack_2;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_3 = __this->___context_1;
		NullCheck(L_2);
		Stack_1_Push_mB8A0F2A30CD8E257DF66B2016E42679454E3E68A(L_2, L_3, Stack_1_Push_mB8A0F2A30CD8E257DF66B2016E42679454E3E68A_RuntimeMethod_var);
		// Indent ();
		JsonWriter_Indent_m53063FF0A2CE8C64FE619A23541A95D0E048EBCB(__this, NULL);
		// }
		return;
	}
}
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_m21D1EF5178B76F70E34C0096F3E4CF917E8B480C (JsonWriter_t24935009944FD23C57250BF6CC1B44DED1DAC435* __this, String_t* ___property_name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// DoValidation (Condition.Property);
		JsonWriter_DoValidation_mB681B1BBC82BA4FDD66960F811C10D1396A3220B(__this, 3, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m1411C40D9BDB3FADBFF54D4E8C5C4A09623AE822(__this, NULL);
		// PutString (property_name);
		String_t* L_0 = ___property_name0;
		JsonWriter_PutString_mB3B4DAEA9710B0F8061B76F09CF74EAD2FB80305(__this, L_0, NULL);
		// if (pretty_print) {
		bool L_1 = __this->___pretty_print_8;
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		// if (property_name.Length > context.Padding)
		String_t* L_2 = ___property_name0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_4 = __this->___context_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Padding_4;
		if ((((int32_t)L_3) <= ((int32_t)L_5)))
		{
			goto IL_0040;
		}
	}
	{
		// context.Padding = property_name.Length;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_6 = __this->___context_1;
		String_t* L_7 = ___property_name0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		NullCheck(L_6);
		L_6->___Padding_4 = L_8;
	}

IL_0040:
	{
		// for (int i = context.Padding - property_name.Length;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_9 = __this->___context_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Padding_4;
		String_t* L_11 = ___property_name0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_10, L_12));
		goto IL_0066;
	}

IL_0055:
	{
		// writer.Write (' ');
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_13 = __this->___writer_10;
		NullCheck(L_13);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)32));
		// i >= 0; i--)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_0066:
	{
		// i >= 0; i--)
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		// writer.Write (": ");
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_16 = __this->___writer_10;
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_16, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		goto IL_0089;
	}

IL_007c:
	{
		// writer.Write (':');
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_17 = __this->___writer_10;
		NullCheck(L_17);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_17, ((int32_t)58));
	}

IL_0089:
	{
		// context.ExpectingValue = true;
		WriterContext_tE4678F28112FB4E4DA66927701B6ABD6AC2571C7* L_18 = __this->___context_1;
		NullCheck(L_18);
		L_18->___ExpectingValue_3 = (bool)1;
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
// System.Void LitJson.FsmContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmContext__ctor_m6727115353ADDC2B77DE942D8679ED032C945A22 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* __this, const RuntimeMethod* method) 
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
// System.Boolean LitJson.Lexer::get_AllowComments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_AllowComments_mE127B8980AEB483FAE7BC0397B8F12DC2113F744 (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) 
{
	{
		// get { return allow_comments; }
		bool L_0 = __this->___allow_comments_2;
		return L_0;
	}
}
// System.Void LitJson.Lexer::set_AllowComments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_set_AllowComments_m34F1833C87ADE5991A27C5075537033C2DBBF224 (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { allow_comments = value; }
		bool L_0 = ___value0;
		__this->___allow_comments_2 = L_0;
		// set { allow_comments = value; }
		return;
	}
}
// System.Boolean LitJson.Lexer::get_AllowSingleQuotedStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_AllowSingleQuotedStrings_mE980CAA0A511C0DF4B91EF5371DF344536999379 (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) 
{
	{
		// get { return allow_single_quoted_strings; }
		bool L_0 = __this->___allow_single_quoted_strings_3;
		return L_0;
	}
}
// System.Void LitJson.Lexer::set_AllowSingleQuotedStrings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_set_AllowSingleQuotedStrings_m91CF3DB803C0FF7B46193BFED1F011DEE2D978A0 (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { allow_single_quoted_strings = value; }
		bool L_0 = ___value0;
		__this->___allow_single_quoted_strings_3 = L_0;
		// set { allow_single_quoted_strings = value; }
		return;
	}
}
// System.Boolean LitJson.Lexer::get_EndOfInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_m2D53062A15EAF139239C01418891EEF98559DA3E (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) 
{
	{
		// get { return end_of_input; }
		bool L_0 = __this->___end_of_input_4;
		return L_0;
	}
}
// System.Int32 LitJson.Lexer::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_m4FE4DBE440BEF05CF0B3FFB57DF0BA07D3DB71C6 (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) 
{
	{
		// get { return token; }
		int32_t L_0 = __this->___token_12;
		return L_0;
	}
}
// System.String LitJson.Lexer::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_m51C044FBCD7254C4FC2076A0CCA326BBFB5D567C (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) 
{
	{
		// get { return string_value; }
		String_t* L_0 = __this->___string_value_11;
		return L_0;
	}
}
// System.Void LitJson.Lexer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__cctor_m9E7EB764FAE77426D2368576A9E0DC85B37DFAA4 (const RuntimeMethod* method) 
{
	{
		// PopulateFsmTables ();
		Lexer_PopulateFsmTables_m87AA12F622E8386603A7C49412C174F853186CD6(NULL);
		// }
		return;
	}
}
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_mECD890C23651871E30FF91B33DB47522549C2C30 (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Lexer (TextReader reader)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// allow_comments = true;
		__this->___allow_comments_2 = (bool)1;
		// allow_single_quoted_strings = true;
		__this->___allow_single_quoted_strings_3 = (bool)1;
		// input_buffer = 0;
		__this->___input_buffer_6 = 0;
		// string_buffer = new StringBuilder (128);
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)128), NULL);
		__this->___string_buffer_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___string_buffer_10), (void*)L_0);
		// state = 1;
		__this->___state_9 = 1;
		// end_of_input = false;
		__this->___end_of_input_4 = (bool)0;
		// this.reader = reader;
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_1 = ___reader0;
		__this->___reader_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_8), (void*)L_1);
		// fsm_context = new FsmContext ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_2 = (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949*)il2cpp_codegen_object_new(FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FsmContext__ctor_m6727115353ADDC2B77DE942D8679ED032C945A22(L_2, NULL);
		__this->___fsm_context_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fsm_context_5), (void*)L_2);
		// fsm_context.L = this;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = __this->___fsm_context_5;
		NullCheck(L_3);
		L_3->___L_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___L_2), (void*)__this);
		// }
		return;
	}
}
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_m15A8EEE787816BE6618B27E14B5516F0380C8B05 (int32_t ___digit0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___digit0;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)65))))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_004a;
			}
			case 3:
			{
				goto IL_004d;
			}
			case 4:
			{
				goto IL_0050;
			}
			case 5:
			{
				goto IL_0053;
			}
		}
	}
	{
		int32_t L_1 = ___digit0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)97))))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_004a;
			}
			case 3:
			{
				goto IL_004d;
			}
			case 4:
			{
				goto IL_0050;
			}
			case 5:
			{
				goto IL_0053;
			}
		}
	}
	{
		goto IL_0056;
	}

IL_0044:
	{
		// return 10;
		return ((int32_t)10);
	}

IL_0047:
	{
		// return 11;
		return ((int32_t)11);
	}

IL_004a:
	{
		// return 12;
		return ((int32_t)12);
	}

IL_004d:
	{
		// return 13;
		return ((int32_t)13);
	}

IL_0050:
	{
		// return 14;
		return ((int32_t)14);
	}

IL_0053:
	{
		// return 15;
		return ((int32_t)15);
	}

IL_0056:
	{
		// return digit - '0';
		int32_t L_2 = ___digit0;
		return ((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)48)));
	}
}
// System.Void LitJson.Lexer::PopulateFsmTables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_m87AA12F622E8386603A7C49412C174F853186CD6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State10_mD20BAD42D19A04C4CC4066E445AF9B745B2C8155_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State11_m7394496791E628CD4841014341DFE26D87064E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State12_m21F2715CC930035B274AFD3354BCD8C4DF26AE6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State13_mBB60E23B964848D5CD32BFB8AE34571C40164768_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State14_mACC0D81896EEBDB80CA5C375A86F1C4C3CB9FC2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State15_m50D6254DBE5ED72BFA415EBE0D500558F7FCB582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State16_mFD14872FBF79D5390877E2278908CD15061FA383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State17_mA1EDADC5408B395011CE6C6D5C2F91F7B77A1035_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State18_m625E881043BE9B3679D23551D2EEBBBC20BCE5C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State19_mEEDC75FF00F86D6167F99BE7E0CD77E7AD7FCC40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State1_mE1D4CC18357FCDD71593DCA9FB33607465581B9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State20_m34BC54B016F3C4C19B97C92C54F6857DF7A8E85F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State21_m7C32345D61DF540554F100EAF61DBCB45BA10D1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State22_mA366497048DA61CAEDB3473F4F20F6FAECB84BD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State23_m1933F34481F4635E15CA05C548E8EDF7BA499E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State24_m6E37544DE90FECD7F70281C1005AF431BFB936DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State25_mA8FC8BE95D9F48E85C08FC7D3116FD32CF35255E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State26_mD40250CDA3A58435831966388F2EB7E2AF5B8332_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State27_m8917409C60853C0A7C1D34A7197FEC4D084AD0F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State28_m80FD6ECAF458CB8FC729312341EC2EE2FAD76339_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State2_m503B3FD14B4944DEB48801B9336877C850A874ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State3_m8C69C28E96ED765E88AB2B20F4E253A840DAC716_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State4_m87426942C2AA9228B403F42C03AEB6247D4E9946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State5_m0EE355365B40185FDE83FD441994F6C5F1ACCD85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State6_m610FC1EFDA8A4D44966A571562903B131830950D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State7_mC5632A29061661F483CC8633DFFDDB4CA029569F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State8_mA27ECF5502BCC0BC629259BD77FAEF86BC46086A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State9_mE8BCDEF35B8B55ACED025FB0216E59DEF08C6B92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_6_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fsm_handler_table = new StateHandler[28] {
		//     State1,
		//     State2,
		//     State3,
		//     State4,
		//     State5,
		//     State6,
		//     State7,
		//     State8,
		//     State9,
		//     State10,
		//     State11,
		//     State12,
		//     State13,
		//     State14,
		//     State15,
		//     State16,
		//     State17,
		//     State18,
		//     State19,
		//     State20,
		//     State21,
		//     State22,
		//     State23,
		//     State24,
		//     State25,
		//     State26,
		//     State27,
		//     State28
		// };
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_0 = (StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595*)(StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595*)SZArrayNew(StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_1 = L_0;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_2 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_2, NULL, (intptr_t)((void*)Lexer_State1_mE1D4CC18357FCDD71593DCA9FB33607465581B9F_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_2);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_3 = L_1;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_4 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_4, NULL, (intptr_t)((void*)Lexer_State2_m503B3FD14B4944DEB48801B9336877C850A874ED_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_4);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_5 = L_3;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_6 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_6, NULL, (intptr_t)((void*)Lexer_State3_m8C69C28E96ED765E88AB2B20F4E253A840DAC716_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_6);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_7 = L_5;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_8 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_8, NULL, (intptr_t)((void*)Lexer_State4_m87426942C2AA9228B403F42C03AEB6247D4E9946_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_8);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_9 = L_7;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_10 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_10, NULL, (intptr_t)((void*)Lexer_State5_m0EE355365B40185FDE83FD441994F6C5F1ACCD85_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_10);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_11 = L_9;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_12 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_12, NULL, (intptr_t)((void*)Lexer_State6_m610FC1EFDA8A4D44966A571562903B131830950D_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_12);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_13 = L_11;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_14 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_14, NULL, (intptr_t)((void*)Lexer_State7_mC5632A29061661F483CC8633DFFDDB4CA029569F_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_14);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_15 = L_13;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_16 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_16, NULL, (intptr_t)((void*)Lexer_State8_mA27ECF5502BCC0BC629259BD77FAEF86BC46086A_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_16);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_17 = L_15;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_18 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_18, NULL, (intptr_t)((void*)Lexer_State9_mE8BCDEF35B8B55ACED025FB0216E59DEF08C6B92_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_18);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_19 = L_17;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_20 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_20, NULL, (intptr_t)((void*)Lexer_State10_mD20BAD42D19A04C4CC4066E445AF9B745B2C8155_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_20);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_21 = L_19;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_22 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_22, NULL, (intptr_t)((void*)Lexer_State11_m7394496791E628CD4841014341DFE26D87064E6D_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_22);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_23 = L_21;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_24 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_24, NULL, (intptr_t)((void*)Lexer_State12_m21F2715CC930035B274AFD3354BCD8C4DF26AE6A_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_24);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_25 = L_23;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_26 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_26, NULL, (intptr_t)((void*)Lexer_State13_mBB60E23B964848D5CD32BFB8AE34571C40164768_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_26);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_27 = L_25;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_28 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_28, NULL, (intptr_t)((void*)Lexer_State14_mACC0D81896EEBDB80CA5C375A86F1C4C3CB9FC2D_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_28);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_29 = L_27;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_30 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_30, NULL, (intptr_t)((void*)Lexer_State15_m50D6254DBE5ED72BFA415EBE0D500558F7FCB582_RuntimeMethod_var), NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_30);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_31 = L_29;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_32 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_32, NULL, (intptr_t)((void*)Lexer_State16_mFD14872FBF79D5390877E2278908CD15061FA383_RuntimeMethod_var), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_32);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_33 = L_31;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_34 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_34, NULL, (intptr_t)((void*)Lexer_State17_mA1EDADC5408B395011CE6C6D5C2F91F7B77A1035_RuntimeMethod_var), NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_34);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_35 = L_33;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_36 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_36, NULL, (intptr_t)((void*)Lexer_State18_m625E881043BE9B3679D23551D2EEBBBC20BCE5C9_RuntimeMethod_var), NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_36);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_37 = L_35;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_38 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_38, NULL, (intptr_t)((void*)Lexer_State19_mEEDC75FF00F86D6167F99BE7E0CD77E7AD7FCC40_RuntimeMethod_var), NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_38);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_39 = L_37;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_40 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_40, NULL, (intptr_t)((void*)Lexer_State20_m34BC54B016F3C4C19B97C92C54F6857DF7A8E85F_RuntimeMethod_var), NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_40);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_41 = L_39;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_42 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_42, NULL, (intptr_t)((void*)Lexer_State21_m7C32345D61DF540554F100EAF61DBCB45BA10D1E_RuntimeMethod_var), NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_42);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_43 = L_41;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_44 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_44, NULL, (intptr_t)((void*)Lexer_State22_mA366497048DA61CAEDB3473F4F20F6FAECB84BD7_RuntimeMethod_var), NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_44);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_45 = L_43;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_46 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_46, NULL, (intptr_t)((void*)Lexer_State23_m1933F34481F4635E15CA05C548E8EDF7BA499E8D_RuntimeMethod_var), NULL);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_46);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_47 = L_45;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_48 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_48, NULL, (intptr_t)((void*)Lexer_State24_m6E37544DE90FECD7F70281C1005AF431BFB936DB_RuntimeMethod_var), NULL);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_48);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_49 = L_47;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_50 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_50, NULL, (intptr_t)((void*)Lexer_State25_mA8FC8BE95D9F48E85C08FC7D3116FD32CF35255E_RuntimeMethod_var), NULL);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_50);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_51 = L_49;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_52 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_52, NULL, (intptr_t)((void*)Lexer_State26_mD40250CDA3A58435831966388F2EB7E2AF5B8332_RuntimeMethod_var), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_52);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_53 = L_51;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_54 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_54, NULL, (intptr_t)((void*)Lexer_State27_m8917409C60853C0A7C1D34A7197FEC4D084AD0F2_RuntimeMethod_var), NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_54);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_55 = L_53;
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_56 = (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)il2cpp_codegen_object_new(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF(L_56, NULL, (intptr_t)((void*)Lexer_State28_m80FD6ECAF458CB8FC729312341EC2EE2FAD76339_RuntimeMethod_var), NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*)L_56);
		il2cpp_codegen_runtime_class_init_inline(Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var);
		((Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var))->___fsm_handler_table_1 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&((Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var))->___fsm_handler_table_1), (void*)L_55);
		// fsm_return_table = new int[28] {
		//     (int) ParserToken.Char,
		//     0,
		//     (int) ParserToken.Number,
		//     (int) ParserToken.Number,
		//     0,
		//     (int) ParserToken.Number,
		//     0,
		//     (int) ParserToken.Number,
		//     0,
		//     0,
		//     (int) ParserToken.True,
		//     0,
		//     0,
		//     0,
		//     (int) ParserToken.False,
		//     0,
		//     0,
		//     (int) ParserToken.Null,
		//     (int) ParserToken.CharSeq,
		//     (int) ParserToken.Char,
		//     0,
		//     0,
		//     (int) ParserToken.CharSeq,
		//     (int) ParserToken.Char,
		//     0,
		//     0,
		//     0,
		//     0
		// };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = L_57;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_59 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_58, L_59, NULL);
		((Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var))->___fsm_return_table_0 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&((Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var))->___fsm_return_table_0), (void*)L_58);
		// }
		return;
	}
}
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_m6854BB99C40444F9BF2E0D853364590FA461A286 (int32_t ___esc_char0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___esc_char0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)92))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = ___esc_char0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)39))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___esc_char0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_3 = ___esc_char0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_0044;
		}
	}
	{
		goto IL_0059;
	}

IL_0016:
	{
		int32_t L_4 = ___esc_char0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)47))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_5 = ___esc_char0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)92))))
		{
			goto IL_0044;
		}
	}
	{
		goto IL_0059;
	}

IL_0022:
	{
		int32_t L_6 = ___esc_char0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)102))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = ___esc_char0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)98))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_8 = ___esc_char0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)102))))
		{
			goto IL_0056;
		}
	}
	{
		goto IL_0059;
	}

IL_0033:
	{
		int32_t L_9 = ___esc_char0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)110))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_10 = ___esc_char0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)114))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_11 = ___esc_char0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)116))))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0059;
	}

IL_0044:
	{
		// return Convert.ToChar (esc_char);
		int32_t L_12 = ___esc_char0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_13;
		L_13 = Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1(L_12, NULL);
		return L_13;
	}

IL_004b:
	{
		// return '\n';
		return ((int32_t)10);
	}

IL_004e:
	{
		// return '\t';
		return ((int32_t)9);
	}

IL_0051:
	{
		// return '\r';
		return ((int32_t)13);
	}

IL_0054:
	{
		// return '\b';
		return 8;
	}

IL_0056:
	{
		// return '\f';
		return ((int32_t)12);
	}

IL_0059:
	{
		// return '?';
		return ((int32_t)63);
	}
}
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State1_mE1D4CC18357FCDD71593DCA9FB33607465581B9F (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_01d9;
	}

IL_0005:
	{
		// if (ctx.L.input_char == ' ' ||
		//     ctx.L.input_char >= '\t' && ctx.L.input_char <= '\r')
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_01d9;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_0038;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)13))))
		{
			goto IL_01d9;
		}
	}

IL_0038:
	{
		// if (ctx.L.input_char >= '1' && ctx.L.input_char <= '9') {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)49))))
		{
			goto IL_007c;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_13 = L_12->___L_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char_7;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)57))))
		{
			goto IL_007c;
		}
	}
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_16 = L_15->___L_2;
		NullCheck(L_16);
		StringBuilder_t* L_17 = L_16->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_19 = L_18->___L_2;
		NullCheck(L_19);
		int32_t L_20 = L_19->___input_char_7;
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, ((int32_t)(uint16_t)L_20), NULL);
		// ctx.NextState = 3;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->___NextState_1 = 3;
		// return true;
		return (bool)1;
	}

IL_007c:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_23 = ___ctx0;
		NullCheck(L_23);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_24 = L_23->___L_2;
		NullCheck(L_24);
		int32_t L_25 = L_24->___input_char_7;
		V_0 = L_25;
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)91))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)39))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)34))))
		{
			goto IL_0106;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)39))))
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01d7;
	}

IL_00a4:
	{
		int32_t L_30 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)44))))
		{
			case 0:
			{
				goto IL_0117;
			}
			case 1:
			{
				goto IL_0127;
			}
			case 2:
			{
				goto IL_01d7;
			}
			case 3:
			{
				goto IL_01be;
			}
			case 4:
			{
				goto IL_014d;
			}
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)58))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)91))))
		{
			goto IL_0117;
		}
	}
	{
		goto IL_01d7;
	}

IL_00d0:
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) > ((int32_t)((int32_t)110))))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)93))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_35 = V_0;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)102))))
		{
			goto IL_0173;
		}
	}
	{
		int32_t L_36 = V_0;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)110))))
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01d7;
	}

IL_00ef:
	{
		int32_t L_37 = V_0;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)116))))
		{
			goto IL_0187;
		}
	}
	{
		int32_t L_38 = V_0;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)123))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)125))))
		{
			goto IL_0117;
		}
	}
	{
		goto IL_01d7;
	}

IL_0106:
	{
		// ctx.NextState = 19;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_40 = ___ctx0;
		NullCheck(L_40);
		L_40->___NextState_1 = ((int32_t)19);
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_41 = ___ctx0;
		NullCheck(L_41);
		L_41->___Return_0 = (bool)1;
		// return true;
		return (bool)1;
	}

IL_0117:
	{
		// ctx.NextState = 1;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_42 = ___ctx0;
		NullCheck(L_42);
		L_42->___NextState_1 = 1;
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_43 = ___ctx0;
		NullCheck(L_43);
		L_43->___Return_0 = (bool)1;
		// return true;
		return (bool)1;
	}

IL_0127:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_44 = ___ctx0;
		NullCheck(L_44);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_45 = L_44->___L_2;
		NullCheck(L_45);
		StringBuilder_t* L_46 = L_45->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_47 = ___ctx0;
		NullCheck(L_47);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_48 = L_47->___L_2;
		NullCheck(L_48);
		int32_t L_49 = L_48->___input_char_7;
		NullCheck(L_46);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_46, ((int32_t)(uint16_t)L_49), NULL);
		// ctx.NextState = 2;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_51 = ___ctx0;
		NullCheck(L_51);
		L_51->___NextState_1 = 2;
		// return true;
		return (bool)1;
	}

IL_014d:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_52 = ___ctx0;
		NullCheck(L_52);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_53 = L_52->___L_2;
		NullCheck(L_53);
		StringBuilder_t* L_54 = L_53->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_55 = ___ctx0;
		NullCheck(L_55);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_56 = L_55->___L_2;
		NullCheck(L_56);
		int32_t L_57 = L_56->___input_char_7;
		NullCheck(L_54);
		StringBuilder_t* L_58;
		L_58 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_54, ((int32_t)(uint16_t)L_57), NULL);
		// ctx.NextState = 4;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_59 = ___ctx0;
		NullCheck(L_59);
		L_59->___NextState_1 = 4;
		// return true;
		return (bool)1;
	}

IL_0173:
	{
		// ctx.NextState = 12;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_60 = ___ctx0;
		NullCheck(L_60);
		L_60->___NextState_1 = ((int32_t)12);
		// return true;
		return (bool)1;
	}

IL_017d:
	{
		// ctx.NextState = 16;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_61 = ___ctx0;
		NullCheck(L_61);
		L_61->___NextState_1 = ((int32_t)16);
		// return true;
		return (bool)1;
	}

IL_0187:
	{
		// ctx.NextState = 9;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_62 = ___ctx0;
		NullCheck(L_62);
		L_62->___NextState_1 = ((int32_t)9);
		// return true;
		return (bool)1;
	}

IL_0191:
	{
		// if (! ctx.L.allow_single_quoted_strings)
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_63 = ___ctx0;
		NullCheck(L_63);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_64 = L_63->___L_2;
		NullCheck(L_64);
		bool L_65 = L_64->___allow_single_quoted_strings_3;
		if (L_65)
		{
			goto IL_01a0;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_01a0:
	{
		// ctx.L.input_char = '"';
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_66 = ___ctx0;
		NullCheck(L_66);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_67 = L_66->___L_2;
		NullCheck(L_67);
		L_67->___input_char_7 = ((int32_t)34);
		// ctx.NextState = 23;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_68 = ___ctx0;
		NullCheck(L_68);
		L_68->___NextState_1 = ((int32_t)23);
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_69 = ___ctx0;
		NullCheck(L_69);
		L_69->___Return_0 = (bool)1;
		// return true;
		return (bool)1;
	}

IL_01be:
	{
		// if (! ctx.L.allow_comments)
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_70 = ___ctx0;
		NullCheck(L_70);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_71 = L_70->___L_2;
		NullCheck(L_71);
		bool L_72 = L_71->___allow_comments_2;
		if (L_72)
		{
			goto IL_01cd;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_01cd:
	{
		// ctx.NextState = 25;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_73 = ___ctx0;
		NullCheck(L_73);
		L_73->___NextState_1 = ((int32_t)25);
		// return true;
		return (bool)1;
	}

IL_01d7:
	{
		// return false;
		return (bool)0;
	}

IL_01d9:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_74 = ___ctx0;
		NullCheck(L_74);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_75 = L_74->___L_2;
		NullCheck(L_75);
		bool L_76;
		L_76 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_75, NULL);
		if (L_76)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State2_m503B3FD14B4944DEB48801B9336877C850A874ED (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// if (ctx.L.input_char >= '1' && ctx.L.input_char<= '9') {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)49))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_10 = L_9->___L_2;
		NullCheck(L_10);
		StringBuilder_t* L_11 = L_10->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_13 = L_12->___L_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char_7;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)(uint16_t)L_14), NULL);
		// ctx.NextState = 3;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_16 = ___ctx0;
		NullCheck(L_16);
		L_16->___NextState_1 = 3;
		// return true;
		return (bool)1;
	}

IL_0050:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_18 = L_17->___L_2;
		NullCheck(L_18);
		int32_t L_19 = L_18->___input_char_7;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0085;
		}
	}
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_20 = ___ctx0;
		NullCheck(L_20);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_21 = L_20->___L_2;
		NullCheck(L_21);
		StringBuilder_t* L_22 = L_21->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_23 = ___ctx0;
		NullCheck(L_23);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_24 = L_23->___L_2;
		NullCheck(L_24);
		int32_t L_25 = L_24->___input_char_7;
		NullCheck(L_22);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)(uint16_t)L_25), NULL);
		// ctx.NextState = 4;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_27 = ___ctx0;
		NullCheck(L_27);
		L_27->___NextState_1 = 4;
		// return true;
		return (bool)1;
	}

IL_0085:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State3_m8C69C28E96ED765E88AB2B20F4E253A840DAC716 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_011c;
	}

IL_0005:
	{
		// if (ctx.L.input_char >= '0' && ctx.L.input_char <= '9') {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0045;
		}
	}
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_7 = L_6->___L_2;
		NullCheck(L_7);
		StringBuilder_t* L_8 = L_7->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)(uint16_t)L_11), NULL);
		// continue;
		goto IL_011c;
	}

IL_0045:
	{
		// if (ctx.L.input_char == ' ' ||
		//     ctx.L.input_char >= '\t' && ctx.L.input_char <= '\r') {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_14 = L_13->___L_2;
		NullCheck(L_14);
		int32_t L_15 = L_14->___input_char_7;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0072;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_17 = L_16->___L_2;
		NullCheck(L_17);
		int32_t L_18 = L_17->___input_char_7;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0082;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_20 = L_19->___L_2;
		NullCheck(L_20);
		int32_t L_21 = L_20->___input_char_7;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_0082;
		}
	}

IL_0072:
	{
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_0082:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)69))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)44))))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)46))))
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)69))))
		{
			goto IL_00f4;
		}
	}
	{
		goto IL_011a;
	}

IL_00a4:
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)101))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_33 = V_0;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_011a;
		}
	}

IL_00b3:
	{
		// ctx.L.UngetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_34 = ___ctx0;
		NullCheck(L_34);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_35 = L_34->___L_2;
		NullCheck(L_35);
		Lexer_UngetChar_mD6529748542F221E31C69008F3FE0759EA4960AE(L_35, NULL);
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_36 = ___ctx0;
		NullCheck(L_36);
		L_36->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_37 = ___ctx0;
		NullCheck(L_37);
		L_37->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_00ce:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_38 = ___ctx0;
		NullCheck(L_38);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_39 = L_38->___L_2;
		NullCheck(L_39);
		StringBuilder_t* L_40 = L_39->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_41 = ___ctx0;
		NullCheck(L_41);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_42 = L_41->___L_2;
		NullCheck(L_42);
		int32_t L_43 = L_42->___input_char_7;
		NullCheck(L_40);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_40, ((int32_t)(uint16_t)L_43), NULL);
		// ctx.NextState = 5;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_45 = ___ctx0;
		NullCheck(L_45);
		L_45->___NextState_1 = 5;
		// return true;
		return (bool)1;
	}

IL_00f4:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_46 = ___ctx0;
		NullCheck(L_46);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_47 = L_46->___L_2;
		NullCheck(L_47);
		StringBuilder_t* L_48 = L_47->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_49 = ___ctx0;
		NullCheck(L_49);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_50 = L_49->___L_2;
		NullCheck(L_50);
		int32_t L_51 = L_50->___input_char_7;
		NullCheck(L_48);
		StringBuilder_t* L_52;
		L_52 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_48, ((int32_t)(uint16_t)L_51), NULL);
		// ctx.NextState = 7;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_53 = ___ctx0;
		NullCheck(L_53);
		L_53->___NextState_1 = 7;
		// return true;
		return (bool)1;
	}

IL_011a:
	{
		// return false;
		return (bool)0;
	}

IL_011c:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_54 = ___ctx0;
		NullCheck(L_54);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_55 = L_54->___L_2;
		NullCheck(L_55);
		bool L_56;
		L_56 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_55, NULL);
		if (L_56)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State4_m87426942C2AA9228B403F42C03AEB6247D4E9946 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// if (ctx.L.input_char == ' ' ||
		//     ctx.L.input_char >= '\t' && ctx.L.input_char <= '\r') {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)32))))
		{
			goto IL_0039;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)9))))
		{
			goto IL_0049;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)13))))
		{
			goto IL_0049;
		}
	}

IL_0039:
	{
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_12 = ___ctx0;
		NullCheck(L_12);
		L_12->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_13 = ___ctx0;
		NullCheck(L_13);
		L_13->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_0049:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_15 = L_14->___L_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char_7;
		V_0 = L_16;
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) > ((int32_t)((int32_t)69))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)44))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)46))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)69))))
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00e1;
	}

IL_006b:
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)93))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)101))))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00e1;
		}
	}

IL_007a:
	{
		// ctx.L.UngetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_25 = L_24->___L_2;
		NullCheck(L_25);
		Lexer_UngetChar_mD6529748542F221E31C69008F3FE0759EA4960AE(L_25, NULL);
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_26 = ___ctx0;
		NullCheck(L_26);
		L_26->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_27 = ___ctx0;
		NullCheck(L_27);
		L_27->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_0095:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_28 = ___ctx0;
		NullCheck(L_28);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_29 = L_28->___L_2;
		NullCheck(L_29);
		StringBuilder_t* L_30 = L_29->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_31 = ___ctx0;
		NullCheck(L_31);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_32 = L_31->___L_2;
		NullCheck(L_32);
		int32_t L_33 = L_32->___input_char_7;
		NullCheck(L_30);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_30, ((int32_t)(uint16_t)L_33), NULL);
		// ctx.NextState = 5;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_35 = ___ctx0;
		NullCheck(L_35);
		L_35->___NextState_1 = 5;
		// return true;
		return (bool)1;
	}

IL_00bb:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_36 = ___ctx0;
		NullCheck(L_36);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_37 = L_36->___L_2;
		NullCheck(L_37);
		StringBuilder_t* L_38 = L_37->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_39 = ___ctx0;
		NullCheck(L_39);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_40 = L_39->___L_2;
		NullCheck(L_40);
		int32_t L_41 = L_40->___input_char_7;
		NullCheck(L_38);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_38, ((int32_t)(uint16_t)L_41), NULL);
		// ctx.NextState = 7;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_43 = ___ctx0;
		NullCheck(L_43);
		L_43->___NextState_1 = 7;
		// return true;
		return (bool)1;
	}

IL_00e1:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State5_m0EE355365B40185FDE83FD441994F6C5F1ACCD85 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// if (ctx.L.input_char >= '0' && ctx.L.input_char <= '9') {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_10 = L_9->___L_2;
		NullCheck(L_10);
		StringBuilder_t* L_11 = L_10->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_13 = L_12->___L_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char_7;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)(uint16_t)L_14), NULL);
		// ctx.NextState = 6;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_16 = ___ctx0;
		NullCheck(L_16);
		L_16->___NextState_1 = 6;
		// return true;
		return (bool)1;
	}

IL_0050:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State6_m610FC1EFDA8A4D44966A571562903B131830950D (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_00f1;
	}

IL_0005:
	{
		// if (ctx.L.input_char >= '0' && ctx.L.input_char <= '9') {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0045;
		}
	}
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_7 = L_6->___L_2;
		NullCheck(L_7);
		StringBuilder_t* L_8 = L_7->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)(uint16_t)L_11), NULL);
		// continue;
		goto IL_00f1;
	}

IL_0045:
	{
		// if (ctx.L.input_char == ' ' ||
		//     ctx.L.input_char >= '\t' && ctx.L.input_char <= '\r') {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_14 = L_13->___L_2;
		NullCheck(L_14);
		int32_t L_15 = L_14->___input_char_7;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0072;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_17 = L_16->___L_2;
		NullCheck(L_17);
		int32_t L_18 = L_17->___input_char_7;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0082;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_20 = L_19->___L_2;
		NullCheck(L_20);
		int32_t L_21 = L_20->___input_char_7;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_0082;
		}
	}

IL_0072:
	{
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_0082:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)69))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)44))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)69))))
		{
			goto IL_00c9;
		}
	}
	{
		goto IL_00ef;
	}

IL_009f:
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)93))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)101))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00ef;
		}
	}

IL_00ae:
	{
		// ctx.L.UngetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_33 = ___ctx0;
		NullCheck(L_33);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_34 = L_33->___L_2;
		NullCheck(L_34);
		Lexer_UngetChar_mD6529748542F221E31C69008F3FE0759EA4960AE(L_34, NULL);
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_35 = ___ctx0;
		NullCheck(L_35);
		L_35->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_36 = ___ctx0;
		NullCheck(L_36);
		L_36->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_00c9:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_37 = ___ctx0;
		NullCheck(L_37);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_38 = L_37->___L_2;
		NullCheck(L_38);
		StringBuilder_t* L_39 = L_38->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_40 = ___ctx0;
		NullCheck(L_40);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_41 = L_40->___L_2;
		NullCheck(L_41);
		int32_t L_42 = L_41->___input_char_7;
		NullCheck(L_39);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_39, ((int32_t)(uint16_t)L_42), NULL);
		// ctx.NextState = 7;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_44 = ___ctx0;
		NullCheck(L_44);
		L_44->___NextState_1 = 7;
		// return true;
		return (bool)1;
	}

IL_00ef:
	{
		// return false;
		return (bool)0;
	}

IL_00f1:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_45 = ___ctx0;
		NullCheck(L_45);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_46 = L_45->___L_2;
		NullCheck(L_46);
		bool L_47;
		L_47 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_46, NULL);
		if (L_47)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State7_mC5632A29061661F483CC8633DFFDDB4CA029569F (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// if (ctx.L.input_char >= '0' && ctx.L.input_char<= '9') {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_10 = L_9->___L_2;
		NullCheck(L_10);
		StringBuilder_t* L_11 = L_10->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_13 = L_12->___L_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char_7;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)(uint16_t)L_14), NULL);
		// ctx.NextState = 8;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_16 = ___ctx0;
		NullCheck(L_16);
		L_16->___NextState_1 = 8;
		// return true;
		return (bool)1;
	}

IL_0050:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_18 = L_17->___L_2;
		NullCheck(L_18);
		int32_t L_19 = L_18->___input_char_7;
		V_0 = L_19;
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)43))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_008c;
		}
	}

IL_0066:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_22 = ___ctx0;
		NullCheck(L_22);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_23 = L_22->___L_2;
		NullCheck(L_23);
		StringBuilder_t* L_24 = L_23->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_25 = ___ctx0;
		NullCheck(L_25);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_26 = L_25->___L_2;
		NullCheck(L_26);
		int32_t L_27 = L_26->___input_char_7;
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_24, ((int32_t)(uint16_t)L_27), NULL);
		// ctx.NextState = 8;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_29 = ___ctx0;
		NullCheck(L_29);
		L_29->___NextState_1 = 8;
		// return true;
		return (bool)1;
	}

IL_008c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State8_mA27ECF5502BCC0BC629259BD77FAEF86BC46086A (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_00b7;
	}

IL_0005:
	{
		// if (ctx.L.input_char >= '0' && ctx.L.input_char<= '9') {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0042;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0042;
		}
	}
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_7 = L_6->___L_2;
		NullCheck(L_7);
		StringBuilder_t* L_8 = L_7->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)(uint16_t)L_11), NULL);
		// continue;
		goto IL_00b7;
	}

IL_0042:
	{
		// if (ctx.L.input_char == ' ' ||
		//     ctx.L.input_char >= '\t' && ctx.L.input_char<= '\r') {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_14 = L_13->___L_2;
		NullCheck(L_14);
		int32_t L_15 = L_14->___input_char_7;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_006f;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_17 = L_16->___L_2;
		NullCheck(L_17);
		int32_t L_18 = L_17->___input_char_7;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_007f;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_20 = L_19->___L_2;
		NullCheck(L_20);
		int32_t L_21 = L_20->___input_char_7;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_007f;
		}
	}

IL_006f:
	{
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_007f:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)44))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)93))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00b5;
		}
	}

IL_009a:
	{
		// ctx.L.UngetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_30 = ___ctx0;
		NullCheck(L_30);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_31 = L_30->___L_2;
		NullCheck(L_31);
		Lexer_UngetChar_mD6529748542F221E31C69008F3FE0759EA4960AE(L_31, NULL);
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_32 = ___ctx0;
		NullCheck(L_32);
		L_32->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_33 = ___ctx0;
		NullCheck(L_33);
		L_33->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_00b5:
	{
		// return false;
		return (bool)0;
	}

IL_00b7:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_34 = ___ctx0;
		NullCheck(L_34);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_35 = L_34->___L_2;
		NullCheck(L_35);
		bool L_36;
		L_36 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_35, NULL);
		if (L_36)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State9_mE8BCDEF35B8B55ACED025FB0216E59DEF08C6B92 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0025;
		}
	}
	{
		// ctx.NextState = 10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)10);
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State10_mD20BAD42D19A04C4CC4066E445AF9B745B2C8155 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0025;
		}
	}
	{
		// ctx.NextState = 11;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)11);
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State11_m7394496791E628CD4841014341DFE26D87064E6D (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_002b;
		}
	}
	{
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_002b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State12_m21F2715CC930035B274AFD3354BCD8C4DF26AE6A (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0025;
		}
	}
	{
		// ctx.NextState = 13;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)13);
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State13_mBB60E23B964848D5CD32BFB8AE34571C40164768 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0025;
		}
	}
	{
		// ctx.NextState = 14;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)14);
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State14_mACC0D81896EEBDB80CA5C375A86F1C4C3CB9FC2D (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0025;
		}
	}
	{
		// ctx.NextState = 15;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)15);
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State15_m50D6254DBE5ED72BFA415EBE0D500558F7FCB582 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_002b;
		}
	}
	{
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_002b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State16_mFD14872FBF79D5390877E2278908CD15061FA383 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0025;
		}
	}
	{
		// ctx.NextState = 17;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)17);
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State17_mA1EDADC5408B395011CE6C6D5C2F91F7B77A1035 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0025;
		}
	}
	{
		// ctx.NextState = 18;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)18);
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State18_m625E881043BE9B3679D23551D2EEBBBC20BCE5C9 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_002b;
		}
	}
	{
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_002b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State19_mEEDC75FF00F86D6167F99BE7E0CD77E7AD7FCC40 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0065;
	}

IL_0002:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)34))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0048;
	}

IL_001a:
	{
		// ctx.L.UngetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_6 = L_5->___L_2;
		NullCheck(L_6);
		Lexer_UngetChar_mD6529748542F221E31C69008F3FE0759EA4960AE(L_6, NULL);
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___Return_0 = (bool)1;
		// ctx.NextState = 20;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->___NextState_1 = ((int32_t)20);
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// ctx.StateStack = 19;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->___StateStack_3 = ((int32_t)19);
		// ctx.NextState = 21;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->___NextState_1 = ((int32_t)21);
		// return true;
		return (bool)1;
	}

IL_0048:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_12 = L_11->___L_2;
		NullCheck(L_12);
		StringBuilder_t* L_13 = L_12->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_15 = L_14->___L_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char_7;
		NullCheck(L_13);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)(uint16_t)L_16), NULL);
	}

IL_0065:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_19 = L_18->___L_2;
		NullCheck(L_19);
		bool L_20;
		L_20 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_19, NULL);
		if (L_20)
		{
			goto IL_0002;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State20_m34BC54B016F3C4C19B97C92C54F6857DF7A8E85F (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_002b;
		}
	}
	{
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_002b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State21_m7C32345D61DF540554F100EAF61DBCB45BA10D1E (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)92))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)39))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)39))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)47))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)92))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_003a:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)102))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)98))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)102))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_004b:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)110))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_16 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_0075;
			}
			case 1:
			{
				goto IL_00a4;
			}
			case 2:
			{
				goto IL_0075;
			}
			case 3:
			{
				goto IL_006b;
			}
		}
	}
	{
		goto IL_00a4;
	}

IL_006b:
	{
		// ctx.NextState = 22;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_17 = ___ctx0;
		NullCheck(L_17);
		L_17->___NextState_1 = ((int32_t)22);
		// return true;
		return (bool)1;
	}

IL_0075:
	{
		// ctx.L.string_buffer.Append (
		//     ProcessEscChar (ctx.L.input_char));
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_19 = L_18->___L_2;
		NullCheck(L_19);
		StringBuilder_t* L_20 = L_19->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_21 = ___ctx0;
		NullCheck(L_21);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_22 = L_21->___L_2;
		NullCheck(L_22);
		int32_t L_23 = L_22->___input_char_7;
		il2cpp_codegen_runtime_class_init_inline(Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var);
		Il2CppChar L_24;
		L_24 = Lexer_ProcessEscChar_m6854BB99C40444F9BF2E0D853364590FA461A286(L_23, NULL);
		NullCheck(L_20);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_20, L_24, NULL);
		// ctx.NextState = ctx.StateStack;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_26 = ___ctx0;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_27 = ___ctx0;
		NullCheck(L_27);
		int32_t L_28 = L_27->___StateStack_3;
		NullCheck(L_26);
		L_26->___NextState_1 = L_28;
		// return true;
		return (bool)1;
	}

IL_00a4:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State22_mA366497048DA61CAEDB3473F4F20F6FAECB84BD7 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int counter = 0;
		V_0 = 0;
		// int mult    = 4096;
		V_1 = ((int32_t)4096);
		// ctx.L.unichar = 0;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		L_1->___unichar_13 = 0;
		goto IL_00d5;
	}

IL_0019:
	{
		// if (ctx.L.input_char >= '0' && ctx.L.input_char <= '9' ||
		//     ctx.L.input_char >= 'A' && ctx.L.input_char <= 'F' ||
		//     ctx.L.input_char >= 'a' && ctx.L.input_char <= 'f') {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_3 = L_2->___L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->___input_char_7;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0037;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_6 = L_5->___L_2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___input_char_7;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0073;
		}
	}

IL_0037:
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_9 = L_8->___L_2;
		NullCheck(L_9);
		int32_t L_10 = L_9->___input_char_7;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)65))))
		{
			goto IL_0055;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_12 = L_11->___L_2;
		NullCheck(L_12);
		int32_t L_13 = L_12->___input_char_7;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0073;
		}
	}

IL_0055:
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_15 = L_14->___L_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char_7;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)97))))
		{
			goto IL_00d3;
		}
	}
	{
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_18 = L_17->___L_2;
		NullCheck(L_18);
		int32_t L_19 = L_18->___input_char_7;
		if ((((int32_t)L_19) > ((int32_t)((int32_t)102))))
		{
			goto IL_00d3;
		}
	}

IL_0073:
	{
		// ctx.L.unichar += HexValue (ctx.L.input_char) * mult;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_20 = ___ctx0;
		NullCheck(L_20);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_21 = L_20->___L_2;
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = L_22->___unichar_13;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		il2cpp_codegen_runtime_class_init_inline(Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = Lexer_HexValue_m15A8EEE787816BE6618B27E14B5516F0380C8B05(L_26, NULL);
		int32_t L_28 = V_1;
		NullCheck(L_22);
		L_22->___unichar_13 = ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)il2cpp_codegen_multiply(L_27, L_28))));
		// counter++;
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		// mult /= 16;
		int32_t L_30 = V_1;
		V_1 = ((int32_t)(L_30/((int32_t)16)));
		// if (counter == 4) {
		int32_t L_31 = V_0;
		if ((!(((uint32_t)L_31) == ((uint32_t)4))))
		{
			goto IL_00d5;
		}
	}
	{
		// ctx.L.string_buffer.Append (
		//     Convert.ToChar (ctx.L.unichar));
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_32 = ___ctx0;
		NullCheck(L_32);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_33 = L_32->___L_2;
		NullCheck(L_33);
		StringBuilder_t* L_34 = L_33->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_35 = ___ctx0;
		NullCheck(L_35);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_36 = L_35->___L_2;
		NullCheck(L_36);
		int32_t L_37 = L_36->___unichar_13;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_38;
		L_38 = Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1(L_37, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_34, L_38, NULL);
		// ctx.NextState = ctx.StateStack;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_40 = ___ctx0;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_41 = ___ctx0;
		NullCheck(L_41);
		int32_t L_42 = L_41->___StateStack_3;
		NullCheck(L_40);
		L_40->___NextState_1 = L_42;
		// return true;
		return (bool)1;
	}

IL_00d3:
	{
		// return false;
		return (bool)0;
	}

IL_00d5:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_43 = ___ctx0;
		NullCheck(L_43);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_44 = L_43->___L_2;
		NullCheck(L_44);
		bool L_45;
		L_45 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_44, NULL);
		if (L_45)
		{
			goto IL_0019;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State23_m1933F34481F4635E15CA05C548E8EDF7BA499E8D (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0065;
	}

IL_0002:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0048;
	}

IL_001a:
	{
		// ctx.L.UngetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_6 = L_5->___L_2;
		NullCheck(L_6);
		Lexer_UngetChar_mD6529748542F221E31C69008F3FE0759EA4960AE(L_6, NULL);
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___Return_0 = (bool)1;
		// ctx.NextState = 24;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->___NextState_1 = ((int32_t)24);
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// ctx.StateStack = 23;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->___StateStack_3 = ((int32_t)23);
		// ctx.NextState = 21;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->___NextState_1 = ((int32_t)21);
		// return true;
		return (bool)1;
	}

IL_0048:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_12 = L_11->___L_2;
		NullCheck(L_12);
		StringBuilder_t* L_13 = L_12->___string_buffer_10;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_15 = L_14->___L_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char_7;
		NullCheck(L_13);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)(uint16_t)L_16), NULL);
	}

IL_0065:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_19 = L_18->___L_2;
		NullCheck(L_19);
		bool L_20;
		L_20 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_19, NULL);
		if (L_20)
		{
			goto IL_0002;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State24_m6E37544DE90FECD7F70281C1005AF431BFB936DB (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_0038;
		}
	}
	{
		// ctx.L.input_char = '"';
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_7 = L_6->___L_2;
		NullCheck(L_7);
		L_7->___input_char_7 = ((int32_t)34);
		// ctx.Return = true;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_0038:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State25_mA8FC8BE95D9F48E85C08FC7D3116FD32CF35255E (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// ctx.L.GetChar ();
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)42))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)47))))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_0038;
	}

IL_0024:
	{
		// ctx.NextState = 27;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->___NextState_1 = ((int32_t)27);
		// return true;
		return (bool)1;
	}

IL_002e:
	{
		// ctx.NextState = 26;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->___NextState_1 = ((int32_t)26);
		// return true;
		return (bool)1;
	}

IL_0038:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State26_mD40250CDA3A58435831966388F2EB7E2AF5B8332 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		goto IL_001a;
	}

IL_0002:
	{
		// if (ctx.L.input_char == '\n') {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_001a;
		}
	}
	{
		// ctx.NextState = 1;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		L_3->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_001a:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_4 = ___ctx0;
		NullCheck(L_4);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_5 = L_4->___L_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_5, NULL);
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State27_m8917409C60853C0A7C1D34A7197FEC4D084AD0F2 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		goto IL_001b;
	}

IL_0002:
	{
		// if (ctx.L.input_char == '*') {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_001b;
		}
	}
	{
		// ctx.NextState = 28;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		L_3->___NextState_1 = ((int32_t)28);
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_4 = ___ctx0;
		NullCheck(L_4);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_5 = L_4->___L_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_5, NULL);
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State28_m80FD6ECAF458CB8FC729312341EC2EE2FAD76339 (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	{
		goto IL_0033;
	}

IL_0002:
	{
		// if (ctx.L.input_char == '*')
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)42))))
		{
			goto IL_0033;
		}
	}
	{
		// if (ctx.L.input_char == '/') {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0029;
		}
	}
	{
		// ctx.NextState = 1;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// ctx.NextState = 27;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)27);
		// return true;
		return (bool)1;
	}

IL_0033:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* L_9 = L_8->___L_2;
		NullCheck(L_9);
		bool L_10;
		L_10 = Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E(L_9, NULL);
		if (L_10)
		{
			goto IL_0002;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_GetChar_m07A1FDD2C5D7589EAAB84FA915CA1663A2AFF30E (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if ((input_char = NextChar ()) != -1)
		int32_t L_0;
		L_0 = Lexer_NextChar_mED43E8CAB901D2B37F63B2AB751D73A47F64FA46(__this, NULL);
		int32_t L_1 = L_0;
		V_0 = L_1;
		__this->___input_char_7 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0014;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// end_of_input = true;
		__this->___end_of_input_4 = (bool)1;
		// return false;
		return (bool)0;
	}
}
// System.Int32 LitJson.Lexer::NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_mED43E8CAB901D2B37F63B2AB751D73A47F64FA46 (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) 
{
	{
		// if (input_buffer != 0) {
		int32_t L_0 = __this->___input_buffer_6;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// int tmp = input_buffer;
		int32_t L_1 = __this->___input_buffer_6;
		// input_buffer = 0;
		__this->___input_buffer_6 = 0;
		// return tmp;
		return L_1;
	}

IL_0016:
	{
		// return reader.Read ();
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_2 = __this->___reader_8;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_2);
		return L_3;
	}
}
// System.Boolean LitJson.Lexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_NextToken_m6C6E5501F74234A8F7D2482F5FE1466DC8AA7F22 (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fsm_context.Return = false;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_0 = __this->___fsm_context_5;
		NullCheck(L_0);
		L_0->___Return_0 = (bool)0;
	}

IL_000c:
	{
		// handler = fsm_handler_table[state - 1];
		il2cpp_codegen_runtime_class_init_inline(Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var);
		StateHandlerU5BU5D_t335D697C3ECEA0B5611B42811827BD7153645595* L_1 = ((Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var))->___fsm_handler_table_1;
		int32_t L_2 = __this->___state_9;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// if (! handler (fsm_context))
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_5 = __this->___fsm_context_5;
		NullCheck(L_4);
		bool L_6;
		L_6 = StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		// throw new JsonException (input_char);
		int32_t L_7 = __this->___input_char_7;
		JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69* L_8 = (JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t0E01C338CDD2B019AF037BB9360D0F9BA4B0FF69_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		JsonException__ctor_m3D9EF4D35E8F00CD9CBC6F7317E0DB2AA6EB99BE(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Lexer_NextToken_m6C6E5501F74234A8F7D2482F5FE1466DC8AA7F22_RuntimeMethod_var)));
	}

IL_0033:
	{
		// if (end_of_input)
		bool L_9 = __this->___end_of_input_4;
		if (!L_9)
		{
			goto IL_003d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_003d:
	{
		// if (fsm_context.Return) {
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_10 = __this->___fsm_context_5;
		NullCheck(L_10);
		bool L_11 = L_10->___Return_0;
		if (!L_11)
		{
			goto IL_00b3;
		}
	}
	{
		// string_value = string_buffer.ToString ();
		StringBuilder_t* L_12 = __this->___string_buffer_10;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		__this->___string_value_11 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___string_value_11), (void*)L_13);
		// string_buffer.Remove (0, string_buffer.Length);
		StringBuilder_t* L_14 = __this->___string_buffer_10;
		StringBuilder_t* L_15 = __this->___string_buffer_10;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_14, 0, L_16, NULL);
		// token = fsm_return_table[state - 1];
		il2cpp_codegen_runtime_class_init_inline(Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ((Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131_il2cpp_TypeInfo_var))->___fsm_return_table_0;
		int32_t L_19 = __this->___state_9;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		__this->___token_12 = L_21;
		// if (token == (int) ParserToken.Char)
		int32_t L_22 = __this->___token_12;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)65542)))))
		{
			goto IL_00a0;
		}
	}
	{
		// token = input_char;
		int32_t L_23 = __this->___input_char_7;
		__this->___token_12 = L_23;
	}

IL_00a0:
	{
		// state = fsm_context.NextState;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_24 = __this->___fsm_context_5;
		NullCheck(L_24);
		int32_t L_25 = L_24->___NextState_1;
		__this->___state_9 = L_25;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// state = fsm_context.NextState;
		FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* L_26 = __this->___fsm_context_5;
		NullCheck(L_26);
		int32_t L_27 = L_26->___NextState_1;
		__this->___state_9 = L_27;
		// while (true) {
		goto IL_000c;
	}
}
// System.Void LitJson.Lexer::UngetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_UngetChar_mD6529748542F221E31C69008F3FE0759EA4960AE (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) 
{
	{
		// input_buffer = input_char;
		int32_t L_0 = __this->___input_char_7;
		__this->___input_buffer_6 = L_0;
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
bool StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_Multicast(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef bool (*FunctionPointerType) (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method);
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* currentDelegate = reinterpret_cast<StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E*>(delegatesToInvoke[i]);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___ctx0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_Open(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ctx0, method);
}
bool StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_Closed(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___ctx0, method);
}
bool StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_OpenStaticInvoker(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* >::Invoke(__this->___method_ptr_0, method, NULL, ___ctx0);
}
bool StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_ClosedStaticInvoker(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ctx0);
}
bool StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_OpenVirtual(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method)
{
	return VirtualFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___ctx0);
}
bool StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_OpenInterface(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___ctx0);
}
bool StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_OpenGenericVirtual(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker0< bool >::Invoke(method, ___ctx0);
}
bool StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_OpenGenericInterface(StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker0< bool >::Invoke(method, ___ctx0);
}
// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateHandler__ctor_m4746DF881365D6D21A4AD455F925AFD19430BFBF (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_Closed;
	}
	else
	{
		bool isOpen = methodCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_Closed;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_Multicast;
}
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06 (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___ctx0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LitJson.Lexer/StateHandler::BeginInvoke(LitJson.FsmContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateHandler_BeginInvoke_m58E6F6284AA00FBCBF1C433351786B6169135B6D (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___ctx0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean LitJson.Lexer/StateHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_EndInvoke_m3548ED0146DFEF98070E9F50202A9D14F0B29D7D (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_AllowComments_mE127B8980AEB483FAE7BC0397B8F12DC2113F744_inline (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) 
{
	{
		// get { return allow_comments; }
		bool L_0 = __this->___allow_comments_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Lexer_set_AllowComments_m34F1833C87ADE5991A27C5075537033C2DBBF224_inline (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { allow_comments = value; }
		bool L_0 = ___value0;
		__this->___allow_comments_2 = L_0;
		// set { allow_comments = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_AllowSingleQuotedStrings_mE980CAA0A511C0DF4B91EF5371DF344536999379_inline (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) 
{
	{
		// get { return allow_single_quoted_strings; }
		bool L_0 = __this->___allow_single_quoted_strings_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Lexer_set_AllowSingleQuotedStrings_m91CF3DB803C0FF7B46193BFED1F011DEE2D978A0_inline (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { allow_single_quoted_strings = value; }
		bool L_0 = ___value0;
		__this->___allow_single_quoted_strings_3 = L_0;
		// set { allow_single_quoted_strings = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_m51C044FBCD7254C4FC2076A0CCA326BBFB5D567C_inline (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) 
{
	{
		// get { return string_value; }
		String_t* L_0 = __this->___string_value_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_m2D53062A15EAF139239C01418891EEF98559DA3E_inline (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) 
{
	{
		// get { return end_of_input; }
		bool L_0 = __this->___end_of_input_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_m4FE4DBE440BEF05CF0B3FFB57DF0BA07D3DB71C6_inline (Lexer_tFE85A3BA072B0D611FFB7FC4BCA0C28F44606131* __this, const RuntimeMethod* method) 
{
	{
		// get { return token; }
		int32_t L_0 = __this->___token_12;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StateHandler_Invoke_mA2546358EB5D5B370F467ECC9E3C2C30283F5F06_inline (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (StateHandler_t1D9FA61B19EB805986FE84FA8433CACBA79AF43E* __this, FsmContext_t28028168085AA87ADF1855B4B2D093B0BC937949* ___ctx0, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___ctx0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
