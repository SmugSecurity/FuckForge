/*
#############################################################################################
# Forge War (1.0.9953.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Core_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_InvAspectRatio16x9                                 0.56249
#define CONST_InvAspectRatio5x4                                  0.8
#define CONST_InvAspectRatio4x3                                  0.75
#define CONST_AspectRatio16x9                                    1.77778
#define CONST_AspectRatio5x4                                     1.25
#define CONST_AspectRatio4x3                                     1.33333
#define CONST_INDEX_NONE                                         -1
#define CONST_UnrRotToDeg                                        0.00549316540360483
#define CONST_DegToUnrRot                                        182.0444
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MaxInt                                             0x7fffffff

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Core.Object.EDebugBreakType
/*enum EDebugBreakType
{
	DEBUGGER_NativeOnly                                = 0,
	DEBUGGER_ScriptOnly                                = 1,
	DEBUGGER_Both                                      = 2,
	DEBUGGER_MAX                                       = 3
};*/

// Enum Core.Object.EAutomatedRunResult
/*enum EAutomatedRunResult
{
	ARR_Unknown                                        = 0,
	ARR_OOM                                            = 1,
	ARR_Passed                                         = 2,
	ARR_MAX                                            = 3
};*/

// Enum Core.Object.EAspectRatioAxisConstraint
/*enum EAspectRatioAxisConstraint
{
	AspectRatio_MaintainYFOV                           = 0,
	AspectRatio_MaintainXFOV                           = 1,
	AspectRatio_MajorAxisFOV                           = 2,
	AspectRatio_MAX                                    = 3
};*/

// Enum Core.Object.EInterpCurveMode
/*enum EInterpCurveMode
{
	CIM_Linear                                         = 0,
	CIM_CurveAuto                                      = 1,
	CIM_Constant                                       = 2,
	CIM_CurveUser                                      = 3,
	CIM_CurveBreak                                     = 4,
	CIM_CurveAutoClamped                               = 5,
	CIM_MAX                                            = 6
};*/

// Enum Core.Object.EInterpMethodType
/*enum EInterpMethodType
{
	IMT_UseFixedTangentEvalAndNewAutoTangents          = 0,
	IMT_UseFixedTangentEval                            = 1,
	IMT_UseBrokenTangentEval                           = 2,
	IMT_MAX                                            = 3
};*/

// Enum Core.Object.EAxis
/*enum EAxis
{
	AXIS_NONE                                          = 0,
	AXIS_X                                             = 1,
	AXIS_Y                                             = 2,
	AXIS_BLANK                                         = 3,
	AXIS_Z                                             = 4,
	AXIS_MAX                                           = 5
};*/

// Enum Core.Object.ETickingGroup
/*enum ETickingGroup
{
	TG_PreAsyncWork                                    = 0,
	TG_DuringAsyncWork                                 = 1,
	TG_PostAsyncWork                                   = 2,
	TG_PostUpdateWork                                  = 3,
	TG_EffectsUpdateWork                               = 4,
	TG_MAX                                             = 5
};*/

// Enum Core.Object.EInputEvent
/*enum EInputEvent
{
	IE_Pressed                                         = 0,
	IE_Released                                        = 1,
	IE_Repeat                                          = 2,
	IE_DoubleClick                                     = 3,
	IE_Axis                                            = 4,
	IE_MAX                                             = 5
};*/

// Enum Core.Object.AlphaBlendType
/*enum AlphaBlendType
{
	ABT_Linear                                         = 0,
	ABT_Cubic                                          = 1,
	ABT_Sinusoidal                                     = 2,
	ABT_EaseInOutExponent2                             = 3,
	ABT_EaseInOutExponent3                             = 4,
	ABT_EaseInOutExponent4                             = 5,
	ABT_EaseInOutExponent5                             = 6,
	ABT_MAX                                            = 7
};*/

