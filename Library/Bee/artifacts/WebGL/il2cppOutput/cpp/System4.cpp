#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Attribute[]
struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ComponentModel.AttributeCollection/AttributeEntry[]
struct AttributeEntryU5BU5D_tF39C046D81AC79FBD2B0C1FBC7513DA6B66BA64F;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93;
// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1;
// System.Net.Configuration.ConnectionManagementSection
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34;
// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Net.Configuration.HttpWebRequestElement
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_tBCDA3354DBE93ADBD2AC81379EB3957347BAD4E8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.ComponentModel.Design.ITypeDescriptorFilterService
struct ITypeDescriptorFilterService_tE74C52FB36A71D62CA3617553D830DA6BBBBA788;
// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Net.Configuration.Ipv6Element
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Net.Configuration.NetSectionGroup
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Collections.Specialized.OrderedDictionary
struct OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Net.Configuration.PerformanceCountersElement
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Net.Configuration.ProxyElement
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65;
// System.ComponentModel.ReflectTypeDescriptionProvider
struct ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A;
// System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
struct RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2;
// System.Net.Configuration.SettingsSection
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12;
// System.Net.Configuration.SocketElement
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.ComponentModel.WeakHashtable
struct WeakHashtable_t56A27CA9C3EEBBCD3B87B4DFE255DB3830C535C3;
// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167;
// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463;
// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00;
// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6;
// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection
struct OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F;
// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct EmptyCustomTypeDescriptor_t5EB78D21E5C283C4C7C32DB554CD1181BFC470B1;
// System.ComponentModel.TypeDescriptor/FilterCacheItem
struct FilterCacheItem_t5FE6248B05409F13F8493DEF3F8326B9941C3027;
// System.ComponentModel.TypeDescriptor/MemberDescriptorComparer
struct MemberDescriptorComparer_t680FF6E0EBCDA8F242A1EFDA4A7AEE751D349704;
// System.ComponentModel.TypeDescriptor/MergedTypeDescriptor
struct MergedTypeDescriptor_t8A1A6982CB74715459CB3A129ED4F51BCC553439;
// System.ComponentModel.TypeDescriptor/TypeDescriptionNode
struct TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8;
// System.ComponentModel.WeakHashtable/WeakKeyComparer
struct WeakKeyComparer_tD11B2C49418FE3489BC76A9B4D20C0AA8E851EC5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICustomTypeDescriptor_tBCDA3354DBE93ADBD2AC81379EB3957347BAD4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberDescriptorComparer_t680FF6E0EBCDA8F242A1EFDA4A7AEE751D349704_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberDescriptor_t1CEA84A7BBAFDB04A9E6E23F2FBEED59F01172A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakHashtable_t56A27CA9C3EEBBCD3B87B4DFE255DB3830C535C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakKeyComparer_tD11B2C49418FE3489BC76A9B4D20C0AA8E851EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1757A05516A315BB0FA6014D44AB4E34D2ECE718;
IL2CPP_EXTERN_C String_t* _stringLiteral1923895473B26C62EFACF6D52D9E1A9D790EF7E7;
IL2CPP_EXTERN_C String_t* _stringLiteral211A2CDAF615EAE8B65611C744230B2D6943CBDB;
IL2CPP_EXTERN_C String_t* _stringLiteral28D16C61E1BADF2B97B5BFF59E15883298B4F87F;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2E1954CC1D1301F9218E014A4F6AC2F15FD854CA;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88;
IL2CPP_EXTERN_C String_t* _stringLiteral6D54049E84477C75DD8AFAD9B2244E5D4C140668;
IL2CPP_EXTERN_C String_t* _stringLiteral8D6DABB36F739F10886513F808FB1CE72EEE5547;
IL2CPP_EXTERN_C String_t* _stringLiteralA37BABAF77DF95A70A2787B19C22BF16BBEAD7B7;
IL2CPP_EXTERN_C String_t* _stringLiteralA60E60EC4C02F596452F32896DDBB76C73DC4BC9;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D;
IL2CPP_EXTERN_C String_t* _stringLiteralAEE8DD47F29A535762B8579D9E3E69D0D84968BB;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralD53EDB091696AB96F2493A40EF2FFC0DED122647;
IL2CPP_EXTERN_C String_t* _stringLiteralDC23B1361787C3CC77EBCE638AADF7E637150728;
IL2CPP_EXTERN_C String_t* _stringLiteralDE451E6780C8EAA8CB72AB3978131B7E20CF6240;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralE9300F92FA968642C4C028D2E1DB9FDF0489F53A;
IL2CPP_EXTERN_C String_t* _stringLiteralF8B372C3CEF6D6E79332762C8F7BAF0AC2AD536B;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mAA6940201936EFB68F812B3F577D2F5A1DCD9C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_m935614847EC810B66003F822E59EF73BD6EF9D1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m18DD3B1D370CD3B22732D57BF4589968ED57CCB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mEF52182F92A6E3AACEC123F617CCA697C854A283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InstanceDescriptor__ctor_m9AA7C372C2EEDA3F07BE3A6CCC21BCBD3814B64F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo_m6B8299303DC7D0A30936938CABE4F81F610077FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_GetObjectData_m946A3884AC9A0398EF3CBDA7E5C7C268B01FC02C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_OnDeserialization_m069DE30CEBE5F11C239DD42383204D14793714D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_Remove_mD4DFDFA8710B689C990EEE8EFCC50EC21CE51EA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_set_Item_m9406B6A94651B7DB301BC383518FC9B37277122E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeDescriptionNode_GetCache_m2612D24980BD19B8BF3F192C0255451AC3C6C363_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeDescriptionNode_GetExtendedTypeDescriptor_m9093310A740B288F02AE27622E90C0F1FE10560F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeDescriptionNode_GetReflectionType_m54393E311DD22AEF766FC73C95C7059CCD09FBF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeDescriptionNode_GetTypeDescriptor_mE86956B84E55A15AE4FDD7CAE44BC53515752E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};
struct Il2CppArrayBounds;

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.ComponentModel.AttributeCollection
struct AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA  : public RuntimeObject
{
	// System.Attribute[] System.ComponentModel.AttributeCollection::_attributes
	AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* ____attributes_2;
	// System.ComponentModel.AttributeCollection/AttributeEntry[] System.ComponentModel.AttributeCollection::_foundAttributeTypes
	AttributeEntryU5BU5D_tF39C046D81AC79FBD2B0C1FBC7513DA6B66BA64F* ____foundAttributeTypes_4;
	// System.Int32 System.ComponentModel.AttributeCollection::_index
	int32_t ____index_5;
};

struct AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA_StaticFields
{
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* ___Empty_0;
	// System.Collections.Hashtable System.ComponentModel.AttributeCollection::s_defaultAttributes
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___s_defaultAttributes_1;
	// System.Object System.ComponentModel.AttributeCollection::s_internalSyncObject
	RuntimeObject* ___s_internalSyncObject_3;
};

// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E  : public RuntimeObject
{
};

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93  : public RuntimeObject
{
};

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
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
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
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
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7  : public RuntimeObject
{
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Collections.HashtableExtensions
struct HashtableExtensions_t856DEECAB5172E908DD4944C65112B8D863DC779  : public RuntimeObject
{
};

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5  : public RuntimeObject
{
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::<Arguments>k__BackingField
	RuntimeObject* ___U3CArgumentsU3Ek__BackingField_0;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::<IsComplete>k__BackingField
	bool ___U3CIsCompleteU3Ek__BackingField_1;
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::<MemberInfo>k__BackingField
	MemberInfo_t* ___U3CMemberInfoU3Ek__BackingField_2;
};

// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t1CEA84A7BBAFDB04A9E6E23F2FBEED59F01172A7  : public RuntimeObject
{
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attributeCollection
	AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* ___attributeCollection_1;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attributes
	AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* ___attributes_2;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::originalAttributes
	AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* ___originalAttributes_3;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFiltered
	bool ___attributesFiltered_4;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFilled
	bool ___attributesFilled_5;
	// System.Int32 System.ComponentModel.MemberDescriptor::metadataVersion
	int32_t ___metadataVersion_6;
	// System.Object System.ComponentModel.MemberDescriptor::lockCookie
	RuntimeObject* ___lockCookie_7;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Collections.Specialized.OrderedDictionary
struct OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::_objectsArray
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____objectsArray_0;
	// System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::_objectsTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____objectsTable_1;
	// System.Int32 System.Collections.Specialized.OrderedDictionary::_initialCapacity
	int32_t ____initialCapacity_2;
	// System.Collections.IEqualityComparer System.Collections.Specialized.OrderedDictionary::_comparer
	RuntimeObject* ____comparer_3;
	// System.Boolean System.Collections.Specialized.OrderedDictionary::_readOnly
	bool ____readOnly_4;
	// System.Object System.Collections.Specialized.OrderedDictionary::_syncRoot
	RuntimeObject* ____syncRoot_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.OrderedDictionary::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_6;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
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

// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C  : public RuntimeObject
{
};

struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C_StaticFields
{
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;
};

// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664  : public RuntimeObject
{
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptionProvider::_parent
	TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* ____parent_0;
	// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::_emptyDescriptor
	EmptyCustomTypeDescriptor_t5EB78D21E5C283C4C7C32DB554CD1181BFC470B1* ____emptyDescriptor_1;
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

// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
};

// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6  : public RuntimeObject
{
	// System.Int32 System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::_objectReturnType
	int32_t ____objectReturnType_0;
	// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::_arrayEnumerator
	RuntimeObject* ____arrayEnumerator_1;
};

// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection
struct OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::_objects
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____objects_0;
	// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::_isKeys
	bool ____isKeys_1;
};

// System.ComponentModel.TypeDescriptor/FilterCacheItem
struct FilterCacheItem_t5FE6248B05409F13F8493DEF3F8326B9941C3027  : public RuntimeObject
{
	// System.ComponentModel.Design.ITypeDescriptorFilterService System.ComponentModel.TypeDescriptor/FilterCacheItem::_filterService
	RuntimeObject* ____filterService_0;
	// System.Collections.ICollection System.ComponentModel.TypeDescriptor/FilterCacheItem::FilteredMembers
	RuntimeObject* ___FilteredMembers_1;
};

// System.ComponentModel.TypeDescriptor/MemberDescriptorComparer
struct MemberDescriptorComparer_t680FF6E0EBCDA8F242A1EFDA4A7AEE751D349704  : public RuntimeObject
{
};

struct MemberDescriptorComparer_t680FF6E0EBCDA8F242A1EFDA4A7AEE751D349704_StaticFields
{
	// System.ComponentModel.TypeDescriptor/MemberDescriptorComparer System.ComponentModel.TypeDescriptor/MemberDescriptorComparer::Instance
	MemberDescriptorComparer_t680FF6E0EBCDA8F242A1EFDA4A7AEE751D349704* ___Instance_0;
};

// System.ComponentModel.TypeDescriptor/MergedTypeDescriptor
struct MergedTypeDescriptor_t8A1A6982CB74715459CB3A129ED4F51BCC553439  : public RuntimeObject
{
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::_primary
	RuntimeObject* ____primary_0;
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::_secondary
	RuntimeObject* ____secondary_1;
};

// System.ComponentModel.TypeDescriptor/TypeDescriptorComObject
struct TypeDescriptorComObject_t2488E6591A985A0C480D1FF8528FBE7911C54625  : public RuntimeObject
{
};

// System.ComponentModel.TypeDescriptor/TypeDescriptorInterface
struct TypeDescriptorInterface_t470F80F7F0A2F9298835E025ADA154F18F4C0638  : public RuntimeObject
{
};

// System.ComponentModel.WeakHashtable/WeakKeyComparer
struct WeakKeyComparer_tD11B2C49418FE3489BC76A9B4D20C0AA8E851EC5  : public RuntimeObject
{
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

// System.Net.Configuration.BypassElement
struct BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
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

// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.ConfigurationSection
struct ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
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

// System.Net.Configuration.HttpWebRequestElement
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
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

// System.Net.Configuration.Ipv6Element
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Net.Configuration.NetSectionGroup
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F  : public ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863
{
};

// System.Net.Configuration.PerformanceCountersElement
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.Net.Configuration.ProxyElement
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
struct RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::_typeId
	String_t* ____typeId_0;
	// System.Boolean System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::<Reloadable>k__BackingField
	bool ___U3CReloadableU3Ek__BackingField_1;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::<SerializerTypeName>k__BackingField
	String_t* ___U3CSerializerTypeNameU3Ek__BackingField_2;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::<SerializerBaseTypeName>k__BackingField
	String_t* ___U3CSerializerBaseTypeNameU3Ek__BackingField_3;
};

// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.SocketElement
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// System.ComponentModel.WeakHashtable
struct WeakHashtable_t56A27CA9C3EEBBCD3B87B4DFE255DB3830C535C3  : public Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D
{
};

struct WeakHashtable_t56A27CA9C3EEBBCD3B87B4DFE255DB3830C535C3_StaticFields
{
	// System.Collections.IEqualityComparer System.ComponentModel.WeakHashtable::_comparer
	RuntimeObject* ____comparer_22;
};

// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.WebRequestModuleElement
struct WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct __StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800__padding[10];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48__padding[32];
	};
};

