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

// enLargeBehavior
struct enLargeBehavior_t2925536388;
// UnityEngine.Animator
struct Animator_t792326996;
// HideOrShowScript
struct HideOrShowScript_t4069683949;
// IdleLeafScript
struct IdleLeafScript_t2562657501;
// PopOutTextScript
struct PopOutTextScript_t3208952725;
// shrinkScript
struct shrinkScript_t3703740468;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_enLargeBehavior2925536388.h"
#include "AssemblyU2DCSharp_enLargeBehavior2925536388MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_StateMachineBehaviour1035456276MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Animator792326996.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo4162640357.h"
#include "mscorlib_System_Int322847414787.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "mscorlib_System_Type2779229935MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject4012695102MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SpriteRenderer2223784725MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color1588175760MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer1092684080MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_RuntimeTypeHandle1864875887.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "UnityEngine_UnityEngine_SpriteRenderer2223784725.h"
#include "UnityEngine_UnityEngine_Sprite4006040370.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "mscorlib_System_Single958209021.h"
#include "AssemblyU2DCSharp_HideOrShowScript4069683949.h"
#include "AssemblyU2DCSharp_HideOrShowScript4069683949MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Animator792326996MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Boolean211005341.h"
#include "AssemblyU2DCSharp_IdleLeafScript2562657501.h"
#include "AssemblyU2DCSharp_IdleLeafScript2562657501MethodDeclarations.h"
#include "AssemblyU2DCSharp_PopOutTextScript3208952725.h"
#include "AssemblyU2DCSharp_PopOutTextScript3208952725MethodDeclarations.h"
#include "AssemblyU2DCSharp_shrinkScript3703740468.h"
#include "AssemblyU2DCSharp_shrinkScript3703740468MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void enLargeBehavior::.ctor()
extern "C"  void enLargeBehavior__ctor_m2576250727 (enLargeBehavior_t2925536388 * __this, const MethodInfo* method)
{
	{
		StateMachineBehaviour__ctor_m3149540562(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void enLargeBehavior::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern const Il2CppType* SpriteRenderer_t2223784725_0_0_0_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* SpriteRenderer_t2223784725_il2cpp_TypeInfo_var;
extern const uint32_t enLargeBehavior_OnStateEnter_m326619335_MetadataUsageId;
extern "C"  void enLargeBehavior_OnStateEnter_m326619335 (enLargeBehavior_t2925536388 * __this, Animator_t792326996 * ___animator0, AnimatorStateInfo_t4162640357  ___stateInfo1, int32_t ___layerIndex2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (enLargeBehavior_OnStateEnter_m326619335_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t4012695102 * V_0 = NULL;
	{
		Animator_t792326996 * L_0 = ___animator0;
		NullCheck(L_0);
		GameObject_t4012695102 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t4012695102 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(SpriteRenderer_t2223784725_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		Component_t2126946602 * L_4 = GameObject_GetComponent_m1004814461(L_2, L_3, /*hidden argument*/NULL);
		Sprite_t4006040370 * L_5 = __this->get_newSprite_2();
		NullCheck(((SpriteRenderer_t2223784725 *)IsInstSealed(L_4, SpriteRenderer_t2223784725_il2cpp_TypeInfo_var)));
		SpriteRenderer_set_sprite_m1519408453(((SpriteRenderer_t2223784725 *)IsInstSealed(L_4, SpriteRenderer_t2223784725_il2cpp_TypeInfo_var)), L_5, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_6 = V_0;
		Type_t * L_7 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(SpriteRenderer_t2223784725_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		Component_t2126946602 * L_8 = GameObject_GetComponent_m1004814461(L_6, L_7, /*hidden argument*/NULL);
		Color_t1588175760  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Color__ctor_m103496991(&L_9, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(((SpriteRenderer_t2223784725 *)IsInstSealed(L_8, SpriteRenderer_t2223784725_il2cpp_TypeInfo_var)));
		SpriteRenderer_set_color_m2701854973(((SpriteRenderer_t2223784725 *)IsInstSealed(L_8, SpriteRenderer_t2223784725_il2cpp_TypeInfo_var)), L_9, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_10 = V_0;
		Type_t * L_11 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(SpriteRenderer_t2223784725_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		Component_t2126946602 * L_12 = GameObject_GetComponent_m1004814461(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(((SpriteRenderer_t2223784725 *)IsInstSealed(L_12, SpriteRenderer_t2223784725_il2cpp_TypeInfo_var)));
		Renderer_set_sortingOrder_m3971126610(((SpriteRenderer_t2223784725 *)IsInstSealed(L_12, SpriteRenderer_t2223784725_il2cpp_TypeInfo_var)), 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HideOrShowScript::.ctor()
extern "C"  void HideOrShowScript__ctor_m2522918478 (HideOrShowScript_t4069683949 * __this, const MethodInfo* method)
{
	{
		StateMachineBehaviour__ctor_m3149540562(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HideOrShowScript::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern Il2CppCodeGenString* _stringLiteral3426663252;
extern const uint32_t HideOrShowScript_OnStateEnter_m1325942382_MetadataUsageId;
extern "C"  void HideOrShowScript_OnStateEnter_m1325942382 (HideOrShowScript_t4069683949 * __this, Animator_t792326996 * ___animator0, AnimatorStateInfo_t4162640357  ___stateInfo1, int32_t ___layerIndex2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (HideOrShowScript_OnStateEnter_m1325942382_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t792326996 * L_0 = ___animator0;
		NullCheck(L_0);
		Animator_SetBool_m2336836203(L_0, _stringLiteral3426663252, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IdleLeafScript::.ctor()
extern "C"  void IdleLeafScript__ctor_m2297096286 (IdleLeafScript_t2562657501 * __this, const MethodInfo* method)
{
	{
		StateMachineBehaviour__ctor_m3149540562(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IdleLeafScript::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void IdleLeafScript_OnStateEnter_m2070557822 (IdleLeafScript_t2562657501 * __this, Animator_t792326996 * ___animator0, AnimatorStateInfo_t4162640357  ___stateInfo1, int32_t ___layerIndex2, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PopOutTextScript::.ctor()
extern "C"  void PopOutTextScript__ctor_m3924927142 (PopOutTextScript_t3208952725 * __this, const MethodInfo* method)
{
	{
		StateMachineBehaviour__ctor_m3149540562(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PopOutTextScript::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern Il2CppCodeGenString* _stringLiteral109264530;
extern const uint32_t PopOutTextScript_OnStateEnter_m4101494982_MetadataUsageId;
extern "C"  void PopOutTextScript_OnStateEnter_m4101494982 (PopOutTextScript_t3208952725 * __this, Animator_t792326996 * ___animator0, AnimatorStateInfo_t4162640357  ___stateInfo1, int32_t ___layerIndex2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PopOutTextScript_OnStateEnter_m4101494982_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t792326996 * L_0 = ___animator0;
		NullCheck(L_0);
		Animator_SetBool_m2336836203(L_0, _stringLiteral109264530, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void shrinkScript::.ctor()
extern "C"  void shrinkScript__ctor_m526079207 (shrinkScript_t3703740468 * __this, const MethodInfo* method)
{
	{
		StateMachineBehaviour__ctor_m3149540562(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void shrinkScript::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern const Il2CppType* SpriteRenderer_t2223784725_0_0_0_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* SpriteRenderer_t2223784725_il2cpp_TypeInfo_var;
extern const uint32_t shrinkScript_OnStateExit_m830649557_MetadataUsageId;
extern "C"  void shrinkScript_OnStateExit_m830649557 (shrinkScript_t3703740468 * __this, Animator_t792326996 * ___animator0, AnimatorStateInfo_t4162640357  ___stateInfo1, int32_t ___layerIndex2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (shrinkScript_OnStateExit_m830649557_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t792326996 * L_0 = ___animator0;
		NullCheck(L_0);
		GameObject_t4012695102 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(SpriteRenderer_t2223784725_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		Component_t2126946602 * L_3 = GameObject_GetComponent_m1004814461(L_1, L_2, /*hidden argument*/NULL);
		Sprite_t4006040370 * L_4 = __this->get_newSprite_2();
		NullCheck(((SpriteRenderer_t2223784725 *)IsInstSealed(L_3, SpriteRenderer_t2223784725_il2cpp_TypeInfo_var)));
		SpriteRenderer_set_sprite_m1519408453(((SpriteRenderer_t2223784725 *)IsInstSealed(L_3, SpriteRenderer_t2223784725_il2cpp_TypeInfo_var)), L_4, /*hidden argument*/NULL);
		Animator_t792326996 * L_5 = ___animator0;
		NullCheck(L_5);
		GameObject_t4012695102 * L_6 = Component_get_gameObject_m1170635899(L_5, /*hidden argument*/NULL);
		Type_t * L_7 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(SpriteRenderer_t2223784725_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		Component_t2126946602 * L_8 = GameObject_GetComponent_m1004814461(L_6, L_7, /*hidden argument*/NULL);
		Color_t1588175760  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Color__ctor_m103496991(&L_9, (0.109803922f), (0.5882353f), (0.8235294f), /*hidden argument*/NULL);
		NullCheck(((SpriteRenderer_t2223784725 *)IsInstSealed(L_8, SpriteRenderer_t2223784725_il2cpp_TypeInfo_var)));
		SpriteRenderer_set_color_m2701854973(((SpriteRenderer_t2223784725 *)IsInstSealed(L_8, SpriteRenderer_t2223784725_il2cpp_TypeInfo_var)), L_9, /*hidden argument*/NULL);
		Animator_t792326996 * L_10 = ___animator0;
		NullCheck(L_10);
		GameObject_t4012695102 * L_11 = Component_get_gameObject_m1170635899(L_10, /*hidden argument*/NULL);
		Type_t * L_12 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(SpriteRenderer_t2223784725_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		Component_t2126946602 * L_13 = GameObject_GetComponent_m1004814461(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(((SpriteRenderer_t2223784725 *)IsInstSealed(L_13, SpriteRenderer_t2223784725_il2cpp_TypeInfo_var)));
		Renderer_set_sortingOrder_m3971126610(((SpriteRenderer_t2223784725 *)IsInstSealed(L_13, SpriteRenderer_t2223784725_il2cpp_TypeInfo_var)), 0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