// Enum Core.DistributionVector.EDistributionVectorLockFlags
/*enum EDistributionVectorLockFlags
{
	EDVLF_None                                         = 0,
	EDVLF_XY                                           = 1,
	EDVLF_XZ                                           = 2,
	EDVLF_YZ                                           = 3,
	EDVLF_XYZ                                          = 4,
	EDVLF_MAX                                          = 5
};*/

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
/*enum EDistributionVectorMirrorFlags
{
	EDVMF_Same                                         = 0,
	EDVMF_Different                                    = 1,
	EDVMF_Mirror                                       = 2,
	EDVMF_MAX                                          = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Core.Object
// 0x003C
class UObject
{
public:
	/* Added by compiler - struct FPointer                                    VfTableObject;     */                               		// 0x0000 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer                                    HashNext;                                         		// 0x0004 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FQWord                                      ObjectFlags;                                      		// 0x0008 (0x0008) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    HashOuterNext;                                    		// 0x0010 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    StateFrame;                                       		// 0x0014 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     Linker;                                           		// 0x0018 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer                                    LinkerIndex;                                      		// 0x001C (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                ObjectInternalInteger;                            		// 0x0020 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                NetIndex;                                         		// 0x0024 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	class UObject*                                     Outer;                                            		// 0x0028 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FName                                       Name;                                             		// 0x002C (0x0008) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
	class UClass*                                      Class;                                            		// 0x0034 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     ObjectArchetype;                                  		// 0x0038 (0x0004) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static TArray< UObject* >* GObjObjects(); 

	char* GetName(); 
	char* GetNameCPP(); 
	char* GetFullName(); 

	template< class T > static T* FindObject ( char* ObjectFullName ); 
	static UClass* FindClass ( char* ClassFullName ); 

	bool IsA ( UClass* pClass ); 

	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1 ];

		return pClassPointer;
	};

	struct FString GetStringFromGuid ( struct FGuid* InGuid );
	struct FGuid GetGuidFromString ( struct FString* InGuidString );
	struct FGuid CreateGuid ( );
	bool IsGuidValid ( struct FGuid* InGuid );
	void InvalidateGuid ( struct FGuid* InGuid );
	struct FString GetLanguage ( );
	int GetRandomOptionSumFrequency ( TArray< float >* FreqList );
	int GetBuildChangelistNumber ( );
	int GetEngineVersion ( );
	void GetSystemTime ( int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec );
	struct FString TimeStamp ( );
	struct FVector TransformVectorByRotation ( struct FRotator SourceRotation, struct FVector SourceVector, unsigned long bInverse );
	struct FName GetPackageName ( );
	bool IsPendingKill ( );
	float ByteToFloat ( unsigned char inputByte, unsigned long bSigned );
	unsigned char FloatToByte ( float inputFloat, unsigned long bSigned );
	float UnwindHeading ( float A );
	float FindDeltaAngle ( float A1, float A2 );
	float GetHeadingAngle ( struct FVector Dir );
	void GetAngularDegreesFromRadians ( struct FVector2D* OutFOV );
	void GetAngularFromDotDist ( struct FVector2D DotDist, struct FVector2D* OutAngDist );
	bool GetAngularDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutAngularDist );
	bool GetDotDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutDotDist );
	struct FVector PointProjectToPlane ( struct FVector Point, struct FVector A, struct FVector B, struct FVector C );
	float PointDistToPlane ( struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector* out_ClosestPoint );
	float PointDistToSegment ( struct FVector Point, struct FVector StartPoint, struct FVector EndPoint, struct FVector* OutClosestPoint );
	float PointDistToLine ( struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector* OutClosestPoint );
	bool GetPerObjectConfigSections ( class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray< struct FString >* out_SectionNames );
	void StaticSaveConfig ( );
	void SaveConfig ( );
	class UObject* FindObject ( struct FString ObjectName, class UClass* ObjectClass );
	class UObject* DynamicLoadObject ( struct FString ObjectName, class UClass* ObjectClass, unsigned long MayFail );
	struct FName GetEnum ( class UObject* E, int I );
	void Disable ( struct FName ProbeFunc );
	void Enable ( struct FName ProbeFunc );
	void eventContinuedState ( );
	void eventPausedState ( );
	void eventPoppedState ( );
	void eventPushedState ( );
	void eventEndState ( struct FName NextStateName );
	void eventBeginState ( struct FName PreviousStateName );
	void DumpStateStack ( );
	void PopState ( unsigned long bPopAll );
	void PushState ( struct FName NewState, struct FName NewLabel );
	struct FName GetStateName ( );
	bool IsChildState ( struct FName TestState, struct FName TestParentState );
	bool IsInState ( struct FName TestState, unsigned long bTestStateStack );
	void GotoState ( struct FName NewState, struct FName Label, unsigned long bForceEvents, unsigned long bKeepStack );
	bool IsUTracing ( );
	void SetUTracing ( unsigned long bShouldUTrace );
	struct FName GetFuncName ( );
	void DebugBreak ( int UserFlags, unsigned char DebuggerType );
	struct FString GetScriptTrace ( );
	void ScriptTrace ( );
	struct FString ParseLocalizedPropertyPath ( struct FString PathName );
	struct FString Localize ( struct FString SectionName, struct FString KeyName, struct FString PackageName );
	void WarnInternal ( struct FString S );
	void LogInternal ( struct FString S, struct FName Tag );
	struct FLinearColor Subtract_LinearColorLinearColor ( struct FLinearColor A, struct FLinearColor B );
	struct FLinearColor Multiply_LinearColorFloat ( struct FLinearColor LC, float Mult );
	struct FLinearColor ColorToLinearColor ( struct FColor OldColor );
	struct FLinearColor MakeLinearColor ( float R, float G, float B, float A );
	struct FColor LerpColor ( struct FColor A, struct FColor B, float Alpha );
	struct FColor MakeColor ( unsigned char R, unsigned char G, unsigned char B, unsigned char A );
	struct FColor Add_ColorColor ( struct FColor A, struct FColor B );
	struct FColor Multiply_ColorFloat ( struct FColor A, float B );
	struct FColor Multiply_FloatColor ( float A, struct FColor B );
	struct FColor Subtract_ColorColor ( struct FColor A, struct FColor B );
	struct FVector2D EvalInterpCurveVector2D ( struct FInterpCurveVector2D Vector2DCurve, float InVal );
	struct FVector EvalInterpCurveVector ( struct FInterpCurveVector VectorCurve, float InVal );
	float EvalInterpCurveFloat ( struct FInterpCurveFloat FloatCurve, float InVal );
	struct FVector2D vect2d ( float InX, float InY );
	float GetMappedRangeValue ( struct FVector2D InputRange, struct FVector2D OutputRange, float Value );
	float GetRangePctByValue ( struct FVector2D Range, float Value );
	float GetRangeValueByPct ( struct FVector2D Range, float Pct );
	struct FVector2D SubtractEqual_Vector2DVector2D ( struct FVector2D B, struct FVector2D* A );
	struct FVector2D AddEqual_Vector2DVector2D ( struct FVector2D B, struct FVector2D* A );
	struct FVector2D DivideEqual_Vector2DFloat ( float B, struct FVector2D* A );
	struct FVector2D MultiplyEqual_Vector2DFloat ( float B, struct FVector2D* A );
	struct FVector2D Divide_Vector2DFloat ( struct FVector2D A, float B );
	struct FVector2D Multiply_Vector2DFloat ( struct FVector2D A, float B );
	struct FVector2D Subtract_Vector2DVector2D ( struct FVector2D A, struct FVector2D B );
	struct FVector2D Add_Vector2DVector2D ( struct FVector2D A, struct FVector2D B );
	struct FQuat Subtract_QuatQuat ( struct FQuat A, struct FQuat B );
	struct FQuat Add_QuatQuat ( struct FQuat A, struct FQuat B );
	struct FQuat QuatSlerp ( struct FQuat A, struct FQuat B, float Alpha, unsigned long bShortestPath );
	struct FRotator QuatToRotator ( struct FQuat A );
	struct FQuat QuatFromRotator ( struct FRotator A );
	struct FQuat QuatFromAxisAndAngle ( struct FVector Axis, float Angle );
	struct FQuat QuatFindBetween ( struct FVector A, struct FVector B );
	struct FVector QuatRotateVector ( struct FQuat A, struct FVector B );
	struct FQuat QuatInvert ( struct FQuat A );
	float QuatDot ( struct FQuat A, struct FQuat B );
	struct FQuat QuatProduct ( struct FQuat A, struct FQuat B );
	struct FVector MatrixGetAxis ( struct FMatrix TM, unsigned char Axis );
	struct FVector MatrixGetOrigin ( struct FMatrix TM );
	struct FRotator MatrixGetRotator ( struct FMatrix TM );
	struct FMatrix MakeRotationMatrix ( struct FRotator Rotation );
	struct FMatrix MakeRotationTranslationMatrix ( struct FVector Translation, struct FRotator Rotation );
	struct FVector InverseTransformNormal ( struct FMatrix TM, struct FVector A );
	struct FVector TransformNormal ( struct FMatrix TM, struct FVector A );
	struct FVector InverseTransformVector ( struct FMatrix TM, struct FVector A );
	struct FVector TransformVector ( struct FMatrix TM, struct FVector A );
	struct FMatrix Multiply_MatrixMatrix ( struct FMatrix A, struct FMatrix B );
	bool NotEqual_NameName ( struct FName A, struct FName B );
	bool EqualEqual_NameName ( struct FName A, struct FName B );
	bool IsA ( struct FName ClassName );
	bool ClassIsChildOf ( class UClass* TestClass, class UClass* ParentClass );
	bool NotEqual_InterfaceInterface ( class UInterface* A, class UInterface* B );
	bool EqualEqual_InterfaceInterface ( class UInterface* A, class UInterface* B );
	bool NotEqual_ObjectObject ( class UObject* A, class UObject* B );
	bool EqualEqual_ObjectObject ( class UObject* A, class UObject* B );
	struct FString PathName ( class UObject* CheckObject );
	TArray< struct FString > SplitString ( struct FString Source, struct FString Delimiter, unsigned long bCullEmpty );
	void ParseStringIntoArray ( struct FString BaseString, struct FString delim, unsigned long bCullEmpty, TArray< struct FString >* Pieces );
	void JoinArray ( TArray< struct FString > StringArray, struct FString delim, unsigned long bIgnoreBlanks, struct FString* out_Result );
	struct FString GetRightMost ( struct FString Text );
	struct FString Split ( struct FString Text, struct FString SplitStr, unsigned long bOmitSplitStr );
	struct FString Repl ( struct FString Src, struct FString Match, struct FString With, unsigned long bCaseSensitive );
	int Asc ( struct FString S );
	struct FString Chr ( int I );
	struct FString Locs ( struct FString S );
	struct FString Caps ( struct FString S );
	struct FString Right ( struct FString S, int I );
	struct FString Left ( struct FString S, int I );
	struct FString Mid ( struct FString S, int I, int J );
	int InStr ( struct FString S, struct FString T, unsigned long bSearchFromRight, unsigned long bIgnoreCase, int StartPos );
	int Len ( struct FString S );
	struct FString SubtractEqual_StrStr ( struct FString B, struct FString* A );
	struct FString AtEqual_StrStr ( struct FString B, struct FString* A );
	struct FString ConcatEqual_StrStr ( struct FString B, struct FString* A );
	bool ComplementEqual_StrStr ( struct FString A, struct FString B );
	bool NotEqual_StrStr ( struct FString A, struct FString B );
	bool EqualEqual_StrStr ( struct FString A, struct FString B );
	bool GreaterEqual_StrStr ( struct FString A, struct FString B );
	bool LessEqual_StrStr ( struct FString A, struct FString B );
	bool Greater_StrStr ( struct FString A, struct FString B );
	bool Less_StrStr ( struct FString A, struct FString B );
	struct FString At_StrStr ( struct FString A, struct FString B );
	struct FString Concat_StrStr ( struct FString A, struct FString B );
	struct FRotator MakeRotator ( int Pitch, int Yaw, int Roll );
	bool SClampRotAxis ( float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis );
	int ClampRotAxisFromRange ( int Current, int Min, int Max );
	int ClampRotAxisFromBase ( int Current, int Center, int MaxDelta );
	void ClampRotAxis ( int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis );
	float RSize ( struct FRotator R );
	float RDiff ( struct FRotator A, struct FRotator B );
	int NormalizeRotAxis ( int Angle );
	struct FRotator RInterpTo ( struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed, unsigned long bConstantInterpSpeed );
	struct FRotator RTransform ( struct FRotator R, struct FRotator RBasis );
	struct FRotator RLerp ( struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath );
	struct FRotator Normalize ( struct FRotator Rot );
	struct FRotator OrthoRotation ( struct FVector X, struct FVector Y, struct FVector Z );
	struct FRotator RotRand ( unsigned long bRoll );
	struct FVector GetRotatorAxis ( struct FRotator A, int Axis );
	void GetUnAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z );
	void GetAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z );
	bool ClockwiseFrom_IntInt ( int A, int B );
	struct FRotator SubtractEqual_RotatorRotator ( struct FRotator B, struct FRotator* A );
	struct FRotator AddEqual_RotatorRotator ( struct FRotator B, struct FRotator* A );
	struct FRotator Subtract_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FRotator Add_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FRotator DivideEqual_RotatorFloat ( float B, struct FRotator* A );
	struct FRotator MultiplyEqual_RotatorFloat ( float B, struct FRotator* A );
	struct FRotator Divide_RotatorFloat ( struct FRotator A, float B );
	struct FRotator Multiply_FloatRotator ( float A, struct FRotator B );
	struct FRotator Multiply_RotatorFloat ( struct FRotator A, float B );
	bool NotEqual_RotatorRotator ( struct FRotator A, struct FRotator B );
	bool EqualEqual_RotatorRotator ( struct FRotator A, struct FRotator B );
	bool InCylinder ( struct FVector Origin, struct FRotator Dir, float Width, struct FVector A, unsigned long bIgnoreZ );
	float NoZDot ( struct FVector A, struct FVector B );
	struct FVector ClampLength ( struct FVector V, float MaxLength );
	struct FVector VInterpTo ( struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed );
	bool IsZero ( struct FVector A );
	struct FVector ProjectOnTo ( struct FVector X, struct FVector Y );
	struct FVector MirrorVectorByNormal ( struct FVector InVect, struct FVector InNormal );
	struct FVector VRandCone2 ( struct FVector Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians );
	struct FVector VRandCone ( struct FVector Dir, float ConeHalfAngleRadians );
	struct FVector VRand ( );
	struct FVector VLerp ( struct FVector A, struct FVector B, float Alpha );
	struct FVector Normal2D ( struct FVector A );
	struct FVector Normal ( struct FVector A );
	float VSizeSq2D ( struct FVector A );
	float VSizeSq ( struct FVector A );
	float VSize2D ( struct FVector A );
	float VSize ( struct FVector A );
	struct FVector SubtractEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector AddEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector DivideEqual_VectorFloat ( float B, struct FVector* A );
	struct FVector MultiplyEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector MultiplyEqual_VectorFloat ( float B, struct FVector* A );
	struct FVector Cross_VectorVector ( struct FVector A, struct FVector B );
	float Dot_VectorVector ( struct FVector A, struct FVector B );
	bool NotEqual_VectorVector ( struct FVector A, struct FVector B );
	bool EqualEqual_VectorVector ( struct FVector A, struct FVector B );
	struct FVector GreaterGreater_VectorRotator ( struct FVector A, struct FRotator B );
	struct FVector LessLess_VectorRotator ( struct FVector A, struct FRotator B );
	struct FVector Subtract_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Add_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Divide_VectorFloat ( struct FVector A, float B );
	struct FVector Multiply_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Multiply_FloatVector ( float A, struct FVector B );
	struct FVector Multiply_VectorFloat ( struct FVector A, float B );
	struct FVector Subtract_PreVector ( struct FVector A );
	float FInterpConstantTo ( float Current, float Target, float DeltaTime, float InterpSpeed );
	float FInterpTo ( float Current, float Target, float DeltaTime, float InterpSpeed );
	float FPctByRange ( float Value, float InMin, float InMax );
	float RandRange ( float InMin, float InMax );
	float FInterpEaseInOut ( float A, float B, float Alpha, float Exp );
	float FInterpEaseOut ( float A, float B, float Alpha, float Exp );
	float FInterpEaseIn ( float A, float B, float Alpha, float Exp );
	float FCubicInterp ( float P0, float T0, float P1, float T1, float A );
	int FCeil ( float A );
	int FFloor ( float A );
	int Round ( float A );
	float Lerp ( float A, float B, float Alpha );
	float FClamp ( float V, float A, float B );
	float FMax ( float A, float B );
	float FMin ( float A, float B );
	float FRand ( );
	float Square ( float A );
	float Sqrt ( float A );
	float Loge ( float A );
	float Exp ( float A );
	float Atan2 ( float A, float B );
	float Atan ( float A );
	float Tan ( float A );
	float Acos ( float A );
	float Cos ( float A );
	float Asin ( float A );
	float Sin ( float A );
	float Abs ( float A );
	float SubtractEqual_FloatFloat ( float B, float* A );
	float AddEqual_FloatFloat ( float B, float* A );
	float DivideEqual_FloatFloat ( float B, float* A );
	float MultiplyEqual_FloatFloat ( float B, float* A );
	bool NotEqual_FloatFloat ( float A, float B );
	bool ComplementEqual_FloatFloat ( float A, float B );
	bool EqualEqual_FloatFloat ( float A, float B );
	bool GreaterEqual_FloatFloat ( float A, float B );
	bool LessEqual_FloatFloat ( float A, float B );
	bool Greater_FloatFloat ( float A, float B );
	bool Less_FloatFloat ( float A, float B );
	float Subtract_FloatFloat ( float A, float B );
	float Add_FloatFloat ( float A, float B );
	float Percent_FloatFloat ( float A, float B );
	float Divide_FloatFloat ( float A, float B );
	float Multiply_FloatFloat ( float A, float B );
	float MultiplyMultiply_FloatFloat ( float Base, float Exp );
	float Subtract_PreFloat ( float A );
	struct FString ToHex ( int A );
	int Clamp ( int V, int A, int B );
	int Max ( int A, int B );
	int Min ( int A, int B );
	int Rand ( int Max );
	int SubtractSubtract_Int ( int* A );
	int AddAdd_Int ( int* A );
	int SubtractSubtract_PreInt ( int* A );
	int AddAdd_PreInt ( int* A );
	int SubtractEqual_IntInt ( int B, int* A );
	int AddEqual_IntInt ( int B, int* A );
	int DivideEqual_IntFloat ( float B, int* A );
	int MultiplyEqual_IntFloat ( float B, int* A );
	int Or_IntInt ( int A, int B );
	int Xor_IntInt ( int A, int B );
	int And_IntInt ( int A, int B );
	bool NotEqual_IntInt ( int A, int B );
	bool EqualEqual_IntInt ( int A, int B );
	bool GreaterEqual_IntInt ( int A, int B );
	bool LessEqual_IntInt ( int A, int B );
	bool Greater_IntInt ( int A, int B );
	bool Less_IntInt ( int A, int B );
	int GreaterGreaterGreater_IntInt ( int A, int B );
	int GreaterGreater_IntInt ( int A, int B );
	int LessLess_IntInt ( int A, int B );
	int Subtract_IntInt ( int A, int B );
	int Add_IntInt ( int A, int B );
	int Percent_IntInt ( int A, int B );
	int Divide_IntInt ( int A, int B );
	int Multiply_IntInt ( int A, int B );
	int Subtract_PreInt ( int A );
	int Complement_PreInt ( int A );
	unsigned char SubtractSubtract_Byte ( unsigned char* A );
	unsigned char AddAdd_Byte ( unsigned char* A );
	unsigned char SubtractSubtract_PreByte ( unsigned char* A );
	unsigned char AddAdd_PreByte ( unsigned char* A );
	unsigned char SubtractEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char AddEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char DivideEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char MultiplyEqual_ByteFloat ( float B, unsigned char* A );
	unsigned char MultiplyEqual_ByteByte ( unsigned char B, unsigned char* A );
	bool OrOr_BoolBool ( unsigned long A, unsigned long B );
	bool XorXor_BoolBool ( unsigned long A, unsigned long B );
	bool AndAnd_BoolBool ( unsigned long A, unsigned long B );
	bool NotEqual_BoolBool ( unsigned long A, unsigned long B );
	bool EqualEqual_BoolBool ( unsigned long A, unsigned long B );
	bool Not_PreBool ( unsigned long A );

	// Virtual Functions
	virtual void VirtualFunction00 ( );																			// 0x00C80E90 (0x00)
	virtual void VirtualFunction01 ( );																			// 0x00CC0AA0 (0x04)
	virtual void VirtualFunction02 ( );																			// 0x00CBDBC0 (0x08)
	virtual void VirtualFunction03 ( );																			// 0x00A8E7A0 (0x0C)
	virtual void VirtualFunction04 ( );																			// 0x00A8E7B0 (0x10)
	virtual void VirtualFunction05 ( );																			// 0x00A8E7C0 (0x14)
	virtual void VirtualFunction06 ( );																			// 0x00D287A0 (0x18)
	virtual void VirtualFunction07 ( );																			// 0x00D287E0 (0x1C)
	virtual void VirtualFunction08 ( );																			// 0x00C80DE0 (0x20)
	virtual void VirtualFunction09 ( );																			// 0x00D2D350 (0x24)
	virtual void VirtualFunction10 ( );																			// 0x00A8E7D0 (0x28)
	virtual void VirtualFunction11 ( );																			// 0x00D21EC0 (0x2C)
	virtual void VirtualFunction12 ( );																			// 0x00CA5400 (0x30)
	virtual void VirtualFunction13 ( );																			// 0x00CBA900 (0x34)
	virtual void VirtualFunction14 ( );																			// 0x00A8E9B0 (0x38)
	virtual void VirtualFunction15 ( );																			// 0x00D1F250 (0x3C)
	virtual void VirtualFunction16 ( );																			// 0x00D23870 (0x40)
	virtual void VirtualFunction17 ( );																			// 0x00D1F260 (0x44)
	virtual void VirtualFunction18 ( );																			// 0x00D1F270 (0x48)
	virtual void VirtualFunction19 ( );																			// 0x00D23940 (0x4C)
	virtual void VirtualFunction20 ( );																			// 0x00D205A0 (0x50)
	virtual void VirtualFunction21 ( );																			// 0x00D1F2C0 (0x54)
	virtual void VirtualFunction22 ( );																			// 0x00D20630 (0x58)
	virtual void VirtualFunction23 ( );																			// 0x00A8E7E0 (0x5C)
	virtual void VirtualFunction24 ( );																			// 0x00A8E7F0 (0x60)
	virtual void VirtualFunction25 ( );																			// 0x00A8E800 (0x64)
	virtual void VirtualFunction26 ( );																			// 0x00D1F290 (0x68)
	virtual void VirtualFunction27 ( );																			// 0x00D1F2A0 (0x6C)
	virtual void VirtualFunction28 ( );																			// 0x00D205D0 (0x70)
	virtual void VirtualFunction29 ( );																			// 0x00D1F2B0 (0x74)
	virtual void VirtualFunction30 ( );																			// 0x00D20600 (0x78)
	virtual void VirtualFunction31 ( );																			// 0x00D281F0 (0x7C)
	virtual void VirtualFunction32 ( );																			// 0x00D23A30 (0x80)
	virtual void VirtualFunction33 ( );																			// 0x00D23CB0 (0x84)
	virtual void VirtualFunction34 ( );																			// 0x00A8E810 (0x88)
	virtual void VirtualFunction35 ( );																			// 0x00C9DBD0 (0x8C)
	virtual void VirtualFunction36 ( );																			// 0x00D3A5D0 (0x90)
	virtual void VirtualFunction37 ( );																			// 0x00A8E9D0 (0x94)
	virtual void VirtualFunction38 ( );																			// 0x00A8EA00 (0x98)
	virtual void VirtualFunction39 ( );																			// 0x00A8EA30 (0x9C)
	virtual void VirtualFunction40 ( );																			// 0x00A8E820 (0xA0)
	virtual void VirtualFunction41 ( );																			// 0x00A8EB10 (0xA4)
	virtual void VirtualFunction42 ( );																			// 0x00A8E830 (0xA8)
	virtual void VirtualFunction43 ( );																			// 0x00A8E840 (0xAC)
	virtual void VirtualFunction44 ( );																			// 0x00A8E850 (0xB0)
	virtual void VirtualFunction45 ( );																			// 0x00A8E860 (0xB4)
	virtual void VirtualFunction46 ( );																			// 0x00A8E870 (0xB8)
	virtual void VirtualFunction47 ( );																			// 0x01574750 (0xBC)
	virtual void VirtualFunction48 ( );																			// 0x0157DAE0 (0xC0)
	virtual void VirtualFunction49 ( );																			// 0x00C9DC50 (0xC4)
	virtual void VirtualFunction50 ( );																			// 0x00CAEA40 (0xC8)
	virtual void VirtualFunction51 ( );																			// 0x00A8E880 (0xCC)
	virtual void VirtualFunction52 ( );																			// 0x00A8E890 (0xD0)
	virtual void VirtualFunction53 ( );																			// 0x00C80C10 (0xD4)
	virtual void VirtualFunction54 ( );																			// 0x00CBD910 (0xD8)
	virtual void VirtualFunction55 ( );																			// 0x00D22AD0 (0xDC)
	virtual void VirtualFunction56 ( );																			// 0x00A8E8B0 (0xE0)
	virtual void VirtualFunction57 ( );																			// 0x00D20550 (0xE4)
	virtual void VirtualFunction58 ( );																			// 0x00D2A130 (0xE8)
	virtual void VirtualFunction59 ( );																			// 0x00C475D0 (0xEC)
	virtual void VirtualFunction60 ( );																			// 0x00D39570 (0xF0)
	virtual void VirtualFunction61 ( );																			// 0x00A8E8C0 (0xF4)
	virtual void VirtualFunction62 ( );																			// 0x00A8E8D0 (0xF8)
	virtual void VirtualFunction63 ( );																			// 0x00A8E8E0 (0xFC)
	virtual void VirtualFunction64 ( );																			// 0x00A8E900 (0x100)
	virtual void VirtualFunction65 ( );																			// 0x00D42C80 (0x104)
	virtual void VirtualFunction66 ( );																			// 0x00D1F2F0 (0x108)
	virtual void VirtualFunction67 ( );																			// 0x00CB8760 (0x10C)
	virtual void VirtualFunction68 ( );																			// 0x00CBC4F0 (0x110)
	virtual void VirtualFunction69 ( );																			// 0x00C7C330 (0x114)
	virtual void VirtualFunction70 ( );																			// 0x00C7C3D0 (0x118)
	virtual void VirtualFunction71 ( );																			// 0x00C7C3E0 (0x11C)
	virtual void VirtualFunction72 ( );																			// 0x00D2B930 (0x120)
	virtual void VirtualFunction73 ( );																			// 0x00C92F70 (0x124)
	virtual void VirtualFunction74 ( );																			// 0x00CAF1A0 (0x128)
	virtual void VirtualFunction75 ( );																			// 0x00D2E480 (0x12C)
	virtual void VirtualFunction76 ( );																			// 0x00A8E920 (0x130)
	virtual void VirtualFunction77 ( );																			// 0x00C79A30 (0x134)
	virtual void VirtualFunction78 ( );																			// 0x00CBD8F0 (0x138)
	virtual void VirtualFunction79 ( );																			// 0x00C9DDB0 (0x13C)
	virtual void VirtualFunction80 ( );																			// 0x00CBD900 (0x140)
	virtual void VirtualFunction81 ( );																			// 0x00CC36C0 (0x144)
	virtual void VirtualFunction82 ( );																			// 0x00C80B20 (0x148)
	virtual void VirtualFunction83 ( );																			// 0x00C8FD30 (0x14C)
	virtual void VirtualFunction84 ( );																			// 0x00CA5480 (0x150)
	virtual void VirtualFunction85 ( );																			// 0x00C80D40 (0x154)
	virtual void VirtualFunction86 ( );																			// 0x00C80F70 (0x158)
	virtual void VirtualFunction87 ( );																			// 0x00C80F80 (0x15C)
	virtual void VirtualFunction88 ( );																			// 0x00CBF230 (0x160)
	virtual void VirtualFunction89 ( );																			// 0x00A8E7A0 (0x164)
	virtual void VirtualFunction90 ( );																			// 0x00A8E7B0 (0x168)
	virtual void VirtualFunction91 ( );																			// 0x00A8E7C0 (0x16C)
	virtual void VirtualFunction92 ( );																			// 0x00D287A0 (0x170)
	virtual void VirtualFunction93 ( );																			// 0x00D287E0 (0x174)
	virtual void VirtualFunction94 ( );																			// 0x00D42A40 (0x178)
	virtual void VirtualFunction95 ( );																			// 0x00D2D350 (0x17C)
	virtual void VirtualFunction96 ( );																			// 0x00A8E7D0 (0x180)
	virtual void VirtualFunction97 ( );																			// 0x00D21EC0 (0x184)
	virtual void ProcessEvent ( class UFunction* pFunction, void* pParms, void* pResult = NULL );               // 0x00D36180 (0x188)
	virtual void VirtualFunction99 ( );																			// 0x00C49C60 (0x18C)
	virtual void VirtualFunction100 ( );																			// 0x00A8E9B0 (0x190)
	virtual void VirtualFunction101 ( );																			// 0x00D1F250 (0x194)
	virtual void VirtualFunction102 ( );																			// 0x00D23870 (0x198)
	virtual void VirtualFunction103 ( );																			// 0x00D1F260 (0x19C)
	virtual void VirtualFunction104 ( );																			// 0x00D1F270 (0x1A0)
	virtual void VirtualFunction105 ( );																			// 0x00D23940 (0x1A4)
	virtual void VirtualFunction106 ( );																			// 0x00D205A0 (0x1A8)
	virtual void VirtualFunction107 ( );																			// 0x00D1F2C0 (0x1AC)
	virtual void VirtualFunction108 ( );																			// 0x00D20630 (0x1B0)
	virtual void VirtualFunction109 ( );																			// 0x00A8E7E0 (0x1B4)
	virtual void VirtualFunction110 ( );																			// 0x00A8E7F0 (0x1B8)
	virtual void VirtualFunction111 ( );																			// 0x00A8E800 (0x1BC)
	virtual void VirtualFunction112 ( );																			// 0x00D1F290 (0x1C0)
	virtual void VirtualFunction113 ( );																			// 0x00D1F2A0 (0x1C4)
	virtual void VirtualFunction114 ( );																			// 0x00D205D0 (0x1C8)
	virtual void VirtualFunction115 ( );																			// 0x00D1F2B0 (0x1CC)
	virtual void VirtualFunction116 ( );																			// 0x00D20600 (0x1D0)
	virtual void VirtualFunction117 ( );																			// 0x00D281F0 (0x1D4)
	virtual void VirtualFunction118 ( );																			// 0x00D23A30 (0x1D8)
	virtual void VirtualFunction119 ( );																			// 0x00D23CB0 (0x1DC)
	virtual void VirtualFunction120 ( );																			// 0x00A8E810 (0x1E0)
	virtual void VirtualFunction121 ( );																			// 0x00D3A1D0 (0x1E4)
	virtual void VirtualFunction122 ( );																			// 0x00D3A5D0 (0x1E8)
	virtual void VirtualFunction123 ( );																			// 0x00A8E9D0 (0x1EC)
	virtual void VirtualFunction124 ( );																			// 0x00A8EA00 (0x1F0)
	virtual void VirtualFunction125 ( );																			// 0x00A8EA30 (0x1F4)
	virtual void VirtualFunction126 ( );																			// 0x00A8E820 (0x1F8)
	virtual void VirtualFunction127 ( );																			// 0x00A8EB10 (0x1FC)
	virtual void VirtualFunction128 ( );																			// 0x00A8E830 (0x200)
	virtual void VirtualFunction129 ( );																			// 0x00A8E840 (0x204)
	virtual void VirtualFunction130 ( );																			// 0x00A8E850 (0x208)
	virtual void VirtualFunction131 ( );																			// 0x00A8E860 (0x20C)
	virtual void VirtualFunction132 ( );																			// 0x00A8E870 (0x210)
	virtual void VirtualFunction133 ( );																			// 0x01574750 (0x214)
	virtual void VirtualFunction134 ( );																			// 0x0157DAE0 (0x218)
	virtual void VirtualFunction135 ( );																			// 0x00D42370 (0x21C)
	virtual void VirtualFunction136 ( );																			// 0x00D317B0 (0x220)
	virtual void VirtualFunction137 ( );																			// 0x00A8E880 (0x224)
	virtual void VirtualFunction138 ( );																			// 0x00A8E890 (0x228)
	virtual void VirtualFunction139 ( );																			// 0x00A8E8A0 (0x22C)
	virtual void VirtualFunction140 ( );																			// 0x00A8EB40 (0x230)
	virtual void VirtualFunction141 ( );																			// 0x00D22AD0 (0x234)
	virtual void VirtualFunction142 ( );																			// 0x00A8E8B0 (0x238)
	virtual void VirtualFunction143 ( );																			// 0x00D20550 (0x23C)
	virtual void VirtualFunction144 ( );																			// 0x00D2A130 (0x240)
	virtual void VirtualFunction145 ( );																			// 0x00D42010 (0x244)
	virtual void VirtualFunction146 ( );																			// 0x00D39570 (0x248)
	virtual void VirtualFunction147 ( );																			// 0x00A8E8C0 (0x24C)
	virtual void VirtualFunction148 ( );																			// 0x00A8E8D0 (0x250)
	virtual void VirtualFunction149 ( );																			// 0x00A8E8E0 (0x254)
	virtual void VirtualFunction150 ( );																			// 0x00A8E900 (0x258)
	virtual void VirtualFunction151 ( );																			// 0x00D42C80 (0x25C)
	virtual void VirtualFunction152 ( );																			// 0x00D1F2F0 (0x260)
	virtual void VirtualFunction153 ( );																			// 0x00BD6A10 (0x264)
	virtual void VirtualFunction154 ( );																			// 0x00CBC4F0 (0x268)
	virtual void VirtualFunction155 ( );																			// 0x00C7C330 (0x26C)
	virtual void VirtualFunction156 ( );																			// 0x00C7C3D0 (0x270)
	virtual void VirtualFunction157 ( );																			// 0x00C7C3E0 (0x274)
	virtual void VirtualFunction158 ( );																			// 0x00D2B930 (0x278)
	virtual void VirtualFunction159 ( );																			// 0x00C92F70 (0x27C)
	virtual void VirtualFunction160 ( );																			// 0x00CAF1A0 (0x280)
	virtual void VirtualFunction161 ( );																			// 0x00D2E480 (0x284)
	virtual void VirtualFunction162 ( );																			// 0x00A8E920 (0x288)
	virtual void VirtualFunction163 ( );																			// 0x00C44C80 (0x28C)
	virtual void VirtualFunction164 ( );																			// 0x00CBF2B0 (0x290)
	virtual void VirtualFunction165 ( );																			// 0x00C5F160 (0x294)
	virtual void VirtualFunction166 ( );																			// 0x00C5F170 (0x298)
	virtual void VirtualFunction167 ( );																			// 0x00C50500 (0x29C)
	virtual void VirtualFunction168 ( );																			// 0x00C55890 (0x2A0)
	virtual void VirtualFunction169 ( );																			// 0x00C5A5C0 (0x2A4)
	virtual void VirtualFunction170 ( );																			// 0x00C81340 (0x2A8)
	virtual void VirtualFunction171 ( );																			// 0x00C81350 (0x2AC)
	virtual void VirtualFunction172 ( );																			// 0x00CBF820 (0x2B0)
	virtual void VirtualFunction173 ( );																			// 0x00A8E7A0 (0x2B4)
	virtual void VirtualFunction174 ( );																			// 0x00A8E7B0 (0x2B8)
	virtual void VirtualFunction175 ( );																			// 0x00A8E7C0 (0x2BC)
	virtual void VirtualFunction176 ( );																			// 0x00D287A0 (0x2C0)
	virtual void VirtualFunction177 ( );																			// 0x00D287E0 (0x2C4)
	virtual void VirtualFunction178 ( );																			// 0x00D42A40 (0x2C8)
	virtual void VirtualFunction179 ( );																			// 0x00D2D350 (0x2CC)
	virtual void VirtualFunction180 ( );																			// 0x00A8E7D0 (0x2D0)
	virtual void VirtualFunction181 ( );																			// 0x00D21EC0 (0x2D4)
	virtual void VirtualFunction182 ( );																			// 0x00D36180 (0x2D8)
	virtual void VirtualFunction183 ( );																			// 0x00CA5590 (0x2DC)
	virtual void VirtualFunction184 ( );																			// 0x00A8E9B0 (0x2E0)
	virtual void VirtualFunction185 ( );																			// 0x00D1F250 (0x2E4)
	virtual void VirtualFunction186 ( );																			// 0x00D23870 (0x2E8)
	virtual void VirtualFunction187 ( );																			// 0x00D1F260 (0x2EC)
	virtual void VirtualFunction188 ( );																			// 0x00D1F270 (0x2F0)
	virtual void VirtualFunction189 ( );																			// 0x00D23940 (0x2F4)
	virtual void VirtualFunction190 ( );																			// 0x00D205A0 (0x2F8)
	virtual void VirtualFunction191 ( );																			// 0x00D1F2C0 (0x2FC)
	virtual void VirtualFunction192 ( );																			// 0x00D20630 (0x300)
	virtual void VirtualFunction193 ( );																			// 0x00A8E7E0 (0x304)
	virtual void VirtualFunction194 ( );																			// 0x00A8E7F0 (0x308)
	virtual void VirtualFunction195 ( );																			// 0x00A8E800 (0x30C)
	virtual void VirtualFunction196 ( );																			// 0x00D1F290 (0x310)
	virtual void VirtualFunction197 ( );																			// 0x00D1F2A0 (0x314)
	virtual void VirtualFunction198 ( );																			// 0x00D205D0 (0x318)
	virtual void VirtualFunction199 ( );																			// 0x00D1F2B0 (0x31C)
	virtual void VirtualFunction200 ( );																			// 0x00D20600 (0x320)
	virtual void VirtualFunction201 ( );																			// 0x00D281F0 (0x324)
	virtual void VirtualFunction202 ( );																			// 0x00D23A30 (0x328)
	virtual void VirtualFunction203 ( );																			// 0x00D23CB0 (0x32C)
	virtual void VirtualFunction204 ( );																			// 0x00A8E810 (0x330)
	virtual void VirtualFunction205 ( );																			// 0x00D3A1D0 (0x334)
	virtual void VirtualFunction206 ( );																			// 0x00D3A5D0 (0x338)
	virtual void VirtualFunction207 ( );																			// 0x00A8E9D0 (0x33C)
	virtual void VirtualFunction208 ( );																			// 0x00A8EA00 (0x340)
	virtual void VirtualFunction209 ( );																			// 0x00A8EA30 (0x344)
	virtual void VirtualFunction210 ( );																			// 0x00A8E820 (0x348)
	virtual void VirtualFunction211 ( );																			// 0x00A8EB10 (0x34C)
	virtual void VirtualFunction212 ( );																			// 0x00A8E830 (0x350)
	virtual void VirtualFunction213 ( );																			// 0x00A8E840 (0x354)
	virtual void VirtualFunction214 ( );																			// 0x00A8E850 (0x358)
	virtual void VirtualFunction215 ( );																			// 0x00A8E860 (0x35C)
	virtual void VirtualFunction216 ( );																			// 0x00A8E870 (0x360)
	virtual void VirtualFunction217 ( );																			// 0x01574750 (0x364)
	virtual void VirtualFunction218 ( );																			// 0x0157DAE0 (0x368)
	virtual void VirtualFunction219 ( );																			// 0x00D42370 (0x36C)
	virtual void VirtualFunction220 ( );																			// 0x00D317B0 (0x370)
	virtual void VirtualFunction221 ( );																			// 0x00A8E880 (0x374)
	virtual void VirtualFunction222 ( );																			// 0x00A8E890 (0x378)
	virtual void VirtualFunction223 ( );																			// 0x00A8E8A0 (0x37C)
	virtual void VirtualFunction224 ( );																			// 0x00A8EB40 (0x380)
	virtual void VirtualFunction225 ( );																			// 0x00D22AD0 (0x384)
	virtual void VirtualFunction226 ( );																			// 0x00A8E8B0 (0x388)
	virtual void VirtualFunction227 ( );																			// 0x00D20550 (0x38C)
	virtual void VirtualFunction228 ( );																			// 0x00D2A130 (0x390)
	virtual void VirtualFunction229 ( );																			// 0x00D42010 (0x394)
	virtual void VirtualFunction230 ( );																			// 0x00D39570 (0x398)
	virtual void VirtualFunction231 ( );																			// 0x00A8E8C0 (0x39C)
	virtual void VirtualFunction232 ( );																			// 0x00A8E8D0 (0x3A0)
	virtual void VirtualFunction233 ( );																			// 0x00A8E8E0 (0x3A4)
	virtual void VirtualFunction234 ( );																			// 0x00A8E900 (0x3A8)
	virtual void VirtualFunction235 ( );																			// 0x00D42C80 (0x3AC)
	virtual void VirtualFunction236 ( );																			// 0x00D1F2F0 (0x3B0)
	virtual void VirtualFunction237 ( );																			// 0x00BD6A10 (0x3B4)
	virtual void VirtualFunction238 ( );																			// 0x00CBC4F0 (0x3B8)
	virtual void VirtualFunction239 ( );																			// 0x00C7C330 (0x3BC)
	virtual void VirtualFunction240 ( );																			// 0x00C7C3D0 (0x3C0)
	virtual void VirtualFunction241 ( );																			// 0x00C7C3E0 (0x3C4)
	virtual void VirtualFunction242 ( );																			// 0x00D2B930 (0x3C8)
	virtual void VirtualFunction243 ( );																			// 0x00C92F70 (0x3CC)
	virtual void VirtualFunction244 ( );																			// 0x00CAF1A0 (0x3D0)
	virtual void VirtualFunction245 ( );																			// 0x00D2E480 (0x3D4)
	virtual void VirtualFunction246 ( );																			// 0x00A8E920 (0x3D8)
	virtual void VirtualFunction247 ( );																			// 0x00000000 (0x3DC)
	virtual void VirtualFunction248 ( );																			// 0x00C81110 (0x3E0)
	virtual void VirtualFunction249 ( );																			// 0x00C81120 (0x3E4)
	virtual void VirtualFunction250 ( );																			// 0x00CC5A50 (0x3E8)
	virtual void VirtualFunction251 ( );																			// 0x00A8E7A0 (0x3EC)
	virtual void VirtualFunction252 ( );																			// 0x00A8E7B0 (0x3F0)
	virtual void VirtualFunction253 ( );																			// 0x00A8E7C0 (0x3F4)
	virtual void VirtualFunction254 ( );																			// 0x00D287A0 (0x3F8)
	virtual void VirtualFunction255 ( );																			// 0x00D287E0 (0x3FC)
};

