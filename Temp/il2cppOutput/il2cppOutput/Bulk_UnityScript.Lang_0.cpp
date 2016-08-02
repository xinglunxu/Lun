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

// UnityScript.Lang.Array
struct Array_t1209885965;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Array
struct Il2CppArray;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "UnityScript_Lang_U3CModuleU3E86524790.h"
#include "UnityScript_Lang_U3CModuleU3E86524790MethodDeclarations.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1209885965.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1209885965MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Collections_CollectionBase851261505MethodDeclarations.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_Collections_CollectionBase851261505.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "mscorlib_System_Collections_ArrayList2121638921MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "Boo_Lang_Boo_Lang_Builtins4233200974MethodDeclarations.h"
#include "mscorlib_System_ArgumentOutOfRangeException3479058991MethodDeclarations.h"
#include "mscorlib_System_ArgumentOutOfRangeException3479058991.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityScript.Lang.Array::.ctor()
extern "C"  void Array__ctor_m2243385516 (Array_t1209885965 * __this, const MethodInfo* method)
{
	{
		CollectionBase__ctor_m3181013581(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityScript.Lang.Array::get_length()
extern "C"  int32_t Array_get_length_m1103403365 (Array_t1209885965 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, __this);
		return L_0;
	}
}
// System.Object UnityScript.Lang.Array::Coerce(System.Type)
extern "C"  Il2CppObject * Array_Coerce_m1091438833 (Array_t1209885965 * __this, Type_t * ___toType0, const MethodInfo* method)
{
	Il2CppArray * G_B3_0 = NULL;
	{
		Type_t * L_0 = ___toType0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_0);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_2 = ___toType0;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_2);
		Il2CppArray * L_4 = Array_ToBuiltin_m1955277466(__this, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = ((Il2CppArray *)(__this));
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.Array UnityScript.Lang.Array::ToBuiltin(System.Type)
extern "C"  Il2CppArray * Array_ToBuiltin_m1955277466 (Array_t1209885965 * __this, Type_t * ___type0, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		Il2CppArray * L_2 = VirtFuncInvoker1< Il2CppArray *, Type_t * >::Invoke(48 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.Int32 UnityScript.Lang.Array::push(System.Object)
extern "C"  int32_t Array_push_m2824008196 (Array_t1209885965 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		Il2CppObject * L_1 = ___value0;
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		ArrayList_t2121638921 * L_2 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_2);
		return L_3;
	}
}
// System.Int32 UnityScript.Lang.Array::Push(System.Object)
extern "C"  int32_t Array_Push_m4077304292 (Array_t1209885965 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___value0;
		int32_t L_1 = Array_push_m2824008196(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String UnityScript.Lang.Array::ToString()
extern Il2CppCodeGenString* _stringLiteral44;
extern const uint32_t Array_ToString_m1683853927_MetadataUsageId;
extern "C"  String_t* Array_ToString_m1683853927 (Array_t1209885965 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Array_ToString_m1683853927_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Array_Join_m1779851389(__this, _stringLiteral44, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C"  String_t* Array_Join_m1779851389 (Array_t1209885965 * __this, String_t* ___seperator0, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___seperator0;
		String_t* L_2 = Builtins_join_m2635169011(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object UnityScript.Lang.Array::get_Item(System.Int32)
extern "C"  Il2CppObject * Array_get_Item_m3470539834 (Array_t1209885965 * __this, int32_t ___index0, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		Il2CppObject * L_2 = VirtFuncInvoker1< Il2CppObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityScript.Lang.Array::set_Item(System.Int32,System.Object)
extern "C"  void Array_set_Item_m461199559 (Array_t1209885965 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index0;
		if (((int64_t)L_0 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		Array_EnsureCapacity_m1275247809(__this, ((int32_t)((int32_t)L_0+(int32_t)1)), /*hidden argument*/NULL);
		ArrayList_t2121638921 * L_1 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___index0;
		Il2CppObject * L_3 = ___value1;
		NullCheck(L_1);
		VirtActionInvoker2< int32_t, Il2CppObject * >::Invoke(22 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_1, L_2, L_3);
		return;
	}
}
// System.Void UnityScript.Lang.Array::OnValidate(System.Object)
extern "C"  void Array_OnValidate_m3275003399 (Array_t1209885965 * __this, Il2CppObject * ___newValue0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityScript.Lang.Array::EnsureCapacity(System.Int32)
extern Il2CppClass* ArgumentOutOfRangeException_t3479058991_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral107876;
extern const uint32_t Array_EnsureCapacity_m1275247809_MetadataUsageId;
extern "C"  void Array_EnsureCapacity_m1275247809 (Array_t1209885965 * __this, int32_t ___capacity0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Array_EnsureCapacity_m1275247809_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___capacity0;
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, __this);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_004d;
	}

IL_0011:
	{
		V_1 = 0;
		int32_t L_2 = ___capacity0;
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, __this);
		if (((int64_t)L_2 - (int64_t)L_3 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_2 - (int64_t)L_3 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		V_2 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_t3479058991 * L_5 = (ArgumentOutOfRangeException_t3479058991 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t3479058991_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2026296331(L_5, _stringLiteral107876, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_002e:
	{
		goto IL_0046;
	}

IL_0033:
	{
		int32_t L_6 = V_1;
		V_0 = L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		ArrayList_t2121638921 * L_8 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, NULL);
	}

IL_0046:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0033;
		}
	}

IL_004d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
