#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
191,
199,
200,
201,
202,
203,
204,
205,
207,
208,
255,
256,
257,
281,
282,
283,
292,
293,
294,
295,
382,
383,
384,
387,
418,
419,
421,
423,
425,
427,
432,
440,
441,
442,
443,
444,
445,
446,
447,
448,
527,
528,
580,
586,
589,
591,
596,
597,
599,
600,
604,
605,
607,
609,
610,
613,
614,
615,
618,
620,
622,
624,
633,
688,
690,
692,
702,
703,
704,
706,
712,
713,
714,
715,
716,
724,
725,
726,
730,
731,
733,
735,
904,
1051,
1052,
6130,
6131,
6133,
6134,
6135,
6136,
6137,
6139,
6141,
6143,
6151,
6153,
6158,
6160,
6162,
6164,
6215,
6216,
6218,
6219,
6220,
6221,
6222,
6224,
6226,
7070,
7074,
7076,
7077,
7078,
7079,
7271,
7272,
7273,
7274,
7290,
7291,
7292,
7294,
7333,
7389,
7391,
7400,
7401,
7402,
7403,
7646,
7650,
7651,
7674,
7688,
7695,
7702,
7713,
7716,
7736,
7807,
7814,
7816,
7822,
7836,
7856,
7857,
7865,
7867,
7874,
7875,
7878,
7880,
7885,
7891,
7892,
7899,
7901,
7913,
7916,
7917,
7918,
7929,
7938,
7944,
7945,
7946,
7948,
7949,
7966,
7968,
7982,
7999,
8026,
8051,
8052,
8466,
8547,
8548,
8690,
8691,
8695,
8698,
8759,
9068,
9069,
9246,
9256,
9744,
9765,
9767,
9769,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 191,
ves_icall_System_Array_InternalCreate,
// token 199,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 200,
ves_icall_System_Array_CanChangePrimitive,
// token 201,
ves_icall_System_Array_FastCopy,
// token 202,
ves_icall_System_Array_GetLengthInternal_raw,
// token 203,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 204,
ves_icall_System_Array_GetGenericValue_icall,
// token 205,
ves_icall_System_Array_GetValueImpl_raw,
// token 207,
ves_icall_System_Array_SetValueImpl_raw,
// token 208,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 255,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 256,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 257,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 281,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 282,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 283,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 292,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 293,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 294,
ves_icall_System_Enum_InternalGetCorElementType,
// token 295,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 382,
ves_icall_System_Environment_get_ProcessorCount,
// token 383,
ves_icall_System_Environment_get_TickCount,
// token 384,
ves_icall_System_Environment_get_TickCount64,
// token 387,
ves_icall_System_Environment_FailFast_raw,
// token 418,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 419,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 421,
ves_icall_System_GC_SuppressFinalize_raw,
// token 423,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 425,
ves_icall_System_GC_GetGCMemoryInfo,
// token 427,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 432,
ves_icall_System_Object_MemberwiseClone_raw,
// token 440,
ves_icall_System_Math_Ceiling,
// token 441,
ves_icall_System_Math_Cos,
// token 442,
ves_icall_System_Math_Floor,
// token 443,
ves_icall_System_Math_Log10,
// token 444,
ves_icall_System_Math_Pow,
// token 445,
ves_icall_System_Math_Sin,
// token 446,
ves_icall_System_Math_Sqrt,
// token 447,
ves_icall_System_Math_Tan,
// token 448,
ves_icall_System_Math_ModF,
// token 527,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 528,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 580,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 586,
ves_icall_RuntimeType_make_array_type_raw,
// token 589,
ves_icall_RuntimeType_make_byref_type_raw,
// token 591,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 596,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 597,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 599,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 600,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 604,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 605,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 607,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 609,
ves_icall_System_RuntimeType_getFullName_raw,
// token 610,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 613,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 614,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 615,
ves_icall_RuntimeType_GetFields_native_raw,
// token 618,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 620,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 622,
ves_icall_RuntimeType_GetName_raw,
// token 624,
ves_icall_RuntimeType_GetNamespace_raw,
// token 633,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 688,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 690,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 692,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 702,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 703,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 704,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 706,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 712,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 713,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 714,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 715,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 716,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 724,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 725,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 726,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 730,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 731,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 733,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 735,
ves_icall_System_String_FastAllocateString_raw,
// token 904,
ves_icall_System_Type_internal_from_handle_raw,
// token 1051,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1052,
ves_icall_System_ValueType_Equals_raw,
// token 6130,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6131,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6133,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6134,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6135,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6136,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6137,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6139,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6141,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6143,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6151,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6153,
mono_monitor_exit_icall_raw,
// token 6158,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6160,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6162,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6164,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6215,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6216,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6218,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6219,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6220,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6221,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6222,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6224,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6226,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7070,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7074,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7076,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7077,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7078,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7079,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7271,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7272,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7273,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7274,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7290,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7291,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7292,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7294,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7333,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7389,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 7391,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 7400,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7401,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7402,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 7403,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 7646,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 7650,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 7651,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 7674,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 7688,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 7695,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 7702,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 7713,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 7716,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 7736,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 7807,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 7814,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 7816,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 7822,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 7836,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 7856,
ves_icall_reflection_get_token_raw,
// token 7857,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 7865,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 7867,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 7874,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 7875,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 7878,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 7880,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 7885,
ves_icall_reflection_get_token_raw,
// token 7891,
ves_icall_get_method_info_raw,
// token 7892,
ves_icall_get_method_attributes,
// token 7899,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 7901,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 7913,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 7916,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 7917,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 7918,
ves_icall_reflection_get_token_raw,
// token 7929,
ves_icall_InternalInvoke_raw,
// token 7938,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 7944,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 7945,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 7946,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 7948,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 7949,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 7966,
ves_icall_InvokeClassConstructor_raw,
// token 7968,
ves_icall_InternalInvoke_raw,
// token 7982,
ves_icall_reflection_get_token_raw,
// token 7999,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8026,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8051,
ves_icall_reflection_get_token_raw,
// token 8052,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 8466,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 8547,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 8548,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 8690,
ves_icall_ModuleBuilder_basic_init_raw,
// token 8691,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 8695,
ves_icall_ModuleBuilder_getToken_raw,
// token 8698,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 8759,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9068,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9069,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9246,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 9256,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 9744,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 9765,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 9767,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 9769,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