UClass* UObject::pClassPointer = NULL;

// Class Core.TextBuffer
// 0x0024 (0x0060 - 0x003C)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x003C (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 0 ];

		return pClassPointer;
	};

};

UClass* UTextBuffer::pClassPointer = NULL;

// Class Core.Subsystem
// 0x0004 (0x0040 - 0x003C)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                    		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3 ];

		return pClassPointer;
	};

};

UClass* USubsystem::pClassPointer = NULL;

// Class Core.System
// 0x00B0 (0x00F0 - 0x0040)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                   		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxStaleCacheSize;                                		// 0x0044 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxOverallCacheSize;                              		// 0x0048 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                PackageSizeSoftLimit;                             		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AsyncIOBandwidthLimit;                            		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     SavePath;                                         		// 0x0054 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CachePath;                                        		// 0x0060 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CacheExt;                                         		// 0x006C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Paths;                                            		// 0x0078 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCPaths;                                  		// 0x0084 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           ScriptPaths;                                      		// 0x0090 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           FRScriptPaths;                                    		// 0x009C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           CutdownPaths;                                     		// 0x00A8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FName >                             Suppress;                                         		// 0x00B4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Extensions;                                       		// 0x00C0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCExtensions;                             		// 0x00CC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           LocalizationPaths;                                		// 0x00D8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TextureFileCacheExtension;                        		// 0x00E4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2 ];

		return pClassPointer;
	};

};