// System.ComponentModel.TypeDescriptor/TypeDescriptionNode
struct TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8  : public TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664
{
	// System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor/TypeDescriptionNode::Next
	TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* ___Next_2;
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor/TypeDescriptionNode::Provider
	TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* ___Provider_3;
};

// System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
struct DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5 
{
	// System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::_node
	TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* ____node_0;
	// System.Object System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::_instance
	RuntimeObject* ____instance_1;
};
// Native definition for P/Invoke marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
struct DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshaled_pinvoke
{
	TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* ____node_0;
	Il2CppIUnknown* ____instance_1;
};
// Native definition for COM marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
struct DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshaled_com
{
	TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* ____node_0;
	Il2CppIUnknown* ____instance_1;
};

// System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F 
{
	// System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::_node
	TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* ____node_0;
	// System.Type System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::_objectType
	Type_t* ____objectType_1;
	// System.Object System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::_instance
	RuntimeObject* ____instance_2;
};
// Native definition for P/Invoke marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshaled_pinvoke
{
	TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* ____node_0;
	Type_t* ____objectType_1;
	Il2CppIUnknown* ____instance_2;
};
// Native definition for COM marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshaled_com
{
	TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* ____node_0;
	Type_t* ____objectType_1;
	Il2CppIUnknown* ____instance_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5_0;
	// System.Int64 <PrivateImplementationDetails>::1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B
	int64_t ___1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C
	__StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E ___B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::E478CC6C0579E2198C99BFDE0ABAADC66644AF69312CB9D6E94E2D4E3559482A
	__StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800 ___E478CC6C0579E2198C99BFDE0ABAADC66644AF69312CB9D6E94E2D4E3559482A_4;
};

// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.ConnectionManagementSection
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};

struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
};

// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.ComponentModel.ReflectTypeDescriptionProvider
struct ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A  : public TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664
{
	// System.Collections.Hashtable System.ComponentModel.ReflectTypeDescriptionProvider::_typeData
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____typeData_2;
};

struct ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A_StaticFields
{
	// System.Type[] System.ComponentModel.ReflectTypeDescriptionProvider::_typeConstructor
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____typeConstructor_3;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.ReflectTypeDescriptionProvider::_intrinsicTypeConverters
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____intrinsicTypeConverters_4;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_intrinsicReferenceKey
	RuntimeObject* ____intrinsicReferenceKey_5;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_intrinsicNullableKey
	RuntimeObject* ____intrinsicNullableKey_6;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_dictionaryKey
	RuntimeObject* ____dictionaryKey_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.ReflectTypeDescriptionProvider::_attributeCache
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____attributeCache_8;
	// System.Guid System.ComponentModel.ReflectTypeDescriptionProvider::_extenderProviderKey
	Guid_t ____extenderProviderKey_9;
	// System.Guid System.ComponentModel.ReflectTypeDescriptionProvider::_extenderPropertiesKey
	Guid_t ____extenderPropertiesKey_10;
	// System.Guid System.ComponentModel.ReflectTypeDescriptionProvider::_extenderProviderPropertiesKey
	Guid_t ____extenderProviderPropertiesKey_11;
	// System.Type[] System.ComponentModel.ReflectTypeDescriptionProvider::_skipInterfaceAttributeList
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____skipInterfaceAttributeList_12;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_internalSyncObject
	RuntimeObject* ____internalSyncObject_13;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Net.Configuration.SettingsSection
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	// System.String System.Runtime.Serialization.SerializationException::s_nullMessage
	String_t* ___s_nullMessage_18;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};

