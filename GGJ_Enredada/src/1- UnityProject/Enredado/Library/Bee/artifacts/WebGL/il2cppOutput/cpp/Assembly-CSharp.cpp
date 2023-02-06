#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<FMODUnity.ParamRef>
struct List_1_t661315603FDBEA2CBD0830969F93FD47C156CE41;
// System.Collections.Generic.List`1<PlayerController>
struct List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5;
// System.Collections.Generic.List`1<FMODUnity.StudioEventEmitter>
struct List_1_tC9E9413E4D08BE51D6F2D26873E5DCB64FFDD26F;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Dialogue[]
struct DialogueU5BU5D_tFC77700B6B0A8EA8C4AA21B6353BB1A8D09188C1;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// FMODUnity.ParamRef[]
struct ParamRefU5BU5D_t26BF7E24E219F3CA313B1DB999DBB5D3FBB290FE;
// PlayerController[]
struct PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// TMPro.TextMeshPro[]
struct TextMeshProU5BU5D_tC24D27573EBF908D9D2D4FD451C3FD1A3817FC28;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Dialogue
struct Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455;
// DialogueManager
struct DialogueManager_t9C5A5026BF70075C3D71B589FB5D5EA74A3B9B1E;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LerpPosition
struct LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MusicManager
struct MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Platform
struct Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// PlayerCamera
struct PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// FMODUnity.StudioEventEmitter
struct StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIManager
struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// GameManager/<>c
struct U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5;
// GameManager/<LostGame>d__16
struct U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A;
// GameManager/<StartingMusic>d__12
struct U3CStartingMusicU3Ed__12_tE74EA80A6B9064CFFA00DD5DF490243C47DB9653;
// GameManager/<WaitForFirstInput>d__13
struct U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466;
// GameManager/<WaitForLastInput>d__18
struct U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Player/RootSplit
struct RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5;
// PlayerCamera/<ReCheckPosition>d__6
struct U3CReCheckPositionU3Ed__6_t2F5A038F67A9DBB6E4A5432E6219209E10287605;
// PlayerController/RootDeath
struct RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReCheckPositionU3Ed__6_t2F5A038F67A9DBB6E4A5432E6219209E10287605_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartingMusicU3Ed__12_tE74EA80A6B9064CFFA00DD5DF490243C47DB9653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0D6E0F2A13B9E6F784E5FD9F3AC1DBD8FB3274F1;
IL2CPP_EXTERN_C String_t* _stringLiteral1889A3408D94AD95F063097E86B2AF19095C978A;
IL2CPP_EXTERN_C String_t* _stringLiteral4BD8F377CA0163FDE23BF9EFCE641887CBD6E46B;
IL2CPP_EXTERN_C String_t* _stringLiteral687BF1C5A77D55FA116FD510310DBE91816AF144;
IL2CPP_EXTERN_C String_t* _stringLiteral991E7E9F7465A35405700BB8B1338E20542D440C;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCD61314E1724C4116AEF871B7FB8CC88D9DB54B5;
IL2CPP_EXTERN_C String_t* _stringLiteralCED429105E117C48976ACCA6782246EADFFE2324;
IL2CPP_EXTERN_C String_t* _stringLiteralEB73BF9EDF7AD24EB195A0017AA338EB69125E3B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m92EAA2900B924D05130FA09ACADBD35B9880C8A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dialogue_Show_m53D9FC32F79E878602BFC1E65AE0F892A1CEA020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_IncreaseCounter_mF6AC1A4AFC899A0B344EED1D32CD49B1ABC31681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m38413C395A4A25C10C9FF19EB34721D75AE41E01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mBE074345D4C1E1D5342A1A6213DAEC0D0E12E873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5618C6A149C1DD2C2F5006127FD5070FBD615DC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1113FB0AB881D717899754655E75DEADF565BC8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m38CC679C4192E2B0DCAEF6C09A85AD3D6038C228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLostGameU3Ed__16_System_Collections_IEnumerator_Reset_mD31DF594F2A47A55D8272DE0FBB779510207596A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReCheckPositionU3Ed__6_System_Collections_IEnumerator_Reset_m6EE22060B7B2B6682B9527560B5BAA9550982E02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartingMusicU3Ed__12_System_Collections_IEnumerator_Reset_mBB2A4F798197DD14E001C11DC2C982EA3B54B54F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CLostGameU3Eb__16_0_mD42142CAE2A4275C24132397C321668DE1F81970_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CWaitForFirstInputU3Eb__13_0_mE75B462AB12F249FCA2C32C1BD5B9F8322D9C498_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CWaitForLastInputU3Eb__18_0_m0C060BC1F6C0471938447DEE4A547F94BEADFBFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForFirstInputU3Ed__13_System_Collections_IEnumerator_Reset_m531247D61206F02EB04513F5394A1D746B30DD31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForLastInputU3Ed__18_System_Collections_IEnumerator_Reset_mA6EB3AF70C9170564FB90EC181B999D1FDEE06C1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DialogueU5BU5D_tFC77700B6B0A8EA8C4AA21B6353BB1A8D09188C1;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TextMeshProU5BU5D_tC24D27573EBF908D9D2D4FD451C3FD1A3817FC28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<PlayerController>
struct List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// GameManager/<>c
struct U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5  : public RuntimeObject
{
};

struct U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields
{
	// GameManager/<>c GameManager/<>c::<>9
	U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* ___U3CU3E9_0;
	// System.Func`1<System.Boolean> GameManager/<>c::<>9__13_0
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3E9__13_0_1;
	// System.Func`1<System.Boolean> GameManager/<>c::<>9__16_0
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3E9__16_0_2;
	// System.Func`1<System.Boolean> GameManager/<>c::<>9__18_0
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3E9__18_0_3;
};