UClass* USystem::pClassPointer = NULL;

// Class Core.PackageMap
// 0x0084 (0x00C0 - 0x003C)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x84 ];                            		// 0x003C (0x0084) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4 ];

		return pClassPointer;
	};

};

UClass* UPackageMap::pClassPointer = NULL;

// Class Core.ObjectSerializer
// 0x000C (0x0048 - 0x003C)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 5 ];

		return pClassPointer;
	};

};

UClass* UObjectSerializer::pClassPointer = NULL;

// Class Core.ObjectRedirector
// 0x0004 (0x0040 - 0x003C)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 6 ];

		return pClassPointer;
	};

};

UClass* UObjectRedirector::pClassPointer = NULL;

// Class Core.MetaData
// 0x003C (0x0078 - 0x003C)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x003C (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 7 ];

		return pClassPointer;
	};

};

UClass* UMetaData::pClassPointer = NULL;

// Class Core.Linker
// 0x012C (0x0168 - 0x003C)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x12C ];                           		// 0x003C (0x012C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 9 ];

		return pClassPointer;
	};

};

UClass* ULinker::pClassPointer = NULL;

// Class Core.LinkerSave
// 0x00A4 (0x020C - 0x0168)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0xA4 ];                            		// 0x0168 (0x00A4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 8 ];

		return pClassPointer;
	};

};