// Unity.ThrowStub
struct ThrowStub_tA028CA7941154A8E0F17F9AD0563D538617A7A47  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mBD9ED6B35314B34F51A9985E350D33F6F56F85A9 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture3, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeDescriptor/MemberDescriptorComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberDescriptorComparer__ctor_mDCB73C6EC35AE31BE43CBF4C88053920603B4431 (MemberDescriptorComparer_t680FF6E0EBCDA8F242A1EFDA4A7AEE751D349704* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeDescriptionProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeDescriptionProvider__ctor_m575B3B96D9C9A3B7C0D34A14D9E5FAA63EEE004C (TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::.ctor(System.ComponentModel.TypeDescriptor/TypeDescriptionNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultExtendedTypeDescriptor__ctor_m23A3BC29A6EF7571E339B9EBA5059F6490177C3C (DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5* __this, TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* ___node0, RuntimeObject* ___instance1, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::.ctor(System.ComponentModel.TypeDescriptor/TypeDescriptionNode,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeDescriptor__ctor_m8181176F10EBEA8A1DE3703C9C355ABB114A78D6 (DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F* __this, TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* ___node0, Type_t* ___objectType1, RuntimeObject* ___instance2, const RuntimeMethod* method) ;
// System.ComponentModel.AttributeCollection System.ComponentModel.ReflectTypeDescriptionProvider::GetExtendedAttributes(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* ReflectTypeDescriptionProvider_GetExtendedAttributes_m2C8411D8AF61F164E3728DD6976EA7D6C025A375_inline (ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String SR::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m56640423E54C5F10BFDEF27B7E692A33745EB696 (String_t* ___name0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mAA6940201936EFB68F812B3F577D2F5A1DCD9C87 (DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5* __this, const RuntimeMethod* method) ;
// System.ComponentModel.TypeConverter System.ComponentModel.ReflectTypeDescriptionProvider::GetExtendedConverter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* ReflectTypeDescriptionProvider_GetExtendedConverter_m7227126A73E4DC11779EC3DEEA2EA6D9DC9D424C (ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetConverter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_m935614847EC810B66003F822E59EF73BD6EF9D1F (DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5* __this, const RuntimeMethod* method) ;
// System.ComponentModel.AttributeCollection System.ComponentModel.ReflectTypeDescriptionProvider::GetAttributes(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* ReflectTypeDescriptionProvider_GetAttributes_mEB47CEC6757E936C1969EED650C92C501909265D (ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m18DD3B1D370CD3B22732D57BF4589968ED57CCB0 (DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F* __this, const RuntimeMethod* method) ;
// System.ComponentModel.TypeConverter System.ComponentModel.ReflectTypeDescriptionProvider::GetConverter(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* ReflectTypeDescriptionProvider_GetConverter_mD847E744202DEA5D7208D1F1AE25CFBDC37A75B9 (ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* __this, Type_t* ___type0, RuntimeObject* ___instance1, const RuntimeMethod* method) ;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetConverter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mEF52182F92A6E3AACEC123F617CCA697C854A283 (DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m1F7298B21166D6C35BD6C6EC9F71BAC05981B164 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___equalityComparer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_Clear_m189F8A2E5FE36FEC069049240660F447B22F58A1 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_Remove_mE9F11255E490CB42E8F6D9F659EA5F3B9A3A6D1F (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.WeakHashtable/WeakKeyComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakKeyComparer__ctor_m1DB79747A0192C8CB5B45E74743CA7CA7EC09E52 (WeakKeyComparer_tD11B2C49418FE3489BC76A9B4D20C0AA8E851EC5* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanceDescriptor__ctor_m9AA7C372C2EEDA3F07BE3A6CCC21BCBD3814B64F (InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5* __this, MemberInfo_t* ___member0, RuntimeObject* ___arguments1, bool ___isComplete2, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139 (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::get_Arguments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InstanceDescriptor_get_Arguments_mF64376FB377AA57CC10376452FECFDC55C6EC837_inline (InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74 (PropertyInfo_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8 (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Object System.ComponentModel.Design.Serialization.InstanceDescriptor::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstanceDescriptor_Invoke_mACDF3C04B3998B38C4A79FCFC66F4760EEEEB2FE (InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5* __this, const RuntimeMethod* method) ;
// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::get_MemberInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MemberInfo_t* InstanceDescriptor_get_MemberInfo_m58DD58AFB1C49C6B33C3958002E7CB9D61374E9E_inline (InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters0, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::get_SerializerBaseTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RootDesignerSerializerAttribute_get_SerializerBaseTypeName_m78A27809B7F723942C432825B30C43ECB87A1124_inline (RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_m552AA3E019FF5D93545B5DFFB7B4917C72251600 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_mF88C40080BA8F436358DE5195BB88C5957A4AC66 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::get_objectsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, RuntimeObject* ___equalityComparer1, const RuntimeMethod* method) ;
// System.Object System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71 (RuntimeObject** ___location10, RuntimeObject* ___value1, RuntimeObject* ___comparand2, const RuntimeMethod* method) ;
// System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::get_objectsTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Specialized.OrderedDictionary::IndexOfKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedDictionary_IndexOfKey_m0A1A8D3EA6A175D722513B7AAD3518A4C1502837 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.OrderedDictionary::Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::.ctor(System.Collections.ArrayList,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryKeyValueCollection__ctor_mA61FF47888F401F7194B3AD6B6F5F81F9FECEA64 (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___array0, bool ___isKeys1, const RuntimeMethod* method) ;
// System.Object System.Collections.DictionaryEntry::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::.ctor(System.Collections.ArrayList,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___array0, int32_t ___objectReturnType1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, Type_t* ___type2, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Specialized.OrderedDictionary::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedDictionary_get_Count_m9B55DB3275692CD51DE69FA8200D1998BD258A0A (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Object System.Collections.DictionaryEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
// System.Collections.DictionaryEntry System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB OrderedDictionaryEnumerator_get_Entry_m70BE070A9125BA894E98803E322A51E34AAB0074 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___value0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.TypeDescriptor/FilterCacheItem::.ctor(System.ComponentModel.Design.ITypeDescriptorFilterService,System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterCacheItem__ctor_mE9F7CD307B3F6228F55EFE04B8D84B4B57A51893 (FilterCacheItem_t5FE6248B05409F13F8493DEF3F8326B9941C3027* __this, RuntimeObject* ___filterService0, RuntimeObject* ___filteredMembers1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___filterService0;
		__this->____filterService_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filterService_0), (void*)L_0);
		RuntimeObject* L_1 = ___filteredMembers1;
		__this->___FilteredMembers_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FilteredMembers_1), (void*)L_1);
		return;
	}
}
// System.Boolean System.ComponentModel.TypeDescriptor/FilterCacheItem::IsValid(System.ComponentModel.Design.ITypeDescriptorFilterService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FilterCacheItem_IsValid_mD1D0960AEFACC6645E5DEC95CA4F173E9260EC72 (FilterCacheItem_t5FE6248B05409F13F8493DEF3F8326B9941C3027* __this, RuntimeObject* ___filterService0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____filterService_0;
		RuntimeObject* L_1 = ___filterService0;
		if ((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		return (bool)1;
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
// System.Int32 System.ComponentModel.TypeDescriptor/MemberDescriptorComparer::Compare(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberDescriptorComparer_Compare_m33438352E9BA8C1BF6B594E524DC1BF8BC5EFFE1 (MemberDescriptorComparer_t680FF6E0EBCDA8F242A1EFDA4A7AEE751D349704* __this, RuntimeObject* ___left0, RuntimeObject* ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberDescriptor_t1CEA84A7BBAFDB04A9E6E23F2FBEED59F01172A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___left0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String System.ComponentModel.MemberDescriptor::get_Name() */, ((MemberDescriptor_t1CEA84A7BBAFDB04A9E6E23F2FBEED59F01172A7*)CastclassClass((RuntimeObject*)L_0, MemberDescriptor_t1CEA84A7BBAFDB04A9E6E23F2FBEED59F01172A7_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2 = ___right1;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String System.ComponentModel.MemberDescriptor::get_Name() */, ((MemberDescriptor_t1CEA84A7BBAFDB04A9E6E23F2FBEED59F01172A7*)CastclassClass((RuntimeObject*)L_2, MemberDescriptor_t1CEA84A7BBAFDB04A9E6E23F2FBEED59F01172A7_il2cpp_TypeInfo_var)));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4;
		L_4 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int32_t L_5;
		L_5 = String_Compare_mBD9ED6B35314B34F51A9985E350D33F6F56F85A9(L_1, L_3, (bool)0, L_4, NULL);
		return L_5;
	}
}
// System.Void System.ComponentModel.TypeDescriptor/MemberDescriptorComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberDescriptorComparer__ctor_mDCB73C6EC35AE31BE43CBF4C88053920603B4431 (MemberDescriptorComparer_t680FF6E0EBCDA8F242A1EFDA4A7AEE751D349704* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.ComponentModel.TypeDescriptor/MemberDescriptorComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberDescriptorComparer__cctor_m15B79AB7086207249441E7C7595DC21B4C8736A6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberDescriptorComparer_t680FF6E0EBCDA8F242A1EFDA4A7AEE751D349704_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberDescriptorComparer_t680FF6E0EBCDA8F242A1EFDA4A7AEE751D349704* L_0 = (MemberDescriptorComparer_t680FF6E0EBCDA8F242A1EFDA4A7AEE751D349704*)il2cpp_codegen_object_new(MemberDescriptorComparer_t680FF6E0EBCDA8F242A1EFDA4A7AEE751D349704_il2cpp_TypeInfo_var);
		MemberDescriptorComparer__ctor_mDCB73C6EC35AE31BE43CBF4C88053920603B4431(L_0, NULL);
		((MemberDescriptorComparer_t680FF6E0EBCDA8F242A1EFDA4A7AEE751D349704_StaticFields*)il2cpp_codegen_static_fields_for(MemberDescriptorComparer_t680FF6E0EBCDA8F242A1EFDA4A7AEE751D349704_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MemberDescriptorComparer_t680FF6E0EBCDA8F242A1EFDA4A7AEE751D349704_StaticFields*)il2cpp_codegen_static_fields_for(MemberDescriptorComparer_t680FF6E0EBCDA8F242A1EFDA4A7AEE751D349704_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
// System.Void System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::.ctor(System.ComponentModel.ICustomTypeDescriptor,System.ComponentModel.ICustomTypeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedTypeDescriptor__ctor_m846C2DB00AE4DB20FAB890B60E95CB56EE9FE629 (MergedTypeDescriptor_t8A1A6982CB74715459CB3A129ED4F51BCC553439* __this, RuntimeObject* ___primary0, RuntimeObject* ___secondary1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___primary0;
		__this->____primary_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____primary_0), (void*)L_0);
		RuntimeObject* L_1 = ___secondary1;
		__this->____secondary_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____secondary_1), (void*)L_1);
		return;
	}
}
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* MergedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mF8DA84AB54E4B4429E27667D557634E4872BA672 (MergedTypeDescriptor_t8A1A6982CB74715459CB3A129ED4F51BCC553439* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICustomTypeDescriptor_tBCDA3354DBE93ADBD2AC81379EB3957347BAD4E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____primary_0;
		AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* L_1;
		L_1 = InterfaceFuncInvoker0< AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* >::Invoke(0 /* System.ComponentModel.AttributeCollection System.ComponentModel.ICustomTypeDescriptor::GetAttributes() */, ICustomTypeDescriptor_tBCDA3354DBE93ADBD2AC81379EB3957347BAD4E8_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_3 = __this->____secondary_1;
		AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* L_4;
		L_4 = InterfaceFuncInvoker0< AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* >::Invoke(0 /* System.ComponentModel.AttributeCollection System.ComponentModel.ICustomTypeDescriptor::GetAttributes() */, ICustomTypeDescriptor_tBCDA3354DBE93ADBD2AC81379EB3957347BAD4E8_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}

IL_001b:
	{
		AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* L_5 = V_0;
		return L_5;
	}
}
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetConverter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* MergedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_m0EEB21D1590AAECD9DB3404802C175099B200F63 (MergedTypeDescriptor_t8A1A6982CB74715459CB3A129ED4F51BCC553439* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICustomTypeDescriptor_tBCDA3354DBE93ADBD2AC81379EB3957347BAD4E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____primary_0;
		TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* L_1;
		L_1 = InterfaceFuncInvoker0< TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* >::Invoke(1 /* System.ComponentModel.TypeConverter System.ComponentModel.ICustomTypeDescriptor::GetConverter() */, ICustomTypeDescriptor_tBCDA3354DBE93ADBD2AC81379EB3957347BAD4E8_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_3 = __this->____secondary_1;
		TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* L_4;
		L_4 = InterfaceFuncInvoker0< TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* >::Invoke(1 /* System.ComponentModel.TypeConverter System.ComponentModel.ICustomTypeDescriptor::GetConverter() */, ICustomTypeDescriptor_tBCDA3354DBE93ADBD2AC81379EB3957347BAD4E8_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}

IL_001b:
	{
		TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* L_5 = V_0;
		return L_5;
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
// System.Void System.ComponentModel.TypeDescriptor/TypeDescriptionNode::.ctor(System.ComponentModel.TypeDescriptionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeDescriptionNode__ctor_mD6C85C9088064C16A401309FAFDC62252A5D5526 (TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* __this, TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* ___provider0, const RuntimeMethod* method) 
{
	{
		TypeDescriptionProvider__ctor_m575B3B96D9C9A3B7C0D34A14D9E5FAA63EEE004C(__this, NULL);
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_0 = ___provider0;
		__this->___Provider_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Provider_3), (void*)L_0);
		return;
	}
}
// System.Collections.IDictionary System.ComponentModel.TypeDescriptor/TypeDescriptionNode::GetCache(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeDescriptionNode_GetCache_m2612D24980BD19B8BF3F192C0255451AC3C6C363 (TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___instance0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeDescriptionNode_GetCache_m2612D24980BD19B8BF3F192C0255451AC3C6C363_RuntimeMethod_var)));
	}

IL_000e:
	{
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_2 = __this->___Provider_3;
		RuntimeObject* L_3 = ___instance0;
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Collections.IDictionary System.ComponentModel.TypeDescriptionProvider::GetCache(System.Object) */, L_2, L_3);
		return L_4;
	}
}
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/TypeDescriptionNode::GetExtendedTypeDescriptor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeDescriptionNode_GetExtendedTypeDescriptor_m9093310A740B288F02AE27622E90C0F1FE10560F (TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___instance0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeDescriptionNode_GetExtendedTypeDescriptor_m9093310A740B288F02AE27622E90C0F1FE10560F_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___instance0;
		DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		DefaultExtendedTypeDescriptor__ctor_m23A3BC29A6EF7571E339B9EBA5059F6490177C3C((&L_3), __this, L_2, /*hidden argument*/NULL);
		DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5 L_4 = L_3;
		RuntimeObject* L_5 = Box(DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_il2cpp_TypeInfo_var, &L_4);
		return (RuntimeObject*)L_5;
	}
}
// System.Type System.ComponentModel.TypeDescriptor/TypeDescriptionNode::GetReflectionType(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeDescriptionNode_GetReflectionType_m54393E311DD22AEF766FC73C95C7059CCD09FBF5 (TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* __this, Type_t* ___objectType0, RuntimeObject* ___instance1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___objectType0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC23B1361787C3CC77EBCE638AADF7E637150728)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeDescriptionNode_GetReflectionType_m54393E311DD22AEF766FC73C95C7059CCD09FBF5_RuntimeMethod_var)));
	}

IL_0014:
	{
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_3 = __this->___Provider_3;
		Type_t* L_4 = ___objectType0;
		RuntimeObject* L_5 = ___instance1;
		Type_t* L_6;
		L_6 = VirtualFuncInvoker2< Type_t*, Type_t*, RuntimeObject* >::Invoke(6 /* System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Type,System.Object) */, L_3, L_4, L_5);
		return L_6;
	}
}
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/TypeDescriptionNode::GetTypeDescriptor(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeDescriptionNode_GetTypeDescriptor_mE86956B84E55A15AE4FDD7CAE44BC53515752E7A (TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* __this, Type_t* ___objectType0, RuntimeObject* ___instance1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___objectType0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC23B1361787C3CC77EBCE638AADF7E637150728)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeDescriptionNode_GetTypeDescriptor_mE86956B84E55A15AE4FDD7CAE44BC53515752E7A_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___instance1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		Type_t* L_4 = ___objectType0;
		RuntimeObject* L_5 = ___instance1;
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(108 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_4, L_5);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeDescriptionNode_GetTypeDescriptor_mE86956B84E55A15AE4FDD7CAE44BC53515752E7A_RuntimeMethod_var)));
	}