// GameManager/<LostGame>d__16
struct U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A  : public RuntimeObject
{
	// System.Int32 GameManager/<LostGame>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<LostGame>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<LostGame>d__16::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// GameManager/<StartingMusic>d__12
struct U3CStartingMusicU3Ed__12_tE74EA80A6B9064CFFA00DD5DF490243C47DB9653  : public RuntimeObject
{
	// System.Int32 GameManager/<StartingMusic>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<StartingMusic>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<StartingMusic>d__12::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// GameManager/<WaitForFirstInput>d__13
struct U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466  : public RuntimeObject
{
	// System.Int32 GameManager/<WaitForFirstInput>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<WaitForFirstInput>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<WaitForFirstInput>d__13::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// GameManager/<WaitForLastInput>d__18
struct U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF  : public RuntimeObject
{
	// System.Int32 GameManager/<WaitForLastInput>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<WaitForLastInput>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<WaitForLastInput>d__18::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// PlayerCamera/<ReCheckPosition>d__6
struct U3CReCheckPositionU3Ed__6_t2F5A038F67A9DBB6E4A5432E6219209E10287605  : public RuntimeObject
{
	// System.Int32 PlayerCamera/<ReCheckPosition>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerCamera/<ReCheckPosition>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerCamera PlayerCamera/<ReCheckPosition>d__6::<>4__this
	PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9* ___U3CU3E4__this_2;
	// System.Single PlayerCamera/<ReCheckPosition>d__6::<oldPos>5__2
	float ___U3ColdPosU3E5__2_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// FMOD.GUID
struct GUID_tFB268B4FFFA3CA85D227CAE412BC765F4B71BE54 
{
	// System.Int32 FMOD.GUID::Data1
	int32_t ___Data1_0;
	// System.Int32 FMOD.GUID::Data2
	int32_t ___Data2_1;
	// System.Int32 FMOD.GUID::Data3
	int32_t ___Data3_2;
	// System.Int32 FMOD.GUID::Data4
	int32_t ___Data4_3;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// FMOD.Studio.EventDescription
struct EventDescription_t2904DB225583633AC5E150B2FF1EA269955FB28C 
{
	// System.IntPtr FMOD.Studio.EventDescription::handle
	intptr_t ___handle_0;
};

// FMOD.Studio.EventInstance
struct EventInstance_tB965FE66D8F64AF5ED7084290FED14B1B50B11CF 
{
	// System.IntPtr FMOD.Studio.EventInstance::handle
	intptr_t ___handle_0;
};

// FMODUnity.EventReference
struct EventReference_tA4CA1F882DC447E6B50F989D1FC08F065C91FB51 
{
	// FMOD.GUID FMODUnity.EventReference::Guid
	GUID_tFB268B4FFFA3CA85D227CAE412BC765F4B71BE54 ___Guid_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// Player/RootSplit
struct RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5  : public MulticastDelegate_t
{
};

// PlayerController/RootDeath
struct RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Dialogue
struct Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshPro Dialogue::ui
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___ui_4;
	// UnityEngine.GameObject Dialogue::text
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___text_5;
	// FMODUnity.StudioEventEmitter Dialogue::audioEmitter
	StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* ___audioEmitter_6;
	// System.Boolean Dialogue::isActive
	bool ___isActive_7;
	// UnityEngine.Events.UnityEvent Dialogue::OnActiveDialogue
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnActiveDialogue_8;
};

// DialogueManager
struct DialogueManager_t9C5A5026BF70075C3D71B589FB5D5EA74A3B9B1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI DialogueManager::texts
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___texts_4;
};

// FMODUnity.EventHandler
struct EventHandler_tE9454C70821845BBFA2A6119CCDA96D8E3975284  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String FMODUnity.EventHandler::CollisionTag
	String_t* ___CollisionTag_4;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Dialogue[] GameManager::dialogues
	DialogueU5BU5D_tFC77700B6B0A8EA8C4AA21B6353BB1A8D09188C1* ___dialogues_4;
	// PlayerController GameManager::root
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___root_5;
	// UnityEngine.GameObject GameManager::platform
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___platform_6;
	// TMPro.TextMeshPro GameManager::startMessage
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___startMessage_7;
	// TMPro.TextMeshPro GameManager::endMessage
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___endMessage_8;
	// TMPro.TextMeshPro GameManager::resetMessage
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___resetMessage_9;
	// FMODUnity.StudioEventEmitter GameManager::startMx
	StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* ___startMx_10;
	// System.Boolean GameManager::hasStarted
	bool ___hasStarted_11;
	// System.Int32 GameManager::count
	int32_t ___count_12;
	// LerpPosition GameManager::lerpPosition
	LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C* ___lerpPosition_13;
};

// LerpPosition
struct LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform LerpPosition::startMarker
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___startMarker_4;
	// UnityEngine.Transform LerpPosition::endMarker
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___endMarker_5;
	// System.Single LerpPosition::forwardSpeed
	float ___forwardSpeed_6;
	// System.Single LerpPosition::reverseSpeed
	float ___reverseSpeed_7;
	// System.Single LerpPosition::speed
	float ___speed_8;
	// System.Single LerpPosition::startTime
	float ___startTime_9;
	// System.Single LerpPosition::journeyLength
	float ___journeyLength_10;
	// UnityEngine.Camera LerpPosition::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_11;
	// UnityEngine.Material LerpPosition::dynamicColor
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___dynamicColor_12;
	// System.Boolean LerpPosition::startLerp
	bool ___startLerp_13;
	// System.Boolean LerpPosition::reverseLerp
	bool ___reverseLerp_14;
};

// MusicManager
struct MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Platform
struct Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent Platform::OnPlatformCollision
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnPlatformCollision_4;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerController Player::root
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___root_5;
	// UnityEngine.GameObject Player::playerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerPrefab_6;
	// System.Collections.Generic.List`1<PlayerController> Player::roots
	List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* ___roots_7;
	// UnityEngine.GameObject Player::playerCam
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerCam_8;
	// Player/RootSplit Player::OnRootSplit
	RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* ___OnRootSplit_9;
	// System.Boolean Player::canSplit
	bool ___canSplit_10;
	// System.Int32 Player::availableSplits
	int32_t ___availableSplits_11;
};

struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields
{
	// Player Player::Instance
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___Instance_4;
};

// PlayerCamera
struct PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 PlayerCamera::pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_5;
};

struct PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9_StaticFields
{
	// PlayerCamera PlayerCamera::Instance
	PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9* ___Instance_4;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_6;
	// UnityEngine.Vector3 PlayerController::dir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir_7;
};

struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields
{
	// System.Single PlayerController::down
	float ___down_4;
	// System.Single PlayerController::side
	float ___side_5;
	// PlayerController/RootDeath PlayerController::OnRootDeath
	RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* ___OnRootDeath_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIManager
struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields
{
	// UIManager UIManager::Instance
	UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* ___Instance_4;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// FMODUnity.StudioEventEmitter
struct StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7  : public EventHandler_tE9454C70821845BBFA2A6119CCDA96D8E3975284
{
	// FMODUnity.EventReference FMODUnity.StudioEventEmitter::EventReference
	EventReference_tA4CA1F882DC447E6B50F989D1FC08F065C91FB51 ___EventReference_5;
	// System.String FMODUnity.StudioEventEmitter::Event
	String_t* ___Event_6;
	// FMODUnity.EmitterGameEvent FMODUnity.StudioEventEmitter::PlayEvent
	int32_t ___PlayEvent_7;
	// FMODUnity.EmitterGameEvent FMODUnity.StudioEventEmitter::StopEvent
	int32_t ___StopEvent_8;
	// System.Boolean FMODUnity.StudioEventEmitter::AllowFadeout
	bool ___AllowFadeout_9;
	// System.Boolean FMODUnity.StudioEventEmitter::TriggerOnce
	bool ___TriggerOnce_10;
	// System.Boolean FMODUnity.StudioEventEmitter::Preload
	bool ___Preload_11;
	// FMODUnity.ParamRef[] FMODUnity.StudioEventEmitter::Params
	ParamRefU5BU5D_t26BF7E24E219F3CA313B1DB999DBB5D3FBB290FE* ___Params_12;
	// System.Boolean FMODUnity.StudioEventEmitter::OverrideAttenuation
	bool ___OverrideAttenuation_13;
	// System.Single FMODUnity.StudioEventEmitter::OverrideMinDistance
	float ___OverrideMinDistance_14;
	// System.Single FMODUnity.StudioEventEmitter::OverrideMaxDistance
	float ___OverrideMaxDistance_15;
	// FMOD.Studio.EventDescription FMODUnity.StudioEventEmitter::eventDescription
	EventDescription_t2904DB225583633AC5E150B2FF1EA269955FB28C ___eventDescription_16;
	// FMOD.Studio.EventInstance FMODUnity.StudioEventEmitter::instance
	EventInstance_tB965FE66D8F64AF5ED7084290FED14B1B50B11CF ___instance_17;
	// System.Boolean FMODUnity.StudioEventEmitter::hasTriggered
	bool ___hasTriggered_18;
	// System.Boolean FMODUnity.StudioEventEmitter::isQuitting
	bool ___isQuitting_19;
	// System.Boolean FMODUnity.StudioEventEmitter::isOneshot
	bool ___isOneshot_20;
	// System.Collections.Generic.List`1<FMODUnity.ParamRef> FMODUnity.StudioEventEmitter::cachedParams
	List_1_t661315603FDBEA2CBD0830969F93FD47C156CE41* ___cachedParams_21;
	// System.Boolean FMODUnity.StudioEventEmitter::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_24;
};

struct StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7_StaticFields
{
	// System.Collections.Generic.List`1<FMODUnity.StudioEventEmitter> FMODUnity.StudioEventEmitter::activeEmitters
	List_1_tC9E9413E4D08BE51D6F2D26873E5DCB64FFDD26F* ___activeEmitters_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_265;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_266;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_267;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_268;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_269;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_270;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_271;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_272;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_273;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_274;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_275;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_276;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_277;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_278;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_279;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_280;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_281;
};

struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_301;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Dialogue[]
struct DialogueU5BU5D_tFC77700B6B0A8EA8C4AA21B6353BB1A8D09188C1  : public RuntimeArray
{
	ALIGN_FIELD (8) Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* m_Items[1];

	inline Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* value)
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
// TMPro.TextMeshPro[]
struct TextMeshProU5BU5D_tC24D27573EBF908D9D2D4FD451C3FD1A3817FC28  : public RuntimeArray
{
	ALIGN_FIELD (8) TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* m_Items[1];

	inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Player/RootSplit::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootSplit__ctor_mA91E7E3E374C27A854F005165175E90C408EA0FE (RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Player::add_OnRootSplit(Player/RootSplit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_add_OnRootSplit_mEA5C8B2252F16EAB05565B41D180DB81B868EE17 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* ___value0, const RuntimeMethod* method) ;
// System.Void Player::remove_OnRootSplit(Player/RootSplit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_remove_OnRootSplit_mBC6AB324D44929F60ABEC3EDCB3D3D7A8258E6E6 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void UIManager::ShowUIMessage(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowUIMessage_m85DC232CFD58031DECD219B7F4D6B80B7C655F35 (TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___text0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UIManager::HideUIMessage(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_HideUIMessage_m552EAB2747F4B63473C72FF7E369807514D9D7BF (TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___text0, const RuntimeMethod* method) ;
// System.Void FMODUnity.StudioEventEmitter::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StudioEventEmitter_Play_m3FBE133EF89EFCB79447AD2F61D754982EC6E967 (StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::WaitForFirstInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_WaitForFirstInput_mD2448AADA26415144AFB6C68A6B20F094E262255 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::StartingMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_StartingMusic_mB8954A5606ACF2944DA254C04681BE06667F9FC8 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void Dialogue::CanPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue_CanPlay_m7857C6109F71D7AD5ED4CF823482AF559A47905B (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, bool ___canPlay0, const RuntimeMethod* method) ;
// System.Void GameManager/<StartingMusic>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartingMusicU3Ed__12__ctor_m983312302623C6A42C039F314B38BF6D980EE50D (U3CStartingMusicU3Ed__12_tE74EA80A6B9064CFFA00DD5DF490243C47DB9653* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameManager/<WaitForFirstInput>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForFirstInputU3Ed__13__ctor_m2D887F91F689FDF3704432B59960A787DD55C081 (U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void PlayerController::StartGrowth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_StartGrowth_m2C7671D1D8956D86950416BA682181C10F6946E1 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void LerpPosition::StartForwardLerp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpPosition_StartForwardLerp_mCE5A823BBAC70ED59F8BAA818DF819B7EAAB9078 (LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 GameManager::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GameManager_GetPosition_mF95579A784F3B930252CA26D7EFA6736B533B2C0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::LostGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_LostGame_m632A23ACB69CD2505C570367BB28CF03018C83FC (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void GameManager/<LostGame>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLostGameU3Ed__16__ctor_mE8A4946F43E82CE44CBBB3E31A2934AFA8F5BE7A (U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::WaitForLastInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_WaitForLastInput_m9501EA66EDBF5A993E9F529F6F3AA44978F5C89B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void GameManager/<WaitForLastInput>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForLastInputU3Ed__18__ctor_mA05ADDCBB4B5FF5F06A88573BB4C7ACC1BDA4E71 (U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void GameManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6A162D1CE45F1D23F65A28A8DE89B3B115054DC7 (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_anyKeyDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKeyDown_m9B8D98B5574A2AA63CEED98FBF0E2A1D946BCA71 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<PlayerController>::get_Count()
inline int32_t List_1_get_Count_m1113FB0AB881D717899754655E75DEADF565BC8E_inline (List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___predicate0, const RuntimeMethod* method) ;
// System.Void GameManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartGame_m2CAC97E2C33DD5FF5CF10FAF17313080A85464B7 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void LerpPosition::StartReverseLerp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpPosition_StartReverseLerp_mD143C6B4FAEC823B958A2AD998FA6BEB41E6AE99 (LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C* __this, const RuntimeMethod* method) ;
// System.Void GameManager::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ExitGame_m9F891C333D9746F17AB10CBB7705806877941C78 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void LerpPosition::StartLerp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpPosition_StartLerp_mB279CC997C9B5F2A8C407C8BF68C29A7214056D5 (LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void LerpPosition::UpdatePosition(System.Single,System.Single,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpPosition_UpdatePosition_m549336732C1DE069C3E585D595920B0C3A8DBCEB (LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C* __this, float ___startPos0, float ___endPos1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startCol2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endCol3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Camera::get_backgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Camera_get_backgroundColor_m1577A81D1E6A91D7934CECB8A284AA2D4704D96F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void LerpPosition::ReversePosition(System.Single,System.Single,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpPosition_ReversePosition_mBFF4B84B3B6CB3EEEBF02E16889728CCD5C8D3B7 (LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C* __this, float ___startPos0, float ___endPos1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startCol2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endCol3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<PlayerController>()
inline PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void PlayerController::StopGrowth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_StopGrowth_mAA71C095A731F33E611362EEAEAC51A91A75AAA1 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Player::FindLowestRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FindLowestRoot_m99DC64B96255CBC88DED1C303AE5B3E992A62A58 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void Player::Split(MoveDir)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Split_m8933752C0016A40301E17D8BF418A7272207B9B8 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ___dir0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PlayerController>::.ctor()
inline void List_1__ctor_m5618C6A149C1DD2C2F5006127FD5070FBD615DC0 (List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<PlayerController>::get_Item(System.Int32)
inline PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* List_1_get_Item_m38CC679C4192E2B0DCAEF6C09A85AD3D6038C228 (List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* (*) (List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// PlayerController PlayerController::Create(UnityEngine.GameObject,PlayerController,MoveDir,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* PlayerController_Create_mFB85100AB8B4DEDA1C50B9E09D9FF2C6C03B7412 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___parent1, int32_t ___moveDir2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PlayerController>::Add(T)
inline void List_1_Add_m38413C395A4A25C10C9FF19EB34721D75AE41E01_inline (List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* __this, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5*, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Player/RootSplit::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RootSplit_Invoke_m8B0C872540ACD5CABBBEB7C8A96498B7E3069966_inline (RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* __this, const RuntimeMethod* method) ;
// System.Single PlayerCamera::GetFollowTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerCamera_GetFollowTarget_mC60A602983762790631FB1A8655C064498CAD5A4 (PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void PlayerCamera/<ReCheckPosition>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReCheckPositionU3Ed__6__ctor_m83899AA5F0C98063488CC316156861AE00AE8D21 (U3CReCheckPositionU3Ed__6_t2F5A038F67A9DBB6E4A5432E6219209E10287605* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<PlayerController>::Remove(T)
inline bool List_1_Remove_mBE074345D4C1E1D5342A1A6213DAEC0D0E12E873 (List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* __this, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5*, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void PlayerController/RootDeath::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RootDeath_Invoke_m3D88BD4CB9DD1FA6C61645D4F45495D7C5FDEE9A_inline (RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// T UnityEngine.GameObject::GetComponent<PlayerController>()
inline PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 PlayerController::GetLeftDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlayerController_GetLeftDirection_m8495A00862E9E9E4DB5EE44CA413CB17DFE72588 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___parentDir0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 PlayerController::GetRightDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlayerController_GetRightDirection_m1959482F68E7D7C3ACE9C66EC2AB90B89AEA513C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___parentDir0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<TMPro.TextMeshPro>()
inline TextMeshProU5BU5D_tC24D27573EBF908D9D2D4FD451C3FD1A3817FC28* Component_GetComponentsInChildren_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m92EAA2900B924D05130FA09ACADBD35B9880C8A9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProU5BU5D_tC24D27573EBF908D9D2D4FD451C3FD1A3817FC28* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
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
// System.Void Dialogue::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue_Awake_m8D742B5C201AB71190F7C4D0697FBBB5A55ED95E (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) 
{
	{
		// if(text.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___text_5;
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// text.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___text_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Dialogue::CanPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue_CanPlay_m7857C6109F71D7AD5ED4CF823482AF559A47905B (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, bool ___canPlay0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dialogue_Show_m53D9FC32F79E878602BFC1E65AE0F892A1CEA020_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (canPlay)
		bool L_0 = ___canPlay0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// Player.Instance.OnRootSplit += Show;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4;
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_2 = (RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5*)il2cpp_codegen_object_new(RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5_il2cpp_TypeInfo_var);
		RootSplit__ctor_mA91E7E3E374C27A854F005165175E90C408EA0FE(L_2, __this, (intptr_t)((void*)Dialogue_Show_m53D9FC32F79E878602BFC1E65AE0F892A1CEA020_RuntimeMethod_var), NULL);
		Player_add_OnRootSplit_mEA5C8B2252F16EAB05565B41D180DB81B868EE17(L_1, L_2, NULL);
		return;
	}

IL_001a:
	{
		// Player.Instance.OnRootSplit -= Show;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4;
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_4 = (RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5*)il2cpp_codegen_object_new(RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5_il2cpp_TypeInfo_var);
		RootSplit__ctor_mA91E7E3E374C27A854F005165175E90C408EA0FE(L_4, __this, (intptr_t)((void*)Dialogue_Show_m53D9FC32F79E878602BFC1E65AE0F892A1CEA020_RuntimeMethod_var), NULL);
		Player_remove_OnRootSplit_mBC6AB324D44929F60ABEC3EDCB3D3D7A8258E6E6(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Dialogue::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue_OnTriggerEnter_mB9230F9147073EB179760DF8BFBED46AC831F3BA (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCED429105E117C48976ACCA6782246EADFFE2324);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player") && isActive)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0070;
		}
	}
	{
		bool L_2 = __this->___isActive_7;
		if (!L_2)
		{
			goto IL_0070;
		}
	}
	{
		// isActive = false;
		__this->___isActive_7 = (bool)0;
		// Player.Instance.canSplit = true;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4;
		L_3->___canSplit_10 = (bool)1;
		// Player.Instance.availableSplits = 1;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4;
		L_4->___availableSplits_11 = 1;
		// if (ui != null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_5 = __this->___ui_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0070;
		}
	}
	{
		// Debug.Log("Player is inside trigger " + gameObject.name, gameObject.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCED429105E117C48976ACCA6782246EADFFE2324, L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_9, L_11, NULL);
		// UIManager.ShowUIMessage(ui);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_12 = __this->___ui_4;
		UIManager_ShowUIMessage_m85DC232CFD58031DECD219B7F4D6B80B7C655F35(L_12, NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void Dialogue::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue_Show_m53D9FC32F79E878602BFC1E65AE0F892A1CEA020 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB73BF9EDF7AD24EB195A0017AA338EB69125E3B);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B3_0 = NULL;
	{
		// Debug.Log("Player split on correct place");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralEB73BF9EDF7AD24EB195A0017AA338EB69125E3B, NULL);
		// Player.Instance.canSplit = false;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4;
		L_0->___canSplit_10 = (bool)0;
		// if (ui != null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_1 = __this->___ui_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// UIManager.HideUIMessage(ui);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___ui_4;
		UIManager_HideUIMessage_m552EAB2747F4B63473C72FF7E369807514D9D7BF(L_3, NULL);
	}

IL_002e:
	{
		// text.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___text_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// audioEmitter.Play();
		StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* L_5 = __this->___audioEmitter_6;
		StudioEventEmitter_Play_m3FBE133EF89EFCB79447AD2F61D754982EC6E967(L_5, NULL);
		// OnActiveDialogue?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = __this->___OnActiveDialogue_8;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_0050;
		}
	}
	{
		return;
	}

IL_0050:
	{
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B4_0, NULL);
		// }
		return;
	}
}
// System.Void Dialogue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue__ctor_m0FCF351AA72166AF74CE3A4F57EBD8287702FAC7 (Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* __this, const RuntimeMethod* method) 
{
	{
		// private bool isActive = true;
		__this->___isActive_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DialogueManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueManager__ctor_m219FBB101CA1818E97E7E97784E88402F20AE430 (DialogueManager_t9C5A5026BF70075C3D71B589FB5D5EA74A3B9B1E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_IncreaseCounter_mF6AC1A4AFC899A0B344EED1D32CD49B1ABC31681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platform.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___platform_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// UIManager.ShowUIMessage(startMessage);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_1 = __this->___startMessage_7;
		UIManager_ShowUIMessage_m85DC232CFD58031DECD219B7F4D6B80B7C655F35(L_1, NULL);
		// StartCoroutine(WaitForFirstInput());
		RuntimeObject* L_2;
		L_2 = GameManager_WaitForFirstInput_mD2448AADA26415144AFB6C68A6B20F094E262255(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// Player.Instance.OnRootSplit += IncreaseCounter;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4;
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_5 = (RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5*)il2cpp_codegen_object_new(RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5_il2cpp_TypeInfo_var);
		RootSplit__ctor_mA91E7E3E374C27A854F005165175E90C408EA0FE(L_5, __this, (intptr_t)((void*)GameManager_IncreaseCounter_mF6AC1A4AFC899A0B344EED1D32CD49B1ABC31681_RuntimeMethod_var), NULL);
		Player_add_OnRootSplit_mEA5C8B2252F16EAB05565B41D180DB81B868EE17(L_4, L_5, NULL);
		// StartCoroutine(StartingMusic());
		RuntimeObject* L_6;
		L_6 = GameManager_StartingMusic_mB8954A5606ACF2944DA254C04681BE06667F9FC8(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void GameManager::IncreaseCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_IncreaseCounter_mF6AC1A4AFC899A0B344EED1D32CD49B1ABC31681 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD61314E1724C4116AEF871B7FB8CC88D9DB54B5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Player.Instance.canSplit = false;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4;
		L_0->___canSplit_10 = (bool)0;
		// dialogues[count].CanPlay(false);
		DialogueU5BU5D_tFC77700B6B0A8EA8C4AA21B6353BB1A8D09188C1* L_1 = __this->___dialogues_4;
		int32_t L_2 = __this->___count_12;
		int32_t L_3 = L_2;
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		Dialogue_CanPlay_m7857C6109F71D7AD5ED4CF823482AF559A47905B(L_4, (bool)0, NULL);
		// count++;
		int32_t L_5 = __this->___count_12;
		__this->___count_12 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if (count <= dialogues.Length)
		int32_t L_6 = __this->___count_12;
		DialogueU5BU5D_tFC77700B6B0A8EA8C4AA21B6353BB1A8D09188C1* L_7 = __this->___dialogues_4;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		// dialogues[count].CanPlay(true);
		DialogueU5BU5D_tFC77700B6B0A8EA8C4AA21B6353BB1A8D09188C1* L_8 = __this->___dialogues_4;
		int32_t L_9 = __this->___count_12;
		int32_t L_10 = L_9;
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Dialogue_CanPlay_m7857C6109F71D7AD5ED4CF823482AF559A47905B(L_11, (bool)1, NULL);
		return;
	}

IL_0050:
	{
		// Debug.Log("There are no more dialogues left");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralCD61314E1724C4116AEF871B7FB8CC88D9DB54B5, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::StartingMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_StartingMusic_mB8954A5606ACF2944DA254C04681BE06667F9FC8 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartingMusicU3Ed__12_tE74EA80A6B9064CFFA00DD5DF490243C47DB9653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartingMusicU3Ed__12_tE74EA80A6B9064CFFA00DD5DF490243C47DB9653* L_0 = (U3CStartingMusicU3Ed__12_tE74EA80A6B9064CFFA00DD5DF490243C47DB9653*)il2cpp_codegen_object_new(U3CStartingMusicU3Ed__12_tE74EA80A6B9064CFFA00DD5DF490243C47DB9653_il2cpp_TypeInfo_var);
		U3CStartingMusicU3Ed__12__ctor_m983312302623C6A42C039F314B38BF6D980EE50D(L_0, 0, NULL);
		U3CStartingMusicU3Ed__12_tE74EA80A6B9064CFFA00DD5DF490243C47DB9653* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameManager::WaitForFirstInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_WaitForFirstInput_mD2448AADA26415144AFB6C68A6B20F094E262255 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466* L_0 = (U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466*)il2cpp_codegen_object_new(U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466_il2cpp_TypeInfo_var);
		U3CWaitForFirstInputU3Ed__13__ctor_m2D887F91F689FDF3704432B59960A787DD55C081(L_0, 0, NULL);
		U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartGame_m2CAC97E2C33DD5FF5CF10FAF17313080A85464B7 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// UIManager.HideUIMessage(startMessage);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___startMessage_7;
		UIManager_HideUIMessage_m552EAB2747F4B63473C72FF7E369807514D9D7BF(L_0, NULL);
		// root.StartGrowth();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___root_5;
		PlayerController_StartGrowth_m2C7671D1D8956D86950416BA682181C10F6946E1(L_1, NULL);
		// lerpPosition.StartForwardLerp();
		LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C* L_2 = __this->___lerpPosition_13;
		LerpPosition_StartForwardLerp_mCE5A823BBAC70ED59F8BAA818DF819B7EAAB9078(L_2, NULL);
		// platform.transform.position = GetPosition();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___platform_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = GameManager_GetPosition_mF95579A784F3B930252CA26D7EFA6736B533B2C0(__this, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_5, NULL);
		// platform.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___platform_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// dialogues[count].CanPlay(true);
		DialogueU5BU5D_tFC77700B6B0A8EA8C4AA21B6353BB1A8D09188C1* L_7 = __this->___dialogues_4;
		int32_t L_8 = __this->___count_12;
		int32_t L_9 = L_8;
		Dialogue_tD1682404890757CDB2A7139EA303E9C424D2B455* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		Dialogue_CanPlay_m7857C6109F71D7AD5ED4CF823482AF559A47905B(L_10, (bool)1, NULL);
		// StartCoroutine(LostGame());
		RuntimeObject* L_11;
		L_11 = GameManager_LostGame_m632A23ACB69CD2505C570367BB28CF03018C83FC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_11, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 GameManager::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GameManager_GetPosition_mF95579A784F3B930252CA26D7EFA6736B533B2C0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float y = root.transform.position.y - 1.3f;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = __this->___root_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___y_3;
		V_0 = ((float)il2cpp_codegen_subtract(L_3, (1.29999995f)));
		// return new Vector3(0, y, 0);
		float L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), L_4, (0.0f), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Collections.IEnumerator GameManager::LostGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_LostGame_m632A23ACB69CD2505C570367BB28CF03018C83FC (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A* L_0 = (U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A*)il2cpp_codegen_object_new(U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A_il2cpp_TypeInfo_var);
		U3CLostGameU3Ed__16__ctor_mE8A4946F43E82CE44CBBB3E31A2934AFA8F5BE7A(L_0, 0, NULL);
		U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ExitGame_m9F891C333D9746F17AB10CBB7705806877941C78 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(WaitForLastInput());
		RuntimeObject* L_0;
		L_0 = GameManager_WaitForLastInput_m9501EA66EDBF5A993E9F529F6F3AA44978F5C89B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// UIManager.ShowUIMessage(endMessage);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_2 = __this->___endMessage_8;
		UIManager_ShowUIMessage_m85DC232CFD58031DECD219B7F4D6B80B7C655F35(L_2, NULL);
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::WaitForLastInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_WaitForLastInput_m9501EA66EDBF5A993E9F529F6F3AA44978F5C89B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF* L_0 = (U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF*)il2cpp_codegen_object_new(U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF_il2cpp_TypeInfo_var);
		U3CWaitForLastInputU3Ed__18__ctor_mA05ADDCBB4B5FF5F06A88573BB4C7ACC1BDA4E71(L_0, 0, NULL);
		U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameManager/<StartingMusic>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartingMusicU3Ed__12__ctor_m983312302623C6A42C039F314B38BF6D980EE50D (U3CStartingMusicU3Ed__12_tE74EA80A6B9064CFFA00DD5DF490243C47DB9653* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<StartingMusic>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartingMusicU3Ed__12_System_IDisposable_Dispose_m1BAC296EDB382B35842DA25D6BBF48490A869ED6 (U3CStartingMusicU3Ed__12_tE74EA80A6B9064CFFA00DD5DF490243C47DB9653* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<StartingMusic>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartingMusicU3Ed__12_MoveNext_mCB6330DF44F371A545A48305587D949FA5B6D96C (U3CStartingMusicU3Ed__12_tE74EA80A6B9064CFFA00DD5DF490243C47DB9653* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// startMx.Play();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = V_1;
		StudioEventEmitter_t63B2ADD8F77CBD2DB7B6A5B9FD00ECD79FA05EA7* L_6 = L_5->___startMx_10;
		StudioEventEmitter_Play_m3FBE133EF89EFCB79447AD2F61D754982EC6E967(L_6, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<StartingMusic>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartingMusicU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB690F89B4C74DDDBA7739065AFCC45D2001FDF9B (U3CStartingMusicU3Ed__12_tE74EA80A6B9064CFFA00DD5DF490243C47DB9653* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<StartingMusic>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartingMusicU3Ed__12_System_Collections_IEnumerator_Reset_mBB2A4F798197DD14E001C11DC2C982EA3B54B54F (U3CStartingMusicU3Ed__12_tE74EA80A6B9064CFFA00DD5DF490243C47DB9653* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartingMusicU3Ed__12_System_Collections_IEnumerator_Reset_mBB2A4F798197DD14E001C11DC2C982EA3B54B54F_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<StartingMusic>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartingMusicU3Ed__12_System_Collections_IEnumerator_get_Current_m5A81AEEE2DFE7B125C01597549F23F77C2210F43 (U3CStartingMusicU3Ed__12_tE74EA80A6B9064CFFA00DD5DF490243C47DB9653* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void GameManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9E093D331C270DADD1A4C76D46C227AF4B4AA4D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* L_0 = (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5*)il2cpp_codegen_object_new(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6A162D1CE45F1D23F65A28A8DE89B3B115054DC7(L_0, NULL);
		((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void GameManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6A162D1CE45F1D23F65A28A8DE89B3B115054DC7 (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean GameManager/<>c::<WaitForFirstInput>b__13_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CWaitForFirstInputU3Eb__13_0_mE75B462AB12F249FCA2C32C1BD5B9F8322D9C498 (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => Input.anyKeyDown);
		bool L_0;
		L_0 = Input_get_anyKeyDown_m9B8D98B5574A2AA63CEED98FBF0E2A1D946BCA71(NULL);
		return L_0;
	}
}
// System.Boolean GameManager/<>c::<LostGame>b__16_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CLostGameU3Eb__16_0_mD42142CAE2A4275C24132397C321668DE1F81970 (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1113FB0AB881D717899754655E75DEADF565BC8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yield return new WaitUntil(() => Player.Instance.roots.Count == 0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4;
		List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* L_1 = L_0->___roots_7;
		int32_t L_2;
		L_2 = List_1_get_Count_m1113FB0AB881D717899754655E75DEADF565BC8E_inline(L_1, List_1_get_Count_m1113FB0AB881D717899754655E75DEADF565BC8E_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GameManager/<>c::<WaitForLastInput>b__18_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CWaitForLastInputU3Eb__18_0_m0C060BC1F6C0471938447DEE4A547F94BEADFBFF (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => Input.anyKeyDown);
		bool L_0;
		L_0 = Input_get_anyKeyDown_m9B8D98B5574A2AA63CEED98FBF0E2A1D946BCA71(NULL);
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
// System.Void GameManager/<WaitForFirstInput>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForFirstInputU3Ed__13__ctor_m2D887F91F689FDF3704432B59960A787DD55C081 (U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<WaitForFirstInput>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForFirstInputU3Ed__13_System_IDisposable_Dispose_m1F73F3004E5F1AFBF12F839078E3EC4DEA53FAC4 (U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<WaitForFirstInput>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForFirstInputU3Ed__13_MoveNext_m93CD04140A8A7477CC003FF33E3876615A5C1698 (U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CWaitForFirstInputU3Eb__13_0_mE75B462AB12F249FCA2C32C1BD5B9F8322D9C498_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B5_0 = NULL;
	U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466* G_B5_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B4_0 = NULL;
	U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466* G_B4_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(() => Input.anyKeyDown);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_5 = L_4;
		G_B4_0 = L_5;
		G_B4_1 = __this;
		if (L_5)
		{
			G_B5_0 = L_5;
			G_B5_1 = __this;
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* L_6 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_7 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3CWaitForFirstInputU3Eb__13_0_mE75B462AB12F249FCA2C32C1BD5B9F8322D9C498_RuntimeMethod_var), NULL);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_8 = L_7;
		((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1), (void*)L_8);
		G_B5_0 = L_8;
		G_B5_1 = G_B4_1;
	}

IL_003e:
	{
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_9 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_9, G_B5_0, NULL);
		G_B5_1->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&G_B5_1->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0051:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// hasStarted = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10 = V_1;
		L_10->___hasStarted_11 = (bool)1;
		// StartGame();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11 = V_1;
		GameManager_StartGame_m2CAC97E2C33DD5FF5CF10FAF17313080A85464B7(L_11, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<WaitForFirstInput>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForFirstInputU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m439CED86FA4866FB4B8919B6C8F38C46B54BA191 (U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<WaitForFirstInput>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForFirstInputU3Ed__13_System_Collections_IEnumerator_Reset_m531247D61206F02EB04513F5394A1D746B30DD31 (U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForFirstInputU3Ed__13_System_Collections_IEnumerator_Reset_m531247D61206F02EB04513F5394A1D746B30DD31_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<WaitForFirstInput>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForFirstInputU3Ed__13_System_Collections_IEnumerator_get_Current_mB84A14A2280F250D8FC3F02D457342EF1120E5D3 (U3CWaitForFirstInputU3Ed__13_tE850237F1A7C22B8F5CC8A7EB83BFCFF68401466* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void GameManager/<LostGame>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLostGameU3Ed__16__ctor_mE8A4946F43E82CE44CBBB3E31A2934AFA8F5BE7A (U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<LostGame>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLostGameU3Ed__16_System_IDisposable_Dispose_m99121BAFA539D32F6967C5AC2302CF02480B994A (U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<LostGame>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLostGameU3Ed__16_MoveNext_m2F5B3DE1B5A36AA80DC7757ABD13A3B520CAEC43 (U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CLostGameU3Eb__16_0_mD42142CAE2A4275C24132397C321668DE1F81970_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B5_0 = NULL;
	U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A* G_B5_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B4_0 = NULL;
	U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A* G_B4_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(() => Player.Instance.roots.Count == 0);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_2;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_5 = L_4;
		G_B4_0 = L_5;
		G_B4_1 = __this;
		if (L_5)
		{
			G_B5_0 = L_5;
			G_B5_1 = __this;
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* L_6 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_7 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3CLostGameU3Eb__16_0_mD42142CAE2A4275C24132397C321668DE1F81970_RuntimeMethod_var), NULL);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_8 = L_7;
		((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_2), (void*)L_8);
		G_B5_0 = L_8;
		G_B5_1 = G_B4_1;
	}

IL_003e:
	{
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_9 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_9, G_B5_0, NULL);
		G_B5_1->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&G_B5_1->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0051:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// lerpPosition.StartReverseLerp();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10 = V_1;
		LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C* L_11 = L_10->___lerpPosition_13;
		LerpPosition_StartReverseLerp_mD143C6B4FAEC823B958A2AD998FA6BEB41E6AE99(L_11, NULL);
		// UIManager.ShowUIMessage(resetMessage);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_12 = V_1;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_13 = L_12->___resetMessage_9;
		UIManager_ShowUIMessage_m85DC232CFD58031DECD219B7F4D6B80B7C655F35(L_13, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<LostGame>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLostGameU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF6A7EE6AD79A0228653D62811E39990F4BEBF00C (U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<LostGame>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLostGameU3Ed__16_System_Collections_IEnumerator_Reset_mD31DF594F2A47A55D8272DE0FBB779510207596A (U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLostGameU3Ed__16_System_Collections_IEnumerator_Reset_mD31DF594F2A47A55D8272DE0FBB779510207596A_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<LostGame>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLostGameU3Ed__16_System_Collections_IEnumerator_get_Current_m6B0615DE82DAC319B8ED430FEBC91D70744F3F50 (U3CLostGameU3Ed__16_t391176EB37C4E2EA91261D6011749E854256470A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void GameManager/<WaitForLastInput>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForLastInputU3Ed__18__ctor_mA05ADDCBB4B5FF5F06A88573BB4C7ACC1BDA4E71 (U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<WaitForLastInput>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForLastInputU3Ed__18_System_IDisposable_Dispose_m3722FF8CB628FE49CD710EB04051EB413608C743 (U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<WaitForLastInput>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForLastInputU3Ed__18_MoveNext_mE0030AF28498EF338DF68D4B0EE330AC3B83CD79 (U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CWaitForLastInputU3Eb__18_0_m0C060BC1F6C0471938447DEE4A547F94BEADFBFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B5_0 = NULL;
	U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF* G_B5_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B4_0 = NULL;
	U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF* G_B4_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(() => Input.anyKeyDown);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_3;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_5 = L_4;
		G_B4_0 = L_5;
		G_B4_1 = __this;
		if (L_5)
		{
			G_B5_0 = L_5;
			G_B5_1 = __this;
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* L_6 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_7 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3CWaitForLastInputU3Eb__18_0_m0C060BC1F6C0471938447DEE4A547F94BEADFBFF_RuntimeMethod_var), NULL);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_8 = L_7;
		((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_3), (void*)L_8);
		G_B5_0 = L_8;
		G_B5_1 = G_B4_1;
	}

IL_003e:
	{
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_9 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_9, G_B5_0, NULL);
		G_B5_1->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&G_B5_1->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0051:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ExitGame();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10 = V_1;
		GameManager_ExitGame_m9F891C333D9746F17AB10CBB7705806877941C78(L_10, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<WaitForLastInput>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForLastInputU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m14EBC401391DE951DC0AA087B8E6C5D14DCAF669 (U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<WaitForLastInput>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForLastInputU3Ed__18_System_Collections_IEnumerator_Reset_mA6EB3AF70C9170564FB90EC181B999D1FDEE06C1 (U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForLastInputU3Ed__18_System_Collections_IEnumerator_Reset_mA6EB3AF70C9170564FB90EC181B999D1FDEE06C1_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<WaitForLastInput>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForLastInputU3Ed__18_System_Collections_IEnumerator_get_Current_m06FE6F3C41CAA436BE57A4E2C01973D5B0CC1D24 (U3CWaitForLastInputU3Ed__18_t7F5F291FEB3B1EF660C833EBD85E2EE6EA5380BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void LerpPosition::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpPosition_Awake_m041BCD984B8633E33EBE887CA4890B7FBE23C925 (LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___cam_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void LerpPosition::StartForwardLerp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpPosition_StartForwardLerp_mCE5A823BBAC70ED59F8BAA818DF819B7EAAB9078 (LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C* __this, const RuntimeMethod* method) 
{
	{
		// speed = forwardSpeed;
		float L_0 = __this->___forwardSpeed_6;
		__this->___speed_8 = L_0;
		// reverseLerp = false;
		__this->___reverseLerp_14 = (bool)0;
		// StartLerp();
		LerpPosition_StartLerp_mB279CC997C9B5F2A8C407C8BF68C29A7214056D5(__this, NULL);
		// }
		return;
	}
}
// System.Void LerpPosition::StartReverseLerp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpPosition_StartReverseLerp_mD143C6B4FAEC823B958A2AD998FA6BEB41E6AE99 (LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C* __this, const RuntimeMethod* method) 
{
	{
		// startLerp = false;
		__this->___startLerp_13 = (bool)0;
		// speed = reverseSpeed;
		float L_0 = __this->___reverseSpeed_7;
		__this->___speed_8 = L_0;
		// reverseLerp = true;
		__this->___reverseLerp_14 = (bool)1;
		// StartLerp();
		LerpPosition_StartLerp_mB279CC997C9B5F2A8C407C8BF68C29A7214056D5(__this, NULL);
		// }
		return;
	}
}
// System.Void LerpPosition::StartLerp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpPosition_StartLerp_mB279CC997C9B5F2A8C407C8BF68C29A7214056D5 (LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C* __this, const RuntimeMethod* method) 
{
	{
		// startTime = Time.time;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime_9 = L_0;
		// journeyLength = startMarker.position.y - endMarker.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___startMarker_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___endMarker_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___y_3;
		__this->___journeyLength_10 = ((float)il2cpp_codegen_subtract(L_3, L_6));
		// startLerp = true;
		__this->___startLerp_13 = (bool)1;
		// }
		return;
	}
}
// System.Void LerpPosition::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpPosition_Update_m9AB2AE63646F9492DC6F19E601C2C60294AC192E (LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C* __this, const RuntimeMethod* method) 
{
	{
		// if (startLerp && !reverseLerp)
		bool L_0 = __this->___startLerp_13;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		bool L_1 = __this->___reverseLerp_14;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// UpdatePosition(startMarker.position.y, endMarker.position.y, Color.black, Color.white);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___startMarker_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___endMarker_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		LerpPosition_UpdatePosition_m549336732C1DE069C3E585D595920B0C3A8DBCEB(__this, L_4, L_7, L_8, L_9, NULL);
		return;
	}

IL_0041:
	{
		// else if (startLerp && reverseLerp)
		bool L_10 = __this->___startLerp_13;
		if (!L_10)
		{
			goto IL_0087;
		}
	}
	{
		bool L_11 = __this->___reverseLerp_14;
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		// ReversePosition(transform.position.y, startMarker.position.y, cam.backgroundColor, Color.black);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___startMarker_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___y_3;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = __this->___cam_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Camera_get_backgroundColor_m1577A81D1E6A91D7934CECB8A284AA2D4704D96F(L_18, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		LerpPosition_ReversePosition_mBFF4B84B3B6CB3EEEBF02E16889728CCD5C8D3B7(__this, L_14, L_17, L_19, L_20, NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void LerpPosition::UpdatePosition(System.Single,System.Single,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpPosition_UpdatePosition_m549336732C1DE069C3E585D595920B0C3A8DBCEB (LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C* __this, float ___startPos0, float ___endPos1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startCol2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endCol3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float distCovered = (Time.time - startTime) * speed;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___startTime_9;
		float L_2 = __this->___speed_8;
		// float fractionOfJourney = distCovered / journeyLength;
		float L_3 = __this->___journeyLength_10;
		V_0 = ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_0, L_1)), L_2))/L_3));
		// float yPos = Mathf.Lerp(startPos, endPos, fractionOfJourney);
		float L_4 = ___startPos0;
		float L_5 = ___endPos1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		// transform.position = new Vector3(0, yPos, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_9 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (0.0f), L_9, L_12, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_13, NULL);
		// cam.backgroundColor = Color.Lerp(startCol, endCol, fractionOfJourney);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = __this->___cam_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___startCol2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___endCol3;
		float L_17 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_15, L_16, L_17, NULL);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_14, L_18, NULL);
		// dynamicColor.color = Color.Lerp(endCol, startCol, fractionOfJourney);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___dynamicColor_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___endCol3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = ___startCol2;
		float L_22 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_20, L_21, L_22, NULL);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_19, L_23, NULL);
		// }
		return;
	}
}
// System.Void LerpPosition::ReversePosition(System.Single,System.Single,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpPosition_ReversePosition_mBFF4B84B3B6CB3EEEBF02E16889728CCD5C8D3B7 (LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C* __this, float ___startPos0, float ___endPos1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startCol2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endCol3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D6E0F2A13B9E6F784E5FD9F3AC1DBD8FB3274F1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float distCovered = (Time.time - startTime) * speed;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___startTime_9;
		float L_2 = __this->___speed_8;
		// float fractionOfJourney = distCovered / journeyLength;
		float L_3 = __this->___journeyLength_10;
		V_0 = ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_0, L_1)), L_2))/L_3));
		// float yPos = Mathf.Lerp(startPos, endPos, fractionOfJourney);
		float L_4 = ___startPos0;
		float L_5 = ___endPos1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		// transform.position = new Vector3(0, yPos, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_9 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (0.0f), L_9, L_12, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_13, NULL);
		// cam.backgroundColor = Color.Lerp(cam.backgroundColor, endCol, fractionOfJourney);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = __this->___cam_11;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = __this->___cam_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Camera_get_backgroundColor_m1577A81D1E6A91D7934CECB8A284AA2D4704D96F(L_15, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___endCol3;
		float L_18 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_16, L_17, L_18, NULL);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_14, L_19, NULL);
		// dynamicColor.color = Color.Lerp(dynamicColor.color, startCol, fractionOfJourney);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___dynamicColor_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___dynamicColor_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_21, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___startCol2;
		float L_24 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_22, L_23, L_24, NULL);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_20, L_25, NULL);
		// if (transform.position.y >= -0.1f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		float L_28 = L_27.___y_3;
		if ((!(((float)L_28) >= ((float)(-0.100000001f)))))
		{
			goto IL_00ad;
		}
	}
	{
		// Debug.Log("Reverse ended.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0D6E0F2A13B9E6F784E5FD9F3AC1DBD8FB3274F1, NULL);
		// SceneManager.LoadSceneAsync(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_29;
		L_29 = SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935(0, NULL);
	}

IL_00ad:
	{
		// }
		return;
	}
}
// System.Void LerpPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpPosition__ctor_m24692311759BE12D69214BB87A7159CEF475C45F (LerpPosition_t785C0E7CAE0663EB15F8FDF388CBA7451271049C* __this, const RuntimeMethod* method) 
{
	{
		// public float forwardSpeed = 0.41F;
		__this->___forwardSpeed_6 = (0.409999996f);
		// public float reverseSpeed = 1.3F;
		__this->___reverseSpeed_7 = (1.29999995f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MusicManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager__ctor_m41A178D621B3011F8901EE68A91A5850A5E59904 (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Platform::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnTriggerEnter_m2E3AB76C141F3763482EDEFBE52F0FA4B3244B12 (Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral991E7E9F7465A35405700BB8B1338E20542D440C);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B2_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B3_2 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	{
		// PlayerController root = other.GetComponent<PlayerController>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1;
		L_1 = Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130(L_0, Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var);
		// Debug.Log("Platform Collision: " + gameObject + other.name, other.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = _stringLiteral991E7E9F7465A35405700BB8B1338E20542D440C;
		G_B1_2 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = _stringLiteral991E7E9F7465A35405700BB8B1338E20542D440C;
			G_B2_2 = L_1;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_001d;
	}

IL_0018:
	{
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_001d:
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___other0;
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B3_1, G_B3_0, L_6, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_7, L_9, NULL);
		// root.StopGrowth();
		PlayerController_StopGrowth_mAA71C095A731F33E611362EEAEAC51A91A75AAA1(G_B3_2, NULL);
		// OnPlatformCollision?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10 = __this->___OnPlatformCollision_4;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B5_0, NULL);
		// }
		return;
	}
}
// System.Void Platform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m7B49FC4AD80BC236383C1A82204EC91E11369498 (Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Player::add_OnRootSplit(Player/RootSplit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_add_OnRootSplit_mEA5C8B2252F16EAB05565B41D180DB81B868EE17 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* V_0 = NULL;
	RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* V_1 = NULL;
	RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* V_2 = NULL;
	{
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_0 = __this->___OnRootSplit_9;
		V_0 = L_0;
	}

IL_0007:
	{
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_1 = V_0;
		V_1 = L_1;
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_2 = V_1;
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5*)CastclassSealed((RuntimeObject*)L_4, RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5_il2cpp_TypeInfo_var));
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5** L_5 = (&__this->___OnRootSplit_9);
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_6 = V_2;
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_7 = V_1;
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_8;
		L_8 = InterlockedCompareExchangeImpl<RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5*>(L_5, L_6, L_7);
		V_0 = L_8;
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_9 = V_0;
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_10 = V_1;
		if ((!(((RuntimeObject*)(RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5*)L_9) == ((RuntimeObject*)(RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Player::remove_OnRootSplit(Player/RootSplit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_remove_OnRootSplit_mBC6AB324D44929F60ABEC3EDCB3D3D7A8258E6E6 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* V_0 = NULL;
	RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* V_1 = NULL;
	RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* V_2 = NULL;
	{
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_0 = __this->___OnRootSplit_9;
		V_0 = L_0;
	}

IL_0007:
	{
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_1 = V_0;
		V_1 = L_1;
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_2 = V_1;
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5*)CastclassSealed((RuntimeObject*)L_4, RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5_il2cpp_TypeInfo_var));
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5** L_5 = (&__this->___OnRootSplit_9);
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_6 = V_2;
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_7 = V_1;
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_8;
		L_8 = InterlockedCompareExchangeImpl<RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5*>(L_5, L_6, L_7);
		V_0 = L_8;
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_9 = V_0;
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_10 = V_1;
		if ((!(((RuntimeObject*)(RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5*)L_9) == ((RuntimeObject*)(RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m512A28E1559EB8AEEB2E1DB873F9F99FCC96BA67 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mC31CF4F40DDEA35C5E39E8C43EC37284AE7C453D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// FindLowestRoot();
		Player_FindLowestRoot_m99DC64B96255CBC88DED1C303AE5B3E992A62A58(__this, NULL);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m95E134A5EF1B5164EA281F61D7FA436F59BE3C9F (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// if (canSplit && availableSplits == 1)
		bool L_0 = __this->___canSplit_10;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_1 = __this->___availableSplits_11;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.A))
		bool L_2;
		L_2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)97), NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// Split(MoveDir.Left);
		Player_Split_m8933752C0016A40301E17D8BF418A7272207B9B8(__this, 0, NULL);
	}

IL_0021:
	{
		// if (Input.GetKeyDown(KeyCode.D))
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)100), NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// Split(MoveDir.Right);
		Player_Split_m8933752C0016A40301E17D8BF418A7272207B9B8(__this, 1, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Player::Split(MoveDir)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Split_m8933752C0016A40301E17D8BF418A7272207B9B8 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ___dir0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m38413C395A4A25C10C9FF19EB34721D75AE41E01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5618C6A149C1DD2C2F5006127FD5070FBD615DC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1113FB0AB881D717899754655E75DEADF565BC8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m38CC679C4192E2B0DCAEF6C09A85AD3D6038C228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* V_0 = NULL;
	int32_t V_1 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_2 = NULL;
	int32_t V_3 = 0;
	RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* G_B8_0 = NULL;
	RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* G_B7_0 = NULL;
	{
		// availableSplits = 0;
		__this->___availableSplits_11 = 0;
		// List<PlayerController> newRoots = new List<PlayerController>();
		List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* L_0 = (List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5*)il2cpp_codegen_object_new(List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5_il2cpp_TypeInfo_var);
		List_1__ctor_m5618C6A149C1DD2C2F5006127FD5070FBD615DC0(L_0, List_1__ctor_m5618C6A149C1DD2C2F5006127FD5070FBD615DC0_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < roots.Count; i++)
		V_1 = 0;
		goto IL_0041;
	}

IL_0011:
	{
		// PlayerController newRoot = PlayerController.Create(playerPrefab, roots[i], dir, transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___playerPrefab_6;
		List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* L_2 = __this->___roots_7;
		int32_t L_3 = V_1;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4;
		L_4 = List_1_get_Item_m38CC679C4192E2B0DCAEF6C09A85AD3D6038C228(L_2, L_3, List_1_get_Item_m38CC679C4192E2B0DCAEF6C09A85AD3D6038C228_RuntimeMethod_var);
		int32_t L_5 = ___dir0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_7;
		L_7 = PlayerController_Create_mFB85100AB8B4DEDA1C50B9E09D9FF2C6C03B7412(L_1, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		// newRoot.StartGrowth();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_8 = V_2;
		PlayerController_StartGrowth_m2C7671D1D8956D86950416BA682181C10F6946E1(L_8, NULL);
		// newRoots.Add(newRoot);
		List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* L_9 = V_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_10 = V_2;
		List_1_Add_m38413C395A4A25C10C9FF19EB34721D75AE41E01_inline(L_9, L_10, List_1_Add_m38413C395A4A25C10C9FF19EB34721D75AE41E01_RuntimeMethod_var);
		// for (int i = 0; i < roots.Count; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0041:
	{
		// for (int i = 0; i < roots.Count; i++)
		int32_t L_12 = V_1;
		List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* L_13 = __this->___roots_7;
		int32_t L_14;
		L_14 = List_1_get_Count_m1113FB0AB881D717899754655E75DEADF565BC8E_inline(L_13, List_1_get_Count_m1113FB0AB881D717899754655E75DEADF565BC8E_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0011;
		}
	}
	{
		// for (int i = 0; i < newRoots.Count; i++)
		V_3 = 0;
		goto IL_0069;
	}

IL_0053:
	{
		// roots.Add(newRoots[i]);
		List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* L_15 = __this->___roots_7;
		List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* L_16 = V_0;
		int32_t L_17 = V_3;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_18;
		L_18 = List_1_get_Item_m38CC679C4192E2B0DCAEF6C09A85AD3D6038C228(L_16, L_17, List_1_get_Item_m38CC679C4192E2B0DCAEF6C09A85AD3D6038C228_RuntimeMethod_var);
		List_1_Add_m38413C395A4A25C10C9FF19EB34721D75AE41E01_inline(L_15, L_18, List_1_Add_m38413C395A4A25C10C9FF19EB34721D75AE41E01_RuntimeMethod_var);
		// for (int i = 0; i < newRoots.Count; i++)
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0069:
	{
		// for (int i = 0; i < newRoots.Count; i++)
		int32_t L_20 = V_3;
		List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* L_21 = V_0;
		int32_t L_22;
		L_22 = List_1_get_Count_m1113FB0AB881D717899754655E75DEADF565BC8E_inline(L_21, List_1_get_Count_m1113FB0AB881D717899754655E75DEADF565BC8E_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0053;
		}
	}
	{
		// FindLowestRoot();
		Player_FindLowestRoot_m99DC64B96255CBC88DED1C303AE5B3E992A62A58(__this, NULL);
		// OnRootSplit?.Invoke();
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_23 = __this->___OnRootSplit_9;
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* L_24 = L_23;
		G_B7_0 = L_24;
		if (L_24)
		{
			G_B8_0 = L_24;
			goto IL_0083;
		}
	}
	{
		return;
	}

IL_0083:
	{
		RootSplit_Invoke_m8B0C872540ACD5CABBBEB7C8A96498B7E3069966_inline(G_B8_0, NULL);
		// }
		return;
	}
}
// System.Void Player::FindLowestRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FindLowestRoot_m99DC64B96255CBC88DED1C303AE5B3E992A62A58 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1113FB0AB881D717899754655E75DEADF565BC8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m38CC679C4192E2B0DCAEF6C09A85AD3D6038C228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral687BF1C5A77D55FA116FD510310DBE91816AF144);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	{
		// int lowest = 0;
		V_0 = 0;
		// for (int i = 1; i < roots.Count; i++)
		V_1 = 1;
		goto IL_0044;
	}

IL_0006:
	{
		// if (roots[i].transform.position.y < roots[lowest].transform.position.y)
		List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* L_0 = __this->___roots_7;
		int32_t L_1 = V_1;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2;
		L_2 = List_1_get_Item_m38CC679C4192E2B0DCAEF6C09A85AD3D6038C228(L_0, L_1, List_1_get_Item_m38CC679C4192E2B0DCAEF6C09A85AD3D6038C228_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___y_3;
		List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* L_6 = __this->___roots_7;
		int32_t L_7 = V_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_8;
		L_8 = List_1_get_Item_m38CC679C4192E2B0DCAEF6C09A85AD3D6038C228(L_6, L_7, List_1_get_Item_m38CC679C4192E2B0DCAEF6C09A85AD3D6038C228_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___y_3;
		if ((!(((float)L_5) < ((float)L_11))))
		{
			goto IL_0040;
		}
	}
	{
		// lowest = i;
		int32_t L_12 = V_1;
		V_0 = L_12;
	}

IL_0040:
	{
		// for (int i = 1; i < roots.Count; i++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0044:
	{
		// for (int i = 1; i < roots.Count; i++)
		int32_t L_14 = V_1;
		List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* L_15 = __this->___roots_7;
		int32_t L_16;
		L_16 = List_1_get_Count_m1113FB0AB881D717899754655E75DEADF565BC8E_inline(L_15, List_1_get_Count_m1113FB0AB881D717899754655E75DEADF565BC8E_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0006;
		}
	}
	{
		// root = roots[lowest];
		List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* L_17 = __this->___roots_7;
		int32_t L_18 = V_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_19;
		L_19 = List_1_get_Item_m38CC679C4192E2B0DCAEF6C09A85AD3D6038C228(L_17, L_18, List_1_get_Item_m38CC679C4192E2B0DCAEF6C09A85AD3D6038C228_RuntimeMethod_var);
		__this->___root_5 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root_5), (void*)L_19);
		// Debug.Log("Found lowest root " + root.gameObject);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_20 = __this->___root_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = L_21;
		G_B6_0 = L_22;
		G_B6_1 = _stringLiteral687BF1C5A77D55FA116FD510310DBE91816AF144;
		if (L_22)
		{
			G_B7_0 = L_22;
			G_B7_1 = _stringLiteral687BF1C5A77D55FA116FD510310DBE91816AF144;
			goto IL_007b;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		goto IL_0080;
	}

IL_007b:
	{
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
		G_B8_0 = L_23;
		G_B8_1 = G_B7_1;
	}

IL_0080:
	{
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B8_1, G_B8_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_24, NULL);
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5618C6A149C1DD2C2F5006127FD5070FBD615DC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<PlayerController> roots = new List<PlayerController>();
		List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* L_0 = (List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5*)il2cpp_codegen_object_new(List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5_il2cpp_TypeInfo_var);
		List_1__ctor_m5618C6A149C1DD2C2F5006127FD5070FBD615DC0(L_0, List_1__ctor_m5618C6A149C1DD2C2F5006127FD5070FBD615DC0_RuntimeMethod_var);
		__this->___roots_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roots_7), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void RootSplit_Invoke_m8B0C872540ACD5CABBBEB7C8A96498B7E3069966_Multicast(RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* currentDelegate = reinterpret_cast<RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RootSplit_Invoke_m8B0C872540ACD5CABBBEB7C8A96498B7E3069966_OpenInst(RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void RootSplit_Invoke_m8B0C872540ACD5CABBBEB7C8A96498B7E3069966_OpenStatic(RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void RootSplit_Invoke_m8B0C872540ACD5CABBBEB7C8A96498B7E3069966_OpenStaticInvoker(RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void RootSplit_Invoke_m8B0C872540ACD5CABBBEB7C8A96498B7E3069966_ClosedStaticInvoker(RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5 (RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Player/RootSplit::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootSplit__ctor_mA91E7E3E374C27A854F005165175E90C408EA0FE (RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RootSplit_Invoke_m8B0C872540ACD5CABBBEB7C8A96498B7E3069966_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RootSplit_Invoke_m8B0C872540ACD5CABBBEB7C8A96498B7E3069966_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RootSplit_Invoke_m8B0C872540ACD5CABBBEB7C8A96498B7E3069966_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&RootSplit_Invoke_m8B0C872540ACD5CABBBEB7C8A96498B7E3069966_Multicast;
}
// System.Void Player/RootSplit::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootSplit_Invoke_m8B0C872540ACD5CABBBEB7C8A96498B7E3069966 (RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Player/RootSplit::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RootSplit_BeginInvoke_m194E5CC614F34A2FF31957CD1FEA63E25DDE0DB4 (RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Player/RootSplit::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootSplit_EndInvoke_m6CC64449E85DBBF2DA43FDD9AE39615BB313250C (RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Single PlayerCamera::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerCamera_get_target_mC17C7C5BEE12C93F42AF081314DA313C20C60BDA (PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9* __this, const RuntimeMethod* method) 
{
	{
		// public float target { get => GetFollowTarget(); }
		float L_0;
		L_0 = PlayerCamera_GetFollowTarget_mC60A602983762790631FB1A8655C064498CAD5A4(__this, NULL);
		return L_0;
	}
}
// System.Void PlayerCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCamera_Awake_m0B4635EB1CF529B577756FD45414EF265B8CE273 (PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Single PlayerCamera::GetFollowTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerCamera_GetFollowTarget_mC60A602983762790631FB1A8655C064498CAD5A4 (PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player.Instance.root == null)
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = L_0->___root_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// Player.Instance.FindLowestRoot();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4;
		Player_FindLowestRoot_m99DC64B96255CBC88DED1C303AE5B3E992A62A58(L_3, NULL);
	}

IL_001c:
	{
		// return Player.Instance.root.transform.position.y;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = L_4->___root_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		return L_8;
	}
}
// System.Collections.IEnumerator PlayerCamera::ReCheckPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerCamera_ReCheckPosition_m646FABD2E8E5A85EDDABFE4466B8B8883419CE4C (PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReCheckPositionU3Ed__6_t2F5A038F67A9DBB6E4A5432E6219209E10287605_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReCheckPositionU3Ed__6_t2F5A038F67A9DBB6E4A5432E6219209E10287605* L_0 = (U3CReCheckPositionU3Ed__6_t2F5A038F67A9DBB6E4A5432E6219209E10287605*)il2cpp_codegen_object_new(U3CReCheckPositionU3Ed__6_t2F5A038F67A9DBB6E4A5432E6219209E10287605_il2cpp_TypeInfo_var);
		U3CReCheckPositionU3Ed__6__ctor_m83899AA5F0C98063488CC316156861AE00AE8D21(L_0, 0, NULL);
		U3CReCheckPositionU3Ed__6_t2F5A038F67A9DBB6E4A5432E6219209E10287605* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCamera__ctor_m4C3414C47080390CC33CA4183A49D0E040245091 (PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerCamera/<ReCheckPosition>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReCheckPositionU3Ed__6__ctor_m83899AA5F0C98063488CC316156861AE00AE8D21 (U3CReCheckPositionU3Ed__6_t2F5A038F67A9DBB6E4A5432E6219209E10287605* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerCamera/<ReCheckPosition>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReCheckPositionU3Ed__6_System_IDisposable_Dispose_m9F5DE655C064599DEA005A0A6F74D80BDAC876F1 (U3CReCheckPositionU3Ed__6_t2F5A038F67A9DBB6E4A5432E6219209E10287605* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerCamera/<ReCheckPosition>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReCheckPositionU3Ed__6_MoveNext_m35817E135C74F6FC32AE16024C3AB8EB9E39A4EE (U3CReCheckPositionU3Ed__6_t2F5A038F67A9DBB6E4A5432E6219209E10287605* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var oldPos = transform.position.y;
		PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9* L_4 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		__this->___U3ColdPosU3E5__2_3 = L_7;
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (transform.position.y == oldPos)
		PlayerCamera_t8BABDB8C71E1D372429962E106DBC682F91662F9* L_9 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___y_3;
		float L_13 = __this->___U3ColdPosU3E5__2_3;
		if ((!(((float)L_12) == ((float)L_13))))
		{
			goto IL_0076;
		}
	}
	{
		// Player.Instance.FindLowestRoot();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_14 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4;
		Player_FindLowestRoot_m99DC64B96255CBC88DED1C303AE5B3E992A62A58(L_14, NULL);
	}

IL_0076:
	{
		// }
		return (bool)0;
	}
}
// System.Object PlayerCamera/<ReCheckPosition>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReCheckPositionU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m87A8A3298191AE62C86117F1999C7ACBCF8011CA (U3CReCheckPositionU3Ed__6_t2F5A038F67A9DBB6E4A5432E6219209E10287605* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerCamera/<ReCheckPosition>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReCheckPositionU3Ed__6_System_Collections_IEnumerator_Reset_m6EE22060B7B2B6682B9527560B5BAA9550982E02 (U3CReCheckPositionU3Ed__6_t2F5A038F67A9DBB6E4A5432E6219209E10287605* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReCheckPositionU3Ed__6_System_Collections_IEnumerator_Reset_m6EE22060B7B2B6682B9527560B5BAA9550982E02_RuntimeMethod_var)));
	}
}
// System.Object PlayerCamera/<ReCheckPosition>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReCheckPositionU3Ed__6_System_Collections_IEnumerator_get_Current_m561D517A301D966620B1E0BAC99DA136D4C7661A (U3CReCheckPositionU3Ed__6_t2F5A038F67A9DBB6E4A5432E6219209E10287605* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PlayerController::add_OnRootDeath(PlayerController/RootDeath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_add_OnRootDeath_m4948E8F9C882C637132653CAE34F94CA122FDE9F (RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* V_0 = NULL;
	RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* V_1 = NULL;
	RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_0 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnRootDeath_8;
		V_0 = L_0;
	}

IL_0006:
	{
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_1 = V_0;
		V_1 = L_1;
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_2 = V_1;
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462*)CastclassSealed((RuntimeObject*)L_4, RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_5 = V_2;
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_6 = V_1;
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_7;
		L_7 = InterlockedCompareExchangeImpl<RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462*>((&((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnRootDeath_8), L_5, L_6);
		V_0 = L_7;
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_8 = V_0;
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_9 = V_1;
		if ((!(((RuntimeObject*)(RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462*)L_8) == ((RuntimeObject*)(RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PlayerController::remove_OnRootDeath(PlayerController/RootDeath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_remove_OnRootDeath_m5F886B0172D237A915560C947C7C024E879FAA3F (RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* V_0 = NULL;
	RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* V_1 = NULL;
	RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_0 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnRootDeath_8;
		V_0 = L_0;
	}

IL_0006:
	{
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_1 = V_0;
		V_1 = L_1;
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_2 = V_1;
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462*)CastclassSealed((RuntimeObject*)L_4, RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_5 = V_2;
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_6 = V_1;
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_7;
		L_7 = InterlockedCompareExchangeImpl<RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462*>((&((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnRootDeath_8), L_5, L_6);
		V_0 = L_7;
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_8 = V_0;
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_9 = V_1;
		if ((!(((RuntimeObject*)(RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462*)L_8) == ((RuntimeObject*)(RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PlayerController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Awake_m82639826DE098DC447C79B43900C5F2A630B3DC3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerController::StartGrowth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_StartGrowth_m2C7671D1D8956D86950416BA682181C10F6946E1 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// rb.AddForce(dir, ForceMode.Force);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___dir_7;
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_0, L_1, 0, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::StopGrowth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_StopGrowth_mAA71C095A731F33E611362EEAEAC51A91A75AAA1 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mBE074345D4C1E1D5342A1A6213DAEC0D0E12E873_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* G_B2_0 = NULL;
	RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* G_B1_0 = NULL;
	{
		// Player.Instance.root = null;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4;
		L_0->___root_5 = (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___root_5), (void*)(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95*)NULL);
		// Player.Instance.roots.Remove(this);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4;
		List_1_t18744BF3ED4ECD9F511A802AC4D4209F00DF6FC5* L_2 = L_1->___roots_7;
		bool L_3;
		L_3 = List_1_Remove_mBE074345D4C1E1D5342A1A6213DAEC0D0E12E873(L_2, __this, List_1_Remove_mBE074345D4C1E1D5342A1A6213DAEC0D0E12E873_RuntimeMethod_var);
		// Player.Instance.FindLowestRoot();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___Instance_4;
		Player_FindLowestRoot_m99DC64B96255CBC88DED1C303AE5B3E992A62A58(L_4, NULL);
		// Destroy(rb);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rb_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// OnRootDeath?.Invoke();
		il2cpp_codegen_runtime_class_init_inline(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_6 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___OnRootDeath_8;
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* L_7 = L_6;
		G_B1_0 = L_7;
		if (L_7)
		{
			G_B2_0 = L_7;
			goto IL_003c;
		}
	}
	{
		goto IL_0041;
	}

IL_003c:
	{
		RootDeath_Invoke_m3D88BD4CB9DD1FA6C61645D4F45495D7C5FDEE9A_inline(G_B2_0, NULL);
	}

IL_0041:
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		// }
		return;
	}
}
// PlayerController PlayerController::Create(UnityEngine.GameObject,PlayerController,MoveDir,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* PlayerController_Create_mFB85100AB8B4DEDA1C50B9E09D9FF2C6C03B7412 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___parent1, int32_t ___moveDir2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_2 = NULL;
	{
		// Vector3 pos = parent.transform.position;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = ___parent1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// Quaternion rot = parent.transform.rotation;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3 = ___parent1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		V_1 = L_5;
		// var newSphere = Instantiate(prefab, pos, rot, player);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___prefab0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___player3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_6, L_7, L_8, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		// var newController = newSphere.GetComponent<PlayerController>();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_11;
		L_11 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_10, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		V_2 = L_11;
		// if (moveDir == MoveDir.Left)
		int32_t L_12 = ___moveDir2;
		if (L_12)
		{
			goto IL_003d;
		}
	}
	{
		// newController.dir = GetLeftDirection(parent.dir);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_13 = V_2;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_14 = ___parent1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___dir_7;
		il2cpp_codegen_runtime_class_init_inline(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = PlayerController_GetLeftDirection_m8495A00862E9E9E4DB5EE44CA413CB17DFE72588(L_15, NULL);
		L_13->___dir_7 = L_16;
		goto IL_004e;
	}

IL_003d:
	{
		// newController.dir = GetRightDirection(parent.dir);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_17 = V_2;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_18 = ___parent1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18->___dir_7;
		il2cpp_codegen_runtime_class_init_inline(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = PlayerController_GetRightDirection_m1959482F68E7D7C3ACE9C66EC2AB90B89AEA513C(L_19, NULL);
		L_17->___dir_7 = L_20;
	}

IL_004e:
	{
		// return newController;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_21 = V_2;
		return L_21;
	}
}
// UnityEngine.Vector3 PlayerController::GetRightDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlayerController_GetRightDirection_m1959482F68E7D7C3ACE9C66EC2AB90B89AEA513C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___parentDir0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float x = parentDir.x + side;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___parentDir0;
		float L_1 = L_0.___x_2;
		il2cpp_codegen_runtime_class_init_inline(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		float L_2 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___side_5;
		// return new Vector3(x, parentDir.y, parentDir.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___parentDir0;
		float L_4 = L_3.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___parentDir0;
		float L_6 = L_5.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), ((float)il2cpp_codegen_add(L_1, L_2)), L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 PlayerController::GetLeftDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlayerController_GetLeftDirection_m8495A00862E9E9E4DB5EE44CA413CB17DFE72588 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___parentDir0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float x = parentDir.x - side;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___parentDir0;
		float L_1 = L_0.___x_2;
		il2cpp_codegen_runtime_class_init_inline(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		float L_2 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___side_5;
		// return new Vector3(x, parentDir.y, parentDir.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___parentDir0;
		float L_4 = L_3.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___parentDir0;
		float L_6 = L_5.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), ((float)il2cpp_codegen_subtract(L_1, L_2)), L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void PlayerController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__cctor_mD5287D95C780696565B20A04448A9EB476331E86 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float down = 0.1f;
		((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___down_4 = (0.100000001f);
		// public static float side = 0.1f;
		((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___side_5 = (0.100000001f);
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
void RootDeath_Invoke_m3D88BD4CB9DD1FA6C61645D4F45495D7C5FDEE9A_Multicast(RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* currentDelegate = reinterpret_cast<RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RootDeath_Invoke_m3D88BD4CB9DD1FA6C61645D4F45495D7C5FDEE9A_OpenInst(RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void RootDeath_Invoke_m3D88BD4CB9DD1FA6C61645D4F45495D7C5FDEE9A_OpenStatic(RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void RootDeath_Invoke_m3D88BD4CB9DD1FA6C61645D4F45495D7C5FDEE9A_OpenStaticInvoker(RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void RootDeath_Invoke_m3D88BD4CB9DD1FA6C61645D4F45495D7C5FDEE9A_ClosedStaticInvoker(RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462 (RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void PlayerController/RootDeath::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootDeath__ctor_m2E92F68B7DA0028B865BF7677DEE829F747E964F (RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RootDeath_Invoke_m3D88BD4CB9DD1FA6C61645D4F45495D7C5FDEE9A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RootDeath_Invoke_m3D88BD4CB9DD1FA6C61645D4F45495D7C5FDEE9A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RootDeath_Invoke_m3D88BD4CB9DD1FA6C61645D4F45495D7C5FDEE9A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&RootDeath_Invoke_m3D88BD4CB9DD1FA6C61645D4F45495D7C5FDEE9A_Multicast;
}
// System.Void PlayerController/RootDeath::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootDeath_Invoke_m3D88BD4CB9DD1FA6C61645D4F45495D7C5FDEE9A (RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult PlayerController/RootDeath::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RootDeath_BeginInvoke_mE33EBBB2A99776649E8F9A1EB733F94601F06111 (RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void PlayerController/RootDeath::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootDeath_EndInvoke_m31D1A29A59CA96C7B8EF41419FF55EBC08F9F7C0 (RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void UIManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Awake_m7EC364BDD53CE056E998BAB28F79998608BB16DF (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m92EAA2900B924D05130FA09ACADBD35B9880C8A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextMeshProU5BU5D_tC24D27573EBF908D9D2D4FD451C3FD1A3817FC28* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Instance = this;
		((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// var texts = GetComponentsInChildren<TextMeshPro>();
		TextMeshProU5BU5D_tC24D27573EBF908D9D2D4FD451C3FD1A3817FC28* L_0;
		L_0 = Component_GetComponentsInChildren_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m92EAA2900B924D05130FA09ACADBD35B9880C8A9(__this, Component_GetComponentsInChildren_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m92EAA2900B924D05130FA09ACADBD35B9880C8A9_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < texts.Length; i++)
		V_1 = 0;
		goto IL_0023;
	}

IL_0011:
	{
		// texts[i].gameObject.SetActive(false);
		TextMeshProU5BU5D_tC24D27573EBF908D9D2D4FD451C3FD1A3817FC28* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// for (int i = 0; i < texts.Length; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0023:
	{
		// for (int i = 0; i < texts.Length; i++)
		int32_t L_7 = V_1;
		TextMeshProU5BU5D_tC24D27573EBF908D9D2D4FD451C3FD1A3817FC28* L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UIManager::ShowUIMessage(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowUIMessage_m85DC232CFD58031DECD219B7F4D6B80B7C655F35 (TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BD8F377CA0163FDE23BF9EFCE641887CBD6E46B);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// text.gameObject.SetActive(true);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___text0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// Debug.Log("Showing UI " + text.gameObject);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_2 = ___text0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = _stringLiteral4BD8F377CA0163FDE23BF9EFCE641887CBD6E46B;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = _stringLiteral4BD8F377CA0163FDE23BF9EFCE641887CBD6E46B;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0023;
	}

IL_001e:
	{
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_1;
	}

IL_0023:
	{
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// }
		return;
	}
}
// System.Void UIManager::HideUIMessage(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_HideUIMessage_m552EAB2747F4B63473C72FF7E369807514D9D7BF (TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1889A3408D94AD95F063097E86B2AF19095C978A);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// text.gameObject.SetActive(false);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___text0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// Debug.Log("Hiding UI " + text.gameObject);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_2 = ___text0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = _stringLiteral1889A3408D94AD95F063097E86B2AF19095C978A;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = _stringLiteral1889A3408D94AD95F063097E86B2AF19095C978A;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0023;
	}

IL_001e:
	{
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_1;
	}

IL_0023:
	{
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mC9DC2B8984E76F424E73C1860AD4BD3DEBF6573F (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RootSplit_Invoke_m8B0C872540ACD5CABBBEB7C8A96498B7E3069966_inline (RootSplit_t90198190EB003EED92D7E622BCCABC5D509FA4C5* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RootDeath_Invoke_m3D88BD4CB9DD1FA6C61645D4F45495D7C5FDEE9A_inline (RootDeath_t2C65E0EAA6F84CF5828486C6771F6454D747F462* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