UClass* ULinkerSave::pClassPointer = NULL;

// Class Core.LinkerLoad
// 0x05C4 (0x072C - 0x0168)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0x5C4 ];                           		// 0x0168 (0x05C4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 10 ];

		return pClassPointer;
	};

};

UClass* ULinkerLoad::pClassPointer = NULL;

// Class Core.Interface
// 0x0000 (0x003C - 0x003C)
class UInterface : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 11 ];

		return pClassPointer;
	};

};

UClass* UInterface::pClassPointer = NULL;

// Class Core.Field
// 0x0004 (0x0040 - 0x003C)
class UField : public UObject
{
public:
	class UField*                                      Next;                                             		// NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 14 ];

		return pClassPointer;
	};

};

UClass* UField::pClassPointer = NULL;

// Class Core.Struct
// 0x0044 (0x0084 - 0x0040)
class UStruct : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                                    // NOT AUTO-GENERATED PROPERTY 
	class UField*                                      SuperField;                                              // NOT AUTO-GENERATED PROPERTY 
	class UField*                                      Children;                                                // NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      PropertySize;                                            // NOT AUTO-GENERATED PROPERTY 
	unsigned char                                      UnknownData01[ 0x3C ];                                   // NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 13 ];

		return pClassPointer;
	};

};