IL_002b:
	{
		Type_t* L_8 = ___objectType0;
		RuntimeObject* L_9 = ___instance1;
		DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F L_10;
		memset((&L_10), 0, sizeof(L_10));
		DefaultTypeDescriptor__ctor_m8181176F10EBEA8A1DE3703C9C355ABB114A78D6((&L_10), __this, L_8, L_9, /*hidden argument*/NULL);
		DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F L_11 = L_10;
		RuntimeObject* L_12 = Box(DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_il2cpp_TypeInfo_var, &L_11);
		return (RuntimeObject*)L_12;
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
// Conversion methods for marshalling of: System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke(const DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5& unmarshaled, DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshaled_pinvoke& marshaled)
{
	Exception_t* ____node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_node' of type 'DefaultExtendedTypeDescriptor': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____node_0Exception, NULL);
}
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke_back(const DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshaled_pinvoke& marshaled, DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5& unmarshaled)
{
	Exception_t* ____node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_node' of type 'DefaultExtendedTypeDescriptor': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____node_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke_cleanup(DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_com(const DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5& unmarshaled, DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshaled_com& marshaled)
{
	Exception_t* ____node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_node' of type 'DefaultExtendedTypeDescriptor': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____node_0Exception, NULL);
}
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_com_back(const DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshaled_com& marshaled, DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5& unmarshaled)
{
	Exception_t* ____node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_node' of type 'DefaultExtendedTypeDescriptor': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____node_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_com_cleanup(DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshaled_com& marshaled)
{
}
// System.Void System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::.ctor(System.ComponentModel.TypeDescriptor/TypeDescriptionNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultExtendedTypeDescriptor__ctor_m23A3BC29A6EF7571E339B9EBA5059F6490177C3C (DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5* __this, TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* ___node0, RuntimeObject* ___instance1, const RuntimeMethod* method) 
{
	{
		TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* L_0 = ___node0;
		__this->____node_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____node_0), (void*)L_0);
		RuntimeObject* L_1 = ___instance1;
		__this->____instance_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____instance_1), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void DefaultExtendedTypeDescriptor__ctor_m23A3BC29A6EF7571E339B9EBA5059F6490177C3C_AdjustorThunk (RuntimeObject* __this, TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* ___node0, RuntimeObject* ___instance1, const RuntimeMethod* method)
{
	DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5*>(__this + _offset);
	DefaultExtendedTypeDescriptor__ctor_m23A3BC29A6EF7571E339B9EBA5059F6490177C3C(_thisAdjusted, ___node0, ___instance1, method);
}
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mAA6940201936EFB68F812B3F577D2F5A1DCD9C87 (DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICustomTypeDescriptor_tBCDA3354DBE93ADBD2AC81379EB3957347BAD4E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* V_0 = NULL;
	ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* V_3 = NULL;
	{
		TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* L_0 = __this->____node_0;
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_1 = L_0->___Provider_3;
		V_0 = L_1;
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_2 = V_0;
		V_1 = ((ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A*)IsInstSealed((RuntimeObject*)L_2, ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A_il2cpp_TypeInfo_var));
		ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* L_4 = V_1;
		RuntimeObject* L_5 = __this->____instance_1;
		AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* L_6;
		L_6 = ReflectTypeDescriptionProvider_GetExtendedAttributes_m2C8411D8AF61F164E3728DD6976EA7D6C025A375_inline(L_4, L_5, NULL);
		return L_6;
	}

IL_0023:
	{
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_7 = V_0;
		RuntimeObject* L_8 = __this->____instance_1;
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object) */, L_7, L_8);
		V_2 = L_9;
		RuntimeObject* L_10 = V_2;
		if (L_10)
		{
			goto IL_0069;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* L_13 = __this->____node_0;
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_14 = L_13->___Provider_3;
		Type_t* L_15;
		L_15 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_14, NULL);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_15);
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_12;
		ArrayElementTypeCheck (L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD53EDB091696AB96F2493A40EF2FFC0DED122647)));
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD53EDB091696AB96F2493A40EF2FFC0DED122647)));
		String_t* L_18;
		L_18 = SR_GetString_m56640423E54C5F10BFDEF27B7E692A33745EB696(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E1954CC1D1301F9218E014A4F6AC2F15FD854CA)), L_17, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_19 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mAA6940201936EFB68F812B3F577D2F5A1DCD9C87_RuntimeMethod_var)));
	}

IL_0069:
	{
		RuntimeObject* L_20 = V_2;
		AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* L_21;
		L_21 = InterfaceFuncInvoker0< AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* >::Invoke(0 /* System.ComponentModel.AttributeCollection System.ComponentModel.ICustomTypeDescriptor::GetAttributes() */, ICustomTypeDescriptor_tBCDA3354DBE93ADBD2AC81379EB3957347BAD4E8_il2cpp_TypeInfo_var, L_20);
		V_3 = L_21;
		AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* L_22 = V_3;
		if (L_22)
		{
			goto IL_00a9;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_23;
		TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* L_25 = __this->____node_0;
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_26 = L_25->___Provider_3;
		Type_t* L_27;
		L_27 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_26, NULL);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_27);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_24;
		ArrayElementTypeCheck (L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8B372C3CEF6D6E79332762C8F7BAF0AC2AD536B)));
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8B372C3CEF6D6E79332762C8F7BAF0AC2AD536B)));
		String_t* L_30;
		L_30 = SR_GetString_m56640423E54C5F10BFDEF27B7E692A33745EB696(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E1954CC1D1301F9218E014A4F6AC2F15FD854CA)), L_29, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_31 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_31, L_30, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mAA6940201936EFB68F812B3F577D2F5A1DCD9C87_RuntimeMethod_var)));
	}

IL_00a9:
	{
		AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* L_32 = V_3;
		return L_32;
	}
}
IL2CPP_EXTERN_C  AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mAA6940201936EFB68F812B3F577D2F5A1DCD9C87_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5*>(__this + _offset);
	AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* _returnValue;
	_returnValue = DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_mAA6940201936EFB68F812B3F577D2F5A1DCD9C87(_thisAdjusted, method);
	return _returnValue;
}
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetConverter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_m935614847EC810B66003F822E59EF73BD6EF9D1F (DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICustomTypeDescriptor_tBCDA3354DBE93ADBD2AC81379EB3957347BAD4E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* V_0 = NULL;
	ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* V_3 = NULL;
	{
		TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* L_0 = __this->____node_0;
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_1 = L_0->___Provider_3;
		V_0 = L_1;
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_2 = V_0;
		V_1 = ((ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A*)IsInstSealed((RuntimeObject*)L_2, ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A_il2cpp_TypeInfo_var));
		ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* L_4 = V_1;
		RuntimeObject* L_5 = __this->____instance_1;
		TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* L_6;
		L_6 = ReflectTypeDescriptionProvider_GetExtendedConverter_m7227126A73E4DC11779EC3DEEA2EA6D9DC9D424C(L_4, L_5, NULL);
		return L_6;
	}

IL_0023:
	{
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_7 = V_0;
		RuntimeObject* L_8 = __this->____instance_1;
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object) */, L_7, L_8);
		V_2 = L_9;
		RuntimeObject* L_10 = V_2;
		if (L_10)
		{
			goto IL_0069;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* L_13 = __this->____node_0;
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_14 = L_13->___Provider_3;
		Type_t* L_15;
		L_15 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_14, NULL);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_15);
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_12;
		ArrayElementTypeCheck (L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD53EDB091696AB96F2493A40EF2FFC0DED122647)));
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD53EDB091696AB96F2493A40EF2FFC0DED122647)));
		String_t* L_18;
		L_18 = SR_GetString_m56640423E54C5F10BFDEF27B7E692A33745EB696(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E1954CC1D1301F9218E014A4F6AC2F15FD854CA)), L_17, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_19 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_m935614847EC810B66003F822E59EF73BD6EF9D1F_RuntimeMethod_var)));
	}

IL_0069:
	{
		RuntimeObject* L_20 = V_2;
		TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* L_21;
		L_21 = InterfaceFuncInvoker0< TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* >::Invoke(1 /* System.ComponentModel.TypeConverter System.ComponentModel.ICustomTypeDescriptor::GetConverter() */, ICustomTypeDescriptor_tBCDA3354DBE93ADBD2AC81379EB3957347BAD4E8_il2cpp_TypeInfo_var, L_20);
		V_3 = L_21;
		TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* L_22 = V_3;
		if (L_22)
		{
			goto IL_00a9;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_23;
		TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* L_25 = __this->____node_0;
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_26 = L_25->___Provider_3;
		Type_t* L_27;
		L_27 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_26, NULL);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_27);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_24;
		ArrayElementTypeCheck (L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1923895473B26C62EFACF6D52D9E1A9D790EF7E7)));
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1923895473B26C62EFACF6D52D9E1A9D790EF7E7)));
		String_t* L_30;
		L_30 = SR_GetString_m56640423E54C5F10BFDEF27B7E692A33745EB696(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E1954CC1D1301F9218E014A4F6AC2F15FD854CA)), L_29, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_31 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_31, L_30, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_m935614847EC810B66003F822E59EF73BD6EF9D1F_RuntimeMethod_var)));
	}

IL_00a9:
	{
		TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* L_32 = V_3;
		return L_32;
	}
}
IL2CPP_EXTERN_C  TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_m935614847EC810B66003F822E59EF73BD6EF9D1F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5*>(__this + _offset);
	TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* _returnValue;
	_returnValue = DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_m935614847EC810B66003F822E59EF73BD6EF9D1F(_thisAdjusted, method);
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
// Conversion methods for marshalling of: System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
IL2CPP_EXTERN_C void DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke(const DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F& unmarshaled, DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshaled_pinvoke& marshaled)
{
	Exception_t* ____node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_node' of type 'DefaultTypeDescriptor': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____node_0Exception, NULL);
}
IL2CPP_EXTERN_C void DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke_back(const DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshaled_pinvoke& marshaled, DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F& unmarshaled)
{
	Exception_t* ____node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_node' of type 'DefaultTypeDescriptor': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____node_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
IL2CPP_EXTERN_C void DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke_cleanup(DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
IL2CPP_EXTERN_C void DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_com(const DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F& unmarshaled, DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshaled_com& marshaled)
{
	Exception_t* ____node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_node' of type 'DefaultTypeDescriptor': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____node_0Exception, NULL);
}
IL2CPP_EXTERN_C void DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_com_back(const DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshaled_com& marshaled, DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F& unmarshaled)
{
	Exception_t* ____node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_node' of type 'DefaultTypeDescriptor': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____node_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
IL2CPP_EXTERN_C void DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_com_cleanup(DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshaled_com& marshaled)
{
}
// System.Void System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::.ctor(System.ComponentModel.TypeDescriptor/TypeDescriptionNode,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeDescriptor__ctor_m8181176F10EBEA8A1DE3703C9C355ABB114A78D6 (DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F* __this, TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* ___node0, Type_t* ___objectType1, RuntimeObject* ___instance2, const RuntimeMethod* method) 
{
	{
		TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* L_0 = ___node0;
		__this->____node_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____node_0), (void*)L_0);
		Type_t* L_1 = ___objectType1;
		__this->____objectType_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objectType_1), (void*)L_1);
		RuntimeObject* L_2 = ___instance2;
		__this->____instance_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____instance_2), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void DefaultTypeDescriptor__ctor_m8181176F10EBEA8A1DE3703C9C355ABB114A78D6_AdjustorThunk (RuntimeObject* __this, TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* ___node0, Type_t* ___objectType1, RuntimeObject* ___instance2, const RuntimeMethod* method)
{
	DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F*>(__this + _offset);
	DefaultTypeDescriptor__ctor_m8181176F10EBEA8A1DE3703C9C355ABB114A78D6(_thisAdjusted, ___node0, ___objectType1, ___instance2, method);
}
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m18DD3B1D370CD3B22732D57BF4589968ED57CCB0 (DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICustomTypeDescriptor_tBCDA3354DBE93ADBD2AC81379EB3957347BAD4E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* V_0 = NULL;
	ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* V_1 = NULL;
	AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* L_0 = __this->____node_0;
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_1 = L_0->___Provider_3;
		V_0 = L_1;
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_2 = V_0;
		V_1 = ((ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A*)IsInstSealed((RuntimeObject*)L_2, ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A_il2cpp_TypeInfo_var));
		ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* L_4 = V_1;
		Type_t* L_5 = __this->____objectType_1;
		AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* L_6;
		L_6 = ReflectTypeDescriptionProvider_GetAttributes_mEB47CEC6757E936C1969EED650C92C501909265D(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_00b4;
	}

IL_0028:
	{
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_7 = V_0;
		Type_t* L_8 = __this->____objectType_1;
		RuntimeObject* L_9 = __this->____instance_2;
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(7 /* System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object) */, L_7, L_8, L_9);
		V_3 = L_10;
		RuntimeObject* L_11 = V_3;
		if (L_11)
		{
			goto IL_0074;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* L_14 = __this->____node_0;
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_15 = L_14->___Provider_3;
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_15, NULL);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_16);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_13;
		ArrayElementTypeCheck (L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE451E6780C8EAA8CB72AB3978131B7E20CF6240)));
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE451E6780C8EAA8CB72AB3978131B7E20CF6240)));
		String_t* L_19;
		L_19 = SR_GetString_m56640423E54C5F10BFDEF27B7E692A33745EB696(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E1954CC1D1301F9218E014A4F6AC2F15FD854CA)), L_18, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_20 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m18DD3B1D370CD3B22732D57BF4589968ED57CCB0_RuntimeMethod_var)));
	}