UClass* UStruct::pClassPointer = NULL;

// Class Core.ScriptStruct
// 0x001C (0x00A0 - 0x0084)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x0084 (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 12 ];

		return pClassPointer;
	};

};

UClass* UScriptStruct::pClassPointer = NULL;

// Class Core.Function
// 0x0020 (0x00A4 - 0x0084)
class UFunction : public UStruct
{
public:
	unsigned long                                      FunctionFlags;                                            // NOT AUTO-GENERATED PROPERTY 
	unsigned short                                     iNative;                                                  // NOT AUTO-GENERATED PROPERTY 
	unsigned short                                     RepOffset;                                                // NOT AUTO-GENERATED PROPERTY 
	struct FName                                       FriendlyName;                                             // NOT AUTO-GENERATED PROPERTY 
	unsigned short                                     NumParms;                                                 // NOT AUTO-GENERATED PROPERTY 
	unsigned short                                     ParmsSize;                                                // NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      ReturnValueOffset;                                        // NOT AUTO-GENERATED PROPERTY 
	unsigned char                                      UnknownData00[ 0x4 ];                                     // NOT AUTO-GENERATED PROPERTY 
	void*                                              Func;                                                     // NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 15 ];

		return pClassPointer;
	};

	static UFunction* FindFunction(char* name);
};

UClass* UFunction::pClassPointer = NULL;

// Class Core.Property
// 0x0030 (0x0070 - 0x0040)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x30 ];                            		// 0x0040 (0x0030) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 17 ];

		return pClassPointer;
	};

};

UClass* UProperty::pClassPointer = NULL;

// Class Core.StructProperty
// 0x0004 (0x0074 - 0x0070)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 16 ];

		return pClassPointer;
	};

};

UClass* UStructProperty::pClassPointer = NULL;

// Class Core.StrProperty
// 0x0000 (0x0070 - 0x0070)
class UStrProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 18 ];

		return pClassPointer;
	};

};

UClass* UStrProperty::pClassPointer = NULL;

// Class Core.ObjectProperty
// 0x0004 (0x0074 - 0x0070)
class UObjectProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 20 ];

		return pClassPointer;
	};

};

UClass* UObjectProperty::pClassPointer = NULL;

// Class Core.ComponentProperty
// 0x0000 (0x0074 - 0x0074)
class UComponentProperty : public UObjectProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 19 ];

		return pClassPointer;
	};

};

UClass* UComponentProperty::pClassPointer = NULL;

// Class Core.ClassProperty
// 0x0004 (0x0078 - 0x0074)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 21 ];

		return pClassPointer;
	};

};