IL_0074:
	{
		RuntimeObject* L_21 = V_3;
		AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* L_22;
		L_22 = InterfaceFuncInvoker0< AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* >::Invoke(0 /* System.ComponentModel.AttributeCollection System.ComponentModel.ICustomTypeDescriptor::GetAttributes() */, ICustomTypeDescriptor_tBCDA3354DBE93ADBD2AC81379EB3957347BAD4E8_il2cpp_TypeInfo_var, L_21);
		V_2 = L_22;
		AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* L_23 = V_2;
		if (L_23)
		{
			goto IL_00b4;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_24;
		TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* L_26 = __this->____node_0;
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_27 = L_26->___Provider_3;
		Type_t* L_28;
		L_28 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_27, NULL);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_28);
		ArrayElementTypeCheck (L_25, L_29);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_25;
		ArrayElementTypeCheck (L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8B372C3CEF6D6E79332762C8F7BAF0AC2AD536B)));
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8B372C3CEF6D6E79332762C8F7BAF0AC2AD536B)));
		String_t* L_31;
		L_31 = SR_GetString_m56640423E54C5F10BFDEF27B7E692A33745EB696(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E1954CC1D1301F9218E014A4F6AC2F15FD854CA)), L_30, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_32 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_32, L_31, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m18DD3B1D370CD3B22732D57BF4589968ED57CCB0_RuntimeMethod_var)));
	}

IL_00b4:
	{
		AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* L_33 = V_2;
		return L_33;
	}
}
IL2CPP_EXTERN_C  AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m18DD3B1D370CD3B22732D57BF4589968ED57CCB0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F*>(__this + _offset);
	AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* _returnValue;
	_returnValue = DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes_m18DD3B1D370CD3B22732D57BF4589968ED57CCB0(_thisAdjusted, method);
	return _returnValue;
}
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::System.ComponentModel.ICustomTypeDescriptor.GetConverter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mEF52182F92A6E3AACEC123F617CCA697C854A283 (DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICustomTypeDescriptor_tBCDA3354DBE93ADBD2AC81379EB3957347BAD4E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* V_0 = NULL;
	ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* V_1 = NULL;
	TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* L_0 = __this->____node_0;
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_1 = L_0->___Provider_3;
		V_0 = L_1;
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_2 = V_0;
		V_1 = ((ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A*)IsInstSealed((RuntimeObject*)L_2, ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A_il2cpp_TypeInfo_var));
		ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* L_3 = V_1;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* L_4 = V_1;
		Type_t* L_5 = __this->____objectType_1;
		RuntimeObject* L_6 = __this->____instance_2;
		TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* L_7;
		L_7 = ReflectTypeDescriptionProvider_GetConverter_mD847E744202DEA5D7208D1F1AE25CFBDC37A75B9(L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_00ba;
	}

IL_002e:
	{
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_8 = V_0;
		Type_t* L_9 = __this->____objectType_1;
		RuntimeObject* L_10 = __this->____instance_2;
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(7 /* System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object) */, L_8, L_9, L_10);
		V_3 = L_11;
		RuntimeObject* L_12 = V_3;
		if (L_12)
		{
			goto IL_007a;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* L_15 = __this->____node_0;
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_16 = L_15->___Provider_3;
		Type_t* L_17;
		L_17 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_16, NULL);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_17);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_14;
		ArrayElementTypeCheck (L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE451E6780C8EAA8CB72AB3978131B7E20CF6240)));
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE451E6780C8EAA8CB72AB3978131B7E20CF6240)));
		String_t* L_20;
		L_20 = SR_GetString_m56640423E54C5F10BFDEF27B7E692A33745EB696(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E1954CC1D1301F9218E014A4F6AC2F15FD854CA)), L_19, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mEF52182F92A6E3AACEC123F617CCA697C854A283_RuntimeMethod_var)));
	}

IL_007a:
	{
		RuntimeObject* L_22 = V_3;
		TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* L_23;
		L_23 = InterfaceFuncInvoker0< TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* >::Invoke(1 /* System.ComponentModel.TypeConverter System.ComponentModel.ICustomTypeDescriptor::GetConverter() */, ICustomTypeDescriptor_tBCDA3354DBE93ADBD2AC81379EB3957347BAD4E8_il2cpp_TypeInfo_var, L_22);
		V_2 = L_23;
		TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* L_24 = V_2;
		if (L_24)
		{
			goto IL_00ba;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_25;
		TypeDescriptionNode_t512E9BEFF3C9B7DB42E5813B64BA313E02A7C0D8* L_27 = __this->____node_0;
		TypeDescriptionProvider_t9D673AE2CA056241BE2C294055B821D83D1AE664* L_28 = L_27->___Provider_3;
		Type_t* L_29;
		L_29 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_28, NULL);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_29);
		ArrayElementTypeCheck (L_26, L_30);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_26;
		ArrayElementTypeCheck (L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1923895473B26C62EFACF6D52D9E1A9D790EF7E7)));
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1923895473B26C62EFACF6D52D9E1A9D790EF7E7)));
		String_t* L_32;
		L_32 = SR_GetString_m56640423E54C5F10BFDEF27B7E692A33745EB696(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E1954CC1D1301F9218E014A4F6AC2F15FD854CA)), L_31, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_33 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_33, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mEF52182F92A6E3AACEC123F617CCA697C854A283_RuntimeMethod_var)));
	}

IL_00ba:
	{
		TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* L_34 = V_2;
		return L_34;
	}
}
IL2CPP_EXTERN_C  TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mEF52182F92A6E3AACEC123F617CCA697C854A283_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F*>(__this + _offset);
	TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* _returnValue;
	_returnValue = DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter_mEF52182F92A6E3AACEC123F617CCA697C854A283(_thisAdjusted, method);
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
// System.Void System.ComponentModel.WeakHashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakHashtable__ctor_mBFFE17D4547F681A27EBE60D277625C9F9D0510F (WeakHashtable_t56A27CA9C3EEBBCD3B87B4DFE255DB3830C535C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakHashtable_t56A27CA9C3EEBBCD3B87B4DFE255DB3830C535C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WeakHashtable_t56A27CA9C3EEBBCD3B87B4DFE255DB3830C535C3_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WeakHashtable_t56A27CA9C3EEBBCD3B87B4DFE255DB3830C535C3_StaticFields*)il2cpp_codegen_static_fields_for(WeakHashtable_t56A27CA9C3EEBBCD3B87B4DFE255DB3830C535C3_il2cpp_TypeInfo_var))->____comparer_22;
		Hashtable__ctor_m1F7298B21166D6C35BD6C6EC9F71BAC05981B164(__this, L_0, NULL);
		return;
	}
}
// System.Void System.ComponentModel.WeakHashtable::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakHashtable_Clear_m306746F8BC4535C2327FFDF167F23CA06077A6EE (WeakHashtable_t56A27CA9C3EEBBCD3B87B4DFE255DB3830C535C3* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_Clear_m189F8A2E5FE36FEC069049240660F447B22F58A1(__this, NULL);
		return;
	}
}
// System.Void System.ComponentModel.WeakHashtable::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakHashtable_Remove_mC091A16F4775270A1FC840FE4E82917E4F010A03 (WeakHashtable_t56A27CA9C3EEBBCD3B87B4DFE255DB3830C535C3* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		Hashtable_Remove_mE9F11255E490CB42E8F6D9F659EA5F3B9A3A6D1F(__this, L_0, NULL);
		return;
	}
}
// System.Void System.ComponentModel.WeakHashtable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakHashtable__cctor_m268BB36B49F6AC85E0947A22A6D799C36072BBCC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakHashtable_t56A27CA9C3EEBBCD3B87B4DFE255DB3830C535C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakKeyComparer_tD11B2C49418FE3489BC76A9B4D20C0AA8E851EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WeakKeyComparer_tD11B2C49418FE3489BC76A9B4D20C0AA8E851EC5* L_0 = (WeakKeyComparer_tD11B2C49418FE3489BC76A9B4D20C0AA8E851EC5*)il2cpp_codegen_object_new(WeakKeyComparer_tD11B2C49418FE3489BC76A9B4D20C0AA8E851EC5_il2cpp_TypeInfo_var);
		WeakKeyComparer__ctor_m1DB79747A0192C8CB5B45E74743CA7CA7EC09E52(L_0, NULL);
		((WeakHashtable_t56A27CA9C3EEBBCD3B87B4DFE255DB3830C535C3_StaticFields*)il2cpp_codegen_static_fields_for(WeakHashtable_t56A27CA9C3EEBBCD3B87B4DFE255DB3830C535C3_il2cpp_TypeInfo_var))->____comparer_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WeakHashtable_t56A27CA9C3EEBBCD3B87B4DFE255DB3830C535C3_StaticFields*)il2cpp_codegen_static_fields_for(WeakHashtable_t56A27CA9C3EEBBCD3B87B4DFE255DB3830C535C3_il2cpp_TypeInfo_var))->____comparer_22), (void*)L_0);
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
// System.Boolean System.ComponentModel.WeakHashtable/WeakKeyComparer::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakKeyComparer_System_Collections_IEqualityComparer_Equals_m2DE66C4A7CF44E5A99DA241D8271C285ABBE56F8 (WeakKeyComparer_tD11B2C49418FE3489BC76A9B4D20C0AA8E851EC5* __this, RuntimeObject* ___x0, RuntimeObject* ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___x0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		RuntimeObject* L_1 = ___y1;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0008:
	{
		RuntimeObject* L_2 = ___y1;
		if (!L_2)
		{
			goto IL_0056;
		}
	}
	{
		RuntimeObject* L_3 = ___x0;
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		RuntimeObject* L_5 = ___y1;
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_6))))
		{
			goto IL_0056;
		}
	}
	{
		RuntimeObject* L_7 = ___x0;
		V_0 = ((WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)IsInstClass((RuntimeObject*)L_7, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_8 = ___y1;
		V_1 = ((WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)IsInstClass((RuntimeObject*)L_8, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var));
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_0;
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_0;
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_10);
		if (L_11)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_0;
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_12);
		___x0 = L_13;
	}

IL_003c:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_1;
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_15 = V_1;
		bool L_16;
		L_16 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_15);
		if (L_16)
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0049:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_17 = V_1;
		RuntimeObject* L_18;
		L_18 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_17);
		___y1 = L_18;
	}

IL_0051:
	{
		RuntimeObject* L_19 = ___x0;
		RuntimeObject* L_20 = ___y1;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_19) == ((RuntimeObject*)(RuntimeObject*)L_20))? 1 : 0);
	}

IL_0056:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.WeakHashtable/WeakKeyComparer::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WeakKeyComparer_System_Collections_IEqualityComparer_GetHashCode_m7E00D4A81998A46FFD9BE51679C6169DF0CCBF63 (WeakKeyComparer_tD11B2C49418FE3489BC76A9B4D20C0AA8E851EC5* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___obj0;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.ComponentModel.WeakHashtable/WeakKeyComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakKeyComparer__ctor_m1DB79747A0192C8CB5B45E74743CA7CA7EC09E52 (WeakKeyComparer_tD11B2C49418FE3489BC76A9B4D20C0AA8E851EC5* __this, const RuntimeMethod* method) 
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
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanceDescriptor__ctor_m4A88597D681C8A8A9551AB318F8CBB47D49BEC57 (InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5* __this, MemberInfo_t* ___member0, RuntimeObject* ___arguments1, const RuntimeMethod* method) 
{
	{
		MemberInfo_t* L_0 = ___member0;
		RuntimeObject* L_1 = ___arguments1;
		InstanceDescriptor__ctor_m9AA7C372C2EEDA3F07BE3A6CCC21BCBD3814B64F(__this, L_0, L_1, (bool)1, NULL);
		return;
	}
}
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanceDescriptor__ctor_m9AA7C372C2EEDA3F07BE3A6CCC21BCBD3814B64F (InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5* __this, MemberInfo_t* ___member0, RuntimeObject* ___arguments1, bool ___isComplete2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* V_1 = NULL;
	MethodInfo_t* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	PropertyInfo_t* G_B21_0 = NULL;
	PropertyInfo_t* G_B20_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MemberInfo_t* L_0 = ___member0;
		__this->___U3CMemberInfoU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMemberInfoU3Ek__BackingField_2), (void*)L_0);
		bool L_1 = ___isComplete2;
		__this->___U3CIsCompleteU3Ek__BackingField_1 = L_1;
		RuntimeObject* L_2 = ___arguments1;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		__this->___U3CArgumentsU3Ek__BackingField_0 = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArgumentsU3Ek__BackingField_0), (void*)(RuntimeObject*)L_3);
		goto IL_003f;
	}

IL_0024:
	{
		RuntimeObject* L_4 = ___arguments1;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_0 = L_6;
		RuntimeObject* L_7 = ___arguments1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_7, (RuntimeArray*)L_8, 0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		__this->___U3CArgumentsU3Ek__BackingField_0 = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArgumentsU3Ek__BackingField_0), (void*)(RuntimeObject*)L_9);
	}

IL_003f:
	{
		MemberInfo_t* L_10 = ___member0;
		if (!((FieldInfo_t*)IsInstClass((RuntimeObject*)L_10, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_007a;
		}
	}
	{
		MemberInfo_t* L_11 = ___member0;
		bool L_12;
		L_12 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(((FieldInfo_t*)CastclassClass((RuntimeObject*)L_11, FieldInfo_t_il2cpp_TypeInfo_var)), NULL);
		if (L_12)
		{
			goto IL_005f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA60E60EC4C02F596452F32896DDBB76C73DC4BC9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InstanceDescriptor__ctor_m9AA7C372C2EEDA3F07BE3A6CCC21BCBD3814B64F_RuntimeMethod_var)));
	}

IL_005f:
	{
		RuntimeObject* L_14;
		L_14 = InstanceDescriptor_get_Arguments_mF64376FB377AA57CC10376452FECFDC55C6EC837_inline(__this, NULL);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_14);
		if (!L_15)
		{
			goto IL_0144;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral211A2CDAF615EAE8B65611C744230B2D6943CBDB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InstanceDescriptor__ctor_m9AA7C372C2EEDA3F07BE3A6CCC21BCBD3814B64F_RuntimeMethod_var)));
	}

IL_007a:
	{
		MemberInfo_t* L_17 = ___member0;
		if (!((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)IsInstClass((RuntimeObject*)L_17, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var)))
		{
			goto IL_00bf;
		}
	}
	{
		MemberInfo_t* L_18 = ___member0;
		V_1 = ((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)CastclassClass((RuntimeObject*)L_18, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var));
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_19 = V_1;
		bool L_20;
		L_20 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_19, NULL);
		if (!L_20)
		{
			goto IL_009c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D6DABB36F739F10886513F808FB1CE72EEE5547)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InstanceDescriptor__ctor_m9AA7C372C2EEDA3F07BE3A6CCC21BCBD3814B64F_RuntimeMethod_var)));
	}

IL_009c:
	{
		RuntimeObject* L_22;
		L_22 = InstanceDescriptor_get_Arguments_mF64376FB377AA57CC10376452FECFDC55C6EC837_inline(__this, NULL);
		int32_t L_23;
		L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_22);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_24 = V_1;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_25;
		L_25 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_24);
		if ((((int32_t)L_23) == ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0144;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_26 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral211A2CDAF615EAE8B65611C744230B2D6943CBDB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InstanceDescriptor__ctor_m9AA7C372C2EEDA3F07BE3A6CCC21BCBD3814B64F_RuntimeMethod_var)));
	}

IL_00bf:
	{
		MemberInfo_t* L_27 = ___member0;
		if (!((MethodInfo_t*)IsInstClass((RuntimeObject*)L_27, MethodInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0101;
		}
	}
	{
		MemberInfo_t* L_28 = ___member0;
		V_2 = ((MethodInfo_t*)CastclassClass((RuntimeObject*)L_28, MethodInfo_t_il2cpp_TypeInfo_var));
		MethodInfo_t* L_29 = V_2;
		bool L_30;
		L_30 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_29, NULL);
		if (L_30)
		{
			goto IL_00e1;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_31 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA60E60EC4C02F596452F32896DDBB76C73DC4BC9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InstanceDescriptor__ctor_m9AA7C372C2EEDA3F07BE3A6CCC21BCBD3814B64F_RuntimeMethod_var)));
	}

IL_00e1:
	{
		RuntimeObject* L_32;
		L_32 = InstanceDescriptor_get_Arguments_mF64376FB377AA57CC10376452FECFDC55C6EC837_inline(__this, NULL);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_32);
		MethodInfo_t* L_34 = V_2;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_35;
		L_35 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_34);
		if ((((int32_t)L_33) == ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_0144;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_36 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral211A2CDAF615EAE8B65611C744230B2D6943CBDB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InstanceDescriptor__ctor_m9AA7C372C2EEDA3F07BE3A6CCC21BCBD3814B64F_RuntimeMethod_var)));
	}

IL_0101:
	{
		MemberInfo_t* L_37 = ___member0;
		if (!((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_37, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0144;
		}
	}
	{
		MemberInfo_t* L_38 = ___member0;
		PropertyInfo_t* L_39 = ((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_38, PropertyInfo_t_il2cpp_TypeInfo_var));
		bool L_40;
		L_40 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_39);
		G_B20_0 = L_39;
		if (L_40)
		{
			G_B21_0 = L_39;
			goto IL_0122;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_41 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_41, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral28D16C61E1BADF2B97B5BFF59E15883298B4F87F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InstanceDescriptor__ctor_m9AA7C372C2EEDA3F07BE3A6CCC21BCBD3814B64F_RuntimeMethod_var)));
	}

IL_0122:
	{
		MethodInfo_t* L_42;
		L_42 = PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74(G_B21_0, NULL);
		V_3 = L_42;
		MethodInfo_t* L_43 = V_3;
		bool L_44;
		L_44 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_43, (MethodInfo_t*)NULL, NULL);
		if (!L_44)
		{
			goto IL_0144;
		}
	}
	{
		MethodInfo_t* L_45 = V_3;
		bool L_46;
		L_46 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_45, NULL);
		if (L_46)
		{
			goto IL_0144;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA60E60EC4C02F596452F32896DDBB76C73DC4BC9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InstanceDescriptor__ctor_m9AA7C372C2EEDA3F07BE3A6CCC21BCBD3814B64F_RuntimeMethod_var)));
	}

IL_0144:
	{
		return;
	}
}
// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::get_Arguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstanceDescriptor_get_Arguments_mF64376FB377AA57CC10376452FECFDC55C6EC837 (InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CArgumentsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::get_MemberInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t* InstanceDescriptor_get_MemberInfo_m58DD58AFB1C49C6B33C3958002E7CB9D61374E9E (InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5* __this, const RuntimeMethod* method) 
{
	{
		MemberInfo_t* L_0 = __this->___U3CMemberInfoU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Object System.ComponentModel.Design.Serialization.InstanceDescriptor::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstanceDescriptor_Invoke_mACDF3C04B3998B38C4A79FCFC66F4760EEEEB2FE (InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0;
		L_0 = InstanceDescriptor_get_Arguments_mF64376FB377AA57CC10376452FECFDC55C6EC837_inline(__this, NULL);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		RuntimeObject* L_3;
		L_3 = InstanceDescriptor_get_Arguments_mF64376FB377AA57CC10376452FECFDC55C6EC837_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_3, (RuntimeArray*)L_4, 0);
		V_1 = 0;
		goto IL_0040;
	}

IL_0022:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		if (!((InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5*)IsInstSealed((RuntimeObject*)L_8, InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5_il2cpp_TypeInfo_var)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		int32_t L_10 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		RuntimeObject* L_15;
		L_15 = InstanceDescriptor_Invoke_mACDF3C04B3998B38C4A79FCFC66F4760EEEEB2FE(((InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5*)CastclassSealed((RuntimeObject*)L_14, InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5_il2cpp_TypeInfo_var)), NULL);
		ArrayElementTypeCheck (L_9, L_15);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (RuntimeObject*)L_15);
	}

IL_003c:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0040:
	{
		int32_t L_17 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		MemberInfo_t* L_19;
		L_19 = InstanceDescriptor_get_MemberInfo_m58DD58AFB1C49C6B33C3958002E7CB9D61374E9E_inline(__this, NULL);
		if (!((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)IsInstClass((RuntimeObject*)L_19, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var)))
		{
			goto IL_0065;
		}
	}
	{
		MemberInfo_t* L_20;
		L_20 = InstanceDescriptor_get_MemberInfo_m58DD58AFB1C49C6B33C3958002E7CB9D61374E9E_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_0;
		RuntimeObject* L_22;
		L_22 = ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE(((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)CastclassClass((RuntimeObject*)L_20, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var)), L_21, NULL);
		return L_22;
	}

IL_0065:
	{
		MemberInfo_t* L_23;
		L_23 = InstanceDescriptor_get_MemberInfo_m58DD58AFB1C49C6B33C3958002E7CB9D61374E9E_inline(__this, NULL);
		if (!((MethodInfo_t*)IsInstClass((RuntimeObject*)L_23, MethodInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0085;
		}
	}
	{
		MemberInfo_t* L_24;
		L_24 = InstanceDescriptor_get_MemberInfo_m58DD58AFB1C49C6B33C3958002E7CB9D61374E9E_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = V_0;
		RuntimeObject* L_26;
		L_26 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(((MethodInfo_t*)CastclassClass((RuntimeObject*)L_24, MethodInfo_t_il2cpp_TypeInfo_var)), NULL, L_25, NULL);
		return L_26;
	}

IL_0085:
	{
		MemberInfo_t* L_27;
		L_27 = InstanceDescriptor_get_MemberInfo_m58DD58AFB1C49C6B33C3958002E7CB9D61374E9E_inline(__this, NULL);
		if (!((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_27, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_00a5;
		}
	}
	{
		MemberInfo_t* L_28;
		L_28 = InstanceDescriptor_get_MemberInfo_m58DD58AFB1C49C6B33C3958002E7CB9D61374E9E_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = V_0;
		RuntimeObject* L_30;
		L_30 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, ((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_28, PropertyInfo_t_il2cpp_TypeInfo_var)), NULL, L_29);
		return L_30;
	}

IL_00a5:
	{
		MemberInfo_t* L_31;
		L_31 = InstanceDescriptor_get_MemberInfo_m58DD58AFB1C49C6B33C3958002E7CB9D61374E9E_inline(__this, NULL);
		if (!((FieldInfo_t*)IsInstClass((RuntimeObject*)L_31, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_00c4;
		}
	}
	{
		MemberInfo_t* L_32;
		L_32 = InstanceDescriptor_get_MemberInfo_m58DD58AFB1C49C6B33C3958002E7CB9D61374E9E_inline(__this, NULL);
		RuntimeObject* L_33;
		L_33 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, ((FieldInfo_t*)CastclassClass((RuntimeObject*)L_32, FieldInfo_t_il2cpp_TypeInfo_var)), NULL);
		return L_33;
	}

IL_00c4:
	{
		return NULL;
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
// System.Void System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootDesignerSerializerAttribute__ctor_m52C401C2E19FF1C4E9A8F140811D5AA762C60602 (RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F* __this, String_t* ___serializerTypeName0, String_t* ___baseSerializerTypeName1, bool ___reloadable2, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___serializerTypeName0;
		__this->___U3CSerializerTypeNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSerializerTypeNameU3Ek__BackingField_2), (void*)L_0);
		String_t* L_1 = ___baseSerializerTypeName1;
		__this->___U3CSerializerBaseTypeNameU3Ek__BackingField_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSerializerBaseTypeNameU3Ek__BackingField_3), (void*)L_1);
		bool L_2 = ___reloadable2;
		__this->___U3CReloadableU3Ek__BackingField_1 = L_2;
		return;
	}
}
// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::get_SerializerBaseTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RootDesignerSerializerAttribute_get_SerializerBaseTypeName_m78A27809B7F723942C432825B30C43ECB87A1124 (RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSerializerBaseTypeNameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Object System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::get_TypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RootDesignerSerializerAttribute_get_TypeId_m3177E104F2130582DB56C4321979B6952B7E0098 (RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = __this->____typeId_0;
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_1;
		L_1 = RootDesignerSerializerAttribute_get_SerializerBaseTypeName_m78A27809B7F723942C432825B30C43ECB87A1124_inline(__this, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_2, ((int32_t)44), NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_5 = V_0;
		int32_t L_6 = V_1;
		String_t* L_7;
		L_7 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_5, 0, L_6, NULL);
		V_0 = L_7;
	}

IL_0025:
	{
		Type_t* L_8;
		L_8 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_8);
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, L_10, NULL);
		__this->____typeId_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____typeId_0), (void*)L_11);
	}

IL_003c:
	{
		String_t* L_12 = __this->____typeId_0;
		return L_12;
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
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_mBEC4CCF86E1A22330C31E1C069B2F21695445A10 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	{
		OrderedDictionary__ctor_m552AA3E019FF5D93545B5DFFB7B4917C72251600(__this, 0, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_m552AA3E019FF5D93545B5DFFB7B4917C72251600 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		OrderedDictionary__ctor_mF88C40080BA8F436358DE5195BB88C5957A4AC66(__this, L_0, (RuntimeObject*)NULL, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_mF88C40080BA8F436358DE5195BB88C5957A4AC66 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___capacity0;
		__this->____initialCapacity_2 = L_0;
		RuntimeObject* L_1 = ___comparer1;
		__this->____comparer_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_3), (void*)L_1);
		return;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_m442555F1C427B3EF7DC305AE414FD5EBD90A4861 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		__this->____siInfo_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo_6), (void*)L_0);
		return;
	}
}
// System.Int32 System.Collections.Specialized.OrderedDictionary::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedDictionary_get_Count_m9B55DB3275692CD51DE69FA8200D1998BD258A0A (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::get_objectsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____objectsArray_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->____initialCapacity_2;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0(L_2, L_1, NULL);
		__this->____objectsArray_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objectsArray_0), (void*)L_2);
	}

IL_0019:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = __this->____objectsArray_0;
		return L_3;
	}
}
// System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::get_objectsTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____objectsTable_1;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = __this->____initialCapacity_2;
		RuntimeObject* L_2 = __this->____comparer_3;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC(L_3, L_1, L_2, NULL);
		__this->____objectsTable_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objectsTable_1), (void*)L_3);
	}

IL_001f:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = __this->____objectsTable_1;
		return L_4;
	}
}
// System.Object System.Collections.Specialized.OrderedDictionary::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_System_Collections_ICollection_get_SyncRoot_m67C653BEB9C1E451229203FAE5B6453681E7FBDB (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_5;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (&__this->____syncRoot_5);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_1, L_2, NULL, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_5;
		return L_4;
	}
}
// System.Object System.Collections.Specialized.OrderedDictionary::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_get_Item_m5755C415F2E5CAC5A0AE3EFBB5A8D84915B37ED8 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0;
		L_0 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_1 = ___key0;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_set_Item_m9406B6A94651B7DB301BC383518FC9B37277122E (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____readOnly_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9300F92FA968642C4C028D2E1DB9FDF0489F53A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_set_Item_m9406B6A94651B7DB301BC383518FC9B37277122E_RuntimeMethod_var)));
	}

IL_0013:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2;
		L_2 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_3 = ___key0;
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(19 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_2, L_3);
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5;
		L_5 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_6 = ___key0;
		RuntimeObject* L_7 = ___value1;
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_5, L_6, L_7);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_8;
		L_8 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		RuntimeObject* L_9 = ___key0;
		int32_t L_10;
		L_10 = OrderedDictionary_IndexOfKey_m0A1A8D3EA6A175D722513B7AAD3518A4C1502837(__this, L_9, NULL);
		RuntimeObject* L_11 = ___key0;
		RuntimeObject* L_12 = ___value1;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_13;
		memset((&L_13), 0, sizeof(L_13));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_13), L_11, L_12, /*hidden argument*/NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_14 = L_13;
		RuntimeObject* L_15 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_14);
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(26 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_8, L_10, L_15);
		return;
	}

IL_004d:
	{
		RuntimeObject* L_16 = ___key0;
		RuntimeObject* L_17 = ___value1;
		OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3(__this, L_16, L_17, NULL);
		return;
	}
}
// System.Collections.ICollection System.Collections.Specialized.OrderedDictionary::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_get_Values_m14CFA04FF0A8DC8B41386192B029EC604AF551BA (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* L_1 = (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F*)il2cpp_codegen_object_new(OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F_il2cpp_TypeInfo_var);
		OrderedDictionaryKeyValueCollection__ctor_mA61FF47888F401F7194B3AD6B6F5F81F9FECEA64(L_1, L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____readOnly_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9300F92FA968642C4C028D2E1DB9FDF0489F53A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3_RuntimeMethod_var)));
	}

IL_0013:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2;
		L_2 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_3 = ___key0;
		RuntimeObject* L_4 = ___value1;
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(16 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_2, L_3, L_4);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_5;
		L_5 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		RuntimeObject* L_6 = ___key0;
		RuntimeObject* L_7 = ___value1;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_6, L_7, /*hidden argument*/NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_9 = L_8;
		RuntimeObject* L_10 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_9);
		int32_t L_11;
		L_11 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_5, L_10);
		return;
	}
}
// System.Boolean System.Collections.Specialized.OrderedDictionary::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OrderedDictionary_Contains_m63AFE431564000B20908A732633780B192F7F95E (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0;
		L_0 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_1 = ___key0;
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(19 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_CopyTo_m96E73EF7B84BA4D1ABA184134465F41DFFE73C2A (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0;
		L_0 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeArray* L_1 = ___array0;
		int32_t L_2 = ___index1;
		VirtualActionInvoker2< RuntimeArray*, int32_t >::Invoke(21 /* System.Void System.Collections.Hashtable::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Int32 System.Collections.Specialized.OrderedDictionary::IndexOfKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedDictionary_IndexOfKey_m0A1A8D3EA6A175D722513B7AAD3518A4C1502837 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = 0;
		goto IL_0046;
	}

IL_0004:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		int32_t L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		V_2 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_2, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_3;
		L_3 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_2), NULL);
		V_1 = L_3;
		RuntimeObject* L_4 = __this->____comparer_3;
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_5 = __this->____comparer_3;
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = ___key0;
		bool L_8;
		L_8 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_0037:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = ___key0;
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_10, L_11);
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0042:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0046:
	{
		int32_t L_15 = V_0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_16;
		L_16 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return (-1);
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_Remove_mD4DFDFA8710B689C990EEE8EFCC50EC21CE51EA3 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->____readOnly_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9300F92FA968642C4C028D2E1DB9FDF0489F53A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_Remove_mD4DFDFA8710B689C990EEE8EFCC50EC21CE51EA3_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___key0;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_Remove_mD4DFDFA8710B689C990EEE8EFCC50EC21CE51EA3_RuntimeMethod_var)));
	}

IL_0021:
	{
		RuntimeObject* L_4 = ___key0;
		int32_t L_5;
		L_5 = OrderedDictionary_IndexOfKey_m0A1A8D3EA6A175D722513B7AAD3518A4C1502837(__this, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_7;
		L_7 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_8 = ___key0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(28 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_7, L_8);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_9;
		L_9 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		int32_t L_10 = V_0;
		VirtualActionInvoker1< int32_t >::Invoke(40 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_9, L_10);
		return;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.OrderedDictionary::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_GetEnumerator_mECA50DD161EDC87F84CD75764643826BFF14C16F (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* L_1 = (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6*)il2cpp_codegen_object_new(OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775(L_1, L_0, 3, NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_System_Collections_IEnumerable_GetEnumerator_m4AC8186C465CF478A39CC2FADBDBA75AA9DA5084 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* L_1 = (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6*)il2cpp_codegen_object_new(OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775(L_1, L_0, 3, NULL);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_GetObjectData_m946A3884AC9A0398EF3CBDA7E5C7C268B01FC02C (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D54049E84477C75DD8AFAD9B2244E5D4C140668);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA37BABAF77DF95A70A2787B19C22BF16BBEAD7B7);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_GetObjectData_m946A3884AC9A0398EF3CBDA7E5C7C268B01FC02C_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		RuntimeObject* L_3 = __this->____comparer_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_2, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, L_3, L_5, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___info0;
		bool L_7 = __this->____readOnly_4;
		SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D(L_6, _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___info0;
		int32_t L_9 = __this->____initialCapacity_2;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_8, _stringLiteralA37BABAF77DF95A70A2787B19C22BF16BBEAD7B7, L_9, NULL);
		int32_t L_10;
		L_10 = OrderedDictionary_get_Count_m9B55DB3275692CD51DE69FA8200D1998BD258A0A(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_0 = L_11;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_12 = __this->____objectsArray_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_0;
		VirtualActionInvoker1< RuntimeArray* >::Invoke(32 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_12, (RuntimeArray*)L_13);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = ___info0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_14, _stringLiteral6D54049E84477C75DD8AFAD9B2244E5D4C140668, (RuntimeObject*)L_15, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m600671E042DB3E5BD39D5439D3C88010EEA1E95A (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___sender0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(19 /* System.Void System.Collections.Specialized.OrderedDictionary::OnDeserialization(System.Object) */, __this, L_0);
		return;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_OnDeserialization_m069DE30CEBE5F11C239DD42383204D14793714D7 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D54049E84477C75DD8AFAD9B2244E5D4C140668);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA37BABAF77DF95A70A2787B19C22BF16BBEAD7B7);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_4;
	memset((&V_4), 0, sizeof(V_4));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo_6;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_1 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEE8DD47F29A535762B8579D9E3E69D0D84968BB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_OnDeserialization_m069DE30CEBE5F11C239DD42383204D14793714D7_RuntimeMethod_var)));
	}

IL_0013:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = __this->____siInfo_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeObject* L_5;
		L_5 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_2, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, L_4, NULL);
		__this->____comparer_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_3), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_5, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var)));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = __this->____siInfo_6;
		bool L_7;
		L_7 = SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5(L_6, _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA, NULL);
		__this->____readOnly_4 = L_7;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = __this->____siInfo_6;
		int32_t L_9;
		L_9 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_8, _stringLiteralA37BABAF77DF95A70A2787B19C22BF16BBEAD7B7, NULL);
		__this->____initialCapacity_2 = L_9;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = __this->____siInfo_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13;
		L_13 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_10, _stringLiteral6D54049E84477C75DD8AFAD9B2244E5D4C140668, L_12, NULL);
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		if (!L_14)
		{
			goto IL_00dd;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		V_1 = L_15;
		V_2 = 0;
		goto IL_00d7;
	}

IL_008d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_1;
		int32_t L_17 = V_2;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_20 = V_3;
		V_4 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_20, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		goto IL_00a7;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009b;
		}
		throw e;
	}

CATCH_009b:
	{// begin catch(System.Object)
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_21 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1757A05516A315BB0FA6014D44AB4E34D2ECE718)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_OnDeserialization_m069DE30CEBE5F11C239DD42383204D14793714D7_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_00a7:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_22;
		L_22 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_23 = V_4;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_24 = L_23;
		RuntimeObject* L_25 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_24);
		int32_t L_26;
		L_26 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_22, L_25);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_27;
		L_27 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_28;
		L_28 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_4), NULL);
		RuntimeObject* L_29;
		L_29 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_4), NULL);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(16 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_27, L_28, L_29);
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00d7:
	{
		int32_t L_31 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_008d;
		}
	}

IL_00dd:
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
// System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::.ctor(System.Collections.ArrayList,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___array0, int32_t ___objectReturnType1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___array0;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(35 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		__this->____arrayEnumerator_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrayEnumerator_1), (void*)L_1);
		int32_t L_2 = ___objectReturnType1;
		__this->____objectReturnType_0 = L_2;
		return;
	}
}
// System.Object System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryEnumerator_get_Current_m1513DF120F398083CA52B7B330D7FF9D5FD6BC69 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____objectReturnType_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = __this->____arrayEnumerator_1;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_1);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_2, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_3;
		L_3 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_0), NULL);
		return L_3;
	}

IL_0022:
	{
		int32_t L_4 = __this->____objectReturnType_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_5 = __this->____arrayEnumerator_1;
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_6, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_7;
		L_7 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_0), NULL);
		return L_7;
	}

IL_0044:
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		L_8 = OrderedDictionaryEnumerator_get_Entry_m70BE070A9125BA894E98803E322A51E34AAB0074(__this, NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_9 = L_8;
		RuntimeObject* L_10 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}
}
// System.Collections.DictionaryEntry System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB OrderedDictionaryEnumerator_get_Entry_m70BE070A9125BA894E98803E322A51E34AAB0074 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____arrayEnumerator_1;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_1, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_2;
		L_2 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_0), NULL);
		RuntimeObject* L_3 = __this->____arrayEnumerator_1;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_3);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_4, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_5;
		L_5 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_0), NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
		memset((&L_6), 0, sizeof(L_6));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryEnumerator_get_Key_mAE1632D8B4767AC6A321CDDCECFA3B943CFEB202 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____arrayEnumerator_1;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_1, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_2;
		L_2 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_0), NULL);
		return L_2;
	}
}
// System.Object System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryEnumerator_get_Value_m3D9DB591978A7EA9C640AD820A301AD176665AB9 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____arrayEnumerator_1;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_1, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_2;
		L_2 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_0), NULL);
		return L_2;
	}
}
// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OrderedDictionaryEnumerator_MoveNext_m25E708E43E6B36CEAB84121CB0831590F40985BF (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____arrayEnumerator_1;
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator_Reset_m6878E0A1524911AEBEEC87C578C75584DAFD9022 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____arrayEnumerator_1;
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
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
// System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::.ctor(System.Collections.ArrayList,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryKeyValueCollection__ctor_mA61FF47888F401F7194B3AD6B6F5F81F9FECEA64 (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___array0, bool ___isKeys1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___array0;
		__this->____objects_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objects_0), (void*)L_0);
		bool L_1 = ___isKeys1;
		__this->____isKeys_1 = L_1;
		return;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo_m6B8299303DC7D0A30936938CABE4F81F610077FF (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	RuntimeArray* G_B8_0 = NULL;
	RuntimeArray* G_B7_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeArray* G_B9_1 = NULL;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo_m6B8299303DC7D0A30936938CABE4F81F610077FF_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___index1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo_m6B8299303DC7D0A30936938CABE4F81F610077FF_RuntimeMethod_var)));
	}

IL_0028:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_7 = __this->____objects_0;
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(35 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_7);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0079:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_0;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_10 = V_3;
					if (!L_10)
					{
						goto IL_0089;
					}
				}
				{
					RuntimeObject* L_11 = V_3;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0089:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006f_1;
			}

IL_0036_1:
			{
				RuntimeObject* L_12 = V_0;
				RuntimeObject* L_13;
				L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				V_1 = L_13;
				RuntimeArray* L_14 = ___array0;
				bool L_15 = __this->____isKeys_1;
				G_B7_0 = L_14;
				if (L_15)
				{
					G_B8_0 = L_14;
					goto IL_0056_1;
				}
			}
			{
				RuntimeObject* L_16 = V_1;
				V_2 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_16, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
				RuntimeObject* L_17;
				L_17 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_2), NULL);
				G_B9_0 = L_17;
				G_B9_1 = G_B7_0;
				goto IL_0064_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_18 = V_1;
				V_2 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_18, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
				RuntimeObject* L_19;
				L_19 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_2), NULL);
				G_B9_0 = L_19;
				G_B9_1 = G_B8_0;
			}

IL_0064_1:
			{
				int32_t L_20 = ___index1;
				Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(G_B9_1, G_B9_0, L_20, NULL);
				int32_t L_21 = ___index1;
				___index1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
			}

IL_006f_1:
			{
				RuntimeObject* L_22 = V_0;
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0036_1;
				}
			}
			{
				goto IL_008a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008a:
	{
		return;
	}
}
// System.Int32 System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.ICollection.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedDictionaryKeyValueCollection_System_Collections_ICollection_get_Count_m7E6084DFB4648AD05337326CC87BC5AAAC2B310B (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____objects_0;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Object System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryKeyValueCollection_System_Collections_ICollection_get_SyncRoot_m970D75F7E81A1BB6FA21D797A7D0A068D749E511 (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____objects_0;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryKeyValueCollection_System_Collections_IEnumerable_GetEnumerator_m915EACF605AF9EBDC96A2BDB466682095A03154D (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* G_B2_0 = NULL;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* G_B3_1 = NULL;
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____objects_0;
		bool L_1 = __this->____isKeys_1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* L_2 = (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6*)il2cpp_codegen_object_new(OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775(L_2, G_B3_1, G_B3_0, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m171C269D828658C44041FA68B6DE8CA290ED517F (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
// System.Void System.Net.Configuration.BypassElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.ConnectionManagementSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.DefaultProxySection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___parentElement0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.ProxyElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70 (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.HttpWebRequestElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.Ipv6Element::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.NetSectionGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.SettingsSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.PerformanceCountersElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.ServicePointManagerElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.SocketElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.WebProxyScriptElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821 (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.WebRequestModulesSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6 (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
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
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3 (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, RuntimeObject* ___parent0, RuntimeObject* ___configContext1, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___section2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		return NULL;
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
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2 (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* ReflectTypeDescriptionProvider_GetExtendedAttributes_m2C8411D8AF61F164E3728DD6976EA7D6C025A375_inline (ReflectTypeDescriptionProvider_t23B368F67882890DA4935F979394FB9D9C45CD6A* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA_il2cpp_TypeInfo_var);
		AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA* L_0 = ((AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA_StaticFields*)il2cpp_codegen_static_fields_for(AttributeCollection_tD55D3E17234E299E07B6071F31FEEB993C9AD8CA_il2cpp_TypeInfo_var))->___Empty_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InstanceDescriptor_get_Arguments_mF64376FB377AA57CC10376452FECFDC55C6EC837_inline (InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CArgumentsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MemberInfo_t* InstanceDescriptor_get_MemberInfo_m58DD58AFB1C49C6B33C3958002E7CB9D61374E9E_inline (InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5* __this, const RuntimeMethod* method) 
{
	{
		MemberInfo_t* L_0 = __this->___U3CMemberInfoU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RootDesignerSerializerAttribute_get_SerializerBaseTypeName_m78A27809B7F723942C432825B30C43ECB87A1124_inline (RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSerializerBaseTypeNameU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