UClass* UClassProperty::pClassPointer = NULL;

// Class Core.NameProperty
// 0x0000 (0x0070 - 0x0070)
class UNameProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 22 ];

		return pClassPointer;
	};

};

UClass* UNameProperty::pClassPointer = NULL;

// Class Core.MapProperty
// 0x0008 (0x0078 - 0x0070)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0070 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 23 ];

		return pClassPointer;
	};

};

UClass* UMapProperty::pClassPointer = NULL;

// Class Core.IntProperty
// 0x0000 (0x0070 - 0x0070)
class UIntProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 24 ];

		return pClassPointer;
	};

};

UClass* UIntProperty::pClassPointer = NULL;

// Class Core.InterfaceProperty
// 0x0004 (0x0074 - 0x0070)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 25 ];

		return pClassPointer;
	};

};

UClass* UInterfaceProperty::pClassPointer = NULL;

// Class Core.FloatProperty
// 0x0000 (0x0070 - 0x0070)
class UFloatProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 26 ];

		return pClassPointer;
	};

};

UClass* UFloatProperty::pClassPointer = NULL;

// Class Core.DelegateProperty
// 0x0008 (0x0078 - 0x0070)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0070 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 27 ];

		return pClassPointer;
	};

};

UClass* UDelegateProperty::pClassPointer = NULL;

// Class Core.ByteProperty
// 0x0004 (0x0074 - 0x0070)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 28 ];

		return pClassPointer;
	};

};

UClass* UByteProperty::pClassPointer = NULL;

// Class Core.BoolProperty
// 0x0004 (0x0074 - 0x0070)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 29 ];

		return pClassPointer;
	};

};

UClass* UBoolProperty::pClassPointer = NULL;

// Class Core.ArrayProperty
// 0x0004 (0x0074 - 0x0070)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 30 ];

		return pClassPointer;
	};

};

UClass* UArrayProperty::pClassPointer = NULL;

// Class Core.Enum
// 0x000C (0x004C - 0x0040)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0040 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 31 ];

		return pClassPointer;
	};

};

UClass* UEnum::pClassPointer = NULL;

// Class Core.Const
// 0x000C (0x004C - 0x0040)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0040 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 32 ];

		return pClassPointer;
	};

};

UClass* UConst::pClassPointer = NULL;

// Class Core.Factory
// 0x0034 (0x0070 - 0x003C)
class UFactory : public UObject
{
public:
	class UClass*                                      SupportedClass;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	class UClass*                                      ContextClass;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Formats;                                          		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCreateNew : 1;                                   		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEditAfterNew : 1;                                		// 0x005C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEditorImport : 1;                                		// 0x005C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bText : 1;                                        		// 0x005C (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                AutoPriority;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           ValidGameNames;                                   		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34 ];

		return pClassPointer;
	};

};

UClass* UFactory::pClassPointer = NULL;

// Class Core.TextBufferFactory
// 0x0000 (0x0070 - 0x0070)
class UTextBufferFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33 ];

		return pClassPointer;
	};

};

UClass* UTextBufferFactory::pClassPointer = NULL;

// Class Core.Exporter
// 0x0028 (0x0064 - 0x003C)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET
	TArray< struct FString >                           FormatExtension;                                  		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           FormatDescription;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0xC ];                             		// 0x0058 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 35 ];

		return pClassPointer;
	};

};

UClass* UExporter::pClassPointer = NULL;

// Class Core.Component
// 0x000C (0x0048 - 0x003C)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                               		// 0x003C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FName                                       TemplateName;                                     		// 0x0040 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37 ];

		return pClassPointer;
	};

};

UClass* UComponent::pClassPointer = NULL;

// Class Core.DistributionVector
// 0x0008 (0x0050 - 0x0048)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36 ];

		return pClassPointer;
	};

	struct FVector GetVectorValue ( float F, int LastExtreme );
};

UClass* UDistributionVector::pClassPointer = NULL;

// Class Core.DistributionFloat
// 0x0008 (0x0050 - 0x0048)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38 ];

		return pClassPointer;
	};

	float GetFloatValue ( float F );
};

UClass* UDistributionFloat::pClassPointer = NULL;

// Class Core.Commandlet
// 0x0040 (0x007C - 0x003C)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                  		// 0x003C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpUsage;                                        		// 0x0048 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpWebLink;                                      		// 0x0054 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamNames;                                   		// 0x0060 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamDescriptions;                            		// 0x006C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      IsServer : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsClient : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsEditor : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      LogToConsole : 1;                                 		// 0x0078 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ShowErrorCount : 1;                               		// 0x0078 (0x0004) [0x0000000000000000] [0x00000010] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40 ];

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UCommandlet::pClassPointer = NULL;

// Class Core.HelpCommandlet
// 0x0000 (0x007C - 0x007C)
class UHelpCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39 ];

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UHelpCommandlet::pClassPointer = NULL;

// Class Core.State
// 0x0048 (0x00CC - 0x0084)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0084 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41 ];

		return pClassPointer;
	};

};

UClass* UState::pClassPointer = NULL;

// Class Core.Package
// 0x00B4 (0x00F0 - 0x003C)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xB4 ];                            		// 0x003C (0x00B4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42 ];

		return pClassPointer;
	};

};

UClass* UPackage::pClassPointer = NULL;

// Class Core.Class
// 0x00FC (0x01C8 - 0x00CC)
class UClass : public UState
{
public:
	unsigned char                                      UnknownData00[ 0xFC ];                            		// 0x00CC (0x00FC) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43 ];

		return pClassPointer;
	};

};

UClass* UClass::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif