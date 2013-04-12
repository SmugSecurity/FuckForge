/*
#############################################################################################
# Forge War (1.0.9953.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: ForgeGame_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function ForgeGame.DVGameViewportClient.GetSystemTextureGroupSetting
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  TextureGroup                   ( CPF_Parm )
// int                            OutMinLODSize                  ( CPF_Parm | CPF_OutParm )
// int                            OutMaxLODSize                  ( CPF_Parm | CPF_OutParm )
// int                            OutLODBias                     ( CPF_Parm | CPF_OutParm )
// struct FName                   OutMinMagFilter                ( CPF_Parm | CPF_OutParm )
// struct FName                   OutMipFilter                   ( CPF_Parm | CPF_OutParm )
// unsigned char                  OutMipGenSettings              ( CPF_Parm | CPF_OutParm )

void UDVGameViewportClient::GetSystemTextureGroupSetting ( unsigned char TextureGroup, int* OutMinLODSize, int* OutMaxLODSize, int* OutLODBias, struct FName* OutMinMagFilter, struct FName* OutMipFilter, unsigned char* OutMipGenSettings )
{
	static UFunction* pFnGetSystemTextureGroupSetting = NULL;

	if ( ! pFnGetSystemTextureGroupSetting )
		pFnGetSystemTextureGroupSetting = (UFunction*) UObject::GObjObjects()->Data[ 45372 ];

	UDVGameViewportClient_execGetSystemTextureGroupSetting_Parms GetSystemTextureGroupSetting_Parms;
	GetSystemTextureGroupSetting_Parms.TextureGroup = TextureGroup;

	pFnGetSystemTextureGroupSetting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSystemTextureGroupSetting, &GetSystemTextureGroupSetting_Parms, NULL );

	pFnGetSystemTextureGroupSetting->FunctionFlags |= 0x400;

	if ( OutMinLODSize )
		*OutMinLODSize = GetSystemTextureGroupSetting_Parms.OutMinLODSize;

	if ( OutMaxLODSize )
		*OutMaxLODSize = GetSystemTextureGroupSetting_Parms.OutMaxLODSize;

	if ( OutLODBias )
		*OutLODBias = GetSystemTextureGroupSetting_Parms.OutLODBias;

	if ( OutMinMagFilter )
		memcpy ( OutMinMagFilter, &GetSystemTextureGroupSetting_Parms.OutMinMagFilter, 0x8 );

	if ( OutMipFilter )
		memcpy ( OutMipFilter, &GetSystemTextureGroupSetting_Parms.OutMipFilter, 0x8 );

	if ( OutMipGenSettings )
		*OutMipGenSettings = GetSystemTextureGroupSetting_Parms.OutMipGenSettings;
};

// Function ForgeGame.DVGameViewportClient.GetSystemFloatSetting
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SystemSettingName              ( CPF_Parm | CPF_NeedCtorLink )
// float                          OutVal                         ( CPF_Parm | CPF_OutParm )

bool UDVGameViewportClient::GetSystemFloatSetting ( struct FString SystemSettingName, float* OutVal )
{
	static UFunction* pFnGetSystemFloatSetting = NULL;

	if ( ! pFnGetSystemFloatSetting )
		pFnGetSystemFloatSetting = (UFunction*) UObject::GObjObjects()->Data[ 45368 ];

	UDVGameViewportClient_execGetSystemFloatSetting_Parms GetSystemFloatSetting_Parms;
	memcpy ( &GetSystemFloatSetting_Parms.SystemSettingName, &SystemSettingName, 0xC );

	pFnGetSystemFloatSetting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSystemFloatSetting, &GetSystemFloatSetting_Parms, NULL );

	pFnGetSystemFloatSetting->FunctionFlags |= 0x400;

	if ( OutVal )
		*OutVal = GetSystemFloatSetting_Parms.OutVal;

	return GetSystemFloatSetting_Parms.ReturnValue;
};

// Function ForgeGame.DVGameViewportClient.GetSystemIntSetting
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SystemSettingName              ( CPF_Parm | CPF_NeedCtorLink )
// int                            OutVal                         ( CPF_Parm | CPF_OutParm )

bool UDVGameViewportClient::GetSystemIntSetting ( struct FString SystemSettingName, int* OutVal )
{
	static UFunction* pFnGetSystemIntSetting = NULL;

	if ( ! pFnGetSystemIntSetting )
		pFnGetSystemIntSetting = (UFunction*) UObject::GObjObjects()->Data[ 45364 ];

	UDVGameViewportClient_execGetSystemIntSetting_Parms GetSystemIntSetting_Parms;
	memcpy ( &GetSystemIntSetting_Parms.SystemSettingName, &SystemSettingName, 0xC );

	pFnGetSystemIntSetting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSystemIntSetting, &GetSystemIntSetting_Parms, NULL );

	pFnGetSystemIntSetting->FunctionFlags |= 0x400;

	if ( OutVal )
		*OutVal = GetSystemIntSetting_Parms.OutVal;

	return GetSystemIntSetting_Parms.ReturnValue;
};

// Function ForgeGame.DVGameViewportClient.GetSystemBoolSetting
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SystemSettingName              ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  OutVal                         ( CPF_Parm | CPF_OutParm )

bool UDVGameViewportClient::GetSystemBoolSetting ( struct FString SystemSettingName, unsigned char* OutVal )
{
	static UFunction* pFnGetSystemBoolSetting = NULL;

	if ( ! pFnGetSystemBoolSetting )
		pFnGetSystemBoolSetting = (UFunction*) UObject::GObjObjects()->Data[ 45360 ];

	UDVGameViewportClient_execGetSystemBoolSetting_Parms GetSystemBoolSetting_Parms;
	memcpy ( &GetSystemBoolSetting_Parms.SystemSettingName, &SystemSettingName, 0xC );

	pFnGetSystemBoolSetting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSystemBoolSetting, &GetSystemBoolSetting_Parms, NULL );

	pFnGetSystemBoolSetting->FunctionFlags |= 0x400;

	if ( OutVal )
		*OutVal = GetSystemBoolSetting_Parms.OutVal;

	return GetSystemBoolSetting_Parms.ReturnValue;
};

// Function ForgeGame.DVGameViewportClient.GetAvailableResolutions
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< struct FVector >       out_AvailableResolutions       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UDVGameViewportClient::GetAvailableResolutions ( TArray< struct FVector >* out_AvailableResolutions )
{
	static UFunction* pFnGetAvailableResolutions = NULL;

	if ( ! pFnGetAvailableResolutions )
		pFnGetAvailableResolutions = (UFunction*) UObject::GObjObjects()->Data[ 45357 ];

	UDVGameViewportClient_execGetAvailableResolutions_Parms GetAvailableResolutions_Parms;

	pFnGetAvailableResolutions->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAvailableResolutions, &GetAvailableResolutions_Parms, NULL );

	pFnGetAvailableResolutions->FunctionFlags |= 0x400;

	if ( out_AvailableResolutions )
		memcpy ( out_AvailableResolutions, &GetAvailableResolutions_Parms.out_AvailableResolutions, 0xC );
};

// Function ForgeGame.DVPawnBase.OnSetPawnBlockingChannels
// [0x00020002] 
// Parameters infos:
// class UDVSeqAct_SetPawnBlockingChannels* SeqAct                         ( CPF_Parm )

void ADVPawnBase::OnSetPawnBlockingChannels ( class UDVSeqAct_SetPawnBlockingChannels* SeqAct )
{
	static UFunction* pFnOnSetPawnBlockingChannels = NULL;

	if ( ! pFnOnSetPawnBlockingChannels )
		pFnOnSetPawnBlockingChannels = (UFunction*) UObject::GObjObjects()->Data[ 42462 ];

	ADVPawnBase_execOnSetPawnBlockingChannels_Parms OnSetPawnBlockingChannels_Parms;
	OnSetPawnBlockingChannels_Parms.SeqAct = SeqAct;

	this->ProcessEvent ( pFnOnSetPawnBlockingChannels, &OnSetPawnBlockingChannels_Parms, NULL );
};

// Function ForgeGame.DVPlayerControllerBase.GetTerminalIPAddress
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ADVPlayerControllerBase::GetTerminalIPAddress ( )
{
	static UFunction* pFnGetTerminalIPAddress = NULL;

	if ( ! pFnGetTerminalIPAddress )
		pFnGetTerminalIPAddress = (UFunction*) UObject::GObjObjects()->Data[ 45529 ];

	ADVPlayerControllerBase_execGetTerminalIPAddress_Parms GetTerminalIPAddress_Parms;

	pFnGetTerminalIPAddress->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTerminalIPAddress, &GetTerminalIPAddress_Parms, NULL );

	pFnGetTerminalIPAddress->FunctionFlags |= 0x400;

	return GetTerminalIPAddress_Parms.ReturnValue;
};

// Function ForgeGame.DVPlayerControllerBase.SetHasPlayedIntro
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  NewHasPlayedIntro              ( CPF_Parm )

void ADVPlayerControllerBase::SetHasPlayedIntro ( unsigned long NewHasPlayedIntro )
{
	static UFunction* pFnSetHasPlayedIntro = NULL;

	if ( ! pFnSetHasPlayedIntro )
		pFnSetHasPlayedIntro = (UFunction*) UObject::GObjObjects()->Data[ 45706 ];

	ADVPlayerControllerBase_execSetHasPlayedIntro_Parms SetHasPlayedIntro_Parms;
	SetHasPlayedIntro_Parms.NewHasPlayedIntro = NewHasPlayedIntro;

	pFnSetHasPlayedIntro->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHasPlayedIntro, &SetHasPlayedIntro_Parms, NULL );

	pFnSetHasPlayedIntro->FunctionFlags |= 0x400;
};

// Function ForgeGame.DVPlayerControllerBase.GetHasPlayedIntro
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADVPlayerControllerBase::GetHasPlayedIntro ( )
{
	static UFunction* pFnGetHasPlayedIntro = NULL;

	if ( ! pFnGetHasPlayedIntro )
		pFnGetHasPlayedIntro = (UFunction*) UObject::GObjObjects()->Data[ 45704 ];

	ADVPlayerControllerBase_execGetHasPlayedIntro_Parms GetHasPlayedIntro_Parms;

	pFnGetHasPlayedIntro->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHasPlayedIntro, &GetHasPlayedIntro_Parms, NULL );

	pFnGetHasPlayedIntro->FunctionFlags |= 0x400;

	return GetHasPlayedIntro_Parms.ReturnValue;
};

// Function ForgeGame.DVPlayerControllerBase.SetUserId
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )

void ADVPlayerControllerBase::SetUserId ( struct FString UserId )
{
	static UFunction* pFnSetUserId = NULL;

	if ( ! pFnSetUserId )
		pFnSetUserId = (UFunction*) UObject::GObjObjects()->Data[ 45621 ];

	ADVPlayerControllerBase_execSetUserId_Parms SetUserId_Parms;
	memcpy ( &SetUserId_Parms.UserId, &UserId, 0xC );

	pFnSetUserId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetUserId, &SetUserId_Parms, NULL );

	pFnSetUserId->FunctionFlags |= 0x400;
};

// Function ForgeGame.DVPlayerControllerBase.GetUserId
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ADVPlayerControllerBase::GetUserId ( )
{
	static UFunction* pFnGetUserId = NULL;

	if ( ! pFnGetUserId )
		pFnGetUserId = (UFunction*) UObject::GObjObjects()->Data[ 45572 ];

	ADVPlayerControllerBase_execGetUserId_Parms GetUserId_Parms;

	pFnGetUserId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUserId, &GetUserId_Parms, NULL );

	pFnGetUserId->FunctionFlags |= 0x400;

	return GetUserId_Parms.ReturnValue;
};

// Function ForgeGame.DVPlayerControllerBase.SetSessionId
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 SessionId                      ( CPF_Parm | CPF_NeedCtorLink )

void ADVPlayerControllerBase::SetSessionId ( struct FString SessionId )
{
	static UFunction* pFnSetSessionId = NULL;

	if ( ! pFnSetSessionId )
		pFnSetSessionId = (UFunction*) UObject::GObjObjects()->Data[ 45620 ];

	ADVPlayerControllerBase_execSetSessionId_Parms SetSessionId_Parms;
	memcpy ( &SetSessionId_Parms.SessionId, &SessionId, 0xC );

	pFnSetSessionId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSessionId, &SetSessionId_Parms, NULL );

	pFnSetSessionId->FunctionFlags |= 0x400;
};

// Function ForgeGame.DVPlayerControllerBase.GetSessionID
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ADVPlayerControllerBase::GetSessionID ( )
{
	static UFunction* pFnGetSessionID = NULL;

	if ( ! pFnGetSessionID )
		pFnGetSessionID = (UFunction*) UObject::GObjObjects()->Data[ 45570 ];

	ADVPlayerControllerBase_execGetSessionID_Parms GetSessionID_Parms;

	pFnGetSessionID->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSessionID, &GetSessionID_Parms, NULL );

	pFnGetSessionID->FunctionFlags |= 0x400;

	return GetSessionID_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfoBase.GetAuthenticatedServerSessionKey
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AForgeGameInfoBase::GetAuthenticatedServerSessionKey ( )
{
	static UFunction* pFnGetAuthenticatedServerSessionKey = NULL;

	if ( ! pFnGetAuthenticatedServerSessionKey )
		pFnGetAuthenticatedServerSessionKey = (UFunction*) UObject::GObjObjects()->Data[ 45565 ];

	AForgeGameInfoBase_execGetAuthenticatedServerSessionKey_Parms GetAuthenticatedServerSessionKey_Parms;

	pFnGetAuthenticatedServerSessionKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAuthenticatedServerSessionKey, &GetAuthenticatedServerSessionKey_Parms, NULL );

	pFnGetAuthenticatedServerSessionKey->FunctionFlags |= 0x400;

	return GetAuthenticatedServerSessionKey_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfoBase.GetAuthenticatedServerId
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AForgeGameInfoBase::GetAuthenticatedServerId ( )
{
	static UFunction* pFnGetAuthenticatedServerId = NULL;

	if ( ! pFnGetAuthenticatedServerId )
		pFnGetAuthenticatedServerId = (UFunction*) UObject::GObjObjects()->Data[ 45563 ];

	AForgeGameInfoBase_execGetAuthenticatedServerId_Parms GetAuthenticatedServerId_Parms;

	pFnGetAuthenticatedServerId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAuthenticatedServerId, &GetAuthenticatedServerId_Parms, NULL );

	pFnGetAuthenticatedServerId->FunctionFlags |= 0x400;

	return GetAuthenticatedServerId_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfoBase.DoesMapExist
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MapName                        ( CPF_Parm | CPF_NeedCtorLink )

bool AForgeGameInfoBase::DoesMapExist ( struct FString MapName )
{
	static UFunction* pFnDoesMapExist = NULL;

	if ( ! pFnDoesMapExist )
		pFnDoesMapExist = (UFunction*) UObject::GObjObjects()->Data[ 45781 ];

	AForgeGameInfoBase_execDoesMapExist_Parms DoesMapExist_Parms;
	memcpy ( &DoesMapExist_Parms.MapName, &MapName, 0xC );

	pFnDoesMapExist->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDoesMapExist, &DoesMapExist_Parms, NULL );

	pFnDoesMapExist->FunctionFlags |= 0x400;

	return DoesMapExist_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.ConvertSteamRegionIdToGameTagFilterText
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            SteamRegionId                  ( CPF_Parm )

struct FString UForgeDB::ConvertSteamRegionIdToGameTagFilterText ( int SteamRegionId )
{
	static UFunction* pFnConvertSteamRegionIdToGameTagFilterText = NULL;

	if ( ! pFnConvertSteamRegionIdToGameTagFilterText )
		pFnConvertSteamRegionIdToGameTagFilterText = (UFunction*) UObject::GObjObjects()->Data[ 44768 ];

	UForgeDB_execConvertSteamRegionIdToGameTagFilterText_Parms ConvertSteamRegionIdToGameTagFilterText_Parms;
	ConvertSteamRegionIdToGameTagFilterText_Parms.SteamRegionId = SteamRegionId;

	this->ProcessEvent ( pFnConvertSteamRegionIdToGameTagFilterText, &ConvertSteamRegionIdToGameTagFilterText_Parms, NULL );

	return ConvertSteamRegionIdToGameTagFilterText_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.ConvertSteamRegionIdToForgeRegionId
// [0x00022002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SteamRegionId                  ( CPF_Parm )

int UForgeDB::ConvertSteamRegionIdToForgeRegionId ( int SteamRegionId )
{
	static UFunction* pFnConvertSteamRegionIdToForgeRegionId = NULL;

	if ( ! pFnConvertSteamRegionIdToForgeRegionId )
		pFnConvertSteamRegionIdToForgeRegionId = (UFunction*) UObject::GObjObjects()->Data[ 44765 ];

	UForgeDB_execConvertSteamRegionIdToForgeRegionId_Parms ConvertSteamRegionIdToForgeRegionId_Parms;
	ConvertSteamRegionIdToForgeRegionId_Parms.SteamRegionId = SteamRegionId;

	this->ProcessEvent ( pFnConvertSteamRegionIdToForgeRegionId, &ConvertSteamRegionIdToForgeRegionId_Parms, NULL );

	return ConvertSteamRegionIdToForgeRegionId_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.ConvertForgeRegionIdToSteamRegionId
// [0x00022002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ForgeRegionId                  ( CPF_Parm )

int UForgeDB::ConvertForgeRegionIdToSteamRegionId ( int ForgeRegionId )
{
	static UFunction* pFnConvertForgeRegionIdToSteamRegionId = NULL;

	if ( ! pFnConvertForgeRegionIdToSteamRegionId )
		pFnConvertForgeRegionIdToSteamRegionId = (UFunction*) UObject::GObjObjects()->Data[ 44762 ];

	UForgeDB_execConvertForgeRegionIdToSteamRegionId_Parms ConvertForgeRegionIdToSteamRegionId_Parms;
	ConvertForgeRegionIdToSteamRegionId_Parms.ForgeRegionId = ForgeRegionId;

	this->ProcessEvent ( pFnConvertForgeRegionIdToSteamRegionId, &ConvertForgeRegionIdToSteamRegionId_Parms, NULL );

	return ConvertForgeRegionIdToSteamRegionId_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetAbilitySlotOrderProfileSettingsIndex
// [0x00026002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerClass                    ( CPF_Parm )
// int                            SlotIndex                      ( CPF_OptionalParm | CPF_Parm )

int UForgeDB::GetAbilitySlotOrderProfileSettingsIndex ( unsigned char PlayerClass, int SlotIndex )
{
	static UFunction* pFnGetAbilitySlotOrderProfileSettingsIndex = NULL;

	if ( ! pFnGetAbilitySlotOrderProfileSettingsIndex )
		pFnGetAbilitySlotOrderProfileSettingsIndex = (UFunction*) UObject::GObjObjects()->Data[ 44758 ];

	UForgeDB_execGetAbilitySlotOrderProfileSettingsIndex_Parms GetAbilitySlotOrderProfileSettingsIndex_Parms;
	GetAbilitySlotOrderProfileSettingsIndex_Parms.PlayerClass = PlayerClass;
	GetAbilitySlotOrderProfileSettingsIndex_Parms.SlotIndex = SlotIndex;

	this->ProcessEvent ( pFnGetAbilitySlotOrderProfileSettingsIndex, &GetAbilitySlotOrderProfileSettingsIndex_Parms, NULL );

	return GetAbilitySlotOrderProfileSettingsIndex_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetAbilityFocusProfileSettingsIndex
// [0x00022002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerClass                    ( CPF_Parm )

int UForgeDB::GetAbilityFocusProfileSettingsIndex ( unsigned char PlayerClass )
{
	static UFunction* pFnGetAbilityFocusProfileSettingsIndex = NULL;

	if ( ! pFnGetAbilityFocusProfileSettingsIndex )
		pFnGetAbilityFocusProfileSettingsIndex = (UFunction*) UObject::GObjObjects()->Data[ 44755 ];

	UForgeDB_execGetAbilityFocusProfileSettingsIndex_Parms GetAbilityFocusProfileSettingsIndex_Parms;
	GetAbilityFocusProfileSettingsIndex_Parms.PlayerClass = PlayerClass;

	this->ProcessEvent ( pFnGetAbilityFocusProfileSettingsIndex, &GetAbilityFocusProfileSettingsIndex_Parms, NULL );

	return GetAbilityFocusProfileSettingsIndex_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetEnglishKeyName
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   OldKeyName                     ( CPF_Parm )

struct FString UForgeDB::GetEnglishKeyName ( struct FName OldKeyName )
{
	static UFunction* pFnGetEnglishKeyName = NULL;

	if ( ! pFnGetEnglishKeyName )
		pFnGetEnglishKeyName = (UFunction*) UObject::GObjObjects()->Data[ 44750 ];

	UForgeDB_execGetEnglishKeyName_Parms GetEnglishKeyName_Parms;
	memcpy ( &GetEnglishKeyName_Parms.OldKeyName, &OldKeyName, 0x8 );

	this->ProcessEvent ( pFnGetEnglishKeyName, &GetEnglishKeyName_Parms, NULL );

	return GetEnglishKeyName_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetKeyForFunction
// [0x00022002] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 BoundCommand                   ( CPF_Parm | CPF_NeedCtorLink )

struct FName UForgeDB::GetKeyForFunction ( struct FString BoundCommand )
{
	static UFunction* pFnGetKeyForFunction = NULL;

	if ( ! pFnGetKeyForFunction )
		pFnGetKeyForFunction = (UFunction*) UObject::GObjObjects()->Data[ 44742 ];

	UForgeDB_execGetKeyForFunction_Parms GetKeyForFunction_Parms;
	memcpy ( &GetKeyForFunction_Parms.BoundCommand, &BoundCommand, 0xC );

	this->ProcessEvent ( pFnGetKeyForFunction, &GetKeyForFunction_Parms, NULL );

	return GetKeyForFunction_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetOrderMappedAbilityIndex
// [0x00026002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            DefaultAbilityIndex            ( CPF_Parm )
// unsigned char                  ChosenClass                    ( CPF_OptionalParm | CPF_Parm )

int UForgeDB::GetOrderMappedAbilityIndex ( int DefaultAbilityIndex, unsigned char ChosenClass )
{
	static UFunction* pFnGetOrderMappedAbilityIndex = NULL;

	if ( ! pFnGetOrderMappedAbilityIndex )
		pFnGetOrderMappedAbilityIndex = (UFunction*) UObject::GObjObjects()->Data[ 44729 ];

	UForgeDB_execGetOrderMappedAbilityIndex_Parms GetOrderMappedAbilityIndex_Parms;
	GetOrderMappedAbilityIndex_Parms.DefaultAbilityIndex = DefaultAbilityIndex;
	GetOrderMappedAbilityIndex_Parms.ChosenClass = ChosenClass;

	this->ProcessEvent ( pFnGetOrderMappedAbilityIndex, &GetOrderMappedAbilityIndex_Parms, NULL );

	return GetOrderMappedAbilityIndex_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.MouseIsOverElement
// [0x00822002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGFxObject*              TheElement                     ( CPF_Parm )

bool UForgeDB::MouseIsOverElement ( class UGFxObject* TheElement )
{
	static UFunction* pFnMouseIsOverElement = NULL;

	if ( ! pFnMouseIsOverElement )
		pFnMouseIsOverElement = (UFunction*) UObject::GObjObjects()->Data[ 44722 ];

	UForgeDB_execMouseIsOverElement_Parms MouseIsOverElement_Parms;
	MouseIsOverElement_Parms.TheElement = TheElement;

	this->ProcessEvent ( pFnMouseIsOverElement, &MouseIsOverElement_Parms, NULL );

	return MouseIsOverElement_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetMouseFlashPosition
// [0x00822002] 
// Parameters infos:
// struct FVector2D               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector2D UForgeDB::GetMouseFlashPosition ( )
{
	static UFunction* pFnGetMouseFlashPosition = NULL;

	if ( ! pFnGetMouseFlashPosition )
		pFnGetMouseFlashPosition = (UFunction*) UObject::GObjObjects()->Data[ 44716 ];

	UForgeDB_execGetMouseFlashPosition_Parms GetMouseFlashPosition_Parms;

	this->ProcessEvent ( pFnGetMouseFlashPosition, &GetMouseFlashPosition_Parms, NULL );

	return GetMouseFlashPosition_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetSkinNameFromEnum
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  TheSkinEnum                    ( CPF_Parm )

struct FString UForgeDB::GetSkinNameFromEnum ( unsigned char TheSkinEnum )
{
	static UFunction* pFnGetSkinNameFromEnum = NULL;

	if ( ! pFnGetSkinNameFromEnum )
		pFnGetSkinNameFromEnum = (UFunction*) UObject::GObjObjects()->Data[ 44713 ];

	UForgeDB_execGetSkinNameFromEnum_Parms GetSkinNameFromEnum_Parms;
	GetSkinNameFromEnum_Parms.TheSkinEnum = TheSkinEnum;

	this->ProcessEvent ( pFnGetSkinNameFromEnum, &GetSkinNameFromEnum_Parms, NULL );

	return GetSkinNameFromEnum_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetSkinEnumFromId
// [0x00022002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SkinId                         ( CPF_Parm | CPF_CoerceParm )

unsigned char UForgeDB::GetSkinEnumFromId ( int SkinId )
{
	static UFunction* pFnGetSkinEnumFromId = NULL;

	if ( ! pFnGetSkinEnumFromId )
		pFnGetSkinEnumFromId = (UFunction*) UObject::GObjObjects()->Data[ 44709 ];

	UForgeDB_execGetSkinEnumFromId_Parms GetSkinEnumFromId_Parms;
	GetSkinEnumFromId_Parms.SkinId = SkinId;

	this->ProcessEvent ( pFnGetSkinEnumFromId, &GetSkinEnumFromId_Parms, NULL );

	return GetSkinEnumFromId_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetAbilitySlotTextureForClass
// [0x00022002] 
// Parameters infos:
// class UTexture*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  TheClass                       ( CPF_Parm )
// int                            AbilitySlot                    ( CPF_Parm )

class UTexture* UForgeDB::GetAbilitySlotTextureForClass ( unsigned char TheClass, int AbilitySlot )
{
	static UFunction* pFnGetAbilitySlotTextureForClass = NULL;

	if ( ! pFnGetAbilitySlotTextureForClass )
		pFnGetAbilitySlotTextureForClass = (UFunction*) UObject::GObjObjects()->Data[ 44701 ];

	UForgeDB_execGetAbilitySlotTextureForClass_Parms GetAbilitySlotTextureForClass_Parms;
	GetAbilitySlotTextureForClass_Parms.TheClass = TheClass;
	GetAbilitySlotTextureForClass_Parms.AbilitySlot = AbilitySlot;

	this->ProcessEvent ( pFnGetAbilitySlotTextureForClass, &GetAbilitySlotTextureForClass_Parms, NULL );

	return GetAbilitySlotTextureForClass_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetAbilitySlotNameForClass
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  TheClass                       ( CPF_Parm )
// int                            AbilitySlot                    ( CPF_Parm )

struct FString UForgeDB::GetAbilitySlotNameForClass ( unsigned char TheClass, int AbilitySlot )
{
	static UFunction* pFnGetAbilitySlotNameForClass = NULL;

	if ( ! pFnGetAbilitySlotNameForClass )
		pFnGetAbilitySlotNameForClass = (UFunction*) UObject::GObjObjects()->Data[ 44696 ];

	UForgeDB_execGetAbilitySlotNameForClass_Parms GetAbilitySlotNameForClass_Parms;
	GetAbilitySlotNameForClass_Parms.TheClass = TheClass;
	GetAbilitySlotNameForClass_Parms.AbilitySlot = AbilitySlot;

	this->ProcessEvent ( pFnGetAbilitySlotNameForClass, &GetAbilitySlotNameForClass_Parms, NULL );

	return GetAbilitySlotNameForClass_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetAbilitySlotNameForAbility
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class ADVAbility*              InputAbility                   ( CPF_Parm )

struct FString UForgeDB::GetAbilitySlotNameForAbility ( class ADVAbility* InputAbility )
{
	static UFunction* pFnGetAbilitySlotNameForAbility = NULL;

	if ( ! pFnGetAbilitySlotNameForAbility )
		pFnGetAbilitySlotNameForAbility = (UFunction*) UObject::GObjObjects()->Data[ 44693 ];

	UForgeDB_execGetAbilitySlotNameForAbility_Parms GetAbilitySlotNameForAbility_Parms;
	GetAbilitySlotNameForAbility_Parms.InputAbility = InputAbility;

	this->ProcessEvent ( pFnGetAbilitySlotNameForAbility, &GetAbilitySlotNameForAbility_Parms, NULL );

	return GetAbilitySlotNameForAbility_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.UsesMana
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  TheClass                       ( CPF_Parm )

bool UForgeDB::UsesMana ( unsigned char TheClass )
{
	static UFunction* pFnUsesMana = NULL;

	if ( ! pFnUsesMana )
		pFnUsesMana = (UFunction*) UObject::GObjObjects()->Data[ 43399 ];

	UForgeDB_execUsesMana_Parms UsesMana_Parms;
	UsesMana_Parms.TheClass = TheClass;

	this->ProcessEvent ( pFnUsesMana, &UsesMana_Parms, NULL );

	return UsesMana_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetClassClassFromEnum
// [0x00022002] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ThePlayerClass                 ( CPF_Parm )

class UClass* UForgeDB::GetClassClassFromEnum ( unsigned char ThePlayerClass )
{
	static UFunction* pFnGetClassClassFromEnum = NULL;

	if ( ! pFnGetClassClassFromEnum )
		pFnGetClassClassFromEnum = (UFunction*) UObject::GObjObjects()->Data[ 44689 ];

	UForgeDB_execGetClassClassFromEnum_Parms GetClassClassFromEnum_Parms;
	GetClassClassFromEnum_Parms.ThePlayerClass = ThePlayerClass;

	this->ProcessEvent ( pFnGetClassClassFromEnum, &GetClassClassFromEnum_Parms, NULL );

	return GetClassClassFromEnum_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetClassStringFromEnum
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  ThePlayerClass                 ( CPF_Parm )

struct FString UForgeDB::GetClassStringFromEnum ( unsigned char ThePlayerClass )
{
	static UFunction* pFnGetClassStringFromEnum = NULL;

	if ( ! pFnGetClassStringFromEnum )
		pFnGetClassStringFromEnum = (UFunction*) UObject::GObjObjects()->Data[ 43540 ];

	UForgeDB_execGetClassStringFromEnum_Parms GetClassStringFromEnum_Parms;
	GetClassStringFromEnum_Parms.ThePlayerClass = ThePlayerClass;

	this->ProcessEvent ( pFnGetClassStringFromEnum, &GetClassStringFromEnum_Parms, NULL );

	return GetClassStringFromEnum_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetClassEnumFromString
// [0x00022002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ClassName                      ( CPF_Parm | CPF_NeedCtorLink )

unsigned char UForgeDB::GetClassEnumFromString ( struct FString ClassName )
{
	static UFunction* pFnGetClassEnumFromString = NULL;

	if ( ! pFnGetClassEnumFromString )
		pFnGetClassEnumFromString = (UFunction*) UObject::GObjObjects()->Data[ 43158 ];

	UForgeDB_execGetClassEnumFromString_Parms GetClassEnumFromString_Parms;
	memcpy ( &GetClassEnumFromString_Parms.ClassName, &ClassName, 0xC );

	this->ProcessEvent ( pFnGetClassEnumFromString, &GetClassEnumFromString_Parms, NULL );

	return GetClassEnumFromString_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetAbilityArchetype
// [0x00026002] 
// Parameters infos:
// class ADVAbility*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  OwningClass                    ( CPF_Parm )
// unsigned char                  Slot                           ( CPF_Parm )
// unsigned char                  Focus                          ( CPF_OptionalParm | CPF_Parm )

class ADVAbility* UForgeDB::GetAbilityArchetype ( unsigned char OwningClass, unsigned char Slot, unsigned char Focus )
{
	static UFunction* pFnGetAbilityArchetype = NULL;

	if ( ! pFnGetAbilityArchetype )
		pFnGetAbilityArchetype = (UFunction*) UObject::GObjObjects()->Data[ 44681 ];

	UForgeDB_execGetAbilityArchetype_Parms GetAbilityArchetype_Parms;
	GetAbilityArchetype_Parms.OwningClass = OwningClass;
	GetAbilityArchetype_Parms.Slot = Slot;
	GetAbilityArchetype_Parms.Focus = Focus;

	this->ProcessEvent ( pFnGetAbilityArchetype, &GetAbilityArchetype_Parms, NULL );

	return GetAbilityArchetype_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetPawnArchetypeForClass
// [0x00022002] 
// Parameters infos:
// class ADVPawnHero*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  TheClass                       ( CPF_Parm )

class ADVPawnHero* UForgeDB::GetPawnArchetypeForClass ( unsigned char TheClass )
{
	static UFunction* pFnGetPawnArchetypeForClass = NULL;

	if ( ! pFnGetPawnArchetypeForClass )
		pFnGetPawnArchetypeForClass = (UFunction*) UObject::GObjObjects()->Data[ 44678 ];

	UForgeDB_execGetPawnArchetypeForClass_Parms GetPawnArchetypeForClass_Parms;
	GetPawnArchetypeForClass_Parms.TheClass = TheClass;

	this->ProcessEvent ( pFnGetPawnArchetypeForClass, &GetPawnArchetypeForClass_Parms, NULL );

	return GetPawnArchetypeForClass_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetMapId
// [0x00022002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MapName                        ( CPF_Parm | CPF_NeedCtorLink )

int UForgeDB::GetMapId ( struct FString MapName )
{
	static UFunction* pFnGetMapId = NULL;

	if ( ! pFnGetMapId )
		pFnGetMapId = (UFunction*) UObject::GObjObjects()->Data[ 44673 ];

	UForgeDB_execGetMapId_Parms GetMapId_Parms;
	memcpy ( &GetMapId_Parms.MapName, &MapName, 0xC );

	this->ProcessEvent ( pFnGetMapId, &GetMapId_Parms, NULL );

	return GetMapId_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetGameTypeId
// [0x00022002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 GameType                       ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

int UForgeDB::GetGameTypeId ( struct FString GameType )
{
	static UFunction* pFnGetGameTypeId = NULL;

	if ( ! pFnGetGameTypeId )
		pFnGetGameTypeId = (UFunction*) UObject::GObjObjects()->Data[ 44668 ];

	UForgeDB_execGetGameTypeId_Parms GetGameTypeId_Parms;
	memcpy ( &GetGameTypeId_Parms.GameType, &GameType, 0xC );

	this->ProcessEvent ( pFnGetGameTypeId, &GetGameTypeId_Parms, NULL );

	return GetGameTypeId_Parms.ReturnValue;
};

// Function ForgeGame.ForgeDB.GetSteamId
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FUniqueNetId            UniqueId                       ( CPF_Parm )

struct FString UForgeDB::GetSteamId ( struct FUniqueNetId UniqueId )
{
	static UFunction* pFnGetSteamId = NULL;

	if ( ! pFnGetSteamId )
		pFnGetSteamId = (UFunction*) UObject::GObjObjects()->Data[ 44663 ];

	UForgeDB_execGetSteamId_Parms GetSteamId_Parms;
	memcpy ( &GetSteamId_Parms.UniqueId, &UniqueId, 0x8 );

	this->ProcessEvent ( pFnGetSteamId, &GetSteamId_Parms, NULL );

	return GetSteamId_Parms.ReturnValue;
};

// Function ForgeGame.DVBuffCalculator.ResetForRoundStart
// [0x00020002] 
// Parameters infos:

void UDVBuffCalculator::ResetForRoundStart ( )
{
	static UFunction* pFnResetForRoundStart = NULL;

	if ( ! pFnResetForRoundStart )
		pFnResetForRoundStart = (UFunction*) UObject::GObjObjects()->Data[ 42468 ];

	UDVBuffCalculator_execResetForRoundStart_Parms ResetForRoundStart_Parms;

	this->ProcessEvent ( pFnResetForRoundStart, &ResetForRoundStart_Parms, NULL );
};

// Function ForgeGame.DVBuffCalculator.ResetForDeath
// [0x00020002] 
// Parameters infos:

void UDVBuffCalculator::ResetForDeath ( )
{
	static UFunction* pFnResetForDeath = NULL;

	if ( ! pFnResetForDeath )
		pFnResetForDeath = (UFunction*) UObject::GObjObjects()->Data[ 42469 ];

	UDVBuffCalculator_execResetForDeath_Parms ResetForDeath_Parms;

	this->ProcessEvent ( pFnResetForDeath, &ResetForDeath_Parms, NULL );
};

// Function ForgeGame.DVBuffCalculator.RemoveExpired
// [0x00020002] 
// Parameters infos:

void UDVBuffCalculator::RemoveExpired ( )
{
	static UFunction* pFnRemoveExpired = NULL;

	if ( ! pFnRemoveExpired )
		pFnRemoveExpired = (UFunction*) UObject::GObjObjects()->Data[ 42472 ];

	UDVBuffCalculator_execRemoveExpired_Parms RemoveExpired_Parms;

	this->ProcessEvent ( pFnRemoveExpired, &RemoveExpired_Parms, NULL );
};

// Function ForgeGame.DVBuffCalculator.CalculateFinalCaps
// [0x00480002] 
// Parameters infos:
// unsigned char                  StatName                       ( CPF_Parm )
// float                          PreviousValue                  ( CPF_Parm | CPF_OutParm )

void UDVBuffCalculator::CalculateFinalCaps ( unsigned char StatName, float* PreviousValue )
{
	static UFunction* pFnCalculateFinalCaps = NULL;

	if ( ! pFnCalculateFinalCaps )
		pFnCalculateFinalCaps = (UFunction*) UObject::GObjObjects()->Data[ 42476 ];

	UDVBuffCalculator_execCalculateFinalCaps_Parms CalculateFinalCaps_Parms;
	CalculateFinalCaps_Parms.StatName = StatName;

	this->ProcessEvent ( pFnCalculateFinalCaps, &CalculateFinalCaps_Parms, NULL );

	if ( PreviousValue )
		*PreviousValue = CalculateFinalCaps_Parms.PreviousValue;
};

// Function ForgeGame.DVBuffCalculator.CalculatePreLockCaps
// [0x00480002] 
// Parameters infos:
// unsigned char                  StatName                       ( CPF_Parm )
// float                          PreviousValue                  ( CPF_Parm | CPF_OutParm )

void UDVBuffCalculator::CalculatePreLockCaps ( unsigned char StatName, float* PreviousValue )
{
	static UFunction* pFnCalculatePreLockCaps = NULL;

	if ( ! pFnCalculatePreLockCaps )
		pFnCalculatePreLockCaps = (UFunction*) UObject::GObjObjects()->Data[ 42479 ];

	UDVBuffCalculator_execCalculatePreLockCaps_Parms CalculatePreLockCaps_Parms;
	CalculatePreLockCaps_Parms.StatName = StatName;

	this->ProcessEvent ( pFnCalculatePreLockCaps, &CalculatePreLockCaps_Parms, NULL );

	if ( PreviousValue )
		*PreviousValue = CalculatePreLockCaps_Parms.PreviousValue;
};

// Function ForgeGame.DVBuffCalculator.CalculateMaxChanges
// [0x00080002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  TheStat                        ( CPF_Parm )
// float                          EffectiveValue                 ( CPF_Parm )
// float                          BaseValue                      ( CPF_Parm )

float UDVBuffCalculator::CalculateMaxChanges ( unsigned char TheStat, float EffectiveValue, float BaseValue )
{
	static UFunction* pFnCalculateMaxChanges = NULL;

	if ( ! pFnCalculateMaxChanges )
		pFnCalculateMaxChanges = (UFunction*) UObject::GObjObjects()->Data[ 42484 ];

	UDVBuffCalculator_execCalculateMaxChanges_Parms CalculateMaxChanges_Parms;
	CalculateMaxChanges_Parms.TheStat = TheStat;
	CalculateMaxChanges_Parms.EffectiveValue = EffectiveValue;
	CalculateMaxChanges_Parms.BaseValue = BaseValue;

	this->ProcessEvent ( pFnCalculateMaxChanges, &CalculateMaxChanges_Parms, NULL );

	return CalculateMaxChanges_Parms.ReturnValue;
};

// Function ForgeGame.DVBuffCalculator.CalculateAssignedChanges
// [0x00C80002] 
// Parameters infos:
// unsigned char                  TheStat                        ( CPF_Parm )
// float                          PreviousValue                  ( CPF_Parm | CPF_OutParm )

void UDVBuffCalculator::CalculateAssignedChanges ( unsigned char TheStat, float* PreviousValue )
{
	static UFunction* pFnCalculateAssignedChanges = NULL;

	if ( ! pFnCalculateAssignedChanges )
		pFnCalculateAssignedChanges = (UFunction*) UObject::GObjObjects()->Data[ 42487 ];

	UDVBuffCalculator_execCalculateAssignedChanges_Parms CalculateAssignedChanges_Parms;
	CalculateAssignedChanges_Parms.TheStat = TheStat;

	this->ProcessEvent ( pFnCalculateAssignedChanges, &CalculateAssignedChanges_Parms, NULL );

	if ( PreviousValue )
		*PreviousValue = CalculateAssignedChanges_Parms.PreviousValue;
};

// Function ForgeGame.DVBuffCalculator.CalculateAddedChanges
// [0x00880002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  TheStat                        ( CPF_Parm )

float UDVBuffCalculator::CalculateAddedChanges ( unsigned char TheStat )
{
	static UFunction* pFnCalculateAddedChanges = NULL;

	if ( ! pFnCalculateAddedChanges )
		pFnCalculateAddedChanges = (UFunction*) UObject::GObjObjects()->Data[ 42496 ];

	UDVBuffCalculator_execCalculateAddedChanges_Parms CalculateAddedChanges_Parms;
	CalculateAddedChanges_Parms.TheStat = TheStat;

	this->ProcessEvent ( pFnCalculateAddedChanges, &CalculateAddedChanges_Parms, NULL );

	return CalculateAddedChanges_Parms.ReturnValue;
};

// Function ForgeGame.DVBuffCalculator.CalculateMultipliedChanges
// [0x00880002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  TheStat                        ( CPF_Parm )
// float                          BaseValue                      ( CPF_Parm )

float UDVBuffCalculator::CalculateMultipliedChanges ( unsigned char TheStat, float BaseValue )
{
	static UFunction* pFnCalculateMultipliedChanges = NULL;

	if ( ! pFnCalculateMultipliedChanges )
		pFnCalculateMultipliedChanges = (UFunction*) UObject::GObjObjects()->Data[ 42508 ];

	UDVBuffCalculator_execCalculateMultipliedChanges_Parms CalculateMultipliedChanges_Parms;
	CalculateMultipliedChanges_Parms.TheStat = TheStat;
	CalculateMultipliedChanges_Parms.BaseValue = BaseValue;

	this->ProcessEvent ( pFnCalculateMultipliedChanges, &CalculateMultipliedChanges_Parms, NULL );

	return CalculateMultipliedChanges_Parms.ReturnValue;
};

// Function ForgeGame.DVBuffCalculator.CalculateStat
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  TheStat                        ( CPF_Parm )
// float                          BaseValue                      ( CPF_OptionalParm | CPF_Parm )

float UDVBuffCalculator::CalculateStat ( unsigned char TheStat, float BaseValue )
{
	static UFunction* pFnCalculateStat = NULL;

	if ( ! pFnCalculateStat )
		pFnCalculateStat = (UFunction*) UObject::GObjObjects()->Data[ 42515 ];

	UDVBuffCalculator_execCalculateStat_Parms CalculateStat_Parms;
	CalculateStat_Parms.TheStat = TheStat;
	CalculateStat_Parms.BaseValue = BaseValue;

	this->ProcessEvent ( pFnCalculateStat, &CalculateStat_Parms, NULL );

	return CalculateStat_Parms.ReturnValue;
};

// Function ForgeGame.DVBuffCalculator.AddBuff
// [0x00820002] 
// Parameters infos:
// class UDVBuff*                 NewBuff                        ( CPF_Parm )

void UDVBuffCalculator::AddBuff ( class UDVBuff* NewBuff )
{
	static UFunction* pFnAddBuff = NULL;

	if ( ! pFnAddBuff )
		pFnAddBuff = (UFunction*) UObject::GObjObjects()->Data[ 42523 ];

	UDVBuffCalculator_execAddBuff_Parms AddBuff_Parms;
	AddBuff_Parms.NewBuff = NewBuff;

	this->ProcessEvent ( pFnAddBuff, &AddBuff_Parms, NULL );
};

// Function ForgeGame.DVBuffCalculator.AddToStatChanges
// [0x00020002] 
// Parameters infos:
// struct FSStatChange            NewStatChange                  ( CPF_Parm )

void UDVBuffCalculator::AddToStatChanges ( struct FSStatChange NewStatChange )
{
	static UFunction* pFnAddToStatChanges = NULL;

	if ( ! pFnAddToStatChanges )
		pFnAddToStatChanges = (UFunction*) UObject::GObjObjects()->Data[ 42528 ];

	UDVBuffCalculator_execAddToStatChanges_Parms AddToStatChanges_Parms;
	memcpy ( &AddToStatChanges_Parms.NewStatChange, &NewStatChange, 0x18 );

	this->ProcessEvent ( pFnAddToStatChanges, &AddToStatChanges_Parms, NULL );
};

// Function ForgeGame.DVBuffCalculator.Destroyed
// [0x00020002] 
// Parameters infos:

void UDVBuffCalculator::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 42534 ];

	UDVBuffCalculator_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbility.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbility::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43391 ];

	ADVAbility_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbility.GetDescriptionNumbers
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class ADVAbility*              AbilityArchetype               ( CPF_Parm )
// unsigned char                  TheClass                       ( CPF_Parm )
// struct FString                 StaticFriendlyColor            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 StaticEnemyColor               ( CPF_Parm | CPF_NeedCtorLink )

struct FString ADVAbility::GetDescriptionNumbers ( class ADVAbility* AbilityArchetype, unsigned char TheClass, struct FString StaticFriendlyColor, struct FString StaticEnemyColor )
{
	static UFunction* pFnGetDescriptionNumbers = NULL;

	if ( ! pFnGetDescriptionNumbers )
		pFnGetDescriptionNumbers = (UFunction*) UObject::GObjObjects()->Data[ 43392 ];

	ADVAbility_execGetDescriptionNumbers_Parms GetDescriptionNumbers_Parms;
	GetDescriptionNumbers_Parms.AbilityArchetype = AbilityArchetype;
	GetDescriptionNumbers_Parms.TheClass = TheClass;
	memcpy ( &GetDescriptionNumbers_Parms.StaticFriendlyColor, &StaticFriendlyColor, 0xC );
	memcpy ( &GetDescriptionNumbers_Parms.StaticEnemyColor, &StaticEnemyColor, 0xC );

	this->ProcessEvent ( pFnGetDescriptionNumbers, &GetDescriptionNumbers_Parms, NULL );

	return GetDescriptionNumbers_Parms.ReturnValue;
};

// Function ForgeGame.DVAbility.GetFullDescription
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class ADVAbility*              AbilityArchetype               ( CPF_Parm )
// unsigned char                  TheClass                       ( CPF_Parm )

struct FString ADVAbility::GetFullDescription ( class ADVAbility* AbilityArchetype, unsigned char TheClass )
{
	static UFunction* pFnGetFullDescription = NULL;

	if ( ! pFnGetFullDescription )
		pFnGetFullDescription = (UFunction*) UObject::GObjObjects()->Data[ 43396 ];

	ADVAbility_execGetFullDescription_Parms GetFullDescription_Parms;
	GetFullDescription_Parms.AbilityArchetype = AbilityArchetype;
	GetFullDescription_Parms.TheClass = TheClass;

	this->ProcessEvent ( pFnGetFullDescription, &GetFullDescription_Parms, NULL );

	return GetFullDescription_Parms.ReturnValue;
};

// Function ForgeGame.DVAbility.KillPartcleEmitter
// [0x00020102] 
// Parameters infos:

void ADVAbility::KillPartcleEmitter ( )
{
	static UFunction* pFnKillPartcleEmitter = NULL;

	if ( ! pFnKillPartcleEmitter )
		pFnKillPartcleEmitter = (UFunction*) UObject::GObjObjects()->Data[ 43415 ];

	ADVAbility_execKillPartcleEmitter_Parms KillPartcleEmitter_Parms;

	this->ProcessEvent ( pFnKillPartcleEmitter, &KillPartcleEmitter_Parms, NULL );
};

// Function ForgeGame.DVAbility.AddParticleEmitter
// [0x00020102] 
// Parameters infos:
// class APawn*                   Hero                           ( CPF_Parm )

void ADVAbility::AddParticleEmitter ( class APawn* Hero )
{
	static UFunction* pFnAddParticleEmitter = NULL;

	if ( ! pFnAddParticleEmitter )
		pFnAddParticleEmitter = (UFunction*) UObject::GObjObjects()->Data[ 43427 ];

	ADVAbility_execAddParticleEmitter_Parms AddParticleEmitter_Parms;
	AddParticleEmitter_Parms.Hero = Hero;

	this->ProcessEvent ( pFnAddParticleEmitter, &AddParticleEmitter_Parms, NULL );
};

// Function ForgeGame.DVAbility.MakeAttack
// [0x00020002] 
// Parameters infos:
// class UDVAttack*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UDVAttack* ADVAbility::MakeAttack ( )
{
	static UFunction* pFnMakeAttack = NULL;

	if ( ! pFnMakeAttack )
		pFnMakeAttack = (UFunction*) UObject::GObjObjects()->Data[ 43429 ];

	ADVAbility_execMakeAttack_Parms MakeAttack_Parms;

	this->ProcessEvent ( pFnMakeAttack, &MakeAttack_Parms, NULL );

	return MakeAttack_Parms.ReturnValue;
};

// Function ForgeGame.DVAbility.SpawnAttack
// [0x00020002] 
// Parameters infos:
// class UDVAttack*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UDVAttack* ADVAbility::SpawnAttack ( )
{
	static UFunction* pFnSpawnAttack = NULL;

	if ( ! pFnSpawnAttack )
		pFnSpawnAttack = (UFunction*) UObject::GObjObjects()->Data[ 43190 ];

	ADVAbility_execSpawnAttack_Parms SpawnAttack_Parms;

	this->ProcessEvent ( pFnSpawnAttack, &SpawnAttack_Parms, NULL );

	return SpawnAttack_Parms.ReturnValue;
};

// Function ForgeGame.DVAbility.HotTick
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void ADVAbility::HotTick ( )
{
	static UFunction* pFnHotTick = NULL;

	if ( ! pFnHotTick )
		pFnHotTick = (UFunction*) UObject::GObjObjects()->Data[ 43434 ];

	ADVAbility_execHotTick_Parms HotTick_Parms;

	this->ProcessEvent ( pFnHotTick, &HotTick_Parms, NULL );
};

// Function ForgeGame.DVAbility.SendHot
// [0x00020002] 
// Parameters infos:
// class ADVPawn*                 HotTarget                      ( CPF_Parm )

void ADVAbility::SendHot ( class ADVPawn* HotTarget )
{
	static UFunction* pFnSendHot = NULL;

	if ( ! pFnSendHot )
		pFnSendHot = (UFunction*) UObject::GObjObjects()->Data[ 43437 ];

	ADVAbility_execSendHot_Parms SendHot_Parms;
	SendHot_Parms.HotTarget = HotTarget;

	this->ProcessEvent ( pFnSendHot, &SendHot_Parms, NULL );
};

// Function ForgeGame.DVAbility.Reset
// [0x00020002] 
// Parameters infos:

void ADVAbility::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 43441 ];

	ADVAbility_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function ForgeGame.DVAbility.UnRegisterWithAllDefendingPawns
// [0x00020002] 
// Parameters infos:

void ADVAbility::UnRegisterWithAllDefendingPawns ( )
{
	static UFunction* pFnUnRegisterWithAllDefendingPawns = NULL;

	if ( ! pFnUnRegisterWithAllDefendingPawns )
		pFnUnRegisterWithAllDefendingPawns = (UFunction*) UObject::GObjObjects()->Data[ 43445 ];

	ADVAbility_execUnRegisterWithAllDefendingPawns_Parms UnRegisterWithAllDefendingPawns_Parms;

	this->ProcessEvent ( pFnUnRegisterWithAllDefendingPawns, &UnRegisterWithAllDefendingPawns_Parms, NULL );
};

// Function ForgeGame.DVAbility.UnRegisterWithDefendingPawn
// [0x00020002] 
// Parameters infos:
// class ADVPawn*                 Modifier                       ( CPF_Parm )

void ADVAbility::UnRegisterWithDefendingPawn ( class ADVPawn* Modifier )
{
	static UFunction* pFnUnRegisterWithDefendingPawn = NULL;

	if ( ! pFnUnRegisterWithDefendingPawn )
		pFnUnRegisterWithDefendingPawn = (UFunction*) UObject::GObjObjects()->Data[ 43448 ];

	ADVAbility_execUnRegisterWithDefendingPawn_Parms UnRegisterWithDefendingPawn_Parms;
	UnRegisterWithDefendingPawn_Parms.Modifier = Modifier;

	this->ProcessEvent ( pFnUnRegisterWithDefendingPawn, &UnRegisterWithDefendingPawn_Parms, NULL );
};

// Function ForgeGame.DVAbility.RegisterWithDefendingPawn
// [0x00020002] 
// Parameters infos:
// class ADVPawn*                 Modifier                       ( CPF_Parm )

void ADVAbility::RegisterWithDefendingPawn ( class ADVPawn* Modifier )
{
	static UFunction* pFnRegisterWithDefendingPawn = NULL;

	if ( ! pFnRegisterWithDefendingPawn )
		pFnRegisterWithDefendingPawn = (UFunction*) UObject::GObjObjects()->Data[ 43450 ];

	ADVAbility_execRegisterWithDefendingPawn_Parms RegisterWithDefendingPawn_Parms;
	RegisterWithDefendingPawn_Parms.Modifier = Modifier;

	this->ProcessEvent ( pFnRegisterWithDefendingPawn, &RegisterWithDefendingPawn_Parms, NULL );
};

// Function ForgeGame.DVAbility.ModifyDefense
// [0x00420000] 
// Parameters infos:
// class UDVAttack*               IncomingAttack                 ( CPF_Parm )
// class ADVPawn*                 Defender                       ( CPF_Parm )
// TArray< struct FSDamage >      DamageTaken                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// int                            ProtectionDone                 ( CPF_Parm | CPF_OutParm )

void ADVAbility::ModifyDefense ( class UDVAttack* IncomingAttack, class ADVPawn* Defender, TArray< struct FSDamage >* DamageTaken, int* ProtectionDone )
{
	static UFunction* pFnModifyDefense = NULL;

	if ( ! pFnModifyDefense )
		pFnModifyDefense = (UFunction*) UObject::GObjObjects()->Data[ 43453 ];

	ADVAbility_execModifyDefense_Parms ModifyDefense_Parms;
	ModifyDefense_Parms.IncomingAttack = IncomingAttack;
	ModifyDefense_Parms.Defender = Defender;

	this->ProcessEvent ( pFnModifyDefense, &ModifyDefense_Parms, NULL );

	if ( DamageTaken )
		memcpy ( DamageTaken, &ModifyDefense_Parms.DamageTaken, 0xC );

	if ( ProtectionDone )
		*ProtectionDone = ModifyDefense_Parms.ProtectionDone;
};

// Function ForgeGame.DVAbility.UnRegisterWithAllAttackingPawns
// [0x00020002] 
// Parameters infos:

void ADVAbility::UnRegisterWithAllAttackingPawns ( )
{
	static UFunction* pFnUnRegisterWithAllAttackingPawns = NULL;

	if ( ! pFnUnRegisterWithAllAttackingPawns )
		pFnUnRegisterWithAllAttackingPawns = (UFunction*) UObject::GObjObjects()->Data[ 43455 ];

	ADVAbility_execUnRegisterWithAllAttackingPawns_Parms UnRegisterWithAllAttackingPawns_Parms;

	this->ProcessEvent ( pFnUnRegisterWithAllAttackingPawns, &UnRegisterWithAllAttackingPawns_Parms, NULL );
};

// Function ForgeGame.DVAbility.UnRegisterWithAttackingPawn
// [0x00020002] 
// Parameters infos:
// class ADVPawn*                 Modifier                       ( CPF_Parm )

void ADVAbility::UnRegisterWithAttackingPawn ( class ADVPawn* Modifier )
{
	static UFunction* pFnUnRegisterWithAttackingPawn = NULL;

	if ( ! pFnUnRegisterWithAttackingPawn )
		pFnUnRegisterWithAttackingPawn = (UFunction*) UObject::GObjObjects()->Data[ 43461 ];

	ADVAbility_execUnRegisterWithAttackingPawn_Parms UnRegisterWithAttackingPawn_Parms;
	UnRegisterWithAttackingPawn_Parms.Modifier = Modifier;

	this->ProcessEvent ( pFnUnRegisterWithAttackingPawn, &UnRegisterWithAttackingPawn_Parms, NULL );
};

// Function ForgeGame.DVAbility.RegisterWithAttackingPawn
// [0x00020002] 
// Parameters infos:
// class ADVPawn*                 Modifier                       ( CPF_Parm )

void ADVAbility::RegisterWithAttackingPawn ( class ADVPawn* Modifier )
{
	static UFunction* pFnRegisterWithAttackingPawn = NULL;

	if ( ! pFnRegisterWithAttackingPawn )
		pFnRegisterWithAttackingPawn = (UFunction*) UObject::GObjObjects()->Data[ 43463 ];

	ADVAbility_execRegisterWithAttackingPawn_Parms RegisterWithAttackingPawn_Parms;
	RegisterWithAttackingPawn_Parms.Modifier = Modifier;

	this->ProcessEvent ( pFnRegisterWithAttackingPawn, &RegisterWithAttackingPawn_Parms, NULL );
};

// Function ForgeGame.DVAbility.ModifyAttack
// [0x00020000] 
// Parameters infos:
// class UDVAttack*               OutGoingAttack                 ( CPF_Parm )

void ADVAbility::ModifyAttack ( class UDVAttack* OutGoingAttack )
{
	static UFunction* pFnModifyAttack = NULL;

	if ( ! pFnModifyAttack )
		pFnModifyAttack = (UFunction*) UObject::GObjObjects()->Data[ 43466 ];

	ADVAbility_execModifyAttack_Parms ModifyAttack_Parms;
	ModifyAttack_Parms.OutGoingAttack = OutGoingAttack;

	this->ProcessEvent ( pFnModifyAttack, &ModifyAttack_Parms, NULL );
};

// Function ForgeGame.DVAbility.IsStillInLOS
// [0x00880002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADVPawn*                 TargetActor                    ( CPF_Parm )

bool ADVAbility::IsStillInLOS ( class ADVPawn* TargetActor )
{
	static UFunction* pFnIsStillInLOS = NULL;

	if ( ! pFnIsStillInLOS )
		pFnIsStillInLOS = (UFunction*) UObject::GObjObjects()->Data[ 43468 ];

	ADVAbility_execIsStillInLOS_Parms IsStillInLOS_Parms;
	IsStillInLOS_Parms.TargetActor = TargetActor;

	this->ProcessEvent ( pFnIsStillInLOS, &IsStillInLOS_Parms, NULL );

	return IsStillInLOS_Parms.ReturnValue;
};

// Function ForgeGame.DVAbility.GoOnCooldown
// [0x00020002] 
// Parameters infos:
// unsigned long                  UseResource                    ( CPF_Parm )

void ADVAbility::GoOnCooldown ( unsigned long UseResource )
{
	static UFunction* pFnGoOnCooldown = NULL;

	if ( ! pFnGoOnCooldown )
		pFnGoOnCooldown = (UFunction*) UObject::GObjObjects()->Data[ 43470 ];

	ADVAbility_execGoOnCooldown_Parms GoOnCooldown_Parms;
	GoOnCooldown_Parms.UseResource = UseResource;

	this->ProcessEvent ( pFnGoOnCooldown, &GoOnCooldown_Parms, NULL );
};

// Function ForgeGame.DVAbility.Interrupt
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  SelfInterrupt                  ( CPF_Parm )

bool ADVAbility::Interrupt ( unsigned long SelfInterrupt )
{
	static UFunction* pFnInterrupt = NULL;

	if ( ! pFnInterrupt )
		pFnInterrupt = (UFunction*) UObject::GObjObjects()->Data[ 42761 ];

	ADVAbility_execInterrupt_Parms Interrupt_Parms;
	Interrupt_Parms.SelfInterrupt = SelfInterrupt;

	this->ProcessEvent ( pFnInterrupt, &Interrupt_Parms, NULL );

	return Interrupt_Parms.ReturnValue;
};

// Function ForgeGame.DVAbility.LogStartCast
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void ADVAbility::LogStartCast ( )
{
	static UFunction* pFnLogStartCast = NULL;

	if ( ! pFnLogStartCast )
		pFnLogStartCast = (UFunction*) UObject::GObjObjects()->Data[ 43479 ];

	ADVAbility_execLogStartCast_Parms LogStartCast_Parms;

	this->ProcessEvent ( pFnLogStartCast, &LogStartCast_Parms, NULL );
};

// Function ForgeGame.DVAbility.FireAbility
// [0x00080000] 
// Parameters infos:

void ADVAbility::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 43383 ];

	ADVAbility_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbility.PerformAbility
// [0x00080002] 
// Parameters infos:

void ADVAbility::PerformAbility ( )
{
	static UFunction* pFnPerformAbility = NULL;

	if ( ! pFnPerformAbility )
		pFnPerformAbility = (UFunction*) UObject::GObjObjects()->Data[ 43385 ];

	ADVAbility_execPerformAbility_Parms PerformAbility_Parms;

	this->ProcessEvent ( pFnPerformAbility, &PerformAbility_Parms, NULL );
};

// Function ForgeGame.DVAbility.Activate
// [0x00024103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADVPawn*                 RepTargetPawn                  ( CPF_Parm )
// unsigned long                  RepUsingAimAssist              ( CPF_OptionalParm | CPF_Parm )

bool ADVAbility::Activate ( class ADVPawn* RepTargetPawn, unsigned long RepUsingAimAssist )
{
	static UFunction* pFnActivate = NULL;

	if ( ! pFnActivate )
		pFnActivate = (UFunction*) UObject::GObjObjects()->Data[ 43483 ];

	ADVAbility_execActivate_Parms Activate_Parms;
	Activate_Parms.RepTargetPawn = RepTargetPawn;
	Activate_Parms.RepUsingAimAssist = RepUsingAimAssist;

	this->ProcessEvent ( pFnActivate, &Activate_Parms, NULL );

	return Activate_Parms.ReturnValue;
};

// Function ForgeGame.DVAbility.ReadyToActivate
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADVAbility::ReadyToActivate ( )
{
	static UFunction* pFnReadyToActivate = NULL;

	if ( ! pFnReadyToActivate )
		pFnReadyToActivate = (UFunction*) UObject::GObjObjects()->Data[ 43484 ];

	ADVAbility_execReadyToActivate_Parms ReadyToActivate_Parms;

	this->ProcessEvent ( pFnReadyToActivate, &ReadyToActivate_Parms, NULL );

	return ReadyToActivate_Parms.ReturnValue;
};

// Function ForgeGame.DVAbility.IsAbilityReady
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADVAbility::IsAbilityReady ( )
{
	static UFunction* pFnIsAbilityReady = NULL;

	if ( ! pFnIsAbilityReady )
		pFnIsAbilityReady = (UFunction*) UObject::GObjObjects()->Data[ 43490 ];

	ADVAbility_execIsAbilityReady_Parms IsAbilityReady_Parms;

	this->ProcessEvent ( pFnIsAbilityReady, &IsAbilityReady_Parms, NULL );

	return IsAbilityReady_Parms.ReturnValue;
};

// Function ForgeGame.DVAbility.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAbility::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 43492 ];

	ADVAbility_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAbility.SetAbilitiesIndex
// [0x00020002] 
// Parameters infos:
// int                            NewAbilitiesIndex              ( CPF_Parm )

void ADVAbility::SetAbilitiesIndex ( int NewAbilitiesIndex )
{
	static UFunction* pFnSetAbilitiesIndex = NULL;

	if ( ! pFnSetAbilitiesIndex )
		pFnSetAbilitiesIndex = (UFunction*) UObject::GObjObjects()->Data[ 43494 ];

	ADVAbility_execSetAbilitiesIndex_Parms SetAbilitiesIndex_Parms;
	SetAbilitiesIndex_Parms.NewAbilitiesIndex = NewAbilitiesIndex;

	this->ProcessEvent ( pFnSetAbilitiesIndex, &SetAbilitiesIndex_Parms, NULL );
};

// Function ForgeGame.DVAbility.PlayFailureEffect
// [0x00020102] 
// Parameters infos:

void ADVAbility::PlayFailureEffect ( )
{
	static UFunction* pFnPlayFailureEffect = NULL;

	if ( ! pFnPlayFailureEffect )
		pFnPlayFailureEffect = (UFunction*) UObject::GObjObjects()->Data[ 43496 ];

	ADVAbility_execPlayFailureEffect_Parms PlayFailureEffect_Parms;

	this->ProcessEvent ( pFnPlayFailureEffect, &PlayFailureEffect_Parms, NULL );
};

// Function ForgeGame.DVAbility.PlayHitEffect
// [0x00020102] 
// Parameters infos:
// class ADVPawn*                 RepHitPawn                     ( CPF_Parm )

void ADVAbility::PlayHitEffect ( class ADVPawn* RepHitPawn )
{
	static UFunction* pFnPlayHitEffect = NULL;

	if ( ! pFnPlayHitEffect )
		pFnPlayHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 43499 ];

	ADVAbility_execPlayHitEffect_Parms PlayHitEffect_Parms;
	PlayHitEffect_Parms.RepHitPawn = RepHitPawn;

	this->ProcessEvent ( pFnPlayHitEffect, &PlayHitEffect_Parms, NULL );
};

// Function ForgeGame.DVAbility.PlayFireEffect
// [0x00020102] 
// Parameters infos:
// class ADVPawn*                 RepHitPawn                     ( CPF_Parm )

void ADVAbility::PlayFireEffect ( class ADVPawn* RepHitPawn )
{
	static UFunction* pFnPlayFireEffect = NULL;

	if ( ! pFnPlayFireEffect )
		pFnPlayFireEffect = (UFunction*) UObject::GObjObjects()->Data[ 43504 ];

	ADVAbility_execPlayFireEffect_Parms PlayFireEffect_Parms;
	PlayFireEffect_Parms.RepHitPawn = RepHitPawn;

	this->ProcessEvent ( pFnPlayFireEffect, &PlayFireEffect_Parms, NULL );
};

// Function ForgeGame.DVAbility.PlayAnim
// [0x00020102] 
// Parameters infos:

void ADVAbility::PlayAnim ( )
{
	static UFunction* pFnPlayAnim = NULL;

	if ( ! pFnPlayAnim )
		pFnPlayAnim = (UFunction*) UObject::GObjObjects()->Data[ 43511 ];

	ADVAbility_execPlayAnim_Parms PlayAnim_Parms;

	this->ProcessEvent ( pFnPlayAnim, &PlayAnim_Parms, NULL );
};

// Function ForgeGame.DVAbility.PlayCastEffect
// [0x00020102] 
// Parameters infos:

void ADVAbility::PlayCastEffect ( )
{
	static UFunction* pFnPlayCastEffect = NULL;

	if ( ! pFnPlayCastEffect )
		pFnPlayCastEffect = (UFunction*) UObject::GObjObjects()->Data[ 43516 ];

	ADVAbility_execPlayCastEffect_Parms PlayCastEffect_Parms;

	this->ProcessEvent ( pFnPlayCastEffect, &PlayCastEffect_Parms, NULL );
};

// Function ForgeGame.DVAbility.GetAbilityDescription
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ADVAbility::GetAbilityDescription ( )
{
	static UFunction* pFnGetAbilityDescription = NULL;

	if ( ! pFnGetAbilityDescription )
		pFnGetAbilityDescription = (UFunction*) UObject::GObjObjects()->Data[ 43519 ];

	ADVAbility_execGetAbilityDescription_Parms GetAbilityDescription_Parms;

	this->ProcessEvent ( pFnGetAbilityDescription, &GetAbilityDescription_Parms, NULL );

	return GetAbilityDescription_Parms.ReturnValue;
};

// Function ForgeGame.DVAbility.GetAbilityName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ADVAbility::GetAbilityName ( )
{
	static UFunction* pFnGetAbilityName = NULL;

	if ( ! pFnGetAbilityName )
		pFnGetAbilityName = (UFunction*) UObject::GObjObjects()->Data[ 43534 ];

	ADVAbility_execGetAbilityName_Parms GetAbilityName_Parms;

	this->ProcessEvent ( pFnGetAbilityName, &GetAbilityName_Parms, NULL );

	return GetAbilityName_Parms.ReturnValue;
};

// Function ForgeGame.DVAbility.GetAbilityLocalizationPath
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  TheOwningClass                 ( CPF_Parm )
// struct FString                 TheAbilityName                 ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  TheFocus                       ( CPF_OptionalParm | CPF_Parm )

struct FString ADVAbility::GetAbilityLocalizationPath ( unsigned char TheOwningClass, struct FString TheAbilityName, unsigned char TheFocus )
{
	static UFunction* pFnGetAbilityLocalizationPath = NULL;

	if ( ! pFnGetAbilityLocalizationPath )
		pFnGetAbilityLocalizationPath = (UFunction*) UObject::GObjObjects()->Data[ 43536 ];

	ADVAbility_execGetAbilityLocalizationPath_Parms GetAbilityLocalizationPath_Parms;
	GetAbilityLocalizationPath_Parms.TheOwningClass = TheOwningClass;
	memcpy ( &GetAbilityLocalizationPath_Parms.TheAbilityName, &TheAbilityName, 0xC );
	GetAbilityLocalizationPath_Parms.TheFocus = TheFocus;

	this->ProcessEvent ( pFnGetAbilityLocalizationPath, &GetAbilityLocalizationPath_Parms, NULL );

	return GetAbilityLocalizationPath_Parms.ReturnValue;
};

// Function ForgeGame.DVAbility.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbility::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 43373 ];

	ADVAbility_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVPawn.BaseChange
// [0x00820822] ( FUNC_Event )
// Parameters infos:

void ADVPawn::eventBaseChange ( )
{
	static UFunction* pFnBaseChange = NULL;

	if ( ! pFnBaseChange )
		pFnBaseChange = (UFunction*) UObject::GObjObjects()->Data[ 43012 ];

	ADVPawn_eventBaseChange_Parms BaseChange_Parms;

	this->ProcessEvent ( pFnBaseChange, &BaseChange_Parms, NULL );
};

// Function ForgeGame.DVPawn.TossPawn
// [0x00020000] 
// Parameters infos:
// struct FVector                 Knockback                      ( CPF_Parm )

void ADVPawn::TossPawn ( struct FVector Knockback )
{
	static UFunction* pFnTossPawn = NULL;

	if ( ! pFnTossPawn )
		pFnTossPawn = (UFunction*) UObject::GObjObjects()->Data[ 43010 ];

	ADVPawn_execTossPawn_Parms TossPawn_Parms;
	memcpy ( &TossPawn_Parms.Knockback, &Knockback, 0xC );

	this->ProcessEvent ( pFnTossPawn, &TossPawn_Parms, NULL );
};

// Function ForgeGame.DVPawn.PlayFootStepSound
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// int                            FootDown                       ( CPF_Parm )

void ADVPawn::eventPlayFootStepSound ( int FootDown )
{
	static UFunction* pFnPlayFootStepSound = NULL;

	if ( ! pFnPlayFootStepSound )
		pFnPlayFootStepSound = (UFunction*) UObject::GObjObjects()->Data[ 42999 ];

	ADVPawn_eventPlayFootStepSound_Parms PlayFootStepSound_Parms;
	PlayFootStepSound_Parms.FootDown = FootDown;

	this->ProcessEvent ( pFnPlayFootStepSound, &PlayFootStepSound_Parms, NULL );
};

// Function ForgeGame.DVPawn.AddVelocity
// [0x00024002] 
// Parameters infos:
// struct FVector                 NewVelocity                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )

void ADVPawn::AddVelocity ( struct FVector NewVelocity, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo )
{
	static UFunction* pFnAddVelocity = NULL;

	if ( ! pFnAddVelocity )
		pFnAddVelocity = (UFunction*) UObject::GObjObjects()->Data[ 42994 ];

	ADVPawn_execAddVelocity_Parms AddVelocity_Parms;
	memcpy ( &AddVelocity_Parms.NewVelocity, &NewVelocity, 0xC );
	memcpy ( &AddVelocity_Parms.HitLocation, &HitLocation, 0xC );
	AddVelocity_Parms.DamageType = DamageType;
	memcpy ( &AddVelocity_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnAddVelocity, &AddVelocity_Parms, NULL );
};

// Function ForgeGame.DVPawn.RemoveDisoriented
// [0x00024002] 
// Parameters infos:
// int                            Decrease                       ( CPF_OptionalParm | CPF_Parm )

void ADVPawn::RemoveDisoriented ( int Decrease )
{
	static UFunction* pFnRemoveDisoriented = NULL;

	if ( ! pFnRemoveDisoriented )
		pFnRemoveDisoriented = (UFunction*) UObject::GObjObjects()->Data[ 42992 ];

	ADVPawn_execRemoveDisoriented_Parms RemoveDisoriented_Parms;
	RemoveDisoriented_Parms.Decrease = Decrease;

	this->ProcessEvent ( pFnRemoveDisoriented, &RemoveDisoriented_Parms, NULL );
};

// Function ForgeGame.DVPawn.AddDisoriented
// [0x00024002] 
// Parameters infos:
// int                            Increase                       ( CPF_OptionalParm | CPF_Parm )

void ADVPawn::AddDisoriented ( int Increase )
{
	static UFunction* pFnAddDisoriented = NULL;

	if ( ! pFnAddDisoriented )
		pFnAddDisoriented = (UFunction*) UObject::GObjObjects()->Data[ 42990 ];

	ADVPawn_execAddDisoriented_Parms AddDisoriented_Parms;
	AddDisoriented_Parms.Increase = Increase;

	this->ProcessEvent ( pFnAddDisoriented, &AddDisoriented_Parms, NULL );
};

// Function ForgeGame.DVPawn.TakeFallingDamage
// [0x00020002] 
// Parameters infos:

void ADVPawn::TakeFallingDamage ( )
{
	static UFunction* pFnTakeFallingDamage = NULL;

	if ( ! pFnTakeFallingDamage )
		pFnTakeFallingDamage = (UFunction*) UObject::GObjObjects()->Data[ 42986 ];

	ADVPawn_execTakeFallingDamage_Parms TakeFallingDamage_Parms;

	this->ProcessEvent ( pFnTakeFallingDamage, &TakeFallingDamage_Parms, NULL );
};

// Function ForgeGame.DVPawn.GiveBuff
// [0x00020002] 
// Parameters infos:
// class UDVBuff*                 GivenBuff                      ( CPF_Parm )

void ADVPawn::GiveBuff ( class UDVBuff* GivenBuff )
{
	static UFunction* pFnGiveBuff = NULL;

	if ( ! pFnGiveBuff )
		pFnGiveBuff = (UFunction*) UObject::GObjObjects()->Data[ 42984 ];

	ADVPawn_execGiveBuff_Parms GiveBuff_Parms;
	GiveBuff_Parms.GivenBuff = GivenBuff;

	this->ProcessEvent ( pFnGiveBuff, &GiveBuff_Parms, NULL );
};

// Function ForgeGame.DVPawn.ArmorDiminish
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ArmorValue                     ( CPF_Parm )
// float                          Scale                          ( CPF_Parm )

float ADVPawn::ArmorDiminish ( int ArmorValue, float Scale )
{
	static UFunction* pFnArmorDiminish = NULL;

	if ( ! pFnArmorDiminish )
		pFnArmorDiminish = (UFunction*) UObject::GObjObjects()->Data[ 42980 ];

	ADVPawn_execArmorDiminish_Parms ArmorDiminish_Parms;
	ArmorDiminish_Parms.ArmorValue = ArmorValue;
	ArmorDiminish_Parms.Scale = Scale;

	this->ProcessEvent ( pFnArmorDiminish, &ArmorDiminish_Parms, NULL );

	return ArmorDiminish_Parms.ReturnValue;
};

// Function ForgeGame.DVPawn.GetArmorForType
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  Type                           ( CPF_Parm )
// unsigned long                  BaseArmor                      ( CPF_Parm )

int ADVPawn::GetArmorForType ( class UClass* Type, unsigned long BaseArmor )
{
	static UFunction* pFnGetArmorForType = NULL;

	if ( ! pFnGetArmorForType )
		pFnGetArmorForType = (UFunction*) UObject::GObjObjects()->Data[ 42965 ];

	ADVPawn_execGetArmorForType_Parms GetArmorForType_Parms;
	GetArmorForType_Parms.Type = Type;
	GetArmorForType_Parms.BaseArmor = BaseArmor;

	this->ProcessEvent ( pFnGetArmorForType, &GetArmorForType_Parms, NULL );

	return GetArmorForType_Parms.ReturnValue;
};

// Function ForgeGame.DVPawn.ReduceDamage
// [0x00820002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FSDamage                NewDamage                      ( CPF_Parm )

float ADVPawn::ReduceDamage ( struct FSDamage NewDamage )
{
	static UFunction* pFnReduceDamage = NULL;

	if ( ! pFnReduceDamage )
		pFnReduceDamage = (UFunction*) UObject::GObjObjects()->Data[ 42954 ];

	ADVPawn_execReduceDamage_Parms ReduceDamage_Parms;
	memcpy ( &ReduceDamage_Parms.NewDamage, &NewDamage, 0x8 );

	this->ProcessEvent ( pFnReduceDamage, &ReduceDamage_Parms, NULL );

	return ReduceDamage_Parms.ReturnValue;
};

// Function ForgeGame.DVPawn.StartRagdoll
// [0x00020102] 
// Parameters infos:

void ADVPawn::StartRagdoll ( )
{
	static UFunction* pFnStartRagdoll = NULL;

	if ( ! pFnStartRagdoll )
		pFnStartRagdoll = (UFunction*) UObject::GObjObjects()->Data[ 42944 ];

	ADVPawn_execStartRagdoll_Parms StartRagdoll_Parms;

	this->ProcessEvent ( pFnStartRagdoll, &StartRagdoll_Parms, NULL );
};

// Function ForgeGame.DVPawn.StopRagdoll
// [0x00020102] 
// Parameters infos:

void ADVPawn::StopRagdoll ( )
{
	static UFunction* pFnStopRagdoll = NULL;

	if ( ! pFnStopRagdoll )
		pFnStopRagdoll = (UFunction*) UObject::GObjObjects()->Data[ 42943 ];

	ADVPawn_execStopRagdoll_Parms StopRagdoll_Parms;

	this->ProcessEvent ( pFnStopRagdoll, &StopRagdoll_Parms, NULL );
};

// Function ForgeGame.DVPawn.SetRagdollAnimation
// [0x00020102] 
// Parameters infos:

void ADVPawn::SetRagdollAnimation ( )
{
	static UFunction* pFnSetRagdollAnimation = NULL;

	if ( ! pFnSetRagdollAnimation )
		pFnSetRagdollAnimation = (UFunction*) UObject::GObjObjects()->Data[ 42942 ];

	ADVPawn_execSetRagdollAnimation_Parms SetRagdollAnimation_Parms;

	this->ProcessEvent ( pFnSetRagdollAnimation, &SetRagdollAnimation_Parms, NULL );
};

// Function ForgeGame.DVPawn.PlayDying
// [0x00020102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLoc                         ( CPF_Parm )

void ADVPawn::PlayDying ( class UClass* DamageType, struct FVector HitLoc )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 42937 ];

	ADVPawn_execPlayDying_Parms PlayDying_Parms;
	PlayDying_Parms.DamageType = DamageType;
	memcpy ( &PlayDying_Parms.HitLoc, &HitLoc, 0xC );

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function ForgeGame.DVPawn.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ADVPawn::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 42922 ];

	ADVPawn_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function ForgeGame.DVPawn.NotifyHealthChange
// [0x00020002] 
// Parameters infos:
// class ADVPlayerController*     Attacker                       ( CPF_Parm )
// float                          HealthChange                   ( CPF_Parm )

void ADVPawn::NotifyHealthChange ( class ADVPlayerController* Attacker, float HealthChange )
{
	static UFunction* pFnNotifyHealthChange = NULL;

	if ( ! pFnNotifyHealthChange )
		pFnNotifyHealthChange = (UFunction*) UObject::GObjObjects()->Data[ 42919 ];

	ADVPawn_execNotifyHealthChange_Parms NotifyHealthChange_Parms;
	NotifyHealthChange_Parms.Attacker = Attacker;
	NotifyHealthChange_Parms.HealthChange = HealthChange;

	this->ProcessEvent ( pFnNotifyHealthChange, &NotifyHealthChange_Parms, NULL );
};

// Function ForgeGame.DVPawn.SimulatedPhysicsBlendOut
// [0x00020102] 
// Parameters infos:

void ADVPawn::SimulatedPhysicsBlendOut ( )
{
	static UFunction* pFnSimulatedPhysicsBlendOut = NULL;

	if ( ! pFnSimulatedPhysicsBlendOut )
		pFnSimulatedPhysicsBlendOut = (UFunction*) UObject::GObjObjects()->Data[ 42918 ];

	ADVPawn_execSimulatedPhysicsBlendOut_Parms SimulatedPhysicsBlendOut_Parms;

	this->ProcessEvent ( pFnSimulatedPhysicsBlendOut, &SimulatedPhysicsBlendOut_Parms, NULL );
};

// Function ForgeGame.DVPawn.SimulatingPhysics
// [0x00020102] 
// Parameters infos:

void ADVPawn::SimulatingPhysics ( )
{
	static UFunction* pFnSimulatingPhysics = NULL;

	if ( ! pFnSimulatingPhysics )
		pFnSimulatingPhysics = (UFunction*) UObject::GObjObjects()->Data[ 42917 ];

	ADVPawn_execSimulatingPhysics_Parms SimulatingPhysics_Parms;

	this->ProcessEvent ( pFnSimulatingPhysics, &SimulatingPhysics_Parms, NULL );
};

// Function ForgeGame.DVPawn.SimulatingPhysicsBlendIn
// [0x00020102] 
// Parameters infos:

void ADVPawn::SimulatingPhysicsBlendIn ( )
{
	static UFunction* pFnSimulatingPhysicsBlendIn = NULL;

	if ( ! pFnSimulatingPhysicsBlendIn )
		pFnSimulatingPhysicsBlendIn = (UFunction*) UObject::GObjObjects()->Data[ 42916 ];

	ADVPawn_execSimulatingPhysicsBlendIn_Parms SimulatingPhysicsBlendIn_Parms;

	this->ProcessEvent ( pFnSimulatingPhysicsBlendIn, &SimulatingPhysicsBlendIn_Parms, NULL );
};

// Function ForgeGame.DVPawn.BlendInPhysics
// [0x00020102] 
// Parameters infos:

void ADVPawn::BlendInPhysics ( )
{
	static UFunction* pFnBlendInPhysics = NULL;

	if ( ! pFnBlendInPhysics )
		pFnBlendInPhysics = (UFunction*) UObject::GObjObjects()->Data[ 42915 ];

	ADVPawn_execBlendInPhysics_Parms BlendInPhysics_Parms;

	this->ProcessEvent ( pFnBlendInPhysics, &BlendInPhysics_Parms, NULL );
};

// Function ForgeGame.DVPawn.PlayHitReaction
// [0x00020102] 
// Parameters infos:
// struct FVector                 AttackImpulse                  ( CPF_Parm )

void ADVPawn::PlayHitReaction ( struct FVector AttackImpulse )
{
	static UFunction* pFnPlayHitReaction = NULL;

	if ( ! pFnPlayHitReaction )
		pFnPlayHitReaction = (UFunction*) UObject::GObjObjects()->Data[ 42913 ];

	ADVPawn_execPlayHitReaction_Parms PlayHitReaction_Parms;
	memcpy ( &PlayHitReaction_Parms.AttackImpulse, &AttackImpulse, 0xC );

	this->ProcessEvent ( pFnPlayHitReaction, &PlayHitReaction_Parms, NULL );
};

// Function ForgeGame.DVPawn.ClientTargetHit
// [0x01020142] 
// Parameters infos:
// class ADVPawn*                 EnemyHit                       ( CPF_Parm )
// unsigned long                  IsHeal                         ( CPF_Parm )
// unsigned long                  ExactlyTargetted               ( CPF_Parm )

void ADVPawn::ClientTargetHit ( class ADVPawn* EnemyHit, unsigned long IsHeal, unsigned long ExactlyTargetted )
{
	static UFunction* pFnClientTargetHit = NULL;

	if ( ! pFnClientTargetHit )
		pFnClientTargetHit = (UFunction*) UObject::GObjObjects()->Data[ 42907 ];

	ADVPawn_execClientTargetHit_Parms ClientTargetHit_Parms;
	ClientTargetHit_Parms.EnemyHit = EnemyHit;
	ClientTargetHit_Parms.IsHeal = IsHeal;
	ClientTargetHit_Parms.ExactlyTargetted = ExactlyTargetted;

	this->ProcessEvent ( pFnClientTargetHit, &ClientTargetHit_Parms, NULL );
};

// Function ForgeGame.DVPawn.AttackMisses
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UDVLogEntry*             LogEntry                       ( CPF_OptionalParm | CPF_Parm )
// class UDVAttack*               Attack                         ( CPF_Parm | CPF_OutParm )

bool ADVPawn::AttackMisses ( class UDVLogEntry* LogEntry, class UDVAttack** Attack )
{
	static UFunction* pFnAttackMisses = NULL;

	if ( ! pFnAttackMisses )
		pFnAttackMisses = (UFunction*) UObject::GObjObjects()->Data[ 42903 ];

	ADVPawn_execAttackMisses_Parms AttackMisses_Parms;
	AttackMisses_Parms.LogEntry = LogEntry;

	this->ProcessEvent ( pFnAttackMisses, &AttackMisses_Parms, NULL );

	if ( Attack )
		*Attack = AttackMisses_Parms.Attack;

	return AttackMisses_Parms.ReturnValue;
};

// Function ForgeGame.DVPawn.CheckSmokeMiss
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 AttackOrigin                   ( CPF_Parm )

bool ADVPawn::CheckSmokeMiss ( struct FVector AttackOrigin )
{
	static UFunction* pFnCheckSmokeMiss = NULL;

	if ( ! pFnCheckSmokeMiss )
		pFnCheckSmokeMiss = (UFunction*) UObject::GObjObjects()->Data[ 42892 ];

	ADVPawn_execCheckSmokeMiss_Parms CheckSmokeMiss_Parms;
	memcpy ( &CheckSmokeMiss_Parms.AttackOrigin, &AttackOrigin, 0xC );

	this->ProcessEvent ( pFnCheckSmokeMiss, &CheckSmokeMiss_Parms, NULL );

	return CheckSmokeMiss_Parms.ReturnValue;
};

// Function ForgeGame.DVPawn.CapHealing
// [0x00C20002] 
// Parameters infos:
// float                          TotalDamageDone                ( CPF_Parm | CPF_OutParm )

void ADVPawn::CapHealing ( float* TotalDamageDone )
{
	static UFunction* pFnCapHealing = NULL;

	if ( ! pFnCapHealing )
		pFnCapHealing = (UFunction*) UObject::GObjObjects()->Data[ 42888 ];

	ADVPawn_execCapHealing_Parms CapHealing_Parms;

	this->ProcessEvent ( pFnCapHealing, &CapHealing_Parms, NULL );

	if ( TotalDamageDone )
		*TotalDamageDone = CapHealing_Parms.TotalDamageDone;
};

// Function ForgeGame.DVPawn.NotifyKismetOfAttackResult
// [0x00020002] 
// Parameters infos:
// class ADVPawn*                 TheAttacker                    ( CPF_Parm )
// class ADVPawn*                 TheTarget                      ( CPF_Parm )
// unsigned char                  TheResult                      ( CPF_Parm )

void ADVPawn::NotifyKismetOfAttackResult ( class ADVPawn* TheAttacker, class ADVPawn* TheTarget, unsigned char TheResult )
{
	static UFunction* pFnNotifyKismetOfAttackResult = NULL;

	if ( ! pFnNotifyKismetOfAttackResult )
		pFnNotifyKismetOfAttackResult = (UFunction*) UObject::GObjObjects()->Data[ 42877 ];

	ADVPawn_execNotifyKismetOfAttackResult_Parms NotifyKismetOfAttackResult_Parms;
	NotifyKismetOfAttackResult_Parms.TheAttacker = TheAttacker;
	NotifyKismetOfAttackResult_Parms.TheTarget = TheTarget;
	NotifyKismetOfAttackResult_Parms.TheResult = TheResult;

	this->ProcessEvent ( pFnNotifyKismetOfAttackResult, &NotifyKismetOfAttackResult_Parms, NULL );
};

// Function ForgeGame.DVPawn.TakeAttack
// [0x00C20002] 
// Parameters infos:
// class UDVAttack*               Attack                         ( CPF_Parm | CPF_OutParm )

void ADVPawn::TakeAttack ( class UDVAttack** Attack )
{
	static UFunction* pFnTakeAttack = NULL;

	if ( ! pFnTakeAttack )
		pFnTakeAttack = (UFunction*) UObject::GObjObjects()->Data[ 42777 ];

	ADVPawn_execTakeAttack_Parms TakeAttack_Parms;

	this->ProcessEvent ( pFnTakeAttack, &TakeAttack_Parms, NULL );

	if ( Attack )
		*Attack = TakeAttack_Parms.Attack;
};

// Function ForgeGame.DVPawn.TakeEnvironmentalDamage
// [0x00024002] 
// Parameters infos:
// float                          TotalDamageDone                ( CPF_Parm )
// unsigned long                  CreditLastHitBy                ( CPF_OptionalParm | CPF_Parm )

void ADVPawn::TakeEnvironmentalDamage ( float TotalDamageDone, unsigned long CreditLastHitBy )
{
	static UFunction* pFnTakeEnvironmentalDamage = NULL;

	if ( ! pFnTakeEnvironmentalDamage )
		pFnTakeEnvironmentalDamage = (UFunction*) UObject::GObjObjects()->Data[ 42773 ];

	ADVPawn_execTakeEnvironmentalDamage_Parms TakeEnvironmentalDamage_Parms;
	TakeEnvironmentalDamage_Parms.TotalDamageDone = TotalDamageDone;
	TakeEnvironmentalDamage_Parms.CreditLastHitBy = CreditLastHitBy;

	this->ProcessEvent ( pFnTakeEnvironmentalDamage, &TakeEnvironmentalDamage_Parms, NULL );
};

// Function ForgeGame.DVPawn.Suicide
// [0x00020002] 
// Parameters infos:

void ADVPawn::Suicide ( )
{
	static UFunction* pFnSuicide = NULL;

	if ( ! pFnSuicide )
		pFnSuicide = (UFunction*) UObject::GObjObjects()->Data[ 42772 ];

	ADVPawn_execSuicide_Parms Suicide_Parms;

	this->ProcessEvent ( pFnSuicide, &Suicide_Parms, NULL );
};

// Function ForgeGame.DVPawn.TakeDamage
// [0x00024800] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ADVPawn::eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 42764 ];

	ADVPawn_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function ForgeGame.DVPawn.DoRegens
// [0x00080102] 
// Parameters infos:

void ADVPawn::DoRegens ( )
{
	static UFunction* pFnDoRegens = NULL;

	if ( ! pFnDoRegens )
		pFnDoRegens = (UFunction*) UObject::GObjObjects()->Data[ 42763 ];

	ADVPawn_execDoRegens_Parms DoRegens_Parms;

	this->ProcessEvent ( pFnDoRegens, &DoRegens_Parms, NULL );
};

// Function ForgeGame.DVPawn.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVPawn::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 42755 ];

	ADVPawn_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVPawn.DoJump
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bUpdating                      ( CPF_Parm )

bool ADVPawn::DoJump ( unsigned long bUpdating )
{
	static UFunction* pFnDoJump = NULL;

	if ( ! pFnDoJump )
		pFnDoJump = (UFunction*) UObject::GObjObjects()->Data[ 42752 ];

	ADVPawn_execDoJump_Parms DoJump_Parms;
	DoJump_Parms.bUpdating = bUpdating;

	this->ProcessEvent ( pFnDoJump, &DoJump_Parms, NULL );

	return DoJump_Parms.ReturnValue;
};

// Function ForgeGame.DVPawn.PossessedBy
// [0x00020002] 
// Parameters infos:
// class AController*             C                              ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ADVPawn::PossessedBy ( class AController* C, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 42746 ];

	ADVPawn_execPossessedBy_Parms PossessedBy_Parms;
	PossessedBy_Parms.C = C;
	PossessedBy_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function ForgeGame.DVPawn.MatchStarting
// [0x00020002] 
// Parameters infos:

void ADVPawn::MatchStarting ( )
{
	static UFunction* pFnMatchStarting = NULL;

	if ( ! pFnMatchStarting )
		pFnMatchStarting = (UFunction*) UObject::GObjObjects()->Data[ 42745 ];

	ADVPawn_execMatchStarting_Parms MatchStarting_Parms;

	this->ProcessEvent ( pFnMatchStarting, &MatchStarting_Parms, NULL );
};

// Function ForgeGame.DVPawn.IsPawnReady
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADVPawn::IsPawnReady ( )
{
	static UFunction* pFnIsPawnReady = NULL;

	if ( ! pFnIsPawnReady )
		pFnIsPawnReady = (UFunction*) UObject::GObjObjects()->Data[ 42743 ];

	ADVPawn_execIsPawnReady_Parms IsPawnReady_Parms;

	this->ProcessEvent ( pFnIsPawnReady, &IsPawnReady_Parms, NULL );

	return IsPawnReady_Parms.ReturnValue;
};

// Function ForgeGame.DVPawn.StopsProjectile
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AProjectile*             P                              ( CPF_Parm )

bool ADVPawn::StopsProjectile ( class AProjectile* P )
{
	static UFunction* pFnStopsProjectile = NULL;

	if ( ! pFnStopsProjectile )
		pFnStopsProjectile = (UFunction*) UObject::GObjObjects()->Data[ 42739 ];

	ADVPawn_execStopsProjectile_Parms StopsProjectile_Parms;
	StopsProjectile_Parms.P = P;

	this->ProcessEvent ( pFnStopsProjectile, &StopsProjectile_Parms, NULL );

	return StopsProjectile_Parms.ReturnValue;
};

// Function ForgeGame.DVPawn.InitiateStats
// [0x00020102] 
// Parameters infos:

void ADVPawn::InitiateStats ( )
{
	static UFunction* pFnInitiateStats = NULL;

	if ( ! pFnInitiateStats )
		pFnInitiateStats = (UFunction*) UObject::GObjObjects()->Data[ 42738 ];

	ADVPawn_execInitiateStats_Parms InitiateStats_Parms;

	this->ProcessEvent ( pFnInitiateStats, &InitiateStats_Parms, NULL );
};

// Function ForgeGame.DVPawn.ShouldDisplayOnHud
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADVPawn::ShouldDisplayOnHud ( )
{
	static UFunction* pFnShouldDisplayOnHud = NULL;

	if ( ! pFnShouldDisplayOnHud )
		pFnShouldDisplayOnHud = (UFunction*) UObject::GObjObjects()->Data[ 42736 ];

	ADVPawn_execShouldDisplayOnHud_Parms ShouldDisplayOnHud_Parms;

	this->ProcessEvent ( pFnShouldDisplayOnHud, &ShouldDisplayOnHud_Parms, NULL );

	return ShouldDisplayOnHud_Parms.ReturnValue;
};

// Function ForgeGame.DVPawn.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVPawn::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 42734 ];

	ADVPawn_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVPawn.RemoveResource
// [0x00020002] 
// Parameters infos:
// float                          Amount                         ( CPF_Parm )

void ADVPawn::RemoveResource ( float Amount )
{
	static UFunction* pFnRemoveResource = NULL;

	if ( ! pFnRemoveResource )
		pFnRemoveResource = (UFunction*) UObject::GObjObjects()->Data[ 42730 ];

	ADVPawn_execRemoveResource_Parms RemoveResource_Parms;
	RemoveResource_Parms.Amount = Amount;

	this->ProcessEvent ( pFnRemoveResource, &RemoveResource_Parms, NULL );
};

// Function ForgeGame.DVPawn.ResetCollision
// [0x00020002] 
// Parameters infos:

void ADVPawn::ResetCollision ( )
{
	static UFunction* pFnResetCollision = NULL;

	if ( ! pFnResetCollision )
		pFnResetCollision = (UFunction*) UObject::GObjObjects()->Data[ 42729 ];

	ADVPawn_execResetCollision_Parms ResetCollision_Parms;

	this->ProcessEvent ( pFnResetCollision, &ResetCollision_Parms, NULL );
};

// Function ForgeGame.DVPawn.StuckOnPawn
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   OtherPawn                      ( CPF_Parm )

void ADVPawn::eventStuckOnPawn ( class APawn* OtherPawn )
{
	static UFunction* pFnStuckOnPawn = NULL;

	if ( ! pFnStuckOnPawn )
		pFnStuckOnPawn = (UFunction*) UObject::GObjObjects()->Data[ 42727 ];

	ADVPawn_eventStuckOnPawn_Parms StuckOnPawn_Parms;
	StuckOnPawn_Parms.OtherPawn = OtherPawn;

	this->ProcessEvent ( pFnStuckOnPawn, &StuckOnPawn_Parms, NULL );
};

// Function ForgeGame.DVPawn.EncroachedBy
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void ADVPawn::eventEncroachedBy ( class AActor* Other )
{
	static UFunction* pFnEncroachedBy = NULL;

	if ( ! pFnEncroachedBy )
		pFnEncroachedBy = (UFunction*) UObject::GObjObjects()->Data[ 42725 ];

	ADVPawn_eventEncroachedBy_Parms EncroachedBy_Parms;
	EncroachedBy_Parms.Other = Other;

	this->ProcessEvent ( pFnEncroachedBy, &EncroachedBy_Parms, NULL );
};

// Function ForgeGame.DVPawn.PlayGetMedal
// [0x00020002] 
// Parameters infos:

void ADVPawn::PlayGetMedal ( )
{
	static UFunction* pFnPlayGetMedal = NULL;

	if ( ! pFnPlayGetMedal )
		pFnPlayGetMedal = (UFunction*) UObject::GObjObjects()->Data[ 42724 ];

	ADVPawn_execPlayGetMedal_Parms PlayGetMedal_Parms;

	this->ProcessEvent ( pFnPlayGetMedal, &PlayGetMedal_Parms, NULL );
};

// Function ForgeGame.DVPawn.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class USkeletalMeshComponent*  SkelComp                       ( CPF_Parm | CPF_EditInline )

void ADVPawn::eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp )
{
	static UFunction* pFnPostInitAnimTree = NULL;

	if ( ! pFnPostInitAnimTree )
		pFnPostInitAnimTree = (UFunction*) UObject::GObjObjects()->Data[ 42722 ];

	ADVPawn_eventPostInitAnimTree_Parms PostInitAnimTree_Parms;
	PostInitAnimTree_Parms.SkelComp = SkelComp;

	this->ProcessEvent ( pFnPostInitAnimTree, &PostInitAnimTree_Parms, NULL );
};

// Function ForgeGame.DVPawn.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVPawn::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 42721 ];

	ADVPawn_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVPawn::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 42712 ];

	ADVPawn_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVPhysicalMaterialProperties.InstanceInteraction
// [0x00826103] ( FUNC_Final )
// Parameters infos:
// struct FSGenericInteraction    GenericInteraction             ( CPF_Parm | CPF_NeedCtorLink )
// struct FVector                 Location                       ( CPF_Parm )
// unsigned long                  UseOverrideRotation            ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                OverrideRotation               ( CPF_OptionalParm | CPF_Parm )
// class USkeletalMeshComponent*  SkeletalMeshToAttachTo         ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
// TArray< struct FName >         AttachmentSocketNames          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  SkipIfDedicatedServer          ( CPF_OptionalParm | CPF_Parm )

void UDVPhysicalMaterialProperties::InstanceInteraction ( struct FSGenericInteraction GenericInteraction, struct FVector Location, unsigned long UseOverrideRotation, struct FRotator OverrideRotation, class USkeletalMeshComponent* SkeletalMeshToAttachTo, TArray< struct FName > AttachmentSocketNames, unsigned long SkipIfDedicatedServer )
{
	static UFunction* pFnInstanceInteraction = NULL;

	if ( ! pFnInstanceInteraction )
		pFnInstanceInteraction = (UFunction*) UObject::GObjObjects()->Data[ 42576 ];

	UDVPhysicalMaterialProperties_execInstanceInteraction_Parms InstanceInteraction_Parms;
	memcpy ( &InstanceInteraction_Parms.GenericInteraction, &GenericInteraction, 0x50 );
	memcpy ( &InstanceInteraction_Parms.Location, &Location, 0xC );
	InstanceInteraction_Parms.UseOverrideRotation = UseOverrideRotation;
	memcpy ( &InstanceInteraction_Parms.OverrideRotation, &OverrideRotation, 0xC );
	InstanceInteraction_Parms.SkeletalMeshToAttachTo = SkeletalMeshToAttachTo;
	memcpy ( &InstanceInteraction_Parms.AttachmentSocketNames, &AttachmentSocketNames, 0xC );
	InstanceInteraction_Parms.SkipIfDedicatedServer = SkipIfDedicatedServer;

	this->ProcessEvent ( pFnInstanceInteraction, &InstanceInteraction_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpirtualFervor.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilitySpirtualFervor::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 44290 ];

	ADVAbilitySpirtualFervor_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpirtualFervor.Reset
// [0x00020002] 
// Parameters infos:

void ADVAbilitySpirtualFervor::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 44289 ];

	ADVAbilitySpirtualFervor_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpirtualFervor.ClientRemoveAllStacks
// [0x010201C2] 
// Parameters infos:
// class ADVPlayerReplicationInfo* PRI                            ( CPF_Parm )

void ADVAbilitySpirtualFervor::ClientRemoveAllStacks ( class ADVPlayerReplicationInfo* PRI )
{
	static UFunction* pFnClientRemoveAllStacks = NULL;

	if ( ! pFnClientRemoveAllStacks )
		pFnClientRemoveAllStacks = (UFunction*) UObject::GObjObjects()->Data[ 44287 ];

	ADVAbilitySpirtualFervor_execClientRemoveAllStacks_Parms ClientRemoveAllStacks_Parms;
	ClientRemoveAllStacks_Parms.PRI = PRI;

	this->ProcessEvent ( pFnClientRemoveAllStacks, &ClientRemoveAllStacks_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpirtualFervor.ClientRemoveStack
// [0x010201C2] 
// Parameters infos:
// class ADVPlayerReplicationInfo* PRI                            ( CPF_Parm )

void ADVAbilitySpirtualFervor::ClientRemoveStack ( class ADVPlayerReplicationInfo* PRI )
{
	static UFunction* pFnClientRemoveStack = NULL;

	if ( ! pFnClientRemoveStack )
		pFnClientRemoveStack = (UFunction*) UObject::GObjObjects()->Data[ 44285 ];

	ADVAbilitySpirtualFervor_execClientRemoveStack_Parms ClientRemoveStack_Parms;
	ClientRemoveStack_Parms.PRI = PRI;

	this->ProcessEvent ( pFnClientRemoveStack, &ClientRemoveStack_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpirtualFervor.ClientAddStack
// [0x010201C2] 
// Parameters infos:
// class ADVPlayerReplicationInfo* PRI                            ( CPF_Parm )

void ADVAbilitySpirtualFervor::ClientAddStack ( class ADVPlayerReplicationInfo* PRI )
{
	static UFunction* pFnClientAddStack = NULL;

	if ( ! pFnClientAddStack )
		pFnClientAddStack = (UFunction*) UObject::GObjObjects()->Data[ 44283 ];

	ADVAbilitySpirtualFervor_execClientAddStack_Parms ClientAddStack_Parms;
	ClientAddStack_Parms.PRI = PRI;

	this->ProcessEvent ( pFnClientAddStack, &ClientAddStack_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpirtualFervor.RemoveAllStacks
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADVPawn*                 Pawn                           ( CPF_Parm )

int ADVAbilitySpirtualFervor::RemoveAllStacks ( class ADVPawn* Pawn )
{
	static UFunction* pFnRemoveAllStacks = NULL;

	if ( ! pFnRemoveAllStacks )
		pFnRemoveAllStacks = (UFunction*) UObject::GObjObjects()->Data[ 44239 ];

	ADVAbilitySpirtualFervor_execRemoveAllStacks_Parms RemoveAllStacks_Parms;
	RemoveAllStacks_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnRemoveAllStacks, &RemoveAllStacks_Parms, NULL );

	return RemoveAllStacks_Parms.ReturnValue;
};

// Function ForgeGame.DVAbilitySpirtualFervor.RemoveStack
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADVPawn*                 Pawn                           ( CPF_Parm )

bool ADVAbilitySpirtualFervor::RemoveStack ( class ADVPawn* Pawn )
{
	static UFunction* pFnRemoveStack = NULL;

	if ( ! pFnRemoveStack )
		pFnRemoveStack = (UFunction*) UObject::GObjObjects()->Data[ 44276 ];

	ADVAbilitySpirtualFervor_execRemoveStack_Parms RemoveStack_Parms;
	RemoveStack_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnRemoveStack, &RemoveStack_Parms, NULL );

	return RemoveStack_Parms.ReturnValue;
};

// Function ForgeGame.DVAbilitySpirtualFervor.UpdateStacks
// [0x00020002] 
// Parameters infos:

void ADVAbilitySpirtualFervor::UpdateStacks ( )
{
	static UFunction* pFnUpdateStacks = NULL;

	if ( ! pFnUpdateStacks )
		pFnUpdateStacks = (UFunction*) UObject::GObjObjects()->Data[ 44275 ];

	ADVAbilitySpirtualFervor_execUpdateStacks_Parms UpdateStacks_Parms;

	this->ProcessEvent ( pFnUpdateStacks, &UpdateStacks_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpirtualFervor.UpdateBeamEmitter
// [0x00020102] 
// Parameters infos:
// struct FVector                 EndLocation                    ( CPF_Parm )

void ADVAbilitySpirtualFervor::UpdateBeamEmitter ( struct FVector EndLocation )
{
	static UFunction* pFnUpdateBeamEmitter = NULL;

	if ( ! pFnUpdateBeamEmitter )
		pFnUpdateBeamEmitter = (UFunction*) UObject::GObjObjects()->Data[ 44273 ];

	ADVAbilitySpirtualFervor_execUpdateBeamEmitter_Parms UpdateBeamEmitter_Parms;
	memcpy ( &UpdateBeamEmitter_Parms.EndLocation, &EndLocation, 0xC );

	this->ProcessEvent ( pFnUpdateBeamEmitter, &UpdateBeamEmitter_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpirtualFervor.Tick
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAbilitySpirtualFervor::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44267 ];

	ADVAbilitySpirtualFervor_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpirtualFervor.StopAbility
// [0x00020002] 
// Parameters infos:

void ADVAbilitySpirtualFervor::StopAbility ( )
{
	static UFunction* pFnStopAbility = NULL;

	if ( ! pFnStopAbility )
		pFnStopAbility = (UFunction*) UObject::GObjObjects()->Data[ 44266 ];

	ADVAbilitySpirtualFervor_execStopAbility_Parms StopAbility_Parms;

	this->ProcessEvent ( pFnStopAbility, &StopAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpirtualFervor.Interrupt
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  SelfInterrupt                  ( CPF_Parm )

bool ADVAbilitySpirtualFervor::Interrupt ( unsigned long SelfInterrupt )
{
	static UFunction* pFnInterrupt = NULL;

	if ( ! pFnInterrupt )
		pFnInterrupt = (UFunction*) UObject::GObjObjects()->Data[ 44263 ];

	ADVAbilitySpirtualFervor_execInterrupt_Parms Interrupt_Parms;
	Interrupt_Parms.SelfInterrupt = SelfInterrupt;

	this->ProcessEvent ( pFnInterrupt, &Interrupt_Parms, NULL );

	return Interrupt_Parms.ReturnValue;
};

// Function ForgeGame.DVAbilitySpirtualFervor.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilitySpirtualFervor::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44262 ];

	ADVAbilitySpirtualFervor_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpirtualFervor.PerformAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilitySpirtualFervor::PerformAbility ( )
{
	static UFunction* pFnPerformAbility = NULL;

	if ( ! pFnPerformAbility )
		pFnPerformAbility = (UFunction*) UObject::GObjObjects()->Data[ 44260 ];

	ADVAbilitySpirtualFervor_execPerformAbility_Parms PerformAbility_Parms;

	this->ProcessEvent ( pFnPerformAbility, &PerformAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpirtualFervor.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbilitySpirtualFervor::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 44258 ];

	ADVAbilitySpirtualFervor_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAttachment.ForceMipLevels
// [0x00020100] 
// Parameters infos:

void ADVAttachment::ForceMipLevels ( )
{
	static UFunction* pFnForceMipLevels = NULL;

	if ( ! pFnForceMipLevels )
		pFnForceMipLevels = (UFunction*) UObject::GObjObjects()->Data[ 45111 ];

	ADVAttachment_execForceMipLevels_Parms ForceMipLevels_Parms;

	this->ProcessEvent ( pFnForceMipLevels, &ForceMipLevels_Parms, NULL );
};

// Function ForgeGame.DVAttachment.ToggleHidden
// [0x00020102] 
// Parameters infos:
// unsigned long                  ShouldHide                     ( CPF_Parm )

void ADVAttachment::ToggleHidden ( unsigned long ShouldHide )
{
	static UFunction* pFnToggleHidden = NULL;

	if ( ! pFnToggleHidden )
		pFnToggleHidden = (UFunction*) UObject::GObjObjects()->Data[ 45108 ];

	ADVAttachment_execToggleHidden_Parms ToggleHidden_Parms;
	ToggleHidden_Parms.ShouldHide = ShouldHide;

	this->ProcessEvent ( pFnToggleHidden, &ToggleHidden_Parms, NULL );
};

// Function ForgeGame.DVAttachment.NotifyOwnerDied
// [0x00020102] 
// Parameters infos:
// class APawn*                   Pawn                           ( CPF_Parm )
// struct FName                   SocketName                     ( CPF_Parm )

void ADVAttachment::NotifyOwnerDied ( class APawn* Pawn, struct FName SocketName )
{
	static UFunction* pFnNotifyOwnerDied = NULL;

	if ( ! pFnNotifyOwnerDied )
		pFnNotifyOwnerDied = (UFunction*) UObject::GObjObjects()->Data[ 45105 ];

	ADVAttachment_execNotifyOwnerDied_Parms NotifyOwnerDied_Parms;
	NotifyOwnerDied_Parms.Pawn = Pawn;
	memcpy ( &NotifyOwnerDied_Parms.SocketName, &SocketName, 0x8 );

	this->ProcessEvent ( pFnNotifyOwnerDied, &NotifyOwnerDied_Parms, NULL );
};

// Function ForgeGame.DVAttachment.PlayDetermined
// [0x00020100] 
// Parameters infos:
// unsigned long                  Determined                     ( CPF_Parm )

void ADVAttachment::PlayDetermined ( unsigned long Determined )
{
	static UFunction* pFnPlayDetermined = NULL;

	if ( ! pFnPlayDetermined )
		pFnPlayDetermined = (UFunction*) UObject::GObjObjects()->Data[ 45103 ];

	ADVAttachment_execPlayDetermined_Parms PlayDetermined_Parms;
	PlayDetermined_Parms.Determined = Determined;

	this->ProcessEvent ( pFnPlayDetermined, &PlayDetermined_Parms, NULL );
};

// Function ForgeGame.DVAttachment.SetStealth
// [0x00020100] 
// Parameters infos:
// unsigned long                  IsStealthed                    ( CPF_Parm )
// unsigned long                  IsCamouflaged                  ( CPF_Parm )

void ADVAttachment::SetStealth ( unsigned long IsStealthed, unsigned long IsCamouflaged )
{
	static UFunction* pFnSetStealth = NULL;

	if ( ! pFnSetStealth )
		pFnSetStealth = (UFunction*) UObject::GObjObjects()->Data[ 45100 ];

	ADVAttachment_execSetStealth_Parms SetStealth_Parms;
	SetStealth_Parms.IsStealthed = IsStealthed;
	SetStealth_Parms.IsCamouflaged = IsCamouflaged;

	this->ProcessEvent ( pFnSetStealth, &SetStealth_Parms, NULL );
};

// Function ForgeGame.DVAttachment.AttachToSocketOnSkeletalMeshComponent
// [0x00020102] 
// Parameters infos:
// class USkeletalMeshComponent*  BaseSkeletalMeshComponent      ( CPF_Parm | CPF_EditInline )
// struct FName                   SocketName                     ( CPF_Parm )

void ADVAttachment::AttachToSocketOnSkeletalMeshComponent ( class USkeletalMeshComponent* BaseSkeletalMeshComponent, struct FName SocketName )
{
	static UFunction* pFnAttachToSocketOnSkeletalMeshComponent = NULL;

	if ( ! pFnAttachToSocketOnSkeletalMeshComponent )
		pFnAttachToSocketOnSkeletalMeshComponent = (UFunction*) UObject::GObjObjects()->Data[ 45095 ];

	ADVAttachment_execAttachToSocketOnSkeletalMeshComponent_Parms AttachToSocketOnSkeletalMeshComponent_Parms;
	AttachToSocketOnSkeletalMeshComponent_Parms.BaseSkeletalMeshComponent = BaseSkeletalMeshComponent;
	memcpy ( &AttachToSocketOnSkeletalMeshComponent_Parms.SocketName, &SocketName, 0x8 );

	this->ProcessEvent ( pFnAttachToSocketOnSkeletalMeshComponent, &AttachToSocketOnSkeletalMeshComponent_Parms, NULL );
};

// Function ForgeGame.DVAttachment.AttachToSocket
// [0x00020102] 
// Parameters infos:
// class ADVPawn*                 DVPawn                         ( CPF_Parm )
// struct FName                   SocketName                     ( CPF_Parm )

void ADVAttachment::AttachToSocket ( class ADVPawn* DVPawn, struct FName SocketName )
{
	static UFunction* pFnAttachToSocket = NULL;

	if ( ! pFnAttachToSocket )
		pFnAttachToSocket = (UFunction*) UObject::GObjObjects()->Data[ 45091 ];

	ADVAttachment_execAttachToSocket_Parms AttachToSocket_Parms;
	AttachToSocket_Parms.DVPawn = DVPawn;
	memcpy ( &AttachToSocket_Parms.SocketName, &SocketName, 0x8 );

	this->ProcessEvent ( pFnAttachToSocket, &AttachToSocket_Parms, NULL );
};

// Function ForgeGame.DVAttachment.GetComponent
// [0x00020100] 
// Parameters infos:
// class UPrimitiveComponent*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class UPrimitiveComponent* ADVAttachment::GetComponent ( )
{
	static UFunction* pFnGetComponent = NULL;

	if ( ! pFnGetComponent )
		pFnGetComponent = (UFunction*) UObject::GObjObjects()->Data[ 43325 ];

	ADVAttachment_execGetComponent_Parms GetComponent_Parms;

	this->ProcessEvent ( pFnGetComponent, &GetComponent_Parms, NULL );

	return GetComponent_Parms.ReturnValue;
};

// Function ForgeGame.DVAttachment.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVAttachment::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 45090 ];

	ADVAttachment_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVAbilityMoltenCage.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityMoltenCage::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 44042 ];

	ADVAbilityMoltenCage_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityMoltenCage.HitsActor
// [0x00020002] 
// Parameters infos:
// class ADVPawn*                 HitPawn                        ( CPF_Parm )
// class AActor*                  Other                          ( CPF_Parm )

void ADVAbilityMoltenCage::HitsActor ( class ADVPawn* HitPawn, class AActor* Other )
{
	static UFunction* pFnHitsActor = NULL;

	if ( ! pFnHitsActor )
		pFnHitsActor = (UFunction*) UObject::GObjObjects()->Data[ 44038 ];

	ADVAbilityMoltenCage_execHitsActor_Parms HitsActor_Parms;
	HitsActor_Parms.HitPawn = HitPawn;
	HitsActor_Parms.Other = Other;

	this->ProcessEvent ( pFnHitsActor, &HitsActor_Parms, NULL );
};

// Function ForgeGame.DVAbilityMoltenCage.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityMoltenCage::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44037 ];

	ADVAbilityMoltenCage_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityMoltenCage.ProjectileHit
// [0x00020002] 
// Parameters infos:
// class ADVPawn*                 HitPawn                        ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// class ADVProjectile*           Projectile                     ( CPF_Parm )

void ADVAbilityMoltenCage::ProjectileHit ( class ADVPawn* HitPawn, struct FVector HitLocation, struct FVector HitNormal, class ADVProjectile* Projectile )
{
	static UFunction* pFnProjectileHit = NULL;

	if ( ! pFnProjectileHit )
		pFnProjectileHit = (UFunction*) UObject::GObjObjects()->Data[ 44032 ];

	ADVAbilityMoltenCage_execProjectileHit_Parms ProjectileHit_Parms;
	ProjectileHit_Parms.HitPawn = HitPawn;
	memcpy ( &ProjectileHit_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProjectileHit_Parms.HitNormal, &HitNormal, 0xC );
	ProjectileHit_Parms.Projectile = Projectile;

	this->ProcessEvent ( pFnProjectileHit, &ProjectileHit_Parms, NULL );
};

// Function ForgeGame.DVAbilityProjectile.ProjectileHit
// [0x00020002] 
// Parameters infos:
// class ADVPawn*                 HitPawn                        ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// class ADVProjectile*           Projectile                     ( CPF_Parm )

void ADVAbilityProjectile::ProjectileHit ( class ADVPawn* HitPawn, struct FVector HitLocation, struct FVector HitNormal, class ADVProjectile* Projectile )
{
	static UFunction* pFnProjectileHit = NULL;

	if ( ! pFnProjectileHit )
		pFnProjectileHit = (UFunction*) UObject::GObjObjects()->Data[ 43755 ];

	ADVAbilityProjectile_execProjectileHit_Parms ProjectileHit_Parms;
	ProjectileHit_Parms.HitPawn = HitPawn;
	memcpy ( &ProjectileHit_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProjectileHit_Parms.HitNormal, &HitNormal, 0xC );
	ProjectileHit_Parms.Projectile = Projectile;

	this->ProcessEvent ( pFnProjectileHit, &ProjectileHit_Parms, NULL );
};

// Function ForgeGame.DVAbilityProjectile.SpawnProjectile
// [0x00820002] 
// Parameters infos:
// class ADVProjectile*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADVProjectile* ADVAbilityProjectile::SpawnProjectile ( )
{
	static UFunction* pFnSpawnProjectile = NULL;

	if ( ! pFnSpawnProjectile )
		pFnSpawnProjectile = (UFunction*) UObject::GObjObjects()->Data[ 43750 ];

	ADVAbilityProjectile_execSpawnProjectile_Parms SpawnProjectile_Parms;

	this->ProcessEvent ( pFnSpawnProjectile, &SpawnProjectile_Parms, NULL );

	return SpawnProjectile_Parms.ReturnValue;
};

// Function ForgeGame.DVAbilityProjectile.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityProjectile::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 43746 ];

	ADVAbilityProjectile_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityProjectile.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbilityProjectile::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 43744 ];

	ADVAbilityProjectile_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.UpdateGameSettings
// [0x00020002] 
// Parameters infos:

void AForgeGameInfo::UpdateGameSettings ( )
{
	static UFunction* pFnUpdateGameSettings = NULL;

	if ( ! pFnUpdateGameSettings )
		pFnUpdateGameSettings = (UFunction*) UObject::GObjObjects()->Data[ 46740 ];

	AForgeGameInfo_execUpdateGameSettings_Parms UpdateGameSettings_Parms;

	this->ProcessEvent ( pFnUpdateGameSettings, &UpdateGameSettings_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.CanSpectate
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerController*       Viewer                         ( CPF_Parm )
// class APlayerReplicationInfo*  ViewTarget                     ( CPF_Parm )

bool AForgeGameInfo::CanSpectate ( class APlayerController* Viewer, class APlayerReplicationInfo* ViewTarget )
{
	static UFunction* pFnCanSpectate = NULL;

	if ( ! pFnCanSpectate )
		pFnCanSpectate = (UFunction*) UObject::GObjObjects()->Data[ 46736 ];

	AForgeGameInfo_execCanSpectate_Parms CanSpectate_Parms;
	CanSpectate_Parms.Viewer = Viewer;
	CanSpectate_Parms.ViewTarget = ViewTarget;

	this->ProcessEvent ( pFnCanSpectate, &CanSpectate_Parms, NULL );

	return CanSpectate_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfo.AddDefaultInventory
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void AForgeGameInfo::eventAddDefaultInventory ( class APawn* P )
{
	static UFunction* pFnAddDefaultInventory = NULL;

	if ( ! pFnAddDefaultInventory )
		pFnAddDefaultInventory = (UFunction*) UObject::GObjObjects()->Data[ 46734 ];

	AForgeGameInfo_eventAddDefaultInventory_Parms AddDefaultInventory_Parms;
	AddDefaultInventory_Parms.P = P;

	this->ProcessEvent ( pFnAddDefaultInventory, &AddDefaultInventory_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.EndMatch
// [0x00820002] 
// Parameters infos:

void AForgeGameInfo::EndMatch ( )
{
	static UFunction* pFnEndMatch = NULL;

	if ( ! pFnEndMatch )
		pFnEndMatch = (UFunction*) UObject::GObjObjects()->Data[ 46723 ];

	AForgeGameInfo_execEndMatch_Parms EndMatch_Parms;

	this->ProcessEvent ( pFnEndMatch, &EndMatch_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.WinningTeamId
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AForgeGameInfo::WinningTeamId ( )
{
	static UFunction* pFnWinningTeamId = NULL;

	if ( ! pFnWinningTeamId )
		pFnWinningTeamId = (UFunction*) UObject::GObjObjects()->Data[ 46235 ];

	AForgeGameInfo_execWinningTeamId_Parms WinningTeamId_Parms;

	this->ProcessEvent ( pFnWinningTeamId, &WinningTeamId_Parms, NULL );

	return WinningTeamId_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfo.MatchFinished
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AForgeGameInfo::MatchFinished ( )
{
	static UFunction* pFnMatchFinished = NULL;

	if ( ! pFnMatchFinished )
		pFnMatchFinished = (UFunction*) UObject::GObjObjects()->Data[ 46721 ];

	AForgeGameInfo_execMatchFinished_Parms MatchFinished_Parms;

	this->ProcessEvent ( pFnMatchFinished, &MatchFinished_Parms, NULL );

	return MatchFinished_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfo.ClearScores
// [0x00020002] 
// Parameters infos:

void AForgeGameInfo::ClearScores ( )
{
	static UFunction* pFnClearScores = NULL;

	if ( ! pFnClearScores )
		pFnClearScores = (UFunction*) UObject::GObjObjects()->Data[ 46719 ];

	AForgeGameInfo_execClearScores_Parms ClearScores_Parms;

	this->ProcessEvent ( pFnClearScores, &ClearScores_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.RotateMap
// [0x00024002] 
// Parameters infos:
// unsigned long                  ForceOpen                      ( CPF_OptionalParm | CPF_Parm )

void AForgeGameInfo::RotateMap ( unsigned long ForceOpen )
{
	static UFunction* pFnRotateMap = NULL;

	if ( ! pFnRotateMap )
		pFnRotateMap = (UFunction*) UObject::GObjObjects()->Data[ 46710 ];

	AForgeGameInfo_execRotateMap_Parms RotateMap_Parms;
	RotateMap_Parms.ForceOpen = ForceOpen;

	this->ProcessEvent ( pFnRotateMap, &RotateMap_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.ResetForNextGame
// [0x00020002] 
// Parameters infos:

void AForgeGameInfo::ResetForNextGame ( )
{
	static UFunction* pFnResetForNextGame = NULL;

	if ( ! pFnResetForNextGame )
		pFnResetForNextGame = (UFunction*) UObject::GObjObjects()->Data[ 46709 ];

	AForgeGameInfo_execResetForNextGame_Parms ResetForNextGame_Parms;

	this->ProcessEvent ( pFnResetForNextGame, &ResetForNextGame_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.StatsCount
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AForgeGameInfo::StatsCount ( )
{
	static UFunction* pFnStatsCount = NULL;

	if ( ! pFnStatsCount )
		pFnStatsCount = (UFunction*) UObject::GObjObjects()->Data[ 46684 ];

	AForgeGameInfo_execStatsCount_Parms StatsCount_Parms;

	this->ProcessEvent ( pFnStatsCount, &StatsCount_Parms, NULL );

	return StatsCount_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfo.ResetTowerActivation
// [0x00020002] 
// Parameters infos:

void AForgeGameInfo::ResetTowerActivation ( )
{
	static UFunction* pFnResetTowerActivation = NULL;

	if ( ! pFnResetTowerActivation )
		pFnResetTowerActivation = (UFunction*) UObject::GObjObjects()->Data[ 46683 ];

	AForgeGameInfo_execResetTowerActivation_Parms ResetTowerActivation_Parms;

	this->ProcessEvent ( pFnResetTowerActivation, &ResetTowerActivation_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.CheckTowerActivation
// [0x00020002] 
// Parameters infos:

void AForgeGameInfo::CheckTowerActivation ( )
{
	static UFunction* pFnCheckTowerActivation = NULL;

	if ( ! pFnCheckTowerActivation )
		pFnCheckTowerActivation = (UFunction*) UObject::GObjObjects()->Data[ 46679 ];

	AForgeGameInfo_execCheckTowerActivation_Parms CheckTowerActivation_Parms;

	this->ProcessEvent ( pFnCheckTowerActivation, &CheckTowerActivation_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.AutoBalanceTeams
// [0x00020002] 
// Parameters infos:

void AForgeGameInfo::AutoBalanceTeams ( )
{
	static UFunction* pFnAutoBalanceTeams = NULL;

	if ( ! pFnAutoBalanceTeams )
		pFnAutoBalanceTeams = (UFunction*) UObject::GObjObjects()->Data[ 46672 ];

	AForgeGameInfo_execAutoBalanceTeams_Parms AutoBalanceTeams_Parms;

	this->ProcessEvent ( pFnAutoBalanceTeams, &AutoBalanceTeams_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.TellAllOnTeam
// [0x00022002] 
// Parameters infos:
// unsigned char                  TeamIndex                      ( CPF_Parm )
// struct FString                 TheMessage                     ( CPF_Parm | CPF_NeedCtorLink )

void AForgeGameInfo::TellAllOnTeam ( unsigned char TeamIndex, struct FString TheMessage )
{
	static UFunction* pFnTellAllOnTeam = NULL;

	if ( ! pFnTellAllOnTeam )
		pFnTellAllOnTeam = (UFunction*) UObject::GObjObjects()->Data[ 46668 ];

	AForgeGameInfo_execTellAllOnTeam_Parms TellAllOnTeam_Parms;
	TellAllOnTeam_Parms.TeamIndex = TeamIndex;
	memcpy ( &TellAllOnTeam_Parms.TheMessage, &TheMessage, 0xC );

	this->ProcessEvent ( pFnTellAllOnTeam, &TellAllOnTeam_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.TellAllClients
// [0x00022002] 
// Parameters infos:
// struct FString                 TheMessage                     ( CPF_Parm | CPF_NeedCtorLink )

void AForgeGameInfo::TellAllClients ( struct FString TheMessage )
{
	static UFunction* pFnTellAllClients = NULL;

	if ( ! pFnTellAllClients )
		pFnTellAllClients = (UFunction*) UObject::GObjObjects()->Data[ 46665 ];

	AForgeGameInfo_execTellAllClients_Parms TellAllClients_Parms;
	memcpy ( &TellAllClients_Parms.TheMessage, &TheMessage, 0xC );

	this->ProcessEvent ( pFnTellAllClients, &TellAllClients_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.NotifyKilled
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             Killed                         ( CPF_Parm )
// class APawn*                   KilledPawn                     ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void AForgeGameInfo::NotifyKilled ( class AController* Killer, class AController* Killed, class APawn* KilledPawn, class UClass* DamageType )
{
	static UFunction* pFnNotifyKilled = NULL;

	if ( ! pFnNotifyKilled )
		pFnNotifyKilled = (UFunction*) UObject::GObjObjects()->Data[ 46657 ];

	AForgeGameInfo_execNotifyKilled_Parms NotifyKilled_Parms;
	NotifyKilled_Parms.Killer = Killer;
	NotifyKilled_Parms.Killed = Killed;
	NotifyKilled_Parms.KilledPawn = KilledPawn;
	NotifyKilled_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnNotifyKilled, &NotifyKilled_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.OneTimeMapSetup
// [0x00020002] 
// Parameters infos:

void AForgeGameInfo::OneTimeMapSetup ( )
{
	static UFunction* pFnOneTimeMapSetup = NULL;

	if ( ! pFnOneTimeMapSetup )
		pFnOneTimeMapSetup = (UFunction*) UObject::GObjObjects()->Data[ 46653 ];

	AForgeGameInfo_execOneTimeMapSetup_Parms OneTimeMapSetup_Parms;

	this->ProcessEvent ( pFnOneTimeMapSetup, &OneTimeMapSetup_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.SetPlayerDefaults
// [0x00020002] 
// Parameters infos:
// class APawn*                   PlayerPawn                     ( CPF_Parm )

void AForgeGameInfo::SetPlayerDefaults ( class APawn* PlayerPawn )
{
	static UFunction* pFnSetPlayerDefaults = NULL;

	if ( ! pFnSetPlayerDefaults )
		pFnSetPlayerDefaults = (UFunction*) UObject::GObjObjects()->Data[ 46647 ];

	AForgeGameInfo_execSetPlayerDefaults_Parms SetPlayerDefaults_Parms;
	SetPlayerDefaults_Parms.PlayerPawn = PlayerPawn;

	this->ProcessEvent ( pFnSetPlayerDefaults, &SetPlayerDefaults_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.InstantRespawn
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AForgeGameInfo::InstantRespawn ( )
{
	static UFunction* pFnInstantRespawn = NULL;

	if ( ! pFnInstantRespawn )
		pFnInstantRespawn = (UFunction*) UObject::GObjObjects()->Data[ 42932 ];

	AForgeGameInfo_execInstantRespawn_Parms InstantRespawn_Parms;

	this->ProcessEvent ( pFnInstantRespawn, &InstantRespawn_Parms, NULL );

	return InstantRespawn_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfo.ScoreKill
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             Other                          ( CPF_Parm )

void AForgeGameInfo::ScoreKill ( class AController* Killer, class AController* Other )
{
	static UFunction* pFnScoreKill = NULL;

	if ( ! pFnScoreKill )
		pFnScoreKill = (UFunction*) UObject::GObjObjects()->Data[ 46640 ];

	AForgeGameInfo_execScoreKill_Parms ScoreKill_Parms;
	ScoreKill_Parms.Killer = Killer;
	ScoreKill_Parms.Other = Other;

	this->ProcessEvent ( pFnScoreKill, &ScoreKill_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.GetJoinedPlayers
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AForgeGameInfo::GetJoinedPlayers ( )
{
	static UFunction* pFnGetJoinedPlayers = NULL;

	if ( ! pFnGetJoinedPlayers )
		pFnGetJoinedPlayers = (UFunction*) UObject::GObjObjects()->Data[ 46636 ];

	AForgeGameInfo_execGetJoinedPlayers_Parms GetJoinedPlayers_Parms;

	this->ProcessEvent ( pFnGetJoinedPlayers, &GetJoinedPlayers_Parms, NULL );

	return GetJoinedPlayers_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfo.Killed
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             KilledPlayer                   ( CPF_Parm )
// class APawn*                   KilledPawn                     ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void AForgeGameInfo::Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType )
{
	static UFunction* pFnKilled = NULL;

	if ( ! pFnKilled )
		pFnKilled = (UFunction*) UObject::GObjObjects()->Data[ 46629 ];

	AForgeGameInfo_execKilled_Parms Killed_Parms;
	Killed_Parms.Killer = Killer;
	Killed_Parms.KilledPlayer = KilledPlayer;
	Killed_Parms.KilledPawn = KilledPawn;
	Killed_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnKilled, &Killed_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.ChangeTeam
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Other                          ( CPF_Parm )
// int                            N                              ( CPF_Parm )
// unsigned long                  bNewTeam                       ( CPF_Parm )

bool AForgeGameInfo::ChangeTeam ( class AController* Other, int N, unsigned long bNewTeam )
{
	static UFunction* pFnChangeTeam = NULL;

	if ( ! pFnChangeTeam )
		pFnChangeTeam = (UFunction*) UObject::GObjObjects()->Data[ 46622 ];

	AForgeGameInfo_execChangeTeam_Parms ChangeTeam_Parms;
	ChangeTeam_Parms.Other = Other;
	ChangeTeam_Parms.N = N;
	ChangeTeam_Parms.bNewTeam = bNewTeam;

	this->ProcessEvent ( pFnChangeTeam, &ChangeTeam_Parms, NULL );

	return ChangeTeam_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfo.SmallestTeamIndex
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AForgeGameInfo::SmallestTeamIndex ( )
{
	static UFunction* pFnSmallestTeamIndex = NULL;

	if ( ! pFnSmallestTeamIndex )
		pFnSmallestTeamIndex = (UFunction*) UObject::GObjObjects()->Data[ 46618 ];

	AForgeGameInfo_execSmallestTeamIndex_Parms SmallestTeamIndex_Parms;

	this->ProcessEvent ( pFnSmallestTeamIndex, &SmallestTeamIndex_Parms, NULL );

	return SmallestTeamIndex_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfo.StartBots
// [0x00020000] 
// Parameters infos:

void AForgeGameInfo::StartBots ( )
{
	static UFunction* pFnStartBots = NULL;

	if ( ! pFnStartBots )
		pFnStartBots = (UFunction*) UObject::GObjObjects()->Data[ 46617 ];

	AForgeGameInfo_execStartBots_Parms StartBots_Parms;

	this->ProcessEvent ( pFnStartBots, &StartBots_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.StartHumans
// [0x00020002] 
// Parameters infos:

void AForgeGameInfo::StartHumans ( )
{
	static UFunction* pFnStartHumans = NULL;

	if ( ! pFnStartHumans )
		pFnStartHumans = (UFunction*) UObject::GObjObjects()->Data[ 46613 ];

	AForgeGameInfo_execStartHumans_Parms StartHumans_Parms;

	this->ProcessEvent ( pFnStartHumans, &StartHumans_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.SpawnDefaultPawnFor
// [0x00820002] 
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             NewPlayer                      ( CPF_Parm )
// class ANavigationPoint*        StartSpot                      ( CPF_Parm )

class APawn* AForgeGameInfo::SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot )
{
	static UFunction* pFnSpawnDefaultPawnFor = NULL;

	if ( ! pFnSpawnDefaultPawnFor )
		pFnSpawnDefaultPawnFor = (UFunction*) UObject::GObjObjects()->Data[ 46603 ];

	AForgeGameInfo_execSpawnDefaultPawnFor_Parms SpawnDefaultPawnFor_Parms;
	SpawnDefaultPawnFor_Parms.NewPlayer = NewPlayer;
	SpawnDefaultPawnFor_Parms.StartSpot = StartSpot;

	this->ProcessEvent ( pFnSpawnDefaultPawnFor, &SpawnDefaultPawnFor_Parms, NULL );

	return SpawnDefaultPawnFor_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfo.RatePlayerStart
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerStart*            P                              ( CPF_Parm )
// unsigned char                  Team                           ( CPF_Parm )
// class AController*             Player                         ( CPF_Parm )

float AForgeGameInfo::RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player )
{
	static UFunction* pFnRatePlayerStart = NULL;

	if ( ! pFnRatePlayerStart )
		pFnRatePlayerStart = (UFunction*) UObject::GObjObjects()->Data[ 46596 ];

	AForgeGameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
	RatePlayerStart_Parms.P = P;
	RatePlayerStart_Parms.Team = Team;
	RatePlayerStart_Parms.Player = Player;

	this->ProcessEvent ( pFnRatePlayerStart, &RatePlayerStart_Parms, NULL );

	return RatePlayerStart_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfo.ChoosePlayerStart
// [0x00024002] 
// Parameters infos:
// class APlayerStart*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Player                         ( CPF_Parm )
// unsigned char                  InTeam                         ( CPF_OptionalParm | CPF_Parm )

class APlayerStart* AForgeGameInfo::ChoosePlayerStart ( class AController* Player, unsigned char InTeam )
{
	static UFunction* pFnChoosePlayerStart = NULL;

	if ( ! pFnChoosePlayerStart )
		pFnChoosePlayerStart = (UFunction*) UObject::GObjObjects()->Data[ 46586 ];

	AForgeGameInfo_execChoosePlayerStart_Parms ChoosePlayerStart_Parms;
	ChoosePlayerStart_Parms.Player = Player;
	ChoosePlayerStart_Parms.InTeam = InTeam;

	this->ProcessEvent ( pFnChoosePlayerStart, &ChoosePlayerStart_Parms, NULL );

	return ChoosePlayerStart_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfo.GetDeathTimerLength
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AForgeGameInfo::GetDeathTimerLength ( )
{
	static UFunction* pFnGetDeathTimerLength = NULL;

	if ( ! pFnGetDeathTimerLength )
		pFnGetDeathTimerLength = (UFunction*) UObject::GObjObjects()->Data[ 42935 ];

	AForgeGameInfo_execGetDeathTimerLength_Parms GetDeathTimerLength_Parms;

	this->ProcessEvent ( pFnGetDeathTimerLength, &GetDeathTimerLength_Parms, NULL );

	return GetDeathTimerLength_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfo.ClearKickTimerForPRI
// [0x00020002] 
// Parameters infos:
// class ADVPlayerReplicationInfo* ThePRI                         ( CPF_Parm )

void AForgeGameInfo::ClearKickTimerForPRI ( class ADVPlayerReplicationInfo* ThePRI )
{
	static UFunction* pFnClearKickTimerForPRI = NULL;

	if ( ! pFnClearKickTimerForPRI )
		pFnClearKickTimerForPRI = (UFunction*) UObject::GObjObjects()->Data[ 46584 ];

	AForgeGameInfo_execClearKickTimerForPRI_Parms ClearKickTimerForPRI_Parms;
	ClearKickTimerForPRI_Parms.ThePRI = ThePRI;

	this->ProcessEvent ( pFnClearKickTimerForPRI, &ClearKickTimerForPRI_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.PostLogin
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       NewPlayer                      ( CPF_Parm )

void AForgeGameInfo::eventPostLogin ( class APlayerController* NewPlayer )
{
	static UFunction* pFnPostLogin = NULL;

	if ( ! pFnPostLogin )
		pFnPostLogin = (UFunction*) UObject::GObjObjects()->Data[ 46582 ];

	AForgeGameInfo_eventPostLogin_Parms PostLogin_Parms;
	PostLogin_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnPostLogin, &PostLogin_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AForgeGameInfo::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 46580 ];

	AForgeGameInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AForgeGameInfo::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 46578 ];

	AForgeGameInfo_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.UpdateServer
// [0x00020002] 
// Parameters infos:

void AForgeGameInfo::UpdateServer ( )
{
	static UFunction* pFnUpdateServer = NULL;

	if ( ! pFnUpdateServer )
		pFnUpdateServer = (UFunction*) UObject::GObjObjects()->Data[ 46576 ];

	AForgeGameInfo_execUpdateServer_Parms UpdateServer_Parms;

	this->ProcessEvent ( pFnUpdateServer, &UpdateServer_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.InitGameReplicationInfo
// [0x00020002] 
// Parameters infos:

void AForgeGameInfo::InitGameReplicationInfo ( )
{
	static UFunction* pFnInitGameReplicationInfo = NULL;

	if ( ! pFnInitGameReplicationInfo )
		pFnInitGameReplicationInfo = (UFunction*) UObject::GObjObjects()->Data[ 46575 ];

	AForgeGameInfo_execInitGameReplicationInfo_Parms InitGameReplicationInfo_Parms;

	this->ProcessEvent ( pFnInitGameReplicationInfo, &InitGameReplicationInfo_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfo.RegisterServer
// [0x00020002] 
// Parameters infos:

void AForgeGameInfo::RegisterServer ( )
{
	static UFunction* pFnRegisterServer = NULL;

	if ( ! pFnRegisterServer )
		pFnRegisterServer = (UFunction*) UObject::GObjObjects()->Data[ 46574 ];

	AForgeGameInfo_execRegisterServer_Parms RegisterServer_Parms;

	this->ProcessEvent ( pFnRegisterServer, &RegisterServer_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.SendPromotionalCode
// [0x00020002] 
// Parameters infos:
// struct FString                 ThePromoCode                   ( CPF_Parm | CPF_NeedCtorLink )

void ADVPlayerController::SendPromotionalCode ( struct FString ThePromoCode )
{
	static UFunction* pFnSendPromotionalCode = NULL;

	if ( ! pFnSendPromotionalCode )
		pFnSendPromotionalCode = (UFunction*) UObject::GObjObjects()->Data[ 46038 ];

	ADVPlayerController_execSendPromotionalCode_Parms SendPromotionalCode_Parms;
	memcpy ( &SendPromotionalCode_Parms.ThePromoCode, &ThePromoCode, 0xC );

	this->ProcessEvent ( pFnSendPromotionalCode, &SendPromotionalCode_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.TutorialFinished
// [0x00020002] 
// Parameters infos:

void ADVPlayerController::TutorialFinished ( )
{
	static UFunction* pFnTutorialFinished = NULL;

	if ( ! pFnTutorialFinished )
		pFnTutorialFinished = (UFunction*) UObject::GObjObjects()->Data[ 46036 ];

	ADVPlayerController_execTutorialFinished_Parms TutorialFinished_Parms;

	this->ProcessEvent ( pFnTutorialFinished, &TutorialFinished_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.TurnOffSpeaking
// [0x00020002] 
// Parameters infos:

void ADVPlayerController::TurnOffSpeaking ( )
{
	static UFunction* pFnTurnOffSpeaking = NULL;

	if ( ! pFnTurnOffSpeaking )
		pFnTurnOffSpeaking = (UFunction*) UObject::GObjObjects()->Data[ 46034 ];

	ADVPlayerController_execTurnOffSpeaking_Parms TurnOffSpeaking_Parms;

	this->ProcessEvent ( pFnTurnOffSpeaking, &TurnOffSpeaking_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ToggleSpeaking
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  bNowOn                         ( CPF_Parm )

void ADVPlayerController::ToggleSpeaking ( unsigned long bNowOn )
{
	static UFunction* pFnToggleSpeaking = NULL;

	if ( ! pFnToggleSpeaking )
		pFnToggleSpeaking = (UFunction*) UObject::GObjObjects()->Data[ 46031 ];

	ADVPlayerController_execToggleSpeaking_Parms ToggleSpeaking_Parms;
	ToggleSpeaking_Parms.bNowOn = bNowOn;

	this->ProcessEvent ( pFnToggleSpeaking, &ToggleSpeaking_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ClearOnlineDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADVPlayerController::eventClearOnlineDelegates ( )
{
	static UFunction* pFnClearOnlineDelegates = NULL;

	if ( ! pFnClearOnlineDelegates )
		pFnClearOnlineDelegates = (UFunction*) UObject::GObjObjects()->Data[ 46029 ];

	ADVPlayerController_eventClearOnlineDelegates_Parms ClearOnlineDelegates_Parms;

	this->ProcessEvent ( pFnClearOnlineDelegates, &ClearOnlineDelegates_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.AddOnlineDelegates
// [0x00020002] 
// Parameters infos:
// unsigned long                  bRegisterVoice                 ( CPF_Parm )

void ADVPlayerController::AddOnlineDelegates ( unsigned long bRegisterVoice )
{
	static UFunction* pFnAddOnlineDelegates = NULL;

	if ( ! pFnAddOnlineDelegates )
		pFnAddOnlineDelegates = (UFunction*) UObject::GObjObjects()->Data[ 46027 ];

	ADVPlayerController_execAddOnlineDelegates_Parms AddOnlineDelegates_Parms;
	AddOnlineDelegates_Parms.bRegisterVoice = bRegisterVoice;

	this->ProcessEvent ( pFnAddOnlineDelegates, &AddOnlineDelegates_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.PlayNormalMusic
// [0x00020102] 
// Parameters infos:

void ADVPlayerController::PlayNormalMusic ( )
{
	static UFunction* pFnPlayNormalMusic = NULL;

	if ( ! pFnPlayNormalMusic )
		pFnPlayNormalMusic = (UFunction*) UObject::GObjObjects()->Data[ 46026 ];

	ADVPlayerController_execPlayNormalMusic_Parms PlayNormalMusic_Parms;

	this->ProcessEvent ( pFnPlayNormalMusic, &PlayNormalMusic_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.PlayFinalMusic
// [0x00020102] 
// Parameters infos:

void ADVPlayerController::PlayFinalMusic ( )
{
	static UFunction* pFnPlayFinalMusic = NULL;

	if ( ! pFnPlayFinalMusic )
		pFnPlayFinalMusic = (UFunction*) UObject::GObjObjects()->Data[ 46025 ];

	ADVPlayerController_execPlayFinalMusic_Parms PlayFinalMusic_Parms;

	this->ProcessEvent ( pFnPlayFinalMusic, &PlayFinalMusic_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.FadeMusic
// [0x00020102] 
// Parameters infos:
// float                          FadeTime                       ( CPF_Parm )

void ADVPlayerController::FadeMusic ( float FadeTime )
{
	static UFunction* pFnFadeMusic = NULL;

	if ( ! pFnFadeMusic )
		pFnFadeMusic = (UFunction*) UObject::GObjObjects()->Data[ 46023 ];

	ADVPlayerController_execFadeMusic_Parms FadeMusic_Parms;
	FadeMusic_Parms.FadeTime = FadeTime;

	this->ProcessEvent ( pFnFadeMusic, &FadeMusic_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.IsLookInputIgnored
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADVPlayerController::eventIsLookInputIgnored ( )
{
	static UFunction* pFnIsLookInputIgnored = NULL;

	if ( ! pFnIsLookInputIgnored )
		pFnIsLookInputIgnored = (UFunction*) UObject::GObjObjects()->Data[ 45991 ];

	ADVPlayerController_eventIsLookInputIgnored_Parms IsLookInputIgnored_Parms;

	this->ProcessEvent ( pFnIsLookInputIgnored, &IsLookInputIgnored_Parms, NULL );

	return IsLookInputIgnored_Parms.ReturnValue;
};

// Function ForgeGame.DVPlayerController.ServerChangeTeam
// [0x002200C2] 
// Parameters infos:
// int                            N                              ( CPF_Parm )

void ADVPlayerController::ServerChangeTeam ( int N )
{
	static UFunction* pFnServerChangeTeam = NULL;

	if ( ! pFnServerChangeTeam )
		pFnServerChangeTeam = (UFunction*) UObject::GObjObjects()->Data[ 45983 ];

	ADVPlayerController_execServerChangeTeam_Parms ServerChangeTeam_Parms;
	ServerChangeTeam_Parms.N = N;

	this->ProcessEvent ( pFnServerChangeTeam, &ServerChangeTeam_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ServerUpdateCamera
// [0x00220042] 
// Parameters infos:
// struct FVector                 CamLoc                         ( CPF_Parm )
// int                            CamPitchAndYaw                 ( CPF_Parm )

void ADVPlayerController::ServerUpdateCamera ( struct FVector CamLoc, int CamPitchAndYaw )
{
	static UFunction* pFnServerUpdateCamera = NULL;

	if ( ! pFnServerUpdateCamera )
		pFnServerUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 45980 ];

	ADVPlayerController_execServerUpdateCamera_Parms ServerUpdateCamera_Parms;
	memcpy ( &ServerUpdateCamera_Parms.CamLoc, &CamLoc, 0xC );
	ServerUpdateCamera_Parms.CamPitchAndYaw = CamPitchAndYaw;

	this->ProcessEvent ( pFnServerUpdateCamera, &ServerUpdateCamera_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.DebugLocalMessage
// [0x00024202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 TheMessage                     ( CPF_Parm | CPF_NeedCtorLink )
// float                          NewDisplayPeriod               ( CPF_OptionalParm | CPF_Parm )

void ADVPlayerController::DebugLocalMessage ( struct FString TheMessage, float NewDisplayPeriod )
{
	static UFunction* pFnDebugLocalMessage = NULL;

	if ( ! pFnDebugLocalMessage )
		pFnDebugLocalMessage = (UFunction*) UObject::GObjObjects()->Data[ 45977 ];

	ADVPlayerController_execDebugLocalMessage_Parms DebugLocalMessage_Parms;
	memcpy ( &DebugLocalMessage_Parms.TheMessage, &TheMessage, 0xC );
	DebugLocalMessage_Parms.NewDisplayPeriod = NewDisplayPeriod;

	this->ProcessEvent ( pFnDebugLocalMessage, &DebugLocalMessage_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.SetAbilityCooldowns
// [0x00024002] 
// Parameters infos:
// unsigned long                  AbilityCooldowns               ( CPF_OptionalParm | CPF_Parm )

void ADVPlayerController::SetAbilityCooldowns ( unsigned long AbilityCooldowns )
{
	static UFunction* pFnSetAbilityCooldowns = NULL;

	if ( ! pFnSetAbilityCooldowns )
        pFnSetAbilityCooldowns = UFunction::FindFunction("Function ForgeGame.DVPlayerController.SetAbilityCooldowns");
		//pFnSetAbilityCooldowns = (UFunction*) UObject::GObjObjects()->Data[ 45975 ];

	ADVPlayerController_execSetAbilityCooldowns_Parms SetAbilityCooldowns_Parms;
	SetAbilityCooldowns_Parms.AbilityCooldowns = AbilityCooldowns;

	pProcessEvent ( this, pFnSetAbilityCooldowns, &SetAbilityCooldowns_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.GiveMedal
// [0x01020142] 
// Parameters infos:
// unsigned char                  MedalType                      ( CPF_Parm )
// unsigned char                  MedalLevel                     ( CPF_Parm )
// int                            MedalXP                        ( CPF_Parm )
// int                            RequiredPoints                 ( CPF_Parm )

void ADVPlayerController::GiveMedal ( unsigned char MedalType, unsigned char MedalLevel, int MedalXP, int RequiredPoints )
{
	static UFunction* pFnGiveMedal = NULL;

	if ( ! pFnGiveMedal )
		pFnGiveMedal = (UFunction*) UObject::GObjObjects()->Data[ 45970 ];

	ADVPlayerController_execGiveMedal_Parms GiveMedal_Parms;
	GiveMedal_Parms.MedalType = MedalType;
	GiveMedal_Parms.MedalLevel = MedalLevel;
	GiveMedal_Parms.MedalXP = MedalXP;
	GiveMedal_Parms.RequiredPoints = RequiredPoints;

	this->ProcessEvent ( pFnGiveMedal, &GiveMedal_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ServerGiveMedal
// [0x00020002] 
// Parameters infos:
// unsigned char                  MedalType                      ( CPF_Parm )
// unsigned char                  MedalLevel                     ( CPF_Parm )
// int                            MedalXP                        ( CPF_Parm )
// int                            RequiredPoints                 ( CPF_Parm )

void ADVPlayerController::ServerGiveMedal ( unsigned char MedalType, unsigned char MedalLevel, int MedalXP, int RequiredPoints )
{
	static UFunction* pFnServerGiveMedal = NULL;

	if ( ! pFnServerGiveMedal )
		pFnServerGiveMedal = (UFunction*) UObject::GObjObjects()->Data[ 45963 ];

	ADVPlayerController_execServerGiveMedal_Parms ServerGiveMedal_Parms;
	ServerGiveMedal_Parms.MedalType = MedalType;
	ServerGiveMedal_Parms.MedalLevel = MedalLevel;
	ServerGiveMedal_Parms.MedalXP = MedalXP;
	ServerGiveMedal_Parms.RequiredPoints = RequiredPoints;

	this->ProcessEvent ( pFnServerGiveMedal, &ServerGiveMedal_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.TutorialMode
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADVPlayerController::TutorialMode ( )
{
	static UFunction* pFnTutorialMode = NULL;

	if ( ! pFnTutorialMode )
		pFnTutorialMode = (UFunction*) UObject::GObjObjects()->Data[ 45962 ];

	ADVPlayerController_execTutorialMode_Parms TutorialMode_Parms;

	this->ProcessEvent ( pFnTutorialMode, &TutorialMode_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.GetAllTowers
// [0x00020002] 
// Parameters infos:
// TArray< class ADVTower* >      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< class ADVTower* > ADVPlayerController::GetAllTowers ( )
{
	static UFunction* pFnGetAllTowers = NULL;

	if ( ! pFnGetAllTowers )
		pFnGetAllTowers = (UFunction*) UObject::GObjObjects()->Data[ 45955 ];

	ADVPlayerController_execGetAllTowers_Parms GetAllTowers_Parms;

	this->ProcessEvent ( pFnGetAllTowers, &GetAllTowers_Parms, NULL );

	return GetAllTowers_Parms.ReturnValue;
};

// Function ForgeGame.DVPlayerController.ServerThrowFlag
// [0x002200C2] 
// Parameters infos:

void ADVPlayerController::ServerThrowFlag ( )
{
	static UFunction* pFnServerThrowFlag = NULL;

	if ( ! pFnServerThrowFlag )
		pFnServerThrowFlag = (UFunction*) UObject::GObjObjects()->Data[ 45954 ];

	ADVPlayerController_execServerThrowFlag_Parms ServerThrowFlag_Parms;

	this->ProcessEvent ( pFnServerThrowFlag, &ServerThrowFlag_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ThrowFlag
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADVPlayerController::ThrowFlag ( )
{
	static UFunction* pFnThrowFlag = NULL;

	if ( ! pFnThrowFlag )
		pFnThrowFlag = (UFunction*) UObject::GObjObjects()->Data[ 45953 ];

	ADVPlayerController_execThrowFlag_Parms ThrowFlag_Parms;

	this->ProcessEvent ( pFnThrowFlag, &ThrowFlag_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.TeamTalk
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADVPlayerController::TeamTalk ( )
{
	static UFunction* pFnTeamTalk = NULL;

	if ( ! pFnTeamTalk )
		pFnTeamTalk = (UFunction*) UObject::GObjObjects()->Data[ 45952 ];

	ADVPlayerController_execTeamTalk_Parms TeamTalk_Parms;

	this->ProcessEvent ( pFnTeamTalk, &TeamTalk_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.Talk
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADVPlayerController::Talk ( )
{
	static UFunction* pFnTalk = NULL;

	if ( ! pFnTalk )
		pFnTalk = (UFunction*) UObject::GObjObjects()->Data[ 45951 ];

	ADVPlayerController_execTalk_Parms Talk_Parms;

	this->ProcessEvent ( pFnTalk, &Talk_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.TeamMessage
// [0x010249C2] ( FUNC_Event )
// Parameters infos:
// class APlayerReplicationInfo*  ThePRI                         ( CPF_Parm )
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FName                   Type                           ( CPF_Parm )
// float                          MsgLifeTime                    ( CPF_OptionalParm | CPF_Parm )

void ADVPlayerController::eventTeamMessage ( class APlayerReplicationInfo* ThePRI, struct FString S, struct FName Type, float MsgLifeTime )
{
	static UFunction* pFnTeamMessage = NULL;

	if ( ! pFnTeamMessage )
		pFnTeamMessage = (UFunction*) UObject::GObjObjects()->Data[ 45944 ];

	ADVPlayerController_eventTeamMessage_Parms TeamMessage_Parms;
	TeamMessage_Parms.ThePRI = ThePRI;
	memcpy ( &TeamMessage_Parms.S, &S, 0xC );
	memcpy ( &TeamMessage_Parms.Type, &Type, 0x8 );
	TeamMessage_Parms.MsgLifeTime = MsgLifeTime;

	this->ProcessEvent ( pFnTeamMessage, &TeamMessage_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.YourAbilityFailed
// [0x01020142] 
// Parameters infos:
// class ADVAbility*              BlockedAbility                 ( CPF_Parm )
// class ADVPawn*                 MissedPawn                     ( CPF_Parm )
// unsigned char                  ReasonFailed                   ( CPF_Parm )

void ADVPlayerController::YourAbilityFailed ( class ADVAbility* BlockedAbility, class ADVPawn* MissedPawn, unsigned char ReasonFailed )
{
	static UFunction* pFnYourAbilityFailed = NULL;

	if ( ! pFnYourAbilityFailed )
		pFnYourAbilityFailed = (UFunction*) UObject::GObjObjects()->Data[ 45940 ];

	ADVPlayerController_execYourAbilityFailed_Parms YourAbilityFailed_Parms;
	YourAbilityFailed_Parms.BlockedAbility = BlockedAbility;
	YourAbilityFailed_Parms.MissedPawn = MissedPawn;
	YourAbilityFailed_Parms.ReasonFailed = ReasonFailed;

	this->ProcessEvent ( pFnYourAbilityFailed, &YourAbilityFailed_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.BlockWorked
// [0x01020142] 
// Parameters infos:
// class ADVAbility*              BlockedAbility                 ( CPF_Parm )

void ADVPlayerController::BlockWorked ( class ADVAbility* BlockedAbility )
{
	static UFunction* pFnBlockWorked = NULL;

	if ( ! pFnBlockWorked )
		pFnBlockWorked = (UFunction*) UObject::GObjObjects()->Data[ 45938 ];

	ADVPlayerController_execBlockWorked_Parms BlockWorked_Parms;
	BlockWorked_Parms.BlockedAbility = BlockedAbility;

	this->ProcessEvent ( pFnBlockWorked, &BlockWorked_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ClientAttackedFrom
// [0x01020142] 
// Parameters infos:
// struct FVector                 WorldLocation                  ( CPF_Parm )

void ADVPlayerController::ClientAttackedFrom ( struct FVector WorldLocation )
{
	static UFunction* pFnClientAttackedFrom = NULL;

	if ( ! pFnClientAttackedFrom )
		pFnClientAttackedFrom = (UFunction*) UObject::GObjObjects()->Data[ 45936 ];

	ADVPlayerController_execClientAttackedFrom_Parms ClientAttackedFrom_Parms;
	memcpy ( &ClientAttackedFrom_Parms.WorldLocation, &WorldLocation, 0xC );

	this->ProcessEvent ( pFnClientAttackedFrom, &ClientAttackedFrom_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.RemoveHelpRequest
// [0x00020002] 
// Parameters infos:

void ADVPlayerController::RemoveHelpRequest ( )
{
	static UFunction* pFnRemoveHelpRequest = NULL;

	if ( ! pFnRemoveHelpRequest )
		pFnRemoveHelpRequest = (UFunction*) UObject::GObjObjects()->Data[ 45935 ];

	ADVPlayerController_execRemoveHelpRequest_Parms RemoveHelpRequest_Parms;

	this->ProcessEvent ( pFnRemoveHelpRequest, &RemoveHelpRequest_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ServerRequestHelp
// [0x00220042] 
// Parameters infos:

void ADVPlayerController::ServerRequestHelp ( )
{
	static UFunction* pFnServerRequestHelp = NULL;

	if ( ! pFnServerRequestHelp )
		pFnServerRequestHelp = (UFunction*) UObject::GObjObjects()->Data[ 45934 ];

	ADVPlayerController_execServerRequestHelp_Parms ServerRequestHelp_Parms;

	this->ProcessEvent ( pFnServerRequestHelp, &ServerRequestHelp_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.RequestHelp
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADVPlayerController::RequestHelp ( )
{
	static UFunction* pFnRequestHelp = NULL;

	if ( ! pFnRequestHelp )
		pFnRequestHelp = (UFunction*) UObject::GObjObjects()->Data[ 45932 ];

	ADVPlayerController_execRequestHelp_Parms RequestHelp_Parms;

	this->ProcessEvent ( pFnRequestHelp, &RequestHelp_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.AddAssist
// [0x00020002] 
// Parameters infos:
// struct FSAssistingPlayer       NewAssist                      ( CPF_Parm )

void ADVPlayerController::AddAssist ( struct FSAssistingPlayer NewAssist )
{
	static UFunction* pFnAddAssist = NULL;

	if ( ! pFnAddAssist )
		pFnAddAssist = (UFunction*) UObject::GObjObjects()->Data[ 45929 ];

	ADVPlayerController_execAddAssist_Parms AddAssist_Parms;
	memcpy ( &AddAssist_Parms.NewAssist, &NewAssist, 0xC );

	this->ProcessEvent ( pFnAddAssist, &AddAssist_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.AbilityHit
// [0x01024142] 
// Parameters infos:
// class ADVPawn*                 TheHitPawn                     ( CPF_Parm )
// unsigned long                  IsFriendly                     ( CPF_OptionalParm | CPF_Parm )

void ADVPlayerController::AbilityHit ( class ADVPawn* TheHitPawn, unsigned long IsFriendly )
{
	static UFunction* pFnAbilityHit = NULL;

	if ( ! pFnAbilityHit )
		pFnAbilityHit = (UFunction*) UObject::GObjObjects()->Data[ 45926 ];

	ADVPlayerController_execAbilityHit_Parms AbilityHit_Parms;
	AbilityHit_Parms.TheHitPawn = TheHitPawn;
	AbilityHit_Parms.IsFriendly = IsFriendly;

	this->ProcessEvent ( pFnAbilityHit, &AbilityHit_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ClientNotifyKilled
// [0x01020142] 
// Parameters infos:
// unsigned char                  KillerClass                    ( CPF_Parm )
// class ADVPlayerReplicationInfo* KillerPRI                      ( CPF_Parm )
// int                            KillingAbilityIndex            ( CPF_Parm )
// class ADVPlayerReplicationInfo* KilledPRI                      ( CPF_Parm )
// unsigned char                  KilledClass                    ( CPF_Parm )

void ADVPlayerController::ClientNotifyKilled ( unsigned char KillerClass, class ADVPlayerReplicationInfo* KillerPRI, int KillingAbilityIndex, class ADVPlayerReplicationInfo* KilledPRI, unsigned char KilledClass )
{
	static UFunction* pFnClientNotifyKilled = NULL;

	if ( ! pFnClientNotifyKilled )
		pFnClientNotifyKilled = (UFunction*) UObject::GObjObjects()->Data[ 45919 ];

	ADVPlayerController_execClientNotifyKilled_Parms ClientNotifyKilled_Parms;
	ClientNotifyKilled_Parms.KillerClass = KillerClass;
	ClientNotifyKilled_Parms.KillerPRI = KillerPRI;
	ClientNotifyKilled_Parms.KillingAbilityIndex = KillingAbilityIndex;
	ClientNotifyKilled_Parms.KilledPRI = KilledPRI;
	ClientNotifyKilled_Parms.KilledClass = KilledClass;

	this->ProcessEvent ( pFnClientNotifyKilled, &ClientNotifyKilled_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.NotifyKilledWithAbility
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             Killed                         ( CPF_Parm )
// class APawn*                   KilledPawn                     ( CPF_Parm )
// class UClass*                  damageTyp                      ( CPF_Parm )
// int                            KillingAbilityIndex            ( CPF_Parm )

void ADVPlayerController::NotifyKilledWithAbility ( class AController* Killer, class AController* Killed, class APawn* KilledPawn, class UClass* damageTyp, int KillingAbilityIndex )
{
	static UFunction* pFnNotifyKilledWithAbility = NULL;

	if ( ! pFnNotifyKilledWithAbility )
		pFnNotifyKilledWithAbility = (UFunction*) UObject::GObjObjects()->Data[ 45910 ];

	ADVPlayerController_execNotifyKilledWithAbility_Parms NotifyKilledWithAbility_Parms;
	NotifyKilledWithAbility_Parms.Killer = Killer;
	NotifyKilledWithAbility_Parms.Killed = Killed;
	NotifyKilledWithAbility_Parms.KilledPawn = KilledPawn;
	NotifyKilledWithAbility_Parms.damageTyp = damageTyp;
	NotifyKilledWithAbility_Parms.KillingAbilityIndex = KillingAbilityIndex;

	this->ProcessEvent ( pFnNotifyKilledWithAbility, &NotifyKilledWithAbility_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.NotifyPawnHealthChange
// [0x01020142] 
// Parameters infos:
// class ADVPawn*                 TheReceivingPawn               ( CPF_Parm )
// float                          ChangeAmount                   ( CPF_Parm )

void ADVPlayerController::NotifyPawnHealthChange ( class ADVPawn* TheReceivingPawn, float ChangeAmount )
{
	static UFunction* pFnNotifyPawnHealthChange = NULL;

	if ( ! pFnNotifyPawnHealthChange )
		pFnNotifyPawnHealthChange = (UFunction*) UObject::GObjObjects()->Data[ 45907 ];

	ADVPlayerController_execNotifyPawnHealthChange_Parms NotifyPawnHealthChange_Parms;
	NotifyPawnHealthChange_Parms.TheReceivingPawn = TheReceivingPawn;
	NotifyPawnHealthChange_Parms.ChangeAmount = ChangeAmount;

	this->ProcessEvent ( pFnNotifyPawnHealthChange, &NotifyPawnHealthChange_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ShowMessage
// [0x01020142] 
// Parameters infos:
// struct FString                 TheMessage                     ( CPF_Parm | CPF_NeedCtorLink )

void ADVPlayerController::ShowMessage ( struct FString TheMessage )
{
	static UFunction* pFnShowMessage = NULL;

	if ( ! pFnShowMessage )
		pFnShowMessage = (UFunction*) UObject::GObjObjects()->Data[ 45905 ];

	ADVPlayerController_execShowMessage_Parms ShowMessage_Parms;
	memcpy ( &ShowMessage_Parms.TheMessage, &TheMessage, 0xC );

	this->ProcessEvent ( pFnShowMessage, &ShowMessage_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ResetSteamCloud
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADVPlayerController::ResetSteamCloud ( )
{
	static UFunction* pFnResetSteamCloud = NULL;

	if ( ! pFnResetSteamCloud )
		pFnResetSteamCloud = (UFunction*) UObject::GObjObjects()->Data[ 45904 ];

	ADVPlayerController_execResetSteamCloud_Parms ResetSteamCloud_Parms;

	this->ProcessEvent ( pFnResetSteamCloud, &ResetSteamCloud_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ChooseClass
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 ClassName                      ( CPF_Parm | CPF_NeedCtorLink )

void ADVPlayerController::ChooseClass ( struct FString ClassName )
{
	static UFunction* pFnChooseClass = NULL;

	if ( ! pFnChooseClass )
		pFnChooseClass = (UFunction*) UObject::GObjObjects()->Data[ 45895 ];

	ADVPlayerController_execChooseClass_Parms ChooseClass_Parms;
	memcpy ( &ChooseClass_Parms.ClassName, &ClassName, 0xC );

	this->ProcessEvent ( pFnChooseClass, &ChooseClass_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ServerSuicideRegardless
// [0x002200C2] 
// Parameters infos:

void ADVPlayerController::ServerSuicideRegardless ( )
{
	static UFunction* pFnServerSuicideRegardless = NULL;

	if ( ! pFnServerSuicideRegardless )
		pFnServerSuicideRegardless = (UFunction*) UObject::GObjObjects()->Data[ 45894 ];

	ADVPlayerController_execServerSuicideRegardless_Parms ServerSuicideRegardless_Parms;

	this->ProcessEvent ( pFnServerSuicideRegardless, &ServerSuicideRegardless_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.AcknowledgePossession
// [0x00020002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void ADVPlayerController::AcknowledgePossession ( class APawn* P )
{
	static UFunction* pFnAcknowledgePossession = NULL;

	if ( ! pFnAcknowledgePossession )
		pFnAcknowledgePossession = (UFunction*) UObject::GObjObjects()->Data[ 45892 ];

	ADVPlayerController_execAcknowledgePossession_Parms AcknowledgePossession_Parms;
	AcknowledgePossession_Parms.P = P;

	this->ProcessEvent ( pFnAcknowledgePossession, &AcknowledgePossession_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.PerformUseAbility
// [0x00020102] 
// Parameters infos:
// unsigned char                  AbilityNumber                  ( CPF_Parm )
// class ADVPawn*                 RepTargetPawn                  ( CPF_Parm )
// unsigned long                  RepUsingAimAssist              ( CPF_Parm )

void ADVPlayerController::PerformUseAbility ( unsigned char AbilityNumber, class ADVPawn* RepTargetPawn, unsigned long RepUsingAimAssist )
{
	static UFunction* pFnPerformUseAbility = NULL;

	if ( ! pFnPerformUseAbility )
		pFnPerformUseAbility = (UFunction*) UObject::GObjObjects()->Data[ 45887 ];

	ADVPlayerController_execPerformUseAbility_Parms PerformUseAbility_Parms;
	PerformUseAbility_Parms.AbilityNumber = AbilityNumber;
	PerformUseAbility_Parms.RepTargetPawn = RepTargetPawn;
	PerformUseAbility_Parms.RepUsingAimAssist = RepUsingAimAssist;

	this->ProcessEvent ( pFnPerformUseAbility, &PerformUseAbility_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ServerUseAbility
// [0x002400C3] ( FUNC_Final )
// Parameters infos:
// unsigned char                  AbilityNumber                  ( CPF_Parm )
// class ADVPawn*                 RepTargetPawn                  ( CPF_Parm )
// unsigned long                  RepUsingAimAssist              ( CPF_Parm )

void ADVPlayerController::ServerUseAbility ( unsigned char AbilityNumber, class ADVPawn* RepTargetPawn, unsigned long RepUsingAimAssist )
{
	static UFunction* pFnServerUseAbility = NULL;

	if ( ! pFnServerUseAbility )
		pFnServerUseAbility = (UFunction*) UObject::GObjObjects()->Data[ 45883 ];

	ADVPlayerController_execServerUseAbility_Parms ServerUseAbility_Parms;
	ServerUseAbility_Parms.AbilityNumber = AbilityNumber;
	ServerUseAbility_Parms.RepTargetPawn = RepTargetPawn;
	ServerUseAbility_Parms.RepUsingAimAssist = RepUsingAimAssist;

	this->ProcessEvent ( pFnServerUseAbility, &ServerUseAbility_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.MappedUseAbility
// [0x00020102] 
// Parameters infos:
// unsigned char                  FinalInteralIndex              ( CPF_Parm )

void ADVPlayerController::MappedUseAbility ( unsigned char FinalInteralIndex )
{
	static UFunction* pFnMappedUseAbility = NULL;

	if ( ! pFnMappedUseAbility )
		pFnMappedUseAbility = (UFunction*) UObject::GObjObjects()->Data[ 45881 ];

	ADVPlayerController_execMappedUseAbility_Parms MappedUseAbility_Parms;
	MappedUseAbility_Parms.FinalInteralIndex = FinalInteralIndex;

	this->ProcessEvent ( pFnMappedUseAbility, &MappedUseAbility_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.UseAbility
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned char                  AbilityNumber                  ( CPF_Parm )

void ADVPlayerController::UseAbility ( unsigned char AbilityNumber )
{
	static UFunction* pFnUseAbility = NULL;

	if ( ! pFnUseAbility )
		pFnUseAbility = (UFunction*) UObject::GObjObjects()->Data[ 45875 ];

	ADVPlayerController_execUseAbility_Parms UseAbility_Parms;
	UseAbility_Parms.AbilityNumber = AbilityNumber;

	this->ProcessEvent ( pFnUseAbility, &UseAbility_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.QueueSpell
// [0x00020002] 
// Parameters infos:
// unsigned char                  AbilityNumber                  ( CPF_Parm )

void ADVPlayerController::QueueSpell ( unsigned char AbilityNumber )
{
	static UFunction* pFnQueueSpell = NULL;

	if ( ! pFnQueueSpell )
		pFnQueueSpell = (UFunction*) UObject::GObjObjects()->Data[ 45873 ];

	ADVPlayerController_execQueueSpell_Parms QueueSpell_Parms;
	QueueSpell_Parms.AbilityNumber = AbilityNumber;

	this->ProcessEvent ( pFnQueueSpell, &QueueSpell_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.PlayerTick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVPlayerController::PlayerTick ( float DeltaTime )
{
	static UFunction* pFnPlayerTick = NULL;

	if ( ! pFnPlayerTick )
		pFnPlayerTick = (UFunction*) UObject::GObjObjects()->Data[ 45866 ];

	ADVPlayerController_execPlayerTick_Parms PlayerTick_Parms;
	PlayerTick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPlayerTick, &PlayerTick_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.KickForAFK
// [0x002200C2] 
// Parameters infos:

void ADVPlayerController::KickForAFK ( )
{
	static UFunction* pFnKickForAFK = NULL;

	if ( ! pFnKickForAFK )
		pFnKickForAFK = (UFunction*) UObject::GObjObjects()->Data[ 45865 ];

	ADVPlayerController_execKickForAFK_Parms KickForAFK_Parms;

	this->ProcessEvent ( pFnKickForAFK, &KickForAFK_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.PerformBlock
// [0x00020102] 
// Parameters infos:
// unsigned long                  StartBlock                     ( CPF_Parm )

void ADVPlayerController::PerformBlock ( unsigned long StartBlock )
{
	static UFunction* pFnPerformBlock = NULL;

	if ( ! pFnPerformBlock )
		pFnPerformBlock = (UFunction*) UObject::GObjObjects()->Data[ 45863 ];

	ADVPlayerController_execPerformBlock_Parms PerformBlock_Parms;
	PerformBlock_Parms.StartBlock = StartBlock;

	this->ProcessEvent ( pFnPerformBlock, &PerformBlock_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ServerBlock
// [0x002200C2] 
// Parameters infos:
// unsigned long                  StartBlock                     ( CPF_Parm )

void ADVPlayerController::ServerBlock ( unsigned long StartBlock )
{
	static UFunction* pFnServerBlock = NULL;

	if ( ! pFnServerBlock )
		pFnServerBlock = (UFunction*) UObject::GObjObjects()->Data[ 45861 ];

	ADVPlayerController_execServerBlock_Parms ServerBlock_Parms;
	ServerBlock_Parms.StartBlock = StartBlock;

	this->ProcessEvent ( pFnServerBlock, &ServerBlock_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.bLock
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  StartBlock                     ( CPF_Parm )

void ADVPlayerController::bLock ( unsigned long StartBlock )
{
	static UFunction* pFnbLock = NULL;

	if ( ! pFnbLock )
		pFnbLock = (UFunction*) UObject::GObjObjects()->Data[ 45859 ];

	ADVPlayerController_execbLock_Parms bLock_Parms;
	bLock_Parms.StartBlock = StartBlock;

	this->ProcessEvent ( pFnbLock, &bLock_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.PerformStopCast
// [0x00020102] 
// Parameters infos:

void ADVPlayerController::PerformStopCast ( )
{
	static UFunction* pFnPerformStopCast = NULL;

	if ( ! pFnPerformStopCast )
		pFnPerformStopCast = (UFunction*) UObject::GObjObjects()->Data[ 45858 ];

	ADVPlayerController_execPerformStopCast_Parms PerformStopCast_Parms;

	this->ProcessEvent ( pFnPerformStopCast, &PerformStopCast_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ServerStopCast
// [0x002200C2] 
// Parameters infos:

void ADVPlayerController::ServerStopCast ( )
{
	static UFunction* pFnServerStopCast = NULL;

	if ( ! pFnServerStopCast )
		pFnServerStopCast = (UFunction*) UObject::GObjObjects()->Data[ 45857 ];

	ADVPlayerController_execServerStopCast_Parms ServerStopCast_Parms;

	this->ProcessEvent ( pFnServerStopCast, &ServerStopCast_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.StopCast
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADVPlayerController::StopCast ( )
{
	static UFunction* pFnStopCast = NULL;

	if ( ! pFnStopCast )
		pFnStopCast = (UFunction*) UObject::GObjObjects()->Data[ 45856 ];

	ADVPlayerController_execStopCast_Parms StopCast_Parms;

	this->ProcessEvent ( pFnStopCast, &StopCast_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.PerformUnstuck
// [0x00020102] 
// Parameters infos:

void ADVPlayerController::PerformUnstuck ( )
{
	static UFunction* pFnPerformUnstuck = NULL;

	if ( ! pFnPerformUnstuck )
		pFnPerformUnstuck = (UFunction*) UObject::GObjObjects()->Data[ 45854 ];

	ADVPlayerController_execPerformUnstuck_Parms PerformUnstuck_Parms;

	this->ProcessEvent ( pFnPerformUnstuck, &PerformUnstuck_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ServerUnstuck
// [0x002200C2] 
// Parameters infos:

void ADVPlayerController::ServerUnstuck ( )
{
	static UFunction* pFnServerUnstuck = NULL;

	if ( ! pFnServerUnstuck )
		pFnServerUnstuck = (UFunction*) UObject::GObjObjects()->Data[ 45853 ];

	ADVPlayerController_execServerUnstuck_Parms ServerUnstuck_Parms;

	this->ProcessEvent ( pFnServerUnstuck, &ServerUnstuck_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.UnStuck
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADVPlayerController::UnStuck ( )
{
	static UFunction* pFnUnStuck = NULL;

	if ( ! pFnUnStuck )
		pFnUnStuck = (UFunction*) UObject::GObjObjects()->Data[ 45852 ];

	ADVPlayerController_execUnStuck_Parms UnStuck_Parms;

	this->ProcessEvent ( pFnUnStuck, &UnStuck_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.PerformSprint
// [0x00020102] 
// Parameters infos:
// unsigned long                  StartSprint                    ( CPF_Parm )

void ADVPlayerController::PerformSprint ( unsigned long StartSprint )
{
	static UFunction* pFnPerformSprint = NULL;

	if ( ! pFnPerformSprint )
		pFnPerformSprint = (UFunction*) UObject::GObjObjects()->Data[ 45850 ];

	ADVPlayerController_execPerformSprint_Parms PerformSprint_Parms;
	PerformSprint_Parms.StartSprint = StartSprint;

	this->ProcessEvent ( pFnPerformSprint, &PerformSprint_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ServerSprint
// [0x002200C2] 
// Parameters infos:
// unsigned long                  StartSprint                    ( CPF_Parm )

void ADVPlayerController::ServerSprint ( unsigned long StartSprint )
{
	static UFunction* pFnServerSprint = NULL;

	if ( ! pFnServerSprint )
		pFnServerSprint = (UFunction*) UObject::GObjObjects()->Data[ 45848 ];

	ADVPlayerController_execServerSprint_Parms ServerSprint_Parms;
	ServerSprint_Parms.StartSprint = StartSprint;

	this->ProcessEvent ( pFnServerSprint, &ServerSprint_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.Sprint
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  StartSprint                    ( CPF_Parm )

void ADVPlayerController::Sprint ( unsigned long StartSprint )
{
	static UFunction* pFnSprint = NULL;

	if ( ! pFnSprint )
		pFnSprint = (UFunction*) UObject::GObjObjects()->Data[ 45846 ];

	ADVPlayerController_execSprint_Parms Sprint_Parms;
	Sprint_Parms.StartSprint = StartSprint;

	this->ProcessEvent ( pFnSprint, &Sprint_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.AskForPawn
// [0x002200C2] 
// Parameters infos:

void ADVPlayerController::AskForPawn ( )
{
	static UFunction* pFnAskForPawn = NULL;

	if ( ! pFnAskForPawn )
		pFnAskForPawn = (UFunction*) UObject::GObjObjects()->Data[ 45845 ];

	ADVPlayerController_execAskForPawn_Parms AskForPawn_Parms;

	this->ProcessEvent ( pFnAskForPawn, &AskForPawn_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.OnReceivedNativeInputKey
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   Key                            ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          AmountDepressed                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bGamepad                       ( CPF_OptionalParm | CPF_Parm )

bool ADVPlayerController::OnReceivedNativeInputKey ( int ControllerId, struct FName Key, unsigned char EventType, float AmountDepressed, unsigned long bGamepad )
{
	static UFunction* pFnOnReceivedNativeInputKey = NULL;

	if ( ! pFnOnReceivedNativeInputKey )
		pFnOnReceivedNativeInputKey = (UFunction*) UObject::GObjObjects()->Data[ 45834 ];

	ADVPlayerController_execOnReceivedNativeInputKey_Parms OnReceivedNativeInputKey_Parms;
	OnReceivedNativeInputKey_Parms.ControllerId = ControllerId;
	memcpy ( &OnReceivedNativeInputKey_Parms.Key, &Key, 0x8 );
	OnReceivedNativeInputKey_Parms.EventType = EventType;
	OnReceivedNativeInputKey_Parms.AmountDepressed = AmountDepressed;
	OnReceivedNativeInputKey_Parms.bGamepad = bGamepad;

	this->ProcessEvent ( pFnOnReceivedNativeInputKey, &OnReceivedNativeInputKey_Parms, NULL );

	return OnReceivedNativeInputKey_Parms.ReturnValue;
};

// Function ForgeGame.DVPlayerController.OnReceivedNativeInputAxis
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   Key                            ( CPF_Parm )
// float                          Delta                          ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// unsigned long                  bGamepad                       ( CPF_OptionalParm | CPF_Parm )

bool ADVPlayerController::OnReceivedNativeInputAxis ( int ControllerId, struct FName Key, float Delta, float DeltaTime, unsigned long bGamepad )
{
	static UFunction* pFnOnReceivedNativeInputAxis = NULL;

	if ( ! pFnOnReceivedNativeInputAxis )
		pFnOnReceivedNativeInputAxis = (UFunction*) UObject::GObjObjects()->Data[ 45827 ];

	ADVPlayerController_execOnReceivedNativeInputAxis_Parms OnReceivedNativeInputAxis_Parms;
	OnReceivedNativeInputAxis_Parms.ControllerId = ControllerId;
	memcpy ( &OnReceivedNativeInputAxis_Parms.Key, &Key, 0x8 );
	OnReceivedNativeInputAxis_Parms.Delta = Delta;
	OnReceivedNativeInputAxis_Parms.DeltaTime = DeltaTime;
	OnReceivedNativeInputAxis_Parms.bGamepad = bGamepad;

	this->ProcessEvent ( pFnOnReceivedNativeInputAxis, &OnReceivedNativeInputAxis_Parms, NULL );

	return OnReceivedNativeInputAxis_Parms.ReturnValue;
};

// Function ForgeGame.DVPlayerController.IncrementNotAFKTime
// [0x00020002] 
// Parameters infos:

void ADVPlayerController::IncrementNotAFKTime ( )
{
	static UFunction* pFnIncrementNotAFKTime = NULL;

	if ( ! pFnIncrementNotAFKTime )
		pFnIncrementNotAFKTime = (UFunction*) UObject::GObjObjects()->Data[ 45826 ];

	ADVPlayerController_execIncrementNotAFKTime_Parms IncrementNotAFKTime_Parms;

	this->ProcessEvent ( pFnIncrementNotAFKTime, &IncrementNotAFKTime_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.InitInputSystem
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADVPlayerController::eventInitInputSystem ( )
{
	static UFunction* pFnInitInputSystem = NULL;

	if ( ! pFnInitInputSystem )
		pFnInitInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 45825 ];

	ADVPlayerController_eventInitInputSystem_Parms InitInputSystem_Parms;

	this->ProcessEvent ( pFnInitInputSystem, &InitInputSystem_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.SetupAbilitiesInstigator
// [0x00020002] 
// Parameters infos:

void ADVPlayerController::SetupAbilitiesInstigator ( )
{
	static UFunction* pFnSetupAbilitiesInstigator = NULL;

	if ( ! pFnSetupAbilitiesInstigator )
		pFnSetupAbilitiesInstigator = (UFunction*) UObject::GObjObjects()->Data[ 45823 ];

	ADVPlayerController_execSetupAbilitiesInstigator_Parms SetupAbilitiesInstigator_Parms;

	this->ProcessEvent ( pFnSetupAbilitiesInstigator, &SetupAbilitiesInstigator_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ADVPlayerController::eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 45820 ];

	ADVPlayerController_eventPossess_Parms Possess_Parms;
	Possess_Parms.inPawn = inPawn;
	Possess_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.UpdateAccountDetails
// [0x00020002] 
// Parameters infos:
// class UJsonObject*             TheNewAccountDetails           ( CPF_Parm )

void ADVPlayerController::UpdateAccountDetails ( class UJsonObject* TheNewAccountDetails )
{
	static UFunction* pFnUpdateAccountDetails = NULL;

	if ( ! pFnUpdateAccountDetails )
		pFnUpdateAccountDetails = (UFunction*) UObject::GObjObjects()->Data[ 45813 ];

	ADVPlayerController_execUpdateAccountDetails_Parms UpdateAccountDetails_Parms;
	UpdateAccountDetails_Parms.TheNewAccountDetails = TheNewAccountDetails;

	this->ProcessEvent ( pFnUpdateAccountDetails, &UpdateAccountDetails_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.SetScreenName
// [0x00020002] 
// Parameters infos:

void ADVPlayerController::SetScreenName ( )
{
	static UFunction* pFnSetScreenName = NULL;

	if ( ! pFnSetScreenName )
		pFnSetScreenName = (UFunction*) UObject::GObjObjects()->Data[ 45811 ];

	ADVPlayerController_execSetScreenName_Parms SetScreenName_Parms;

	this->ProcessEvent ( pFnSetScreenName, &SetScreenName_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.SetName
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void ADVPlayerController::SetName ( struct FString S )
{
	static UFunction* pFnSetName = NULL;

	if ( ! pFnSetName )
		pFnSetName = (UFunction*) UObject::GObjObjects()->Data[ 45809 ];

	ADVPlayerController_execSetName_Parms SetName_Parms;
	memcpy ( &SetName_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnSetName, &SetName_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.RequestInvitePlayerName
// [0x00020002] 
// Parameters infos:
// struct FString                 SearchTerm                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GroupID                        ( CPF_Parm | CPF_NeedCtorLink )

void ADVPlayerController::RequestInvitePlayerName ( struct FString SearchTerm, struct FString GroupID )
{
	static UFunction* pFnRequestInvitePlayerName = NULL;

	if ( ! pFnRequestInvitePlayerName )
		pFnRequestInvitePlayerName = (UFunction*) UObject::GObjObjects()->Data[ 45802 ];

	ADVPlayerController_execRequestInvitePlayerName_Parms RequestInvitePlayerName_Parms;
	memcpy ( &RequestInvitePlayerName_Parms.SearchTerm, &SearchTerm, 0xC );
	memcpy ( &RequestInvitePlayerName_Parms.GroupID, &GroupID, 0xC );

	this->ProcessEvent ( pFnRequestInvitePlayerName, &RequestInvitePlayerName_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.RequestJoinPlayer
// [0x00020002] 
// Parameters infos:
// struct FString                 SearchTerm                     ( CPF_Parm | CPF_NeedCtorLink )

void ADVPlayerController::RequestJoinPlayer ( struct FString SearchTerm )
{
	static UFunction* pFnRequestJoinPlayer = NULL;

	if ( ! pFnRequestJoinPlayer )
		pFnRequestJoinPlayer = (UFunction*) UObject::GObjObjects()->Data[ 45796 ];

	ADVPlayerController_execRequestJoinPlayer_Parms RequestJoinPlayer_Parms;
	memcpy ( &RequestJoinPlayer_Parms.SearchTerm, &SearchTerm, 0xC );

	this->ProcessEvent ( pFnRequestJoinPlayer, &RequestJoinPlayer_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.RequestQuickMatch
// [0x00020002] 
// Parameters infos:
// struct FString                 DesiredGameType                ( CPF_Parm | CPF_NeedCtorLink )

void ADVPlayerController::RequestQuickMatch ( struct FString DesiredGameType )
{
	static UFunction* pFnRequestQuickMatch = NULL;

	if ( ! pFnRequestQuickMatch )
		pFnRequestQuickMatch = (UFunction*) UObject::GObjObjects()->Data[ 45793 ];

	ADVPlayerController_execRequestQuickMatch_Parms RequestQuickMatch_Parms;
	memcpy ( &RequestQuickMatch_Parms.DesiredGameType, &DesiredGameType, 0xC );

	this->ProcessEvent ( pFnRequestQuickMatch, &RequestQuickMatch_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.InitPlayerReplicationInfo
// [0x00020002] 
// Parameters infos:

void ADVPlayerController::InitPlayerReplicationInfo ( )
{
	static UFunction* pFnInitPlayerReplicationInfo = NULL;

	if ( ! pFnInitPlayerReplicationInfo )
		pFnInitPlayerReplicationInfo = (UFunction*) UObject::GObjObjects()->Data[ 45792 ];

	ADVPlayerController_execInitPlayerReplicationInfo_Parms InitPlayerReplicationInfo_Parms;

	this->ProcessEvent ( pFnInitPlayerReplicationInfo, &InitPlayerReplicationInfo_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.UpdateStatPoints
// [0x00020002] 
// Parameters infos:
// int                            TheClassId                     ( CPF_Parm )
// class UJsonObject*             TheStatPointDetails            ( CPF_Parm )

void ADVPlayerController::UpdateStatPoints ( int TheClassId, class UJsonObject* TheStatPointDetails )
{
	static UFunction* pFnUpdateStatPoints = NULL;

	if ( ! pFnUpdateStatPoints )
		pFnUpdateStatPoints = (UFunction*) UObject::GObjObjects()->Data[ 45789 ];

	ADVPlayerController_execUpdateStatPoints_Parms UpdateStatPoints_Parms;
	UpdateStatPoints_Parms.TheClassId = TheClassId;
	UpdateStatPoints_Parms.TheStatPointDetails = TheStatPointDetails;

	this->ProcessEvent ( pFnUpdateStatPoints, &UpdateStatPoints_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.GetUpdatedStatPointsForClass
// [0x00020002] 
// Parameters infos:
// int                            PlayerClassId                  ( CPF_Parm )

void ADVPlayerController::GetUpdatedStatPointsForClass ( int PlayerClassId )
{
	static UFunction* pFnGetUpdatedStatPointsForClass = NULL;

	if ( ! pFnGetUpdatedStatPointsForClass )
		pFnGetUpdatedStatPointsForClass = (UFunction*) UObject::GObjObjects()->Data[ 45786 ];

	ADVPlayerController_execGetUpdatedStatPointsForClass_Parms GetUpdatedStatPointsForClass_Parms;
	GetUpdatedStatPointsForClass_Parms.PlayerClassId = PlayerClassId;

	this->ProcessEvent ( pFnGetUpdatedStatPointsForClass, &GetUpdatedStatPointsForClass_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.SetupAccountDetails
// [0x00020002] 
// Parameters infos:

void ADVPlayerController::SetupAccountDetails ( )
{
	static UFunction* pFnSetupAccountDetails = NULL;

	if ( ! pFnSetupAccountDetails )
		pFnSetupAccountDetails = (UFunction*) UObject::GObjObjects()->Data[ 45783 ];

	ADVPlayerController_execSetupAccountDetails_Parms SetupAccountDetails_Parms;

	this->ProcessEvent ( pFnSetupAccountDetails, &SetupAccountDetails_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ClientTravel
// [0x010249C2] ( FUNC_Event )
// Parameters infos:
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  TravelType                     ( CPF_Parm )
// unsigned long                  bSeamless                      ( CPF_OptionalParm | CPF_Parm )
// struct FGuid                   MapPackageGuid                 ( CPF_OptionalParm | CPF_Parm )

void ADVPlayerController::eventClientTravel ( struct FString URL, unsigned char TravelType, unsigned long bSeamless, struct FGuid MapPackageGuid )
{
	static UFunction* pFnClientTravel = NULL;

	if ( ! pFnClientTravel )
		pFnClientTravel = (UFunction*) UObject::GObjObjects()->Data[ 45775 ];

	ADVPlayerController_eventClientTravel_Parms ClientTravel_Parms;
	memcpy ( &ClientTravel_Parms.URL, &URL, 0xC );
	ClientTravel_Parms.TravelType = TravelType;
	ClientTravel_Parms.bSeamless = bSeamless;
	memcpy ( &ClientTravel_Parms.MapPackageGuid, &MapPackageGuid, 0x10 );

	this->ProcessEvent ( pFnClientTravel, &ClientTravel_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ClientWasKicked
// [0x010249C2] ( FUNC_Event )
// Parameters infos:
// struct FString                 KickReason                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void ADVPlayerController::eventClientWasKicked ( struct FString KickReason )
{
	static UFunction* pFnClientWasKicked = NULL;

	if ( ! pFnClientWasKicked )
		pFnClientWasKicked = (UFunction*) UObject::GObjObjects()->Data[ 45773 ];

	ADVPlayerController_eventClientWasKicked_Parms ClientWasKicked_Parms;
	memcpy ( &ClientWasKicked_Parms.KickReason, &KickReason, 0xC );

	this->ProcessEvent ( pFnClientWasKicked, &ClientWasKicked_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.AttemptPlayerAuth
// [0x00020102] 
// Parameters infos:

void ADVPlayerController::AttemptPlayerAuth ( )
{
	static UFunction* pFnAttemptPlayerAuth = NULL;

	if ( ! pFnAttemptPlayerAuth )
		pFnAttemptPlayerAuth = (UFunction*) UObject::GObjObjects()->Data[ 45771 ];

	ADVPlayerController_execAttemptPlayerAuth_Parms AttemptPlayerAuth_Parms;

	this->ProcessEvent ( pFnAttemptPlayerAuth, &AttemptPlayerAuth_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ServerSetSkinChoices
// [0x002200C2] 
// Parameters infos:
// unsigned char                  ClassSkinChoices               ( CPF_Parm )

void ADVPlayerController::ServerSetSkinChoices ( unsigned char* ClassSkinChoices )
{
	static UFunction* pFnServerSetSkinChoices = NULL;

	if ( ! pFnServerSetSkinChoices )
		pFnServerSetSkinChoices = (UFunction*) UObject::GObjObjects()->Data[ 45768 ];

	ADVPlayerController_execServerSetSkinChoices_Parms ServerSetSkinChoices_Parms;
	memcpy ( &ServerSetSkinChoices_Parms.ClassSkinChoices, &ClassSkinChoices, 0x5 );

	this->ProcessEvent ( pFnServerSetSkinChoices, &ServerSetSkinChoices_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ServerAuthDetails
// [0x002200C2] 
// Parameters infos:
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SessionId                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ScreenName                     ( CPF_Parm | CPF_NeedCtorLink )

void ADVPlayerController::ServerAuthDetails ( struct FString UserId, struct FString SessionId, struct FString ScreenName )
{
	static UFunction* pFnServerAuthDetails = NULL;

	if ( ! pFnServerAuthDetails )
		pFnServerAuthDetails = (UFunction*) UObject::GObjObjects()->Data[ 45761 ];

	ADVPlayerController_execServerAuthDetails_Parms ServerAuthDetails_Parms;
	memcpy ( &ServerAuthDetails_Parms.UserId, &UserId, 0xC );
	memcpy ( &ServerAuthDetails_Parms.SessionId, &SessionId, 0xC );
	memcpy ( &ServerAuthDetails_Parms.ScreenName, &ScreenName, 0xC );

	this->ProcessEvent ( pFnServerAuthDetails, &ServerAuthDetails_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ServerSetFocusChoices
// [0x002200C2] 
// Parameters infos:
// struct FSAbilityFocusChoices   ClassAbiltyFocuses             ( CPF_Parm )

void ADVPlayerController::ServerSetFocusChoices ( struct FSAbilityFocusChoices* ClassAbiltyFocuses )
{
	static UFunction* pFnServerSetFocusChoices = NULL;

	if ( ! pFnServerSetFocusChoices )
		pFnServerSetFocusChoices = (UFunction*) UObject::GObjObjects()->Data[ 45756 ];

	ADVPlayerController_execServerSetFocusChoices_Parms ServerSetFocusChoices_Parms;
	memcpy ( &ServerSetFocusChoices_Parms.ClassAbiltyFocuses, &ClassAbiltyFocuses, 0x28 );

	this->ProcessEvent ( pFnServerSetFocusChoices, &ServerSetFocusChoices_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ClientSendFocusChoices
// [0x00820102] 
// Parameters infos:

void ADVPlayerController::ClientSendFocusChoices ( )
{
	static UFunction* pFnClientSendFocusChoices = NULL;

	if ( ! pFnClientSendFocusChoices )
		pFnClientSendFocusChoices = (UFunction*) UObject::GObjObjects()->Data[ 45749 ];

	ADVPlayerController_execClientSendFocusChoices_Parms ClientSendFocusChoices_Parms;

	this->ProcessEvent ( pFnClientSendFocusChoices, &ClientSendFocusChoices_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ClientSendSkinChoices
// [0x00020102] 
// Parameters infos:

void ADVPlayerController::ClientSendSkinChoices ( )
{
	static UFunction* pFnClientSendSkinChoices = NULL;

	if ( ! pFnClientSendSkinChoices )
		pFnClientSendSkinChoices = (UFunction*) UObject::GObjObjects()->Data[ 45742 ];

	ADVPlayerController_execClientSendSkinChoices_Parms ClientSendSkinChoices_Parms;

	this->ProcessEvent ( pFnClientSendSkinChoices, &ClientSendSkinChoices_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ClientAuthResponse
// [0x00020002] 
// Parameters infos:

void ADVPlayerController::ClientAuthResponse ( )
{
	static UFunction* pFnClientAuthResponse = NULL;

	if ( ! pFnClientAuthResponse )
		pFnClientAuthResponse = (UFunction*) UObject::GObjObjects()->Data[ 45740 ];

	ADVPlayerController_execClientAuthResponse_Parms ClientAuthResponse_Parms;

	this->ProcessEvent ( pFnClientAuthResponse, &ClientAuthResponse_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ClientAuthRequired
// [0x010201C2] 
// Parameters infos:

void ADVPlayerController::ClientAuthRequired ( )
{
	static UFunction* pFnClientAuthRequired = NULL;

	if ( ! pFnClientAuthRequired )
		pFnClientAuthRequired = (UFunction*) UObject::GObjObjects()->Data[ 45739 ];

	ADVPlayerController_execClientAuthRequired_Parms ClientAuthRequired_Parms;

	this->ProcessEvent ( pFnClientAuthRequired, &ClientAuthRequired_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.CallDVGCloudAuth
// [0x00020102] 
// Parameters infos:

void ADVPlayerController::CallDVGCloudAuth ( )
{
	static UFunction* pFnCallDVGCloudAuth = NULL;

	if ( ! pFnCallDVGCloudAuth )
		pFnCallDVGCloudAuth = (UFunction*) UObject::GObjObjects()->Data[ 45737 ];

	ADVPlayerController_execCallDVGCloudAuth_Parms CallDVGCloudAuth_Parms;

	this->ProcessEvent ( pFnCallDVGCloudAuth, &CallDVGCloudAuth_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ApplySteamCloudInputSettings
// [0x00020002] 
// Parameters infos:

void ADVPlayerController::ApplySteamCloudInputSettings ( )
{
	static UFunction* pFnApplySteamCloudInputSettings = NULL;

	if ( ! pFnApplySteamCloudInputSettings )
		pFnApplySteamCloudInputSettings = (UFunction*) UObject::GObjObjects()->Data[ 45735 ];

	ADVPlayerController_execApplySteamCloudInputSettings_Parms ApplySteamCloudInputSettings_Parms;

	this->ProcessEvent ( pFnApplySteamCloudInputSettings, &ApplySteamCloudInputSettings_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ApplySteamCloudSettings
// [0x00020102] 
// Parameters infos:

void ADVPlayerController::ApplySteamCloudSettings ( )
{
	static UFunction* pFnApplySteamCloudSettings = NULL;

	if ( ! pFnApplySteamCloudSettings )
		pFnApplySteamCloudSettings = (UFunction*) UObject::GObjObjects()->Data[ 45725 ];

	ADVPlayerController_execApplySteamCloudSettings_Parms ApplySteamCloudSettings_Parms;

	this->ProcessEvent ( pFnApplySteamCloudSettings, &ApplySteamCloudSettings_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.GetCloudSettings
// [0x00020102] 
// Parameters infos:

void ADVPlayerController::GetCloudSettings ( )
{
	static UFunction* pFnGetCloudSettings = NULL;

	if ( ! pFnGetCloudSettings )
		pFnGetCloudSettings = (UFunction*) UObject::GObjObjects()->Data[ 45724 ];

	ADVPlayerController_execGetCloudSettings_Parms GetCloudSettings_Parms;

	this->ProcessEvent ( pFnGetCloudSettings, &GetCloudSettings_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.InitUserSettings
// [0x00020102] 
// Parameters infos:

void ADVPlayerController::InitUserSettings ( )
{
	static UFunction* pFnInitUserSettings = NULL;

	if ( ! pFnInitUserSettings )
		pFnInitUserSettings = (UFunction*) UObject::GObjObjects()->Data[ 45717 ];

	ADVPlayerController_execInitUserSettings_Parms InitUserSettings_Parms;

	this->ProcessEvent ( pFnInitUserSettings, &InitUserSettings_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVPlayerController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 45716 ];

	ADVPlayerController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVPlayerController::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 45714 ];

	ADVPlayerController_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.FOV
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          F                              ( CPF_Parm )

void ADVPlayerController::FOV ( float F )
{
	static UFunction* pFnFOV = NULL;

	if ( ! pFnFOV )
		pFnFOV = (UFunction*) UObject::GObjObjects()->Data[ 45712 ];

	ADVPlayerController_execFOV_Parms FOV_Parms;
	FOV_Parms.F = F;

	this->ProcessEvent ( pFnFOV, &FOV_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.Pause
// [0x00020200] ( FUNC_Exec )
// Parameters infos:

void ADVPlayerController::Pause ( )
{
	static UFunction* pFnPause = NULL;

	if ( ! pFnPause )
		pFnPause = (UFunction*) UObject::GObjObjects()->Data[ 45711 ];

	ADVPlayerController_execPause_Parms Pause_Parms;

	this->ProcessEvent ( pFnPause, &Pause_Parms, NULL );
};

// Function ForgeGame.DVPlayerController.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADVPlayerController::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 45709 ];

	ADVPlayerController_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVHUD.GetLocalPlayerOwnerIndex
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADVHUD::GetLocalPlayerOwnerIndex ( )
{
	static UFunction* pFnGetLocalPlayerOwnerIndex = NULL;

	if ( ! pFnGetLocalPlayerOwnerIndex )
		pFnGetLocalPlayerOwnerIndex = (UFunction*) UObject::GObjObjects()->Data[ 45473 ];

	ADVHUD_execGetLocalPlayerOwnerIndex_Parms GetLocalPlayerOwnerIndex_Parms;

	this->ProcessEvent ( pFnGetLocalPlayerOwnerIndex, &GetLocalPlayerOwnerIndex_Parms, NULL );

	return GetLocalPlayerOwnerIndex_Parms.ReturnValue;
};

// Function ForgeGame.DVHUD.NotifyBindPostProcessEffects
// [0x00020002] 
// Parameters infos:

void ADVHUD::NotifyBindPostProcessEffects ( )
{
	static UFunction* pFnNotifyBindPostProcessEffects = NULL;

	if ( ! pFnNotifyBindPostProcessEffects )
		pFnNotifyBindPostProcessEffects = (UFunction*) UObject::GObjObjects()->Data[ 45470 ];

	ADVHUD_execNotifyBindPostProcessEffects_Parms NotifyBindPostProcessEffects_Parms;

	this->ProcessEvent ( pFnNotifyBindPostProcessEffects, &NotifyBindPostProcessEffects_Parms, NULL );
};

// Function ForgeGame.DVHUD.ChatScrollDown
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADVHUD::ChatScrollDown ( )
{
	static UFunction* pFnChatScrollDown = NULL;

	if ( ! pFnChatScrollDown )
		pFnChatScrollDown = (UFunction*) UObject::GObjObjects()->Data[ 45469 ];

	ADVHUD_execChatScrollDown_Parms ChatScrollDown_Parms;

	this->ProcessEvent ( pFnChatScrollDown, &ChatScrollDown_Parms, NULL );
};

// Function ForgeGame.DVHUD.ChatScrollUp
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADVHUD::ChatScrollUp ( )
{
	static UFunction* pFnChatScrollUp = NULL;

	if ( ! pFnChatScrollUp )
		pFnChatScrollUp = (UFunction*) UObject::GObjObjects()->Data[ 45468 ];

	ADVHUD_execChatScrollUp_Parms ChatScrollUp_Parms;

	this->ProcessEvent ( pFnChatScrollUp, &ChatScrollUp_Parms, NULL );
};

// Function ForgeGame.DVHUD.Message
// [0x00024002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )
// struct FString                 msg                            ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FName                   MsgType                        ( CPF_Parm )
// float                          Lifetime                       ( CPF_OptionalParm | CPF_Parm )

void ADVHUD::Message ( class APlayerReplicationInfo* PRI, struct FString msg, struct FName MsgType, float Lifetime )
{
	static UFunction* pFnMessage = NULL;

	if ( ! pFnMessage )
		pFnMessage = (UFunction*) UObject::GObjObjects()->Data[ 45463 ];

	ADVHUD_execMessage_Parms Message_Parms;
	Message_Parms.PRI = PRI;
	memcpy ( &Message_Parms.msg, &msg, 0xC );
	memcpy ( &Message_Parms.MsgType, &MsgType, 0x8 );
	Message_Parms.Lifetime = Lifetime;

	this->ProcessEvent ( pFnMessage, &Message_Parms, NULL );
};

// Function ForgeGame.DVHUD.ShowScores
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADVHUD::ShowScores ( )
{
	static UFunction* pFnShowScores = NULL;

	if ( ! pFnShowScores )
		pFnShowScores = (UFunction*) UObject::GObjObjects()->Data[ 45462 ];

	ADVHUD_execShowScores_Parms ShowScores_Parms;

	this->ProcessEvent ( pFnShowScores, &ShowScores_Parms, NULL );
};

// Function ForgeGame.DVHUD.ToggleCursorMode
// [0x00024202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  ShowCursorMode                 ( CPF_OptionalParm | CPF_Parm )

void ADVHUD::ToggleCursorMode ( unsigned long ShowCursorMode )
{
	static UFunction* pFnToggleCursorMode = NULL;

	if ( ! pFnToggleCursorMode )
		pFnToggleCursorMode = (UFunction*) UObject::GObjObjects()->Data[ 45459 ];

	ADVHUD_execToggleCursorMode_Parms ToggleCursorMode_Parms;
	ToggleCursorMode_Parms.ShowCursorMode = ShowCursorMode;

	this->ProcessEvent ( pFnToggleCursorMode, &ToggleCursorMode_Parms, NULL );
};

// Function ForgeGame.DVHUD.HideKillCam
// [0x00020002] 
// Parameters infos:

void ADVHUD::HideKillCam ( )
{
	static UFunction* pFnHideKillCam = NULL;

	if ( ! pFnHideKillCam )
		pFnHideKillCam = (UFunction*) UObject::GObjObjects()->Data[ 45458 ];

	ADVHUD_execHideKillCam_Parms HideKillCam_Parms;

	this->ProcessEvent ( pFnHideKillCam, &HideKillCam_Parms, NULL );
};

// Function ForgeGame.DVHUD.ShowKillCam
// [0x00024002] 
// Parameters infos:
// struct FString                 KillerClassName                ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class ADVPlayerReplicationInfo* KillerPRI                      ( CPF_OptionalParm | CPF_Parm )
// int                            KillingAbilityIndex            ( CPF_OptionalParm | CPF_Parm )

void ADVHUD::ShowKillCam ( struct FString KillerClassName, class ADVPlayerReplicationInfo* KillerPRI, int KillingAbilityIndex )
{
	static UFunction* pFnShowKillCam = NULL;

	if ( ! pFnShowKillCam )
		pFnShowKillCam = (UFunction*) UObject::GObjObjects()->Data[ 45452 ];

	ADVHUD_execShowKillCam_Parms ShowKillCam_Parms;
	memcpy ( &ShowKillCam_Parms.KillerClassName, &KillerClassName, 0xC );
	ShowKillCam_Parms.KillerPRI = KillerPRI;
	ShowKillCam_Parms.KillingAbilityIndex = KillingAbilityIndex;

	this->ProcessEvent ( pFnShowKillCam, &ShowKillCam_Parms, NULL );
};

// Function ForgeGame.DVHUD.ToggleScoreBoard
// [0x00024202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  ShowScoreBoard                 ( CPF_OptionalParm | CPF_Parm )

void ADVHUD::ToggleScoreBoard ( unsigned long ShowScoreBoard )
{
	static UFunction* pFnToggleScoreBoard = NULL;

	if ( ! pFnToggleScoreBoard )
		pFnToggleScoreBoard = (UFunction*) UObject::GObjObjects()->Data[ 45446 ];

	ADVHUD_execToggleScoreBoard_Parms ToggleScoreBoard_Parms;
	ToggleScoreBoard_Parms.ShowScoreBoard = ShowScoreBoard;

	this->ProcessEvent ( pFnToggleScoreBoard, &ToggleScoreBoard_Parms, NULL );
};

// Function ForgeGame.DVHUD.ToggleTeamSelectionMenu
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADVHUD::ToggleTeamSelectionMenu ( )
{
	static UFunction* pFnToggleTeamSelectionMenu = NULL;

	if ( ! pFnToggleTeamSelectionMenu )
		pFnToggleTeamSelectionMenu = (UFunction*) UObject::GObjObjects()->Data[ 45441 ];

	ADVHUD_execToggleTeamSelectionMenu_Parms ToggleTeamSelectionMenu_Parms;

	this->ProcessEvent ( pFnToggleTeamSelectionMenu, &ToggleTeamSelectionMenu_Parms, NULL );
};

// Function ForgeGame.DVHUD.ToggleClassSelectionMenu
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADVHUD::ToggleClassSelectionMenu ( )
{
	static UFunction* pFnToggleClassSelectionMenu = NULL;

	if ( ! pFnToggleClassSelectionMenu )
		pFnToggleClassSelectionMenu = (UFunction*) UObject::GObjObjects()->Data[ 45438 ];

	ADVHUD_execToggleClassSelectionMenu_Parms ToggleClassSelectionMenu_Parms;

	this->ProcessEvent ( pFnToggleClassSelectionMenu, &ToggleClassSelectionMenu_Parms, NULL );
};

// Function ForgeGame.DVHUD.SlideInit
// [0x00020002] 
// Parameters infos:
// class UGFxObject*              NewSlideMC                     ( CPF_Parm )
// struct FString                 NewSlideName                   ( CPF_Parm | CPF_NeedCtorLink )

void ADVHUD::SlideInit ( class UGFxObject* NewSlideMC, struct FString NewSlideName )
{
	static UFunction* pFnSlideInit = NULL;

	if ( ! pFnSlideInit )
		pFnSlideInit = (UFunction*) UObject::GObjObjects()->Data[ 45435 ];

	ADVHUD_execSlideInit_Parms SlideInit_Parms;
	SlideInit_Parms.NewSlideMC = NewSlideMC;
	memcpy ( &SlideInit_Parms.NewSlideName, &NewSlideName, 0xC );

	this->ProcessEvent ( pFnSlideInit, &SlideInit_Parms, NULL );
};

// Function ForgeGame.DVHUD.ToggleEscapeMenu
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADVHUD::ToggleEscapeMenu ( )
{
	static UFunction* pFnToggleEscapeMenu = NULL;

	if ( ! pFnToggleEscapeMenu )
		pFnToggleEscapeMenu = (UFunction*) UObject::GObjObjects()->Data[ 45431 ];

	ADVHUD_execToggleEscapeMenu_Parms ToggleEscapeMenu_Parms;

	this->ProcessEvent ( pFnToggleEscapeMenu, &ToggleEscapeMenu_Parms, NULL );
};

// Function ForgeGame.DVHUD.ResolutionChanged
// [0x00020002] 
// Parameters infos:

void ADVHUD::ResolutionChanged ( )
{
	static UFunction* pFnResolutionChanged = NULL;

	if ( ! pFnResolutionChanged )
		pFnResolutionChanged = (UFunction*) UObject::GObjObjects()->Data[ 45430 ];

	ADVHUD_execResolutionChanged_Parms ResolutionChanged_Parms;

	this->ProcessEvent ( pFnResolutionChanged, &ResolutionChanged_Parms, NULL );
};

// Function ForgeGame.DVHUD.ToggleHUD
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADVHUD::ToggleHUD ( )
{
	static UFunction* pFnToggleHUD = NULL;

	if ( ! pFnToggleHUD )
		pFnToggleHUD = (UFunction*) UObject::GObjObjects()->Data[ 45429 ];

	ADVHUD_execToggleHUD_Parms ToggleHUD_Parms;

	this->ProcessEvent ( pFnToggleHUD, &ToggleHUD_Parms, NULL );
};

// Function ForgeGame.DVHUD.PostRender
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADVHUD::eventPostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 45421 ];

	ADVHUD_eventPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function ForgeGame.DVHUD.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADVHUD::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 45420 ];

	ADVHUD_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVHUD.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADVHUD::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 45419 ];

	ADVHUD_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.UpdateAccountDetails
// [0x00020002] 
// Parameters infos:
// class UJsonObject*             TheNewAccountDetails           ( CPF_Parm )

void UForgeGFxFrontEndSettings::UpdateAccountDetails ( class UJsonObject* TheNewAccountDetails )
{
	static UFunction* pFnUpdateAccountDetails = NULL;

	if ( ! pFnUpdateAccountDetails )
		pFnUpdateAccountDetails = (UFunction*) UObject::GObjObjects()->Data[ 48797 ];

	UForgeGFxFrontEndSettings_execUpdateAccountDetails_Parms UpdateAccountDetails_Parms;
	UpdateAccountDetails_Parms.TheNewAccountDetails = TheNewAccountDetails;

	this->ProcessEvent ( pFnUpdateAccountDetails, &UpdateAccountDetails_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.GetCommandForSteamCloudIndex
// [0x00422002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            TheIndex                       ( CPF_Parm )
// int                            BindType                       ( CPF_Parm | CPF_OutParm )

struct FString UForgeGFxFrontEndSettings::GetCommandForSteamCloudIndex ( int TheIndex, int* BindType )
{
	static UFunction* pFnGetCommandForSteamCloudIndex = NULL;

	if ( ! pFnGetCommandForSteamCloudIndex )
		pFnGetCommandForSteamCloudIndex = (UFunction*) UObject::GObjObjects()->Data[ 48793 ];

	UForgeGFxFrontEndSettings_execGetCommandForSteamCloudIndex_Parms GetCommandForSteamCloudIndex_Parms;
	GetCommandForSteamCloudIndex_Parms.TheIndex = TheIndex;

	this->ProcessEvent ( pFnGetCommandForSteamCloudIndex, &GetCommandForSteamCloudIndex_Parms, NULL );

	if ( BindType )
		*BindType = GetCommandForSteamCloudIndex_Parms.BindType;

	return GetCommandForSteamCloudIndex_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndSettings.GetSteamCloudIndexForCommand
// [0x00022002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 TheCommand                     ( CPF_Parm | CPF_NeedCtorLink )

int UForgeGFxFrontEndSettings::GetSteamCloudIndexForCommand ( struct FString TheCommand )
{
	static UFunction* pFnGetSteamCloudIndexForCommand = NULL;

	if ( ! pFnGetSteamCloudIndexForCommand )
		pFnGetSteamCloudIndexForCommand = (UFunction*) UObject::GObjObjects()->Data[ 48790 ];

	UForgeGFxFrontEndSettings_execGetSteamCloudIndexForCommand_Parms GetSteamCloudIndexForCommand_Parms;
	memcpy ( &GetSteamCloudIndexForCommand_Parms.TheCommand, &TheCommand, 0xC );

	this->ProcessEvent ( pFnGetSteamCloudIndexForCommand, &GetSteamCloudIndexForCommand_Parms, NULL );

	return GetSteamCloudIndexForCommand_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndSettings.GetBindsForCommand
// [0x00422002] 
// Parameters infos:
// struct FString                 TheCommand                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            PrimaryBind                    ( CPF_Parm | CPF_OutParm )
// int                            SecondaryBind                  ( CPF_Parm | CPF_OutParm )
// int                            ControllerBind                 ( CPF_Parm | CPF_OutParm )

void UForgeGFxFrontEndSettings::GetBindsForCommand ( struct FString TheCommand, int* PrimaryBind, int* SecondaryBind, int* ControllerBind )
{
	static UFunction* pFnGetBindsForCommand = NULL;

	if ( ! pFnGetBindsForCommand )
		pFnGetBindsForCommand = (UFunction*) UObject::GObjObjects()->Data[ 48783 ];

	UForgeGFxFrontEndSettings_execGetBindsForCommand_Parms GetBindsForCommand_Parms;
	memcpy ( &GetBindsForCommand_Parms.TheCommand, &TheCommand, 0xC );

	this->ProcessEvent ( pFnGetBindsForCommand, &GetBindsForCommand_Parms, NULL );

	if ( PrimaryBind )
		*PrimaryBind = GetBindsForCommand_Parms.PrimaryBind;

	if ( SecondaryBind )
		*SecondaryBind = GetBindsForCommand_Parms.SecondaryBind;

	if ( ControllerBind )
		*ControllerBind = GetBindsForCommand_Parms.ControllerBind;
};

// Function ForgeGame.ForgeGFxFrontEndSettings.SetAllBindsFromSteamCloud
// [0x00022002] 
// Parameters infos:

void UForgeGFxFrontEndSettings::SetAllBindsFromSteamCloud ( )
{
	static UFunction* pFnSetAllBindsFromSteamCloud = NULL;

	if ( ! pFnSetAllBindsFromSteamCloud )
		pFnSetAllBindsFromSteamCloud = (UFunction*) UObject::GObjObjects()->Data[ 48772 ];

	UForgeGFxFrontEndSettings_execSetAllBindsFromSteamCloud_Parms SetAllBindsFromSteamCloud_Parms;

	this->ProcessEvent ( pFnSetAllBindsFromSteamCloud, &SetAllBindsFromSteamCloud_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.SaveAllBindsToSteamCloud
// [0x00022002] 
// Parameters infos:

void UForgeGFxFrontEndSettings::SaveAllBindsToSteamCloud ( )
{
	static UFunction* pFnSaveAllBindsToSteamCloud = NULL;

	if ( ! pFnSaveAllBindsToSteamCloud )
		pFnSaveAllBindsToSteamCloud = (UFunction*) UObject::GObjObjects()->Data[ 48766 ];

	UForgeGFxFrontEndSettings_execSaveAllBindsToSteamCloud_Parms SaveAllBindsToSteamCloud_Parms;

	this->ProcessEvent ( pFnSaveAllBindsToSteamCloud, &SaveAllBindsToSteamCloud_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.BindKey
// [0x00022002] 
// Parameters infos:
// struct FName                   KeyName                        ( CPF_Parm )
// struct FString                 NewCommand                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FName                   ExistingKey                    ( CPF_Parm )

void UForgeGFxFrontEndSettings::BindKey ( struct FName KeyName, struct FString NewCommand, struct FName ExistingKey )
{
	static UFunction* pFnBindKey = NULL;

	if ( ! pFnBindKey )
		pFnBindKey = (UFunction*) UObject::GObjObjects()->Data[ 48758 ];

	UForgeGFxFrontEndSettings_execBindKey_Parms BindKey_Parms;
	memcpy ( &BindKey_Parms.KeyName, &KeyName, 0x8 );
	memcpy ( &BindKey_Parms.NewCommand, &NewCommand, 0xC );
	memcpy ( &BindKey_Parms.ExistingKey, &ExistingKey, 0x8 );

	this->ProcessEvent ( pFnBindKey, &BindKey_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.FilterButtonInput
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   ButtonName                     ( CPF_Parm )
// unsigned char                  InputEvent                     ( CPF_Parm )

bool UForgeGFxFrontEndSettings::FilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent )
{
	static UFunction* pFnFilterButtonInput = NULL;

	if ( ! pFnFilterButtonInput )
		pFnFilterButtonInput = (UFunction*) UObject::GObjObjects()->Data[ 48750 ];

	UForgeGFxFrontEndSettings_execFilterButtonInput_Parms FilterButtonInput_Parms;
	FilterButtonInput_Parms.ControllerId = ControllerId;
	memcpy ( &FilterButtonInput_Parms.ButtonName, &ButtonName, 0x8 );
	FilterButtonInput_Parms.InputEvent = InputEvent;

	this->ProcessEvent ( pFnFilterButtonInput, &FilterButtonInput_Parms, NULL );

	return FilterButtonInput_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnResetBindPress
// [0x00020000] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnResetBindPress ( struct FEventData ev )
{
	static UFunction* pFnOnResetBindPress = NULL;

	if ( ! pFnOnResetBindPress )
		pFnOnResetBindPress = (UFunction*) UObject::GObjObjects()->Data[ 48748 ];

	UForgeGFxFrontEndSettings_execOnResetBindPress_Parms OnResetBindPress_Parms;
	memcpy ( &OnResetBindPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnResetBindPress, &OnResetBindPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnControllerBindPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnControllerBindPress ( struct FEventData ev )
{
	static UFunction* pFnOnControllerBindPress = NULL;

	if ( ! pFnOnControllerBindPress )
		pFnOnControllerBindPress = (UFunction*) UObject::GObjObjects()->Data[ 48743 ];

	UForgeGFxFrontEndSettings_execOnControllerBindPress_Parms OnControllerBindPress_Parms;
	memcpy ( &OnControllerBindPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnControllerBindPress, &OnControllerBindPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnSecondaryBindPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnSecondaryBindPress ( struct FEventData ev )
{
	static UFunction* pFnOnSecondaryBindPress = NULL;

	if ( ! pFnOnSecondaryBindPress )
		pFnOnSecondaryBindPress = (UFunction*) UObject::GObjObjects()->Data[ 48738 ];

	UForgeGFxFrontEndSettings_execOnSecondaryBindPress_Parms OnSecondaryBindPress_Parms;
	memcpy ( &OnSecondaryBindPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnSecondaryBindPress, &OnSecondaryBindPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnPrimaryBindPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnPrimaryBindPress ( struct FEventData ev )
{
	static UFunction* pFnOnPrimaryBindPress = NULL;

	if ( ! pFnOnPrimaryBindPress )
		pFnOnPrimaryBindPress = (UFunction*) UObject::GObjObjects()->Data[ 48733 ];

	UForgeGFxFrontEndSettings_execOnPrimaryBindPress_Parms OnPrimaryBindPress_Parms;
	memcpy ( &OnPrimaryBindPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnPrimaryBindPress, &OnPrimaryBindPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnAbilityReOrderPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnAbilityReOrderPress ( struct FEventData ev )
{
	static UFunction* pFnOnAbilityReOrderPress = NULL;

	if ( ! pFnOnAbilityReOrderPress )
		pFnOnAbilityReOrderPress = (UFunction*) UObject::GObjObjects()->Data[ 48722 ];

	UForgeGFxFrontEndSettings_execOnAbilityReOrderPress_Parms OnAbilityReOrderPress_Parms;
	memcpy ( &OnAbilityReOrderPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnAbilityReOrderPress, &OnAbilityReOrderPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnClassRightPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnClassRightPress ( struct FEventData ev )
{
	static UFunction* pFnOnClassRightPress = NULL;

	if ( ! pFnOnClassRightPress )
		pFnOnClassRightPress = (UFunction*) UObject::GObjObjects()->Data[ 48720 ];

	UForgeGFxFrontEndSettings_execOnClassRightPress_Parms OnClassRightPress_Parms;
	memcpy ( &OnClassRightPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnClassRightPress, &OnClassRightPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnClassLeftPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnClassLeftPress ( struct FEventData ev )
{
	static UFunction* pFnOnClassLeftPress = NULL;

	if ( ! pFnOnClassLeftPress )
		pFnOnClassLeftPress = (UFunction*) UObject::GObjObjects()->Data[ 48718 ];

	UForgeGFxFrontEndSettings_execOnClassLeftPress_Parms OnClassLeftPress_Parms;
	memcpy ( &OnClassLeftPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnClassLeftPress, &OnClassLeftPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.GetBloodAlpha
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UForgeGFxFrontEndSettings::GetBloodAlpha ( )
{
	static UFunction* pFnGetBloodAlpha = NULL;

	if ( ! pFnGetBloodAlpha )
		pFnGetBloodAlpha = (UFunction*) UObject::GObjObjects()->Data[ 48716 ];

	UForgeGFxFrontEndSettings_execGetBloodAlpha_Parms GetBloodAlpha_Parms;

	this->ProcessEvent ( pFnGetBloodAlpha, &GetBloodAlpha_Parms, NULL );

	return GetBloodAlpha_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnLolzChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnLolzChange ( struct FEventData ev )
{
	static UFunction* pFnOnLolzChange = NULL;

	if ( ! pFnOnLolzChange )
		pFnOnLolzChange = (UFunction*) UObject::GObjObjects()->Data[ 48714 ];

	UForgeGFxFrontEndSettings_execOnLolzChange_Parms OnLolzChange_Parms;
	memcpy ( &OnLolzChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnLolzChange, &OnLolzChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnQueueLengthChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnQueueLengthChange ( struct FEventData ev )
{
	static UFunction* pFnOnQueueLengthChange = NULL;

	if ( ! pFnOnQueueLengthChange )
		pFnOnQueueLengthChange = (UFunction*) UObject::GObjObjects()->Data[ 48711 ];

	UForgeGFxFrontEndSettings_execOnQueueLengthChange_Parms OnQueueLengthChange_Parms;
	memcpy ( &OnQueueLengthChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnQueueLengthChange, &OnQueueLengthChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnFovChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnFovChange ( struct FEventData ev )
{
	static UFunction* pFnOnFovChange = NULL;

	if ( ! pFnOnFovChange )
		pFnOnFovChange = (UFunction*) UObject::GObjObjects()->Data[ 48708 ];

	UForgeGFxFrontEndSettings_execOnFovChange_Parms OnFovChange_Parms;
	memcpy ( &OnFovChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnFovChange, &OnFovChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnCameraShakeDefenseChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnCameraShakeDefenseChange ( struct FEventData ev )
{
	static UFunction* pFnOnCameraShakeDefenseChange = NULL;

	if ( ! pFnOnCameraShakeDefenseChange )
		pFnOnCameraShakeDefenseChange = (UFunction*) UObject::GObjObjects()->Data[ 48706 ];

	UForgeGFxFrontEndSettings_execOnCameraShakeDefenseChange_Parms OnCameraShakeDefenseChange_Parms;
	memcpy ( &OnCameraShakeDefenseChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnCameraShakeDefenseChange, &OnCameraShakeDefenseChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnCameraShakeAttackChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnCameraShakeAttackChange ( struct FEventData ev )
{
	static UFunction* pFnOnCameraShakeAttackChange = NULL;

	if ( ! pFnOnCameraShakeAttackChange )
		pFnOnCameraShakeAttackChange = (UFunction*) UObject::GObjObjects()->Data[ 48704 ];

	UForgeGFxFrontEndSettings_execOnCameraShakeAttackChange_Parms OnCameraShakeAttackChange_Parms;
	memcpy ( &OnCameraShakeAttackChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnCameraShakeAttackChange, &OnCameraShakeAttackChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnColorblindModeChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnColorblindModeChange ( struct FEventData ev )
{
	static UFunction* pFnOnColorblindModeChange = NULL;

	if ( ! pFnOnColorblindModeChange )
		pFnOnColorblindModeChange = (UFunction*) UObject::GObjObjects()->Data[ 48700 ];

	UForgeGFxFrontEndSettings_execOnColorblindModeChange_Parms OnColorblindModeChange_Parms;
	memcpy ( &OnColorblindModeChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnColorblindModeChange, &OnColorblindModeChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnDamageSizeChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnDamageSizeChange ( struct FEventData ev )
{
	static UFunction* pFnOnDamageSizeChange = NULL;

	if ( ! pFnOnDamageSizeChange )
		pFnOnDamageSizeChange = (UFunction*) UObject::GObjObjects()->Data[ 48698 ];

	UForgeGFxFrontEndSettings_execOnDamageSizeChange_Parms OnDamageSizeChange_Parms;
	memcpy ( &OnDamageSizeChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnDamageSizeChange, &OnDamageSizeChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnChatSizeChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnChatSizeChange ( struct FEventData ev )
{
	static UFunction* pFnOnChatSizeChange = NULL;

	if ( ! pFnOnChatSizeChange )
		pFnOnChatSizeChange = (UFunction*) UObject::GObjObjects()->Data[ 48696 ];

	UForgeGFxFrontEndSettings_execOnChatSizeChange_Parms OnChatSizeChange_Parms;
	memcpy ( &OnChatSizeChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnChatSizeChange, &OnChatSizeChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnResourceArcChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnResourceArcChange ( struct FEventData ev )
{
	static UFunction* pFnOnResourceArcChange = NULL;

	if ( ! pFnOnResourceArcChange )
		pFnOnResourceArcChange = (UFunction*) UObject::GObjObjects()->Data[ 48694 ];

	UForgeGFxFrontEndSettings_execOnResourceArcChange_Parms OnResourceArcChange_Parms;
	memcpy ( &OnResourceArcChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnResourceArcChange, &OnResourceArcChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnCooldownSlidersChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnCooldownSlidersChange ( struct FEventData ev )
{
	static UFunction* pFnOnCooldownSlidersChange = NULL;

	if ( ! pFnOnCooldownSlidersChange )
		pFnOnCooldownSlidersChange = (UFunction*) UObject::GObjObjects()->Data[ 48692 ];

	UForgeGFxFrontEndSettings_execOnCooldownSlidersChange_Parms OnCooldownSlidersChange_Parms;
	memcpy ( &OnCooldownSlidersChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnCooldownSlidersChange, &OnCooldownSlidersChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnTutorialModeChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnTutorialModeChange ( struct FEventData ev )
{
	static UFunction* pFnOnTutorialModeChange = NULL;

	if ( ! pFnOnTutorialModeChange )
		pFnOnTutorialModeChange = (UFunction*) UObject::GObjObjects()->Data[ 48690 ];

	UForgeGFxFrontEndSettings_execOnTutorialModeChange_Parms OnTutorialModeChange_Parms;
	memcpy ( &OnTutorialModeChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnTutorialModeChange, &OnTutorialModeChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnBloodMapChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnBloodMapChange ( struct FEventData ev )
{
	static UFunction* pFnOnBloodMapChange = NULL;

	if ( ! pFnOnBloodMapChange )
		pFnOnBloodMapChange = (UFunction*) UObject::GObjObjects()->Data[ 48687 ];

	UForgeGFxFrontEndSettings_execOnBloodMapChange_Parms OnBloodMapChange_Parms;
	memcpy ( &OnBloodMapChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnBloodMapChange, &OnBloodMapChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnInvertTurnChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnInvertTurnChange ( struct FEventData ev )
{
	static UFunction* pFnOnInvertTurnChange = NULL;

	if ( ! pFnOnInvertTurnChange )
		pFnOnInvertTurnChange = (UFunction*) UObject::GObjObjects()->Data[ 48684 ];

	UForgeGFxFrontEndSettings_execOnInvertTurnChange_Parms OnInvertTurnChange_Parms;
	memcpy ( &OnInvertTurnChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnInvertTurnChange, &OnInvertTurnChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnInvertMouseChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnInvertMouseChange ( struct FEventData ev )
{
	static UFunction* pFnOnInvertMouseChange = NULL;

	if ( ! pFnOnInvertMouseChange )
		pFnOnInvertMouseChange = (UFunction*) UObject::GObjObjects()->Data[ 48681 ];

	UForgeGFxFrontEndSettings_execOnInvertMouseChange_Parms OnInvertMouseChange_Parms;
	memcpy ( &OnInvertMouseChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnInvertMouseChange, &OnInvertMouseChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnMouseSmoothingChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnMouseSmoothingChange ( struct FEventData ev )
{
	static UFunction* pFnOnMouseSmoothingChange = NULL;

	if ( ! pFnOnMouseSmoothingChange )
		pFnOnMouseSmoothingChange = (UFunction*) UObject::GObjObjects()->Data[ 48678 ];

	UForgeGFxFrontEndSettings_execOnMouseSmoothingChange_Parms OnMouseSmoothingChange_Parms;
	memcpy ( &OnMouseSmoothingChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnMouseSmoothingChange, &OnMouseSmoothingChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnMouseSensitivityChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnMouseSensitivityChange ( struct FEventData ev )
{
	static UFunction* pFnOnMouseSensitivityChange = NULL;

	if ( ! pFnOnMouseSensitivityChange )
		pFnOnMouseSensitivityChange = (UFunction*) UObject::GObjObjects()->Data[ 48674 ];

	UForgeGFxFrontEndSettings_execOnMouseSensitivityChange_Parms OnMouseSensitivityChange_Parms;
	memcpy ( &OnMouseSensitivityChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnMouseSensitivityChange, &OnMouseSensitivityChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.SetVolume
// [0x00020002] 
// Parameters infos:
// struct FName                   SoundClassName                 ( CPF_Parm )
// float                          NewVolume                      ( CPF_Parm )

void UForgeGFxFrontEndSettings::SetVolume ( struct FName SoundClassName, float NewVolume )
{
	static UFunction* pFnSetVolume = NULL;

	if ( ! pFnSetVolume )
		pFnSetVolume = (UFunction*) UObject::GObjObjects()->Data[ 48671 ];

	UForgeGFxFrontEndSettings_execSetVolume_Parms SetVolume_Parms;
	memcpy ( &SetVolume_Parms.SoundClassName, &SoundClassName, 0x8 );
	SetVolume_Parms.NewVolume = NewVolume;

	this->ProcessEvent ( pFnSetVolume, &SetVolume_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnVoiceAllowedChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnVoiceAllowedChange ( struct FEventData ev )
{
	static UFunction* pFnOnVoiceAllowedChange = NULL;

	if ( ! pFnOnVoiceAllowedChange )
		pFnOnVoiceAllowedChange = (UFunction*) UObject::GObjObjects()->Data[ 48668 ];

	UForgeGFxFrontEndSettings_execOnVoiceAllowedChange_Parms OnVoiceAllowedChange_Parms;
	memcpy ( &OnVoiceAllowedChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnVoiceAllowedChange, &OnVoiceAllowedChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnMenuVolumeChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnMenuVolumeChange ( struct FEventData ev )
{
	static UFunction* pFnOnMenuVolumeChange = NULL;

	if ( ! pFnOnMenuVolumeChange )
		pFnOnMenuVolumeChange = (UFunction*) UObject::GObjObjects()->Data[ 48666 ];

	UForgeGFxFrontEndSettings_execOnMenuVolumeChange_Parms OnMenuVolumeChange_Parms;
	memcpy ( &OnMenuVolumeChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnMenuVolumeChange, &OnMenuVolumeChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnMusicVolumeChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnMusicVolumeChange ( struct FEventData ev )
{
	static UFunction* pFnOnMusicVolumeChange = NULL;

	if ( ! pFnOnMusicVolumeChange )
		pFnOnMusicVolumeChange = (UFunction*) UObject::GObjObjects()->Data[ 48664 ];

	UForgeGFxFrontEndSettings_execOnMusicVolumeChange_Parms OnMusicVolumeChange_Parms;
	memcpy ( &OnMusicVolumeChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnMusicVolumeChange, &OnMusicVolumeChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnAmbientVolumeChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnAmbientVolumeChange ( struct FEventData ev )
{
	static UFunction* pFnOnAmbientVolumeChange = NULL;

	if ( ! pFnOnAmbientVolumeChange )
		pFnOnAmbientVolumeChange = (UFunction*) UObject::GObjObjects()->Data[ 48662 ];

	UForgeGFxFrontEndSettings_execOnAmbientVolumeChange_Parms OnAmbientVolumeChange_Parms;
	memcpy ( &OnAmbientVolumeChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnAmbientVolumeChange, &OnAmbientVolumeChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnEventsVolumeChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnEventsVolumeChange ( struct FEventData ev )
{
	static UFunction* pFnOnEventsVolumeChange = NULL;

	if ( ! pFnOnEventsVolumeChange )
		pFnOnEventsVolumeChange = (UFunction*) UObject::GObjObjects()->Data[ 48660 ];

	UForgeGFxFrontEndSettings_execOnEventsVolumeChange_Parms OnEventsVolumeChange_Parms;
	memcpy ( &OnEventsVolumeChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnEventsVolumeChange, &OnEventsVolumeChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnCombatVolumeChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnCombatVolumeChange ( struct FEventData ev )
{
	static UFunction* pFnOnCombatVolumeChange = NULL;

	if ( ! pFnOnCombatVolumeChange )
		pFnOnCombatVolumeChange = (UFunction*) UObject::GObjObjects()->Data[ 48658 ];

	UForgeGFxFrontEndSettings_execOnCombatVolumeChange_Parms OnCombatVolumeChange_Parms;
	memcpy ( &OnCombatVolumeChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnCombatVolumeChange, &OnCombatVolumeChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnMasterVolumeChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnMasterVolumeChange ( struct FEventData ev )
{
	static UFunction* pFnOnMasterVolumeChange = NULL;

	if ( ! pFnOnMasterVolumeChange )
		pFnOnMasterVolumeChange = (UFunction*) UObject::GObjObjects()->Data[ 48656 ];

	UForgeGFxFrontEndSettings_execOnMasterVolumeChange_Parms OnMasterVolumeChange_Parms;
	memcpy ( &OnMasterVolumeChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnMasterVolumeChange, &OnMasterVolumeChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnIndieChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnIndieChange ( struct FEventData ev )
{
	static UFunction* pFnOnIndieChange = NULL;

	if ( ! pFnOnIndieChange )
		pFnOnIndieChange = (UFunction*) UObject::GObjObjects()->Data[ 48654 ];

	UForgeGFxFrontEndSettings_execOnIndieChange_Parms OnIndieChange_Parms;
	memcpy ( &OnIndieChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnIndieChange, &OnIndieChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnGammaChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnGammaChange ( struct FEventData ev )
{
	static UFunction* pFnOnGammaChange = NULL;

	if ( ! pFnOnGammaChange )
		pFnOnGammaChange = (UFunction*) UObject::GObjObjects()->Data[ 48652 ];

	UForgeGFxFrontEndSettings_execOnGammaChange_Parms OnGammaChange_Parms;
	memcpy ( &OnGammaChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnGammaChange, &OnGammaChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.ShowAbilityReorderMouseover
// [0x00820002] 
// Parameters infos:

void UForgeGFxFrontEndSettings::ShowAbilityReorderMouseover ( )
{
	static UFunction* pFnShowAbilityReorderMouseover = NULL;

	if ( ! pFnShowAbilityReorderMouseover )
		pFnShowAbilityReorderMouseover = (UFunction*) UObject::GObjObjects()->Data[ 48642 ];

	UForgeGFxFrontEndSettings_execShowAbilityReorderMouseover_Parms ShowAbilityReorderMouseover_Parms;

	this->ProcessEvent ( pFnShowAbilityReorderMouseover, &ShowAbilityReorderMouseover_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.Tick
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxFrontEndSettings::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 48634 ];

	UForgeGFxFrontEndSettings_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnResetPress
// [0x00020000] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnResetPress ( struct FEventData ev )
{
	static UFunction* pFnOnResetPress = NULL;

	if ( ! pFnOnResetPress )
		pFnOnResetPress = (UFunction*) UObject::GObjObjects()->Data[ 48632 ];

	UForgeGFxFrontEndSettings_execOnResetPress_Parms OnResetPress_Parms;
	memcpy ( &OnResetPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnResetPress, &OnResetPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnApplyPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnApplyPress ( struct FEventData ev )
{
	static UFunction* pFnOnApplyPress = NULL;

	if ( ! pFnOnApplyPress )
		pFnOnApplyPress = (UFunction*) UObject::GObjObjects()->Data[ 48625 ];

	UForgeGFxFrontEndSettings_execOnApplyPress_Parms OnApplyPress_Parms;
	memcpy ( &OnApplyPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnApplyPress, &OnApplyPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnSubTabPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnSubTabPress ( struct FEventData ev )
{
	static UFunction* pFnOnSubTabPress = NULL;

	if ( ! pFnOnSubTabPress )
		pFnOnSubTabPress = (UFunction*) UObject::GObjObjects()->Data[ 48622 ];

	UForgeGFxFrontEndSettings_execOnSubTabPress_Parms OnSubTabPress_Parms;
	memcpy ( &OnSubTabPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnSubTabPress, &OnSubTabPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnGameTabPress
// [0x00820002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnGameTabPress ( struct FEventData ev )
{
	static UFunction* pFnOnGameTabPress = NULL;

	if ( ! pFnOnGameTabPress )
		pFnOnGameTabPress = (UFunction*) UObject::GObjObjects()->Data[ 48619 ];

	UForgeGFxFrontEndSettings_execOnGameTabPress_Parms OnGameTabPress_Parms;
	memcpy ( &OnGameTabPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnGameTabPress, &OnGameTabPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnInputTabPress
// [0x00820002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnInputTabPress ( struct FEventData ev )
{
	static UFunction* pFnOnInputTabPress = NULL;

	if ( ! pFnOnInputTabPress )
		pFnOnInputTabPress = (UFunction*) UObject::GObjObjects()->Data[ 48616 ];

	UForgeGFxFrontEndSettings_execOnInputTabPress_Parms OnInputTabPress_Parms;
	memcpy ( &OnInputTabPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnInputTabPress, &OnInputTabPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnAudioTabPress
// [0x00820002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnAudioTabPress ( struct FEventData ev )
{
	static UFunction* pFnOnAudioTabPress = NULL;

	if ( ! pFnOnAudioTabPress )
		pFnOnAudioTabPress = (UFunction*) UObject::GObjObjects()->Data[ 48613 ];

	UForgeGFxFrontEndSettings_execOnAudioTabPress_Parms OnAudioTabPress_Parms;
	memcpy ( &OnAudioTabPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnAudioTabPress, &OnAudioTabPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnGraphicsTabPress
// [0x00820002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnGraphicsTabPress ( struct FEventData ev )
{
	static UFunction* pFnOnGraphicsTabPress = NULL;

	if ( ! pFnOnGraphicsTabPress )
		pFnOnGraphicsTabPress = (UFunction*) UObject::GObjObjects()->Data[ 48610 ];

	UForgeGFxFrontEndSettings_execOnGraphicsTabPress_Parms OnGraphicsTabPress_Parms;
	memcpy ( &OnGraphicsTabPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnGraphicsTabPress, &OnGraphicsTabPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.SetResolutionToIndex
// [0x00020002] 
// Parameters infos:
// int                            NewResolutionIndex             ( CPF_Parm )
// int                            NewDisplayModeIndex            ( CPF_Parm )

void UForgeGFxFrontEndSettings::SetResolutionToIndex ( int NewResolutionIndex, int NewDisplayModeIndex )
{
	static UFunction* pFnSetResolutionToIndex = NULL;

	if ( ! pFnSetResolutionToIndex )
		pFnSetResolutionToIndex = (UFunction*) UObject::GObjObjects()->Data[ 48606 ];

	UForgeGFxFrontEndSettings_execSetResolutionToIndex_Parms SetResolutionToIndex_Parms;
	SetResolutionToIndex_Parms.NewResolutionIndex = NewResolutionIndex;
	SetResolutionToIndex_Parms.NewDisplayModeIndex = NewDisplayModeIndex;

	this->ProcessEvent ( pFnSetResolutionToIndex, &SetResolutionToIndex_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnConfirmNoPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnConfirmNoPress ( struct FEventData ev )
{
	static UFunction* pFnOnConfirmNoPress = NULL;

	if ( ! pFnOnConfirmNoPress )
		pFnOnConfirmNoPress = (UFunction*) UObject::GObjObjects()->Data[ 48604 ];

	UForgeGFxFrontEndSettings_execOnConfirmNoPress_Parms OnConfirmNoPress_Parms;
	memcpy ( &OnConfirmNoPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnConfirmNoPress, &OnConfirmNoPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnConfirmYesPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnConfirmYesPress ( struct FEventData ev )
{
	static UFunction* pFnOnConfirmYesPress = NULL;

	if ( ! pFnOnConfirmYesPress )
		pFnOnConfirmYesPress = (UFunction*) UObject::GObjObjects()->Data[ 48602 ];

	UForgeGFxFrontEndSettings_execOnConfirmYesPress_Parms OnConfirmYesPress_Parms;
	memcpy ( &OnConfirmYesPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnConfirmYesPress, &OnConfirmYesPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnBackPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnBackPress ( struct FEventData ev )
{
	static UFunction* pFnOnBackPress = NULL;

	if ( ! pFnOnBackPress )
		pFnOnBackPress = (UFunction*) UObject::GObjObjects()->Data[ 48600 ];

	UForgeGFxFrontEndSettings_execOnBackPress_Parms OnBackPress_Parms;
	memcpy ( &OnBackPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnBackPress, &OnBackPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.HandleScrollDown
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UForgeGFxFrontEndSettings::HandleScrollDown ( )
{
	static UFunction* pFnHandleScrollDown = NULL;

	if ( ! pFnHandleScrollDown )
		pFnHandleScrollDown = (UFunction*) UObject::GObjObjects()->Data[ 47365 ];

	UForgeGFxFrontEndSettings_execHandleScrollDown_Parms HandleScrollDown_Parms;

	this->ProcessEvent ( pFnHandleScrollDown, &HandleScrollDown_Parms, NULL );

	return HandleScrollDown_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndSettings.HandleScrollUp
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UForgeGFxFrontEndSettings::HandleScrollUp ( )
{
	static UFunction* pFnHandleScrollUp = NULL;

	if ( ! pFnHandleScrollUp )
		pFnHandleScrollUp = (UFunction*) UObject::GObjObjects()->Data[ 47360 ];

	UForgeGFxFrontEndSettings_execHandleScrollUp_Parms HandleScrollUp_Parms;

	this->ProcessEvent ( pFnHandleScrollUp, &HandleScrollUp_Parms, NULL );

	return HandleScrollUp_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndSettings.HandlePasteCommand
// [0x00020000] 
// Parameters infos:

void UForgeGFxFrontEndSettings::HandlePasteCommand ( )
{
	static UFunction* pFnHandlePasteCommand = NULL;

	if ( ! pFnHandlePasteCommand )
		pFnHandlePasteCommand = (UFunction*) UObject::GObjObjects()->Data[ 48599 ];

	UForgeGFxFrontEndSettings_execHandlePasteCommand_Parms HandlePasteCommand_Parms;

	this->ProcessEvent ( pFnHandlePasteCommand, &HandlePasteCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.HandleCopyCommand
// [0x00020000] 
// Parameters infos:

void UForgeGFxFrontEndSettings::HandleCopyCommand ( )
{
	static UFunction* pFnHandleCopyCommand = NULL;

	if ( ! pFnHandleCopyCommand )
		pFnHandleCopyCommand = (UFunction*) UObject::GObjObjects()->Data[ 48598 ];

	UForgeGFxFrontEndSettings_execHandleCopyCommand_Parms HandleCopyCommand_Parms;

	this->ProcessEvent ( pFnHandleCopyCommand, &HandleCopyCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.HandleCutCommand
// [0x00020000] 
// Parameters infos:

void UForgeGFxFrontEndSettings::HandleCutCommand ( )
{
	static UFunction* pFnHandleCutCommand = NULL;

	if ( ! pFnHandleCutCommand )
		pFnHandleCutCommand = (UFunction*) UObject::GObjObjects()->Data[ 48597 ];

	UForgeGFxFrontEndSettings_execHandleCutCommand_Parms HandleCutCommand_Parms;

	this->ProcessEvent ( pFnHandleCutCommand, &HandleCutCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.ConfigForRes
// [0x00820002] 
// Parameters infos:
// int                            SizeX                          ( CPF_Parm )
// int                            SizeY                          ( CPF_Parm )

void UForgeGFxFrontEndSettings::ConfigForRes ( int SizeX, int SizeY )
{
	static UFunction* pFnConfigForRes = NULL;

	if ( ! pFnConfigForRes )
		pFnConfigForRes = (UFunction*) UObject::GObjObjects()->Data[ 48592 ];

	UForgeGFxFrontEndSettings_execConfigForRes_Parms ConfigForRes_Parms;
	ConfigForRes_Parms.SizeX = SizeX;
	ConfigForRes_Parms.SizeY = SizeY;

	this->ProcessEvent ( pFnConfigForRes, &ConfigForRes_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.SetGraphicsCaches
// [0x00820002] 
// Parameters infos:

void UForgeGFxFrontEndSettings::SetGraphicsCaches ( )
{
	static UFunction* pFnSetGraphicsCaches = NULL;

	if ( ! pFnSetGraphicsCaches )
		pFnSetGraphicsCaches = (UFunction*) UObject::GObjObjects()->Data[ 48583 ];

	UForgeGFxFrontEndSettings_execSetGraphicsCaches_Parms SetGraphicsCaches_Parms;

	this->ProcessEvent ( pFnSetGraphicsCaches, &SetGraphicsCaches_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.ApplySteamCloudSettings
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndSettings::ApplySteamCloudSettings ( )
{
	static UFunction* pFnApplySteamCloudSettings = NULL;

	if ( ! pFnApplySteamCloudSettings )
		pFnApplySteamCloudSettings = (UFunction*) UObject::GObjObjects()->Data[ 48579 ];

	UForgeGFxFrontEndSettings_execApplySteamCloudSettings_Parms ApplySteamCloudSettings_Parms;

	this->ProcessEvent ( pFnApplySteamCloudSettings, &ApplySteamCloudSettings_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.ShowSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndSettings::ShowSlide ( )
{
	static UFunction* pFnShowSlide = NULL;

	if ( ! pFnShowSlide )
		pFnShowSlide = (UFunction*) UObject::GObjObjects()->Data[ 48578 ];

	UForgeGFxFrontEndSettings_execShowSlide_Parms ShowSlide_Parms;

	this->ProcessEvent ( pFnShowSlide, &ShowSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.HideSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndSettings::HideSlide ( )
{
	static UFunction* pFnHideSlide = NULL;

	if ( ! pFnHideSlide )
		pFnHideSlide = (UFunction*) UObject::GObjObjects()->Data[ 48577 ];

	UForgeGFxFrontEndSettings_execHideSlide_Parms HideSlide_Parms;

	this->ProcessEvent ( pFnHideSlide, &HideSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.UpdateBindRow
// [0x00020002] 
// Parameters infos:
// int                            RowIndex                       ( CPF_Parm )

void UForgeGFxFrontEndSettings::UpdateBindRow ( int RowIndex )
{
	static UFunction* pFnUpdateBindRow = NULL;

	if ( ! pFnUpdateBindRow )
		pFnUpdateBindRow = (UFunction*) UObject::GObjObjects()->Data[ 48572 ];

	UForgeGFxFrontEndSettings_execUpdateBindRow_Parms UpdateBindRow_Parms;
	UpdateBindRow_Parms.RowIndex = RowIndex;

	this->ProcessEvent ( pFnUpdateBindRow, &UpdateBindRow_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.IsControllerButton
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   ButtonName                     ( CPF_Parm )

bool UForgeGFxFrontEndSettings::IsControllerButton ( struct FName ButtonName )
{
	static UFunction* pFnIsControllerButton = NULL;

	if ( ! pFnIsControllerButton )
		pFnIsControllerButton = (UFunction*) UObject::GObjObjects()->Data[ 44748 ];

	UForgeGFxFrontEndSettings_execIsControllerButton_Parms IsControllerButton_Parms;
	memcpy ( &IsControllerButton_Parms.ButtonName, &ButtonName, 0x8 );

	this->ProcessEvent ( pFnIsControllerButton, &IsControllerButton_Parms, NULL );

	return IsControllerButton_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndSettings.ConfigForClass
// [0x00020002] 
// Parameters infos:
// struct FString                 ClassName                      ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::ConfigForClass ( struct FString ClassName )
{
	static UFunction* pFnConfigForClass = NULL;

	if ( ! pFnConfigForClass )
		pFnConfigForClass = (UFunction*) UObject::GObjObjects()->Data[ 48561 ];

	UForgeGFxFrontEndSettings_execConfigForClass_Parms ConfigForClass_Parms;
	memcpy ( &ConfigForClass_Parms.ClassName, &ClassName, 0xC );

	this->ProcessEvent ( pFnConfigForClass, &ConfigForClass_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnClassButtonChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnClassButtonChange ( struct FEventData ev )
{
	static UFunction* pFnOnClassButtonChange = NULL;

	if ( ! pFnOnClassButtonChange )
		pFnOnClassButtonChange = (UFunction*) UObject::GObjObjects()->Data[ 48556 ];

	UForgeGFxFrontEndSettings_execOnClassButtonChange_Parms OnClassButtonChange_Parms;
	memcpy ( &OnClassButtonChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnClassButtonChange, &OnClassButtonChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnClassButtonPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndSettings::OnClassButtonPress ( struct FEventData ev )
{
	static UFunction* pFnOnClassButtonPress = NULL;

	if ( ! pFnOnClassButtonPress )
		pFnOnClassButtonPress = (UFunction*) UObject::GObjObjects()->Data[ 48553 ];

	UForgeGFxFrontEndSettings_execOnClassButtonPress_Parms OnClassButtonPress_Parms;
	memcpy ( &OnClassButtonPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnClassButtonPress, &OnClassButtonPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.CreateAbilityClassSelectButtons
// [0x00820002] 
// Parameters infos:

void UForgeGFxFrontEndSettings::CreateAbilityClassSelectButtons ( )
{
	static UFunction* pFnCreateAbilityClassSelectButtons = NULL;

	if ( ! pFnCreateAbilityClassSelectButtons )
		pFnCreateAbilityClassSelectButtons = (UFunction*) UObject::GObjObjects()->Data[ 48548 ];

	UForgeGFxFrontEndSettings_execCreateAbilityClassSelectButtons_Parms CreateAbilityClassSelectButtons_Parms;

	this->ProcessEvent ( pFnCreateAbilityClassSelectButtons, &CreateAbilityClassSelectButtons_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.SetGraphicsTabPresets
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndSettings::SetGraphicsTabPresets ( )
{
	static UFunction* pFnSetGraphicsTabPresets = NULL;

	if ( ! pFnSetGraphicsTabPresets )
		pFnSetGraphicsTabPresets = (UFunction*) UObject::GObjObjects()->Data[ 48544 ];

	UForgeGFxFrontEndSettings_execSetGraphicsTabPresets_Parms SetGraphicsTabPresets_Parms;

	this->ProcessEvent ( pFnSetGraphicsTabPresets, &SetGraphicsTabPresets_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.ConfigBindDetails
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndSettings::ConfigBindDetails ( )
{
	static UFunction* pFnConfigBindDetails = NULL;

	if ( ! pFnConfigBindDetails )
		pFnConfigBindDetails = (UFunction*) UObject::GObjObjects()->Data[ 48537 ];

	UForgeGFxFrontEndSettings_execConfigBindDetails_Parms ConfigBindDetails_Parms;

	this->ProcessEvent ( pFnConfigBindDetails, &ConfigBindDetails_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.SetSliderValues
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndSettings::SetSliderValues ( )
{
	static UFunction* pFnSetSliderValues = NULL;

	if ( ! pFnSetSliderValues )
		pFnSetSliderValues = (UFunction*) UObject::GObjObjects()->Data[ 48535 ];

	UForgeGFxFrontEndSettings_execSetSliderValues_Parms SetSliderValues_Parms;

	this->ProcessEvent ( pFnSetSliderValues, &SetSliderValues_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSettings.ConfigSlide
// [0x00820002] 
// Parameters infos:

void UForgeGFxFrontEndSettings::ConfigSlide ( )
{
	static UFunction* pFnConfigSlide = NULL;

	if ( ! pFnConfigSlide )
		pFnConfigSlide = (UFunction*) UObject::GObjObjects()->Data[ 48528 ];

	UForgeGFxFrontEndSettings_execConfigSlide_Parms ConfigSlide_Parms;

	this->ProcessEvent ( pFnConfigSlide, &ConfigSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlide.FilterButtonInput
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   ButtonName                     ( CPF_Parm )
// unsigned char                  InputEvent                     ( CPF_Parm )

bool UForgeGFxFrontEndSlide::FilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent )
{
	static UFunction* pFnFilterButtonInput = NULL;

	if ( ! pFnFilterButtonInput )
		pFnFilterButtonInput = (UFunction*) UObject::GObjObjects()->Data[ 47232 ];

	UForgeGFxFrontEndSlide_execFilterButtonInput_Parms FilterButtonInput_Parms;
	FilterButtonInput_Parms.ControllerId = ControllerId;
	memcpy ( &FilterButtonInput_Parms.ButtonName, &ButtonName, 0x8 );
	FilterButtonInput_Parms.InputEvent = InputEvent;

	this->ProcessEvent ( pFnFilterButtonInput, &FilterButtonInput_Parms, NULL );

	return FilterButtonInput_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndSlide.ConsoleCommand
// [0x00024002] 
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWriteToLog                    ( CPF_OptionalParm | CPF_Parm )

void UForgeGFxFrontEndSlide::ConsoleCommand ( struct FString Command, unsigned long bWriteToLog )
{
	static UFunction* pFnConsoleCommand = NULL;

	if ( ! pFnConsoleCommand )
		pFnConsoleCommand = (UFunction*) UObject::GObjObjects()->Data[ 47413 ];

	UForgeGFxFrontEndSlide_execConsoleCommand_Parms ConsoleCommand_Parms;
	memcpy ( &ConsoleCommand_Parms.Command, &Command, 0xC );
	ConsoleCommand_Parms.bWriteToLog = bWriteToLog;

	this->ProcessEvent ( pFnConsoleCommand, &ConsoleCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlide.HandleScrollDown
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UForgeGFxFrontEndSlide::HandleScrollDown ( )
{
	static UFunction* pFnHandleScrollDown = NULL;

	if ( ! pFnHandleScrollDown )
		pFnHandleScrollDown = (UFunction*) UObject::GObjObjects()->Data[ 47366 ];

	UForgeGFxFrontEndSlide_execHandleScrollDown_Parms HandleScrollDown_Parms;

	this->ProcessEvent ( pFnHandleScrollDown, &HandleScrollDown_Parms, NULL );

	return HandleScrollDown_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndSlide.HandleScrollUp
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UForgeGFxFrontEndSlide::HandleScrollUp ( )
{
	static UFunction* pFnHandleScrollUp = NULL;

	if ( ! pFnHandleScrollUp )
		pFnHandleScrollUp = (UFunction*) UObject::GObjObjects()->Data[ 47361 ];

	UForgeGFxFrontEndSlide_execHandleScrollUp_Parms HandleScrollUp_Parms;

	this->ProcessEvent ( pFnHandleScrollUp, &HandleScrollUp_Parms, NULL );

	return HandleScrollUp_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndSlide.DoPasteText
// [0x00020002] 
// Parameters infos:
// class UForgeGFxObjectSelectable* TheTextField                   ( CPF_Parm )

void UForgeGFxFrontEndSlide::DoPasteText ( class UForgeGFxObjectSelectable* TheTextField )
{
	static UFunction* pFnDoPasteText = NULL;

	if ( ! pFnDoPasteText )
		pFnDoPasteText = (UFunction*) UObject::GObjObjects()->Data[ 47405 ];

	UForgeGFxFrontEndSlide_execDoPasteText_Parms DoPasteText_Parms;
	DoPasteText_Parms.TheTextField = TheTextField;

	this->ProcessEvent ( pFnDoPasteText, &DoPasteText_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlide.HandlePasteCommand
// [0x00020000] 
// Parameters infos:

void UForgeGFxFrontEndSlide::HandlePasteCommand ( )
{
	static UFunction* pFnHandlePasteCommand = NULL;

	if ( ! pFnHandlePasteCommand )
		pFnHandlePasteCommand = (UFunction*) UObject::GObjObjects()->Data[ 47404 ];

	UForgeGFxFrontEndSlide_execHandlePasteCommand_Parms HandlePasteCommand_Parms;

	this->ProcessEvent ( pFnHandlePasteCommand, &HandlePasteCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlide.DoCopyText
// [0x00020002] 
// Parameters infos:
// class UForgeGFxObjectSelectable* TheTextField                   ( CPF_Parm )

void UForgeGFxFrontEndSlide::DoCopyText ( class UForgeGFxObjectSelectable* TheTextField )
{
	static UFunction* pFnDoCopyText = NULL;

	if ( ! pFnDoCopyText )
		pFnDoCopyText = (UFunction*) UObject::GObjObjects()->Data[ 47400 ];

	UForgeGFxFrontEndSlide_execDoCopyText_Parms DoCopyText_Parms;
	DoCopyText_Parms.TheTextField = TheTextField;

	this->ProcessEvent ( pFnDoCopyText, &DoCopyText_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlide.HandleCopyCommand
// [0x00020000] 
// Parameters infos:

void UForgeGFxFrontEndSlide::HandleCopyCommand ( )
{
	static UFunction* pFnHandleCopyCommand = NULL;

	if ( ! pFnHandleCopyCommand )
		pFnHandleCopyCommand = (UFunction*) UObject::GObjObjects()->Data[ 47399 ];

	UForgeGFxFrontEndSlide_execHandleCopyCommand_Parms HandleCopyCommand_Parms;

	this->ProcessEvent ( pFnHandleCopyCommand, &HandleCopyCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlide.DoCutText
// [0x00020002] 
// Parameters infos:
// class UForgeGFxObjectSelectable* TheTextField                   ( CPF_Parm )

void UForgeGFxFrontEndSlide::DoCutText ( class UForgeGFxObjectSelectable* TheTextField )
{
	static UFunction* pFnDoCutText = NULL;

	if ( ! pFnDoCutText )
		pFnDoCutText = (UFunction*) UObject::GObjObjects()->Data[ 47394 ];

	UForgeGFxFrontEndSlide_execDoCutText_Parms DoCutText_Parms;
	DoCutText_Parms.TheTextField = TheTextField;

	this->ProcessEvent ( pFnDoCutText, &DoCutText_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlide.HandleCutCommand
// [0x00020000] 
// Parameters infos:

void UForgeGFxFrontEndSlide::HandleCutCommand ( )
{
	static UFunction* pFnHandleCutCommand = NULL;

	if ( ! pFnHandleCutCommand )
		pFnHandleCutCommand = (UFunction*) UObject::GObjObjects()->Data[ 47393 ];

	UForgeGFxFrontEndSlide_execHandleCutCommand_Parms HandleCutCommand_Parms;

	this->ProcessEvent ( pFnHandleCutCommand, &HandleCutCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlide.Tick
// [0x00020000] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxFrontEndSlide::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 47391 ];

	UForgeGFxFrontEndSlide_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlide.ConfigSlide
// [0x00020000] 
// Parameters infos:

void UForgeGFxFrontEndSlide::ConfigSlide ( )
{
	static UFunction* pFnConfigSlide = NULL;

	if ( ! pFnConfigSlide )
		pFnConfigSlide = (UFunction*) UObject::GObjObjects()->Data[ 47390 ];

	UForgeGFxFrontEndSlide_execConfigSlide_Parms ConfigSlide_Parms;

	this->ProcessEvent ( pFnConfigSlide, &ConfigSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlide.SlideInSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndSlide::SlideInSlide ( )
{
	static UFunction* pFnSlideInSlide = NULL;

	if ( ! pFnSlideInSlide )
		pFnSlideInSlide = (UFunction*) UObject::GObjObjects()->Data[ 47389 ];

	UForgeGFxFrontEndSlide_execSlideInSlide_Parms SlideInSlide_Parms;

	this->ProcessEvent ( pFnSlideInSlide, &SlideInSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlide.ShowSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndSlide::ShowSlide ( )
{
	static UFunction* pFnShowSlide = NULL;

	if ( ! pFnShowSlide )
		pFnShowSlide = (UFunction*) UObject::GObjObjects()->Data[ 47388 ];

	UForgeGFxFrontEndSlide_execShowSlide_Parms ShowSlide_Parms;

	this->ProcessEvent ( pFnShowSlide, &ShowSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlide.SlideOutSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndSlide::SlideOutSlide ( )
{
	static UFunction* pFnSlideOutSlide = NULL;

	if ( ! pFnSlideOutSlide )
		pFnSlideOutSlide = (UFunction*) UObject::GObjObjects()->Data[ 47387 ];

	UForgeGFxFrontEndSlide_execSlideOutSlide_Parms SlideOutSlide_Parms;

	this->ProcessEvent ( pFnSlideOutSlide, &SlideOutSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlide.HideSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndSlide::HideSlide ( )
{
	static UFunction* pFnHideSlide = NULL;

	if ( ! pFnHideSlide )
		pFnHideSlide = (UFunction*) UObject::GObjObjects()->Data[ 47386 ];

	UForgeGFxFrontEndSlide_execHideSlide_Parms HideSlide_Parms;

	this->ProcessEvent ( pFnHideSlide, &HideSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlide.SlideLoaded
// [0x00020002] 
// Parameters infos:
// class UGFxObject*              NewSlideMC                     ( CPF_Parm )

void UForgeGFxFrontEndSlide::SlideLoaded ( class UGFxObject* NewSlideMC )
{
	static UFunction* pFnSlideLoaded = NULL;

	if ( ! pFnSlideLoaded )
		pFnSlideLoaded = (UFunction*) UObject::GObjObjects()->Data[ 47384 ];

	UForgeGFxFrontEndSlide_execSlideLoaded_Parms SlideLoaded_Parms;
	SlideLoaded_Parms.NewSlideMC = NewSlideMC;

	this->ProcessEvent ( pFnSlideLoaded, &SlideLoaded_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.UsedAbility
// [0x00020102] 
// Parameters infos:
// unsigned long                  TriggersGCD                    ( CPF_Parm )

void ADVPlayerReplicationInfo::UsedAbility ( unsigned long TriggersGCD )
{
	static UFunction* pFnUsedAbility = NULL;

	if ( ! pFnUsedAbility )
		pFnUsedAbility = (UFunction*) UObject::GObjObjects()->Data[ 46246 ];

	ADVPlayerReplicationInfo_execUsedAbility_Parms UsedAbility_Parms;
	UsedAbility_Parms.TriggersGCD = TriggersGCD;

	this->ProcessEvent ( pFnUsedAbility, &UsedAbility_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.UpdateScore
// [0x00020002] 
// Parameters infos:

void ADVPlayerReplicationInfo::UpdateScore ( )
{
	static UFunction* pFnUpdateScore = NULL;

	if ( ! pFnUpdateScore )
		pFnUpdateScore = (UFunction*) UObject::GObjObjects()->Data[ 46231 ];

	ADVPlayerReplicationInfo_execUpdateScore_Parms UpdateScore_Parms;

	this->ProcessEvent ( pFnUpdateScore, &UpdateScore_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.Tick
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVPlayerReplicationInfo::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 46216 ];

	ADVPlayerReplicationInfo_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVPlayerReplicationInfo::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 46213 ];

	ADVPlayerReplicationInfo_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.GetSteamAvatar
// [0x00020102] 
// Parameters infos:

void ADVPlayerReplicationInfo::GetSteamAvatar ( )
{
	static UFunction* pFnGetSteamAvatar = NULL;

	if ( ! pFnGetSteamAvatar )
		pFnGetSteamAvatar = (UFunction*) UObject::GObjObjects()->Data[ 46212 ];

	ADVPlayerReplicationInfo_execGetSteamAvatar_Parms GetSteamAvatar_Parms;

	this->ProcessEvent ( pFnGetSteamAvatar, &GetSteamAvatar_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.RegisterPlayerWithSession
// [0x00020102] 
// Parameters infos:

void ADVPlayerReplicationInfo::RegisterPlayerWithSession ( )
{
	static UFunction* pFnRegisterPlayerWithSession = NULL;

	if ( ! pFnRegisterPlayerWithSession )
		pFnRegisterPlayerWithSession = (UFunction*) UObject::GObjObjects()->Data[ 46210 ];

	ADVPlayerReplicationInfo_execRegisterPlayerWithSession_Parms RegisterPlayerWithSession_Parms;

	this->ProcessEvent ( pFnRegisterPlayerWithSession, &RegisterPlayerWithSession_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVPlayerReplicationInfo::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 46208 ];

	ADVPlayerReplicationInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.InitAbilities
// [0x00020002] 
// Parameters infos:

void ADVPlayerReplicationInfo::InitAbilities ( )
{
	static UFunction* pFnInitAbilities = NULL;

	if ( ! pFnInitAbilities )
		pFnInitAbilities = (UFunction*) UObject::GObjObjects()->Data[ 46205 ];

	ADVPlayerReplicationInfo_execInitAbilities_Parms InitAbilities_Parms;

	this->ProcessEvent ( pFnInitAbilities, &InitAbilities_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.ServerSetDesiredClass
// [0x002200C2] 
// Parameters infos:
// unsigned char                  NewDesiredClass                ( CPF_Parm )

void ADVPlayerReplicationInfo::ServerSetDesiredClass ( unsigned char NewDesiredClass )
{
	static UFunction* pFnServerSetDesiredClass = NULL;

	if ( ! pFnServerSetDesiredClass )
		pFnServerSetDesiredClass = (UFunction*) UObject::GObjObjects()->Data[ 46203 ];

	ADVPlayerReplicationInfo_execServerSetDesiredClass_Parms ServerSetDesiredClass_Parms;
	ServerSetDesiredClass_Parms.NewDesiredClass = NewDesiredClass;

	this->ProcessEvent ( pFnServerSetDesiredClass, &ServerSetDesiredClass_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.CopyProperties
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )

void ADVPlayerReplicationInfo::CopyProperties ( class APlayerReplicationInfo* PRI )
{
	static UFunction* pFnCopyProperties = NULL;

	if ( ! pFnCopyProperties )
		pFnCopyProperties = (UFunction*) UObject::GObjObjects()->Data[ 46198 ];

	ADVPlayerReplicationInfo_execCopyProperties_Parms CopyProperties_Parms;
	CopyProperties_Parms.PRI = PRI;

	this->ProcessEvent ( pFnCopyProperties, &CopyProperties_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.ScoreDefense
// [0x00020002] 
// Parameters infos:

void ADVPlayerReplicationInfo::ScoreDefense ( )
{
	static UFunction* pFnScoreDefense = NULL;

	if ( ! pFnScoreDefense )
		pFnScoreDefense = (UFunction*) UObject::GObjObjects()->Data[ 46193 ];

	ADVPlayerReplicationInfo_execScoreDefense_Parms ScoreDefense_Parms;

	this->ProcessEvent ( pFnScoreDefense, &ScoreDefense_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.ScoreCapture
// [0x00020002] 
// Parameters infos:
// int                            ExtraPoints                    ( CPF_Parm )

void ADVPlayerReplicationInfo::ScoreCapture ( int ExtraPoints )
{
	static UFunction* pFnScoreCapture = NULL;

	if ( ! pFnScoreCapture )
		pFnScoreCapture = (UFunction*) UObject::GObjObjects()->Data[ 46187 ];

	ADVPlayerReplicationInfo_execScoreCapture_Parms ScoreCapture_Parms;
	ScoreCapture_Parms.ExtraPoints = ExtraPoints;

	this->ProcessEvent ( pFnScoreCapture, &ScoreCapture_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.ScoreAssist
// [0x00820002] 
// Parameters infos:

void ADVPlayerReplicationInfo::ScoreAssist ( )
{
	static UFunction* pFnScoreAssist = NULL;

	if ( ! pFnScoreAssist )
		pFnScoreAssist = (UFunction*) UObject::GObjObjects()->Data[ 46177 ];

	ADVPlayerReplicationInfo_execScoreAssist_Parms ScoreAssist_Parms;

	this->ProcessEvent ( pFnScoreAssist, &ScoreAssist_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.ScoreKill
// [0x00820002] 
// Parameters infos:

void ADVPlayerReplicationInfo::ScoreKill ( )
{
	static UFunction* pFnScoreKill = NULL;

	if ( ! pFnScoreKill )
		pFnScoreKill = (UFunction*) UObject::GObjObjects()->Data[ 46167 ];

	ADVPlayerReplicationInfo_execScoreKill_Parms ScoreKill_Parms;

	this->ProcessEvent ( pFnScoreKill, &ScoreKill_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.ScoreDamageTaken
// [0x00820002] 
// Parameters infos:
// float                          AddedDamageTaken               ( CPF_Parm )

void ADVPlayerReplicationInfo::ScoreDamageTaken ( float AddedDamageTaken )
{
	static UFunction* pFnScoreDamageTaken = NULL;

	if ( ! pFnScoreDamageTaken )
		pFnScoreDamageTaken = (UFunction*) UObject::GObjObjects()->Data[ 46164 ];

	ADVPlayerReplicationInfo_execScoreDamageTaken_Parms ScoreDamageTaken_Parms;
	ScoreDamageTaken_Parms.AddedDamageTaken = AddedDamageTaken;

	this->ProcessEvent ( pFnScoreDamageTaken, &ScoreDamageTaken_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.ScoreProtectionDone
// [0x00820002] 
// Parameters infos:
// int                            AddedProtection                ( CPF_Parm )

void ADVPlayerReplicationInfo::ScoreProtectionDone ( int AddedProtection )
{
	static UFunction* pFnScoreProtectionDone = NULL;

	if ( ! pFnScoreProtectionDone )
		pFnScoreProtectionDone = (UFunction*) UObject::GObjObjects()->Data[ 46157 ];

	ADVPlayerReplicationInfo_execScoreProtectionDone_Parms ScoreProtectionDone_Parms;
	ScoreProtectionDone_Parms.AddedProtection = AddedProtection;

	this->ProcessEvent ( pFnScoreProtectionDone, &ScoreProtectionDone_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.ScoreHealingDone
// [0x00820002] 
// Parameters infos:
// int                            AddedHealing                   ( CPF_Parm )

void ADVPlayerReplicationInfo::ScoreHealingDone ( int AddedHealing )
{
	static UFunction* pFnScoreHealingDone = NULL;

	if ( ! pFnScoreHealingDone )
		pFnScoreHealingDone = (UFunction*) UObject::GObjObjects()->Data[ 46150 ];

	ADVPlayerReplicationInfo_execScoreHealingDone_Parms ScoreHealingDone_Parms;
	ScoreHealingDone_Parms.AddedHealing = AddedHealing;

	this->ProcessEvent ( pFnScoreHealingDone, &ScoreHealingDone_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.ScoreDamageDone
// [0x00820002] 
// Parameters infos:
// int                            AddedDamage                    ( CPF_Parm )

void ADVPlayerReplicationInfo::ScoreDamageDone ( int AddedDamage )
{
	static UFunction* pFnScoreDamageDone = NULL;

	if ( ! pFnScoreDamageDone )
		pFnScoreDamageDone = (UFunction*) UObject::GObjObjects()->Data[ 46139 ];

	ADVPlayerReplicationInfo_execScoreDamageDone_Parms ScoreDamageDone_Parms;
	ScoreDamageDone_Parms.AddedDamage = AddedDamage;

	this->ProcessEvent ( pFnScoreDamageDone, &ScoreDamageDone_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.FinalizeStats
// [0x00820002] 
// Parameters infos:

void ADVPlayerReplicationInfo::FinalizeStats ( )
{
	static UFunction* pFnFinalizeStats = NULL;

	if ( ! pFnFinalizeStats )
		pFnFinalizeStats = (UFunction*) UObject::GObjObjects()->Data[ 46137 ];

	ADVPlayerReplicationInfo_execFinalizeStats_Parms FinalizeStats_Parms;

	this->ProcessEvent ( pFnFinalizeStats, &FinalizeStats_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.ResetAllStats
// [0x00020002] 
// Parameters infos:

void ADVPlayerReplicationInfo::ResetAllStats ( )
{
	static UFunction* pFnResetAllStats = NULL;

	if ( ! pFnResetAllStats )
		pFnResetAllStats = (UFunction*) UObject::GObjObjects()->Data[ 46135 ];

	ADVPlayerReplicationInfo_execResetAllStats_Parms ResetAllStats_Parms;

	this->ProcessEvent ( pFnResetAllStats, &ResetAllStats_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.IncrementDeaths
// [0x00824002] 
// Parameters infos:
// int                            Amt                            ( CPF_OptionalParm | CPF_Parm )

void ADVPlayerReplicationInfo::IncrementDeaths ( int Amt )
{
	static UFunction* pFnIncrementDeaths = NULL;

	if ( ! pFnIncrementDeaths )
		pFnIncrementDeaths = (UFunction*) UObject::GObjObjects()->Data[ 46132 ];

	ADVPlayerReplicationInfo_execIncrementDeaths_Parms IncrementDeaths_Parms;
	IncrementDeaths_Parms.Amt = Amt;

	this->ProcessEvent ( pFnIncrementDeaths, &IncrementDeaths_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.StatsRecordingValid
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADVPlayerReplicationInfo::StatsRecordingValid ( )
{
	static UFunction* pFnStatsRecordingValid = NULL;

	if ( ! pFnStatsRecordingValid )
		pFnStatsRecordingValid = (UFunction*) UObject::GObjObjects()->Data[ 46130 ];

	ADVPlayerReplicationInfo_execStatsRecordingValid_Parms StatsRecordingValid_Parms;

	this->ProcessEvent ( pFnStatsRecordingValid, &StatsRecordingValid_Parms, NULL );

	return StatsRecordingValid_Parms.ReturnValue;
};

// Function ForgeGame.DVPlayerReplicationInfo.ResetStatsForDeath
// [0x00020002] 
// Parameters infos:

void ADVPlayerReplicationInfo::ResetStatsForDeath ( )
{
	static UFunction* pFnResetStatsForDeath = NULL;

	if ( ! pFnResetStatsForDeath )
		pFnResetStatsForDeath = (UFunction*) UObject::GObjObjects()->Data[ 46129 ];

	ADVPlayerReplicationInfo_execResetStatsForDeath_Parms ResetStatsForDeath_Parms;

	this->ProcessEvent ( pFnResetStatsForDeath, &ResetStatsForDeath_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.SetSkinForClass
// [0x00020102] 
// Parameters infos:
// unsigned char                  PlayerClass                    ( CPF_Parm )
// unsigned char                  Skin                           ( CPF_Parm )

void ADVPlayerReplicationInfo::SetSkinForClass ( unsigned char PlayerClass, unsigned char Skin )
{
	static UFunction* pFnSetSkinForClass = NULL;

	if ( ! pFnSetSkinForClass )
		pFnSetSkinForClass = (UFunction*) UObject::GObjObjects()->Data[ 46126 ];

	ADVPlayerReplicationInfo_execSetSkinForClass_Parms SetSkinForClass_Parms;
	SetSkinForClass_Parms.PlayerClass = PlayerClass;
	SetSkinForClass_Parms.Skin = Skin;

	this->ProcessEvent ( pFnSetSkinForClass, &SetSkinForClass_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.SetDesiredClass
// [0x00020102] 
// Parameters infos:
// unsigned char                  NewDesiredClass                ( CPF_Parm )

void ADVPlayerReplicationInfo::SetDesiredClass ( unsigned char NewDesiredClass )
{
	static UFunction* pFnSetDesiredClass = NULL;

	if ( ! pFnSetDesiredClass )
		pFnSetDesiredClass = (UFunction*) UObject::GObjObjects()->Data[ 46124 ];

	ADVPlayerReplicationInfo_execSetDesiredClass_Parms SetDesiredClass_Parms;
	SetDesiredClass_Parms.NewDesiredClass = NewDesiredClass;

	this->ProcessEvent ( pFnSetDesiredClass, &SetDesiredClass_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.KickForUnAuth
// [0x00020002] 
// Parameters infos:

void ADVPlayerReplicationInfo::KickForUnAuth ( )
{
	static UFunction* pFnKickForUnAuth = NULL;

	if ( ! pFnKickForUnAuth )
		pFnKickForUnAuth = (UFunction*) UObject::GObjObjects()->Data[ 46123 ];

	ADVPlayerReplicationInfo_execKickForUnAuth_Parms KickForUnAuth_Parms;

	this->ProcessEvent ( pFnKickForUnAuth, &KickForUnAuth_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.WriteUpdatedSteamStats
// [0x00020002] 
// Parameters infos:

void ADVPlayerReplicationInfo::WriteUpdatedSteamStats ( )
{
	static UFunction* pFnWriteUpdatedSteamStats = NULL;

	if ( ! pFnWriteUpdatedSteamStats )
		pFnWriteUpdatedSteamStats = (UFunction*) UObject::GObjObjects()->Data[ 46122 ];

	ADVPlayerReplicationInfo_execWriteUpdatedSteamStats_Parms WriteUpdatedSteamStats_Parms;

	this->ProcessEvent ( pFnWriteUpdatedSteamStats, &WriteUpdatedSteamStats_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.UpdateStatsForEndSpec
// [0x00020002] 
// Parameters infos:

void ADVPlayerReplicationInfo::UpdateStatsForEndSpec ( )
{
	static UFunction* pFnUpdateStatsForEndSpec = NULL;

	if ( ! pFnUpdateStatsForEndSpec )
		pFnUpdateStatsForEndSpec = (UFunction*) UObject::GObjObjects()->Data[ 46121 ];

	ADVPlayerReplicationInfo_execUpdateStatsForEndSpec_Parms UpdateStatsForEndSpec_Parms;

	this->ProcessEvent ( pFnUpdateStatsForEndSpec, &UpdateStatsForEndSpec_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.UpdateStatsForEndLoss
// [0x00020002] 
// Parameters infos:

void ADVPlayerReplicationInfo::UpdateStatsForEndLoss ( )
{
	static UFunction* pFnUpdateStatsForEndLoss = NULL;

	if ( ! pFnUpdateStatsForEndLoss )
		pFnUpdateStatsForEndLoss = (UFunction*) UObject::GObjObjects()->Data[ 46120 ];

	ADVPlayerReplicationInfo_execUpdateStatsForEndLoss_Parms UpdateStatsForEndLoss_Parms;

	this->ProcessEvent ( pFnUpdateStatsForEndLoss, &UpdateStatsForEndLoss_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.UpdateStatsForEndWin
// [0x00020002] 
// Parameters infos:

void ADVPlayerReplicationInfo::UpdateStatsForEndWin ( )
{
	static UFunction* pFnUpdateStatsForEndWin = NULL;

	if ( ! pFnUpdateStatsForEndWin )
		pFnUpdateStatsForEndWin = (UFunction*) UObject::GObjObjects()->Data[ 46119 ];

	ADVPlayerReplicationInfo_execUpdateStatsForEndWin_Parms UpdateStatsForEndWin_Parms;

	this->ProcessEvent ( pFnUpdateStatsForEndWin, &UpdateStatsForEndWin_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.ClearPendingSteamStats
// [0x00020002] 
// Parameters infos:

void ADVPlayerReplicationInfo::ClearPendingSteamStats ( )
{
	static UFunction* pFnClearPendingSteamStats = NULL;

	if ( ! pFnClearPendingSteamStats )
		pFnClearPendingSteamStats = (UFunction*) UObject::GObjObjects()->Data[ 46117 ];

	ADVPlayerReplicationInfo_execClearPendingSteamStats_Parms ClearPendingSteamStats_Parms;

	this->ProcessEvent ( pFnClearPendingSteamStats, &ClearPendingSteamStats_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.UpdateStoredSteamStats
// [0x00020002] 
// Parameters infos:

void ADVPlayerReplicationInfo::UpdateStoredSteamStats ( )
{
	static UFunction* pFnUpdateStoredSteamStats = NULL;

	if ( ! pFnUpdateStoredSteamStats )
		pFnUpdateStoredSteamStats = (UFunction*) UObject::GObjObjects()->Data[ 46116 ];

	ADVPlayerReplicationInfo_execUpdateStoredSteamStats_Parms UpdateStoredSteamStats_Parms;

	this->ProcessEvent ( pFnUpdateStoredSteamStats, &UpdateStoredSteamStats_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.UpdateCalculatedSkillValues
// [0x00020002] 
// Parameters infos:

void ADVPlayerReplicationInfo::UpdateCalculatedSkillValues ( )
{
	static UFunction* pFnUpdateCalculatedSkillValues = NULL;

	if ( ! pFnUpdateCalculatedSkillValues )
		pFnUpdateCalculatedSkillValues = (UFunction*) UObject::GObjObjects()->Data[ 46110 ];

	ADVPlayerReplicationInfo_execUpdateCalculatedSkillValues_Parms UpdateCalculatedSkillValues_Parms;

	this->ProcessEvent ( pFnUpdateCalculatedSkillValues, &UpdateCalculatedSkillValues_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.SetStoredStatIfGreater
// [0x00020002] 
// Parameters infos:
// unsigned char                  TheStat                        ( CPF_Parm )
// int                            NewAmount                      ( CPF_Parm )

void ADVPlayerReplicationInfo::SetStoredStatIfGreater ( unsigned char TheStat, int NewAmount )
{
	static UFunction* pFnSetStoredStatIfGreater = NULL;

	if ( ! pFnSetStoredStatIfGreater )
		pFnSetStoredStatIfGreater = (UFunction*) UObject::GObjObjects()->Data[ 46106 ];

	ADVPlayerReplicationInfo_execSetStoredStatIfGreater_Parms SetStoredStatIfGreater_Parms;
	SetStoredStatIfGreater_Parms.TheStat = TheStat;
	SetStoredStatIfGreater_Parms.NewAmount = NewAmount;

	this->ProcessEvent ( pFnSetStoredStatIfGreater, &SetStoredStatIfGreater_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.SetStoredStat
// [0x00020002] 
// Parameters infos:
// unsigned char                  TheStat                        ( CPF_Parm )
// int                            NewAmount                      ( CPF_Parm )

void ADVPlayerReplicationInfo::SetStoredStat ( unsigned char TheStat, int NewAmount )
{
	static UFunction* pFnSetStoredStat = NULL;

	if ( ! pFnSetStoredStat )
		pFnSetStoredStat = (UFunction*) UObject::GObjObjects()->Data[ 46103 ];

	ADVPlayerReplicationInfo_execSetStoredStat_Parms SetStoredStat_Parms;
	SetStoredStat_Parms.TheStat = TheStat;
	SetStoredStat_Parms.NewAmount = NewAmount;

	this->ProcessEvent ( pFnSetStoredStat, &SetStoredStat_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.GetStoredStat
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  TheStat                        ( CPF_Parm )

int ADVPlayerReplicationInfo::GetStoredStat ( unsigned char TheStat )
{
	static UFunction* pFnGetStoredStat = NULL;

	if ( ! pFnGetStoredStat )
		pFnGetStoredStat = (UFunction*) UObject::GObjObjects()->Data[ 46099 ];

	ADVPlayerReplicationInfo_execGetStoredStat_Parms GetStoredStat_Parms;
	GetStoredStat_Parms.TheStat = TheStat;

	this->ProcessEvent ( pFnGetStoredStat, &GetStoredStat_Parms, NULL );

	return GetStoredStat_Parms.ReturnValue;
};

// Function ForgeGame.DVPlayerReplicationInfo.IncrementStoredStat
// [0x00024002] 
// Parameters infos:
// unsigned char                  TheStat                        ( CPF_Parm )
// int                            IncrementAmount                ( CPF_OptionalParm | CPF_Parm )

void ADVPlayerReplicationInfo::IncrementStoredStat ( unsigned char TheStat, int IncrementAmount )
{
	static UFunction* pFnIncrementStoredStat = NULL;

	if ( ! pFnIncrementStoredStat )
		pFnIncrementStoredStat = (UFunction*) UObject::GObjObjects()->Data[ 46095 ];

	ADVPlayerReplicationInfo_execIncrementStoredStat_Parms IncrementStoredStat_Parms;
	IncrementStoredStat_Parms.TheStat = TheStat;
	IncrementStoredStat_Parms.IncrementAmount = IncrementAmount;

	this->ProcessEvent ( pFnIncrementStoredStat, &IncrementStoredStat_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.ReadSteamStatsComplete
// [0x00020002] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void ADVPlayerReplicationInfo::ReadSteamStatsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnReadSteamStatsComplete = NULL;

	if ( ! pFnReadSteamStatsComplete )
		pFnReadSteamStatsComplete = (UFunction*) UObject::GObjObjects()->Data[ 46093 ];

	ADVPlayerReplicationInfo_execReadSteamStatsComplete_Parms ReadSteamStatsComplete_Parms;
	ReadSteamStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnReadSteamStatsComplete, &ReadSteamStatsComplete_Parms, NULL );
};

// Function ForgeGame.DVPlayerReplicationInfo.GetSteamStats
// [0x00820002] 
// Parameters infos:

void ADVPlayerReplicationInfo::GetSteamStats ( )
{
	static UFunction* pFnGetSteamStats = NULL;

	if ( ! pFnGetSteamStats )
		pFnGetSteamStats = (UFunction*) UObject::GObjObjects()->Data[ 46088 ];

	ADVPlayerReplicationInfo_execGetSteamStats_Parms GetSteamStats_Parms;

	this->ProcessEvent ( pFnGetSteamStats, &GetSteamStats_Parms, NULL );
};

// Function ForgeGame.DVDamageType.StringVersion
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class UClass*                  DamageType                     ( CPF_Parm )

struct FString UDVDamageType::StringVersion ( class UClass* DamageType )
{
	static UFunction* pFnStringVersion = NULL;

	if ( ! pFnStringVersion )
		pFnStringVersion = (UFunction*) UObject::GObjObjects()->Data[ 43407 ];

	UDVDamageType_execStringVersion_Parms StringVersion_Parms;
	StringVersion_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnStringVersion, &StringVersion_Parms, NULL );

	return StringVersion_Parms.ReturnValue;
};

// Function ForgeGame.DVAttack.Destroyed
// [0x00020002] 
// Parameters infos:

void UDVAttack::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 45146 ];

	UDVAttack_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAttack.Release
// [0x00020002] 
// Parameters infos:

void UDVAttack::Release ( )
{
	static UFunction* pFnRelease = NULL;

	if ( ! pFnRelease )
		pFnRelease = (UFunction*) UObject::GObjObjects()->Data[ 45144 ];

	UDVAttack_execRelease_Parms Release_Parms;

	this->ProcessEvent ( pFnRelease, &Release_Parms, NULL );
};

// Function ForgeGame.DVAttack.AddBuff
// [0x00020002] 
// Parameters infos:
// class UDVBuff*                 Buff                           ( CPF_Parm )

void UDVAttack::AddBuff ( class UDVBuff* Buff )
{
	static UFunction* pFnAddBuff = NULL;

	if ( ! pFnAddBuff )
		pFnAddBuff = (UFunction*) UObject::GObjObjects()->Data[ 45142 ];

	UDVAttack_execAddBuff_Parms AddBuff_Parms;
	AddBuff_Parms.Buff = Buff;

	this->ProcessEvent ( pFnAddBuff, &AddBuff_Parms, NULL );
};

// Function ForgeGame.DVAttack.AddHot
// [0x00020002] 
// Parameters infos:
// class UDVHealthOverTime*       Hot                            ( CPF_Parm )

void UDVAttack::AddHot ( class UDVHealthOverTime* Hot )
{
	static UFunction* pFnAddHot = NULL;

	if ( ! pFnAddHot )
		pFnAddHot = (UFunction*) UObject::GObjObjects()->Data[ 45140 ];

	UDVAttack_execAddHot_Parms AddHot_Parms;
	AddHot_Parms.Hot = Hot;

	this->ProcessEvent ( pFnAddHot, &AddHot_Parms, NULL );
};

// Function ForgeGame.DVAttack.SetKnockdown
// [0x00020002] 
// Parameters infos:
// float                          NewKnockdown                   ( CPF_Parm )

void UDVAttack::SetKnockdown ( float NewKnockdown )
{
	static UFunction* pFnSetKnockdown = NULL;

	if ( ! pFnSetKnockdown )
		pFnSetKnockdown = (UFunction*) UObject::GObjObjects()->Data[ 45138 ];

	UDVAttack_execSetKnockdown_Parms SetKnockdown_Parms;
	SetKnockdown_Parms.NewKnockdown = NewKnockdown;

	this->ProcessEvent ( pFnSetKnockdown, &SetKnockdown_Parms, NULL );
};

// Function ForgeGame.DVAttack.SetKnockback
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )
// int                            Distance                       ( CPF_Parm )

void UDVAttack::SetKnockback ( struct FVector Direction, int Distance )
{
	static UFunction* pFnSetKnockback = NULL;

	if ( ! pFnSetKnockback )
		pFnSetKnockback = (UFunction*) UObject::GObjObjects()->Data[ 45135 ];

	UDVAttack_execSetKnockback_Parms SetKnockback_Parms;
	memcpy ( &SetKnockback_Parms.Direction, &Direction, 0xC );
	SetKnockback_Parms.Distance = Distance;

	this->ProcessEvent ( pFnSetKnockback, &SetKnockback_Parms, NULL );
};

// Function ForgeGame.DVAttack.AddDamage
// [0x00820002] 
// Parameters infos:
// float                          Amount                         ( CPF_Parm )
// class UClass*                  Type                           ( CPF_Parm )

void UDVAttack::AddDamage ( float Amount, class UClass* Type )
{
	static UFunction* pFnAddDamage = NULL;

	if ( ! pFnAddDamage )
		pFnAddDamage = (UFunction*) UObject::GObjObjects()->Data[ 45129 ];

	UDVAttack_execAddDamage_Parms AddDamage_Parms;
	AddDamage_Parms.Amount = Amount;
	AddDamage_Parms.Type = Type;

	this->ProcessEvent ( pFnAddDamage, &AddDamage_Parms, NULL );
};

// Function ForgeGame.DVAttack.SetDontCauseHitReaction
// [0x00020002] 
// Parameters infos:
// unsigned long                  NewDontCauseHitReaction        ( CPF_Parm )

void UDVAttack::SetDontCauseHitReaction ( unsigned long NewDontCauseHitReaction )
{
	static UFunction* pFnSetDontCauseHitReaction = NULL;

	if ( ! pFnSetDontCauseHitReaction )
		pFnSetDontCauseHitReaction = (UFunction*) UObject::GObjObjects()->Data[ 45127 ];

	UDVAttack_execSetDontCauseHitReaction_Parms SetDontCauseHitReaction_Parms;
	SetDontCauseHitReaction_Parms.NewDontCauseHitReaction = NewDontCauseHitReaction;

	this->ProcessEvent ( pFnSetDontCauseHitReaction, &SetDontCauseHitReaction_Parms, NULL );
};

// Function ForgeGame.DVAttack.SetMirrored
// [0x00020002] 
// Parameters infos:
// unsigned long                  NewMirrored                    ( CPF_Parm )

void UDVAttack::SetMirrored ( unsigned long NewMirrored )
{
	static UFunction* pFnSetMirrored = NULL;

	if ( ! pFnSetMirrored )
		pFnSetMirrored = (UFunction*) UObject::GObjObjects()->Data[ 45125 ];

	UDVAttack_execSetMirrored_Parms SetMirrored_Parms;
	SetMirrored_Parms.NewMirrored = NewMirrored;

	this->ProcessEvent ( pFnSetMirrored, &SetMirrored_Parms, NULL );
};

// Function ForgeGame.DVAttack.SetFriendly
// [0x00020002] 
// Parameters infos:
// unsigned long                  NewFriendly                    ( CPF_Parm )

void UDVAttack::SetFriendly ( unsigned long NewFriendly )
{
	static UFunction* pFnSetFriendly = NULL;

	if ( ! pFnSetFriendly )
		pFnSetFriendly = (UFunction*) UObject::GObjObjects()->Data[ 45123 ];

	UDVAttack_execSetFriendly_Parms SetFriendly_Parms;
	SetFriendly_Parms.NewFriendly = NewFriendly;

	this->ProcessEvent ( pFnSetFriendly, &SetFriendly_Parms, NULL );
};

// Function ForgeGame.DVAttack.SetHotTick
// [0x00020002] 
// Parameters infos:
// unsigned long                  NewHotTick                     ( CPF_Parm )

void UDVAttack::SetHotTick ( unsigned long NewHotTick )
{
	static UFunction* pFnSetHotTick = NULL;

	if ( ! pFnSetHotTick )
		pFnSetHotTick = (UFunction*) UObject::GObjObjects()->Data[ 45121 ];

	UDVAttack_execSetHotTick_Parms SetHotTick_Parms;
	SetHotTick_Parms.NewHotTick = NewHotTick;

	this->ProcessEvent ( pFnSetHotTick, &SetHotTick_Parms, NULL );
};

// Function ForgeGame.DVAttack.SetBlockImmune
// [0x00020002] 
// Parameters infos:
// unsigned long                  NewBlockImmune                 ( CPF_Parm )

void UDVAttack::SetBlockImmune ( unsigned long NewBlockImmune )
{
	static UFunction* pFnSetBlockImmune = NULL;

	if ( ! pFnSetBlockImmune )
		pFnSetBlockImmune = (UFunction*) UObject::GObjObjects()->Data[ 45119 ];

	UDVAttack_execSetBlockImmune_Parms SetBlockImmune_Parms;
	SetBlockImmune_Parms.NewBlockImmune = NewBlockImmune;

	this->ProcessEvent ( pFnSetBlockImmune, &SetBlockImmune_Parms, NULL );
};

// Function ForgeGame.DVAttack.SetInstigatorController
// [0x00020002] 
// Parameters infos:
// class AController*             NewInstigator                  ( CPF_Parm )

void UDVAttack::SetInstigatorController ( class AController* NewInstigator )
{
	static UFunction* pFnSetInstigatorController = NULL;

	if ( ! pFnSetInstigatorController )
		pFnSetInstigatorController = (UFunction*) UObject::GObjObjects()->Data[ 45117 ];

	UDVAttack_execSetInstigatorController_Parms SetInstigatorController_Parms;
	SetInstigatorController_Parms.NewInstigator = NewInstigator;

	this->ProcessEvent ( pFnSetInstigatorController, &SetInstigatorController_Parms, NULL );
};

// Function ForgeGame.DVAttack.SetAbility
// [0x00020002] 
// Parameters infos:
// class ADVAbility*              NewAbility                     ( CPF_Parm )

void UDVAttack::SetAbility ( class ADVAbility* NewAbility )
{
	static UFunction* pFnSetAbility = NULL;

	if ( ! pFnSetAbility )
		pFnSetAbility = (UFunction*) UObject::GObjObjects()->Data[ 45115 ];

	UDVAttack_execSetAbility_Parms SetAbility_Parms;
	SetAbility_Parms.NewAbility = NewAbility;

	this->ProcessEvent ( pFnSetAbility, &SetAbility_Parms, NULL );
};

// Function ForgeGame.DVAttack.SetOrigin
// [0x00020002] 
// Parameters infos:
// struct FVector                 NewOrigin                      ( CPF_Parm )

void UDVAttack::SetOrigin ( struct FVector NewOrigin )
{
	static UFunction* pFnSetOrigin = NULL;

	if ( ! pFnSetOrigin )
		pFnSetOrigin = (UFunction*) UObject::GObjObjects()->Data[ 45113 ];

	UDVAttack_execSetOrigin_Parms SetOrigin_Parms;
	memcpy ( &SetOrigin_Parms.NewOrigin, &NewOrigin, 0xC );

	this->ProcessEvent ( pFnSetOrigin, &SetOrigin_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineProfileSettings.DownAbilityReordering
// [0x00020002] 
// Parameters infos:

void UForgeOnlineProfileSettings::DownAbilityReordering ( )
{
	static UFunction* pFnDownAbilityReordering = NULL;

	if ( ! pFnDownAbilityReordering )
		pFnDownAbilityReordering = (UFunction*) UObject::GObjObjects()->Data[ 49939 ];

	UForgeOnlineProfileSettings_execDownAbilityReordering_Parms DownAbilityReordering_Parms;

	this->ProcessEvent ( pFnDownAbilityReordering, &DownAbilityReordering_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineProfileSettings.UpAbilityReordering
// [0x00020002] 
// Parameters infos:

void UForgeOnlineProfileSettings::UpAbilityReordering ( )
{
	static UFunction* pFnUpAbilityReordering = NULL;

	if ( ! pFnUpAbilityReordering )
		pFnUpAbilityReordering = (UFunction*) UObject::GObjObjects()->Data[ 49925 ];

	UForgeOnlineProfileSettings_execUpAbilityReordering_Parms UpAbilityReordering_Parms;

	this->ProcessEvent ( pFnUpAbilityReordering, &UpAbilityReordering_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineProfileSettings.AddMissingDefaultSettings
// [0x00020002] 
// Parameters infos:

void UForgeOnlineProfileSettings::AddMissingDefaultSettings ( )
{
	static UFunction* pFnAddMissingDefaultSettings = NULL;

	if ( ! pFnAddMissingDefaultSettings )
		pFnAddMissingDefaultSettings = (UFunction*) UObject::GObjObjects()->Data[ 49921 ];

	UForgeOnlineProfileSettings_execAddMissingDefaultSettings_Parms AddMissingDefaultSettings_Parms;

	this->ProcessEvent ( pFnAddMissingDefaultSettings, &AddMissingDefaultSettings_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineProfileSettings.SanityChecks
// [0x00020002] 
// Parameters infos:

void UForgeOnlineProfileSettings::SanityChecks ( )
{
	static UFunction* pFnSanityChecks = NULL;

	if ( ! pFnSanityChecks )
		pFnSanityChecks = (UFunction*) UObject::GObjObjects()->Data[ 49920 ];

	UForgeOnlineProfileSettings_execSanityChecks_Parms SanityChecks_Parms;

	this->ProcessEvent ( pFnSanityChecks, &SanityChecks_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineProfileSettings.MigrateRevision
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            OldVersionNumber               ( CPF_Parm )

bool UForgeOnlineProfileSettings::eventMigrateRevision ( int OldVersionNumber )
{
	static UFunction* pFnMigrateRevision = NULL;

	if ( ! pFnMigrateRevision )
		pFnMigrateRevision = (UFunction*) UObject::GObjObjects()->Data[ 49917 ];

	UForgeOnlineProfileSettings_eventMigrateRevision_Parms MigrateRevision_Parms;
	MigrateRevision_Parms.OldVersionNumber = OldVersionNumber;

	this->ProcessEvent ( pFnMigrateRevision, &MigrateRevision_Parms, NULL );

	return MigrateRevision_Parms.ReturnValue;
};

// Function ForgeGame.DVPawnHero.UnPossessed
// [0x00020002] 
// Parameters infos:

void ADVPawnHero::UnPossessed ( )
{
	static UFunction* pFnUnPossessed = NULL;

	if ( ! pFnUnPossessed )
		pFnUnPossessed = (UFunction*) UObject::GObjObjects()->Data[ 43209 ];

	ADVPawnHero_execUnPossessed_Parms UnPossessed_Parms;

	this->ProcessEvent ( pFnUnPossessed, &UnPossessed_Parms, NULL );
};

// Function ForgeGame.DVPawnHero.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ADVPawnHero::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 43204 ];

	ADVPawnHero_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function ForgeGame.DVPawnHero.PlayWallJump
// [0x00020102] 
// Parameters infos:

void ADVPawnHero::PlayWallJump ( )
{
	static UFunction* pFnPlayWallJump = NULL;

	if ( ! pFnPlayWallJump )
		pFnPlayWallJump = (UFunction*) UObject::GObjObjects()->Data[ 43203 ];

	ADVPawnHero_execPlayWallJump_Parms PlayWallJump_Parms;

	this->ProcessEvent ( pFnPlayWallJump, &PlayWallJump_Parms, NULL );
};

// Function ForgeGame.DVPawnHero.DoJump
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bUpdating                      ( CPF_Parm )

bool ADVPawnHero::DoJump ( unsigned long bUpdating )
{
	static UFunction* pFnDoJump = NULL;

	if ( ! pFnDoJump )
		pFnDoJump = (UFunction*) UObject::GObjObjects()->Data[ 43195 ];

	ADVPawnHero_execDoJump_Parms DoJump_Parms;
	DoJump_Parms.bUpdating = bUpdating;

	this->ProcessEvent ( pFnDoJump, &DoJump_Parms, NULL );

	return DoJump_Parms.ReturnValue;
};

// Function ForgeGame.DVPawnHero.TossPawn
// [0x00020002] 
// Parameters infos:
// struct FVector                 Knockback                      ( CPF_Parm )

void ADVPawnHero::TossPawn ( struct FVector Knockback )
{
	static UFunction* pFnTossPawn = NULL;

	if ( ! pFnTossPawn )
		pFnTossPawn = (UFunction*) UObject::GObjObjects()->Data[ 43193 ];

	ADVPawnHero_execTossPawn_Parms TossPawn_Parms;
	memcpy ( &TossPawn_Parms.Knockback, &Knockback, 0xC );

	this->ProcessEvent ( pFnTossPawn, &TossPawn_Parms, NULL );
};

// Function ForgeGame.DVPawnHero.RemoveBlockResource
// [0x00020102] 
// Parameters infos:

void ADVPawnHero::RemoveBlockResource ( )
{
	static UFunction* pFnRemoveBlockResource = NULL;

	if ( ! pFnRemoveBlockResource )
		pFnRemoveBlockResource = (UFunction*) UObject::GObjObjects()->Data[ 43192 ];

	ADVPawnHero_execRemoveBlockResource_Parms RemoveBlockResource_Parms;

	this->ProcessEvent ( pFnRemoveBlockResource, &RemoveBlockResource_Parms, NULL );
};

// Function ForgeGame.DVPawnHero.AttackMisses
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UDVLogEntry*             LogEntry                       ( CPF_OptionalParm | CPF_Parm )
// class UDVAttack*               Attack                         ( CPF_Parm | CPF_OutParm )

bool ADVPawnHero::AttackMisses ( class UDVLogEntry* LogEntry, class UDVAttack** Attack )
{
	static UFunction* pFnAttackMisses = NULL;

	if ( ! pFnAttackMisses )
		pFnAttackMisses = (UFunction*) UObject::GObjObjects()->Data[ 43185 ];

	ADVPawnHero_execAttackMisses_Parms AttackMisses_Parms;
	AttackMisses_Parms.LogEntry = LogEntry;

	this->ProcessEvent ( pFnAttackMisses, &AttackMisses_Parms, NULL );

	if ( Attack )
		*Attack = AttackMisses_Parms.Attack;

	return AttackMisses_Parms.ReturnValue;
};

// Function ForgeGame.DVPawnHero.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVPawnHero::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43184 ];

	ADVPawnHero_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVPawnHero.PlayDying
// [0x00020102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLoc                         ( CPF_Parm )

void ADVPawnHero::PlayDying ( class UClass* DamageType, struct FVector HitLoc )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 43180 ];

	ADVPawnHero_execPlayDying_Parms PlayDying_Parms;
	PlayDying_Parms.DamageType = DamageType;
	memcpy ( &PlayDying_Parms.HitLoc, &HitLoc, 0xC );

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function ForgeGame.DVPawnHero.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVPawnHero::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 43177 ];

	ADVPawnHero_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVPawnHero.CanCapObjective
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADVPawnHero::CanCapObjective ( )
{
	static UFunction* pFnCanCapObjective = NULL;

	if ( ! pFnCanCapObjective )
		pFnCanCapObjective = (UFunction*) UObject::GObjObjects()->Data[ 43175 ];

	ADVPawnHero_execCanCapObjective_Parms CanCapObjective_Parms;

	this->ProcessEvent ( pFnCanCapObjective, &CanCapObjective_Parms, NULL );

	return CanCapObjective_Parms.ReturnValue;
};

// Function ForgeGame.DVPawnHero.InitiateStats
// [0x00020102] 
// Parameters infos:

void ADVPawnHero::InitiateStats ( )
{
	static UFunction* pFnInitiateStats = NULL;

	if ( ! pFnInitiateStats )
		pFnInitiateStats = (UFunction*) UObject::GObjObjects()->Data[ 43174 ];

	ADVPawnHero_execInitiateStats_Parms InitiateStats_Parms;

	this->ProcessEvent ( pFnInitiateStats, &InitiateStats_Parms, NULL );
};

// Function ForgeGame.DVPawnHero.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVPawnHero::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43170 ];

	ADVPawnHero_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVPawnHero.PlaySpawnProtection
// [0x00020102] 
// Parameters infos:

void ADVPawnHero::PlaySpawnProtection ( )
{
	static UFunction* pFnPlaySpawnProtection = NULL;

	if ( ! pFnPlaySpawnProtection )
		pFnPlaySpawnProtection = (UFunction*) UObject::GObjObjects()->Data[ 43169 ];

	ADVPawnHero_execPlaySpawnProtection_Parms PlaySpawnProtection_Parms;

	this->ProcessEvent ( pFnPlaySpawnProtection, &PlaySpawnProtection_Parms, NULL );
};

// Function ForgeGame.DVPawnHero.IsPawnReady
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADVPawnHero::IsPawnReady ( )
{
	static UFunction* pFnIsPawnReady = NULL;

	if ( ! pFnIsPawnReady )
		pFnIsPawnReady = (UFunction*) UObject::GObjObjects()->Data[ 43167 ];

	ADVPawnHero_execIsPawnReady_Parms IsPawnReady_Parms;

	this->ProcessEvent ( pFnIsPawnReady, &IsPawnReady_Parms, NULL );

	return IsPawnReady_Parms.ReturnValue;
};

// Function ForgeGame.DVPawnHero.PlayBlocked
// [0x00020102] 
// Parameters infos:

void ADVPawnHero::PlayBlocked ( )
{
	static UFunction* pFnPlayBlocked = NULL;

	if ( ! pFnPlayBlocked )
		pFnPlayBlocked = (UFunction*) UObject::GObjObjects()->Data[ 43166 ];

	ADVPawnHero_execPlayBlocked_Parms PlayBlocked_Parms;

	this->ProcessEvent ( pFnPlayBlocked, &PlayBlocked_Parms, NULL );
};

// Function ForgeGame.DVPawnHero.PlayBlockingIdle
// [0x00020102] 
// Parameters infos:

void ADVPawnHero::PlayBlockingIdle ( )
{
	static UFunction* pFnPlayBlockingIdle = NULL;

	if ( ! pFnPlayBlockingIdle )
		pFnPlayBlockingIdle = (UFunction*) UObject::GObjObjects()->Data[ 43165 ];

	ADVPawnHero_execPlayBlockingIdle_Parms PlayBlockingIdle_Parms;

	this->ProcessEvent ( pFnPlayBlockingIdle, &PlayBlockingIdle_Parms, NULL );
};

// Function ForgeGame.DVPawnHero.PlayBlocking
// [0x00020102] 
// Parameters infos:

void ADVPawnHero::PlayBlocking ( )
{
	static UFunction* pFnPlayBlocking = NULL;

	if ( ! pFnPlayBlocking )
		pFnPlayBlocking = (UFunction*) UObject::GObjObjects()->Data[ 43164 ];

	ADVPawnHero_execPlayBlocking_Parms PlayBlocking_Parms;

	this->ProcessEvent ( pFnPlayBlocking, &PlayBlocking_Parms, NULL );
};

// Function ForgeGame.DVPawnHero.PlayDetermined
// [0x00020102] 
// Parameters infos:

void ADVPawnHero::PlayDetermined ( )
{
	static UFunction* pFnPlayDetermined = NULL;

	if ( ! pFnPlayDetermined )
		pFnPlayDetermined = (UFunction*) UObject::GObjObjects()->Data[ 43161 ];

	ADVPawnHero_execPlayDetermined_Parms PlayDetermined_Parms;

	this->ProcessEvent ( pFnPlayDetermined, &PlayDetermined_Parms, NULL );
};

// Function ForgeGame.DVPawnHero.SetSkin
// [0x00020102] 
// Parameters infos:

void ADVPawnHero::SetSkin ( )
{
	static UFunction* pFnSetSkin = NULL;

	if ( ! pFnSetSkin )
		pFnSetSkin = (UFunction*) UObject::GObjObjects()->Data[ 43154 ];

	ADVPawnHero_execSetSkin_Parms SetSkin_Parms;

	this->ProcessEvent ( pFnSetSkin, &SetSkin_Parms, NULL );
};

// Function ForgeGame.DVPawnHero.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVPawnHero::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 43152 ];

	ADVPawnHero_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.Landed
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  FloorActor                     ( CPF_Parm )

void ADVPawnMortal::eventLanded ( struct FVector HitNormal, class AActor* FloorActor )
{
	static UFunction* pFnLanded = NULL;

	if ( ! pFnLanded )
		pFnLanded = (UFunction*) UObject::GObjObjects()->Data[ 43095 ];

	ADVPawnMortal_eventLanded_Parms Landed_Parms;
	memcpy ( &Landed_Parms.HitNormal, &HitNormal, 0xC );
	Landed_Parms.FloorActor = FloorActor;

	this->ProcessEvent ( pFnLanded, &Landed_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.Bump
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADVPawnMortal::eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal )
{
	static UFunction* pFnBump = NULL;

	if ( ! pFnBump )
		pFnBump = (UFunction*) UObject::GObjObjects()->Data[ 43091 ];

	ADVPawnMortal_eventBump_Parms Bump_Parms;
	Bump_Parms.Other = Other;
	Bump_Parms.OtherComp = OtherComp;
	memcpy ( &Bump_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnBump, &Bump_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.TossPawn
// [0x00820002] 
// Parameters infos:
// struct FVector                 Knockback                      ( CPF_Parm )

void ADVPawnMortal::TossPawn ( struct FVector Knockback )
{
	static UFunction* pFnTossPawn = NULL;

	if ( ! pFnTossPawn )
		pFnTossPawn = (UFunction*) UObject::GObjObjects()->Data[ 43086 ];

	ADVPawnMortal_execTossPawn_Parms TossPawn_Parms;
	memcpy ( &TossPawn_Parms.Knockback, &Knockback, 0xC );

	this->ProcessEvent ( pFnTossPawn, &TossPawn_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.PlayDying
// [0x00020102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLoc                         ( CPF_Parm )

void ADVPawnMortal::PlayDying ( class UClass* DamageType, struct FVector HitLoc )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 43083 ];

	ADVPawnMortal_execPlayDying_Parms PlayDying_Parms;
	PlayDying_Parms.DamageType = DamageType;
	memcpy ( &PlayDying_Parms.HitLoc, &HitLoc, 0xC );

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.PlayHitReaction
// [0x00020102] 
// Parameters infos:
// struct FVector                 AttackImpulse                  ( CPF_Parm )

void ADVPawnMortal::PlayHitReaction ( struct FVector AttackImpulse )
{
	static UFunction* pFnPlayHitReaction = NULL;

	if ( ! pFnPlayHitReaction )
		pFnPlayHitReaction = (UFunction*) UObject::GObjObjects()->Data[ 43080 ];

	ADVPawnMortal_execPlayHitReaction_Parms PlayHitReaction_Parms;
	memcpy ( &PlayHitReaction_Parms.AttackImpulse, &AttackImpulse, 0xC );

	this->ProcessEvent ( pFnPlayHitReaction, &PlayHitReaction_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.TakeAttack
// [0x00420002] 
// Parameters infos:
// class UDVAttack*               Attack                         ( CPF_Parm | CPF_OutParm )

void ADVPawnMortal::TakeAttack ( class UDVAttack** Attack )
{
	static UFunction* pFnTakeAttack = NULL;

	if ( ! pFnTakeAttack )
		pFnTakeAttack = (UFunction*) UObject::GObjObjects()->Data[ 43078 ];

	ADVPawnMortal_execTakeAttack_Parms TakeAttack_Parms;

	this->ProcessEvent ( pFnTakeAttack, &TakeAttack_Parms, NULL );

	if ( Attack )
		*Attack = TakeAttack_Parms.Attack;
};

// Function ForgeGame.DVPawnMortal.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVPawnMortal::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 43075 ];

	ADVPawnMortal_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVPawnMortal::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43074 ];

	ADVPawnMortal_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.SetPostProcess
// [0x00020102] 
// Parameters infos:

void ADVPawnMortal::SetPostProcess ( )
{
	static UFunction* pFnSetPostProcess = NULL;

	if ( ! pFnSetPostProcess )
		pFnSetPostProcess = (UFunction*) UObject::GObjObjects()->Data[ 43071 ];

	ADVPawnMortal_execSetPostProcess_Parms SetPostProcess_Parms;

	this->ProcessEvent ( pFnSetPostProcess, &SetPostProcess_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.PlayBlinded
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVPawnMortal::PlayBlinded ( float DeltaTime )
{
	static UFunction* pFnPlayBlinded = NULL;

	if ( ! pFnPlayBlinded )
		pFnPlayBlinded = (UFunction*) UObject::GObjObjects()->Data[ 43066 ];

	ADVPawnMortal_execPlayBlinded_Parms PlayBlinded_Parms;
	PlayBlinded_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPlayBlinded, &PlayBlinded_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.PlayShadowShift
// [0x00020102] 
// Parameters infos:

void ADVPawnMortal::PlayShadowShift ( )
{
	static UFunction* pFnPlayShadowShift = NULL;

	if ( ! pFnPlayShadowShift )
		pFnPlayShadowShift = (UFunction*) UObject::GObjObjects()->Data[ 43065 ];

	ADVPawnMortal_execPlayShadowShift_Parms PlayShadowShift_Parms;

	this->ProcessEvent ( pFnPlayShadowShift, &PlayShadowShift_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.SetShadowShift
// [0x00020102] 
// Parameters infos:

void ADVPawnMortal::SetShadowShift ( )
{
	static UFunction* pFnSetShadowShift = NULL;

	if ( ! pFnSetShadowShift )
		pFnSetShadowShift = (UFunction*) UObject::GObjObjects()->Data[ 43062 ];

	ADVPawnMortal_execSetShadowShift_Parms SetShadowShift_Parms;

	this->ProcessEvent ( pFnSetShadowShift, &SetShadowShift_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVPawnMortal::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43061 ];

	ADVPawnMortal_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.PlayPinned
// [0x00020102] 
// Parameters infos:

void ADVPawnMortal::PlayPinned ( )
{
	static UFunction* pFnPlayPinned = NULL;

	if ( ! pFnPlayPinned )
		pFnPlayPinned = (UFunction*) UObject::GObjObjects()->Data[ 43058 ];

	ADVPawnMortal_execPlayPinned_Parms PlayPinned_Parms;

	this->ProcessEvent ( pFnPlayPinned, &PlayPinned_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.PlayStunned
// [0x00020102] 
// Parameters infos:

void ADVPawnMortal::PlayStunned ( )
{
	static UFunction* pFnPlayStunned = NULL;

	if ( ! pFnPlayStunned )
		pFnPlayStunned = (UFunction*) UObject::GObjObjects()->Data[ 43056 ];

	ADVPawnMortal_execPlayStunned_Parms PlayStunned_Parms;

	this->ProcessEvent ( pFnPlayStunned, &PlayStunned_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.PlayGetUp
// [0x00020102] 
// Parameters infos:

void ADVPawnMortal::PlayGetUp ( )
{
	static UFunction* pFnPlayGetUp = NULL;

	if ( ! pFnPlayGetUp )
		pFnPlayGetUp = (UFunction*) UObject::GObjObjects()->Data[ 43055 ];

	ADVPawnMortal_execPlayGetUp_Parms PlayGetUp_Parms;

	this->ProcessEvent ( pFnPlayGetUp, &PlayGetUp_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.PlayIdleGround
// [0x00020102] 
// Parameters infos:

void ADVPawnMortal::PlayIdleGround ( )
{
	static UFunction* pFnPlayIdleGround = NULL;

	if ( ! pFnPlayIdleGround )
		pFnPlayIdleGround = (UFunction*) UObject::GObjObjects()->Data[ 43054 ];

	ADVPawnMortal_execPlayIdleGround_Parms PlayIdleGround_Parms;

	this->ProcessEvent ( pFnPlayIdleGround, &PlayIdleGround_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.PlayKnockdown
// [0x00020102] 
// Parameters infos:

void ADVPawnMortal::PlayKnockdown ( )
{
	static UFunction* pFnPlayKnockdown = NULL;

	if ( ! pFnPlayKnockdown )
		pFnPlayKnockdown = (UFunction*) UObject::GObjObjects()->Data[ 43053 ];

	ADVPawnMortal_execPlayKnockdown_Parms PlayKnockdown_Parms;

	this->ProcessEvent ( pFnPlayKnockdown, &PlayKnockdown_Parms, NULL );
};

// Function ForgeGame.DVPawnMortal.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVPawnMortal::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 43050 ];

	ADVPawnMortal_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroAssassin.AttackedSomeone
// [0x00020002] 
// Parameters infos:

void ADVPawnHeroAssassin::AttackedSomeone ( )
{
	static UFunction* pFnAttackedSomeone = NULL;

	if ( ! pFnAttackedSomeone )
		pFnAttackedSomeone = (UFunction*) UObject::GObjObjects()->Data[ 43249 ];

	ADVPawnHeroAssassin_execAttackedSomeone_Parms AttackedSomeone_Parms;

	this->ProcessEvent ( pFnAttackedSomeone, &AttackedSomeone_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroAssassin.PlayFootStepSound
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// int                            FootDown                       ( CPF_Parm )

void ADVPawnHeroAssassin::eventPlayFootStepSound ( int FootDown )
{
	static UFunction* pFnPlayFootStepSound = NULL;

	if ( ! pFnPlayFootStepSound )
		pFnPlayFootStepSound = (UFunction*) UObject::GObjObjects()->Data[ 43247 ];

	ADVPawnHeroAssassin_eventPlayFootStepSound_Parms PlayFootStepSound_Parms;
	PlayFootStepSound_Parms.FootDown = FootDown;

	this->ProcessEvent ( pFnPlayFootStepSound, &PlayFootStepSound_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroAssassin.CanCapObjective
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADVPawnHeroAssassin::CanCapObjective ( )
{
	static UFunction* pFnCanCapObjective = NULL;

	if ( ! pFnCanCapObjective )
		pFnCanCapObjective = (UFunction*) UObject::GObjObjects()->Data[ 43245 ];

	ADVPawnHeroAssassin_execCanCapObjective_Parms CanCapObjective_Parms;

	this->ProcessEvent ( pFnCanCapObjective, &CanCapObjective_Parms, NULL );

	return CanCapObjective_Parms.ReturnValue;
};

// Function ForgeGame.DVPawnHeroAssassin.ShouldDisplayOnHud
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADVPawnHeroAssassin::ShouldDisplayOnHud ( )
{
	static UFunction* pFnShouldDisplayOnHud = NULL;

	if ( ! pFnShouldDisplayOnHud )
		pFnShouldDisplayOnHud = (UFunction*) UObject::GObjObjects()->Data[ 43243 ];

	ADVPawnHeroAssassin_execShouldDisplayOnHud_Parms ShouldDisplayOnHud_Parms;

	this->ProcessEvent ( pFnShouldDisplayOnHud, &ShouldDisplayOnHud_Parms, NULL );

	return ShouldDisplayOnHud_Parms.ReturnValue;
};

// Function ForgeGame.DVPawnHeroAssassin.TakeAttack
// [0x00420002] 
// Parameters infos:
// class UDVAttack*               Attack                         ( CPF_Parm | CPF_OutParm )

void ADVPawnHeroAssassin::TakeAttack ( class UDVAttack** Attack )
{
	static UFunction* pFnTakeAttack = NULL;

	if ( ! pFnTakeAttack )
		pFnTakeAttack = (UFunction*) UObject::GObjObjects()->Data[ 43241 ];

	ADVPawnHeroAssassin_execTakeAttack_Parms TakeAttack_Parms;

	this->ProcessEvent ( pFnTakeAttack, &TakeAttack_Parms, NULL );

	if ( Attack )
		*Attack = TakeAttack_Parms.Attack;
};

// Function ForgeGame.DVPawnHeroAssassin.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVPawnHeroAssassin::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 43238 ];

	ADVPawnHeroAssassin_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroAssassin.PlayBlinded
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVPawnHeroAssassin::PlayBlinded ( float DeltaTime )
{
	static UFunction* pFnPlayBlinded = NULL;

	if ( ! pFnPlayBlinded )
		pFnPlayBlinded = (UFunction*) UObject::GObjObjects()->Data[ 43233 ];

	ADVPawnHeroAssassin_execPlayBlinded_Parms PlayBlinded_Parms;
	PlayBlinded_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPlayBlinded, &PlayBlinded_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroAssassin.SetPostProcess
// [0x00020102] 
// Parameters infos:

void ADVPawnHeroAssassin::SetPostProcess ( )
{
	static UFunction* pFnSetPostProcess = NULL;

	if ( ! pFnSetPostProcess )
		pFnSetPostProcess = (UFunction*) UObject::GObjObjects()->Data[ 43230 ];

	ADVPawnHeroAssassin_execSetPostProcess_Parms SetPostProcess_Parms;

	this->ProcessEvent ( pFnSetPostProcess, &SetPostProcess_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroAssassin.SetStealth
// [0x00820102] 
// Parameters infos:

void ADVPawnHeroAssassin::SetStealth ( )
{
	static UFunction* pFnSetStealth = NULL;

	if ( ! pFnSetStealth )
		pFnSetStealth = (UFunction*) UObject::GObjObjects()->Data[ 43224 ];

	ADVPawnHeroAssassin_execSetStealth_Parms SetStealth_Parms;

	this->ProcessEvent ( pFnSetStealth, &SetStealth_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroAssassin.SetSkin
// [0x00020102] 
// Parameters infos:

void ADVPawnHeroAssassin::SetSkin ( )
{
	static UFunction* pFnSetSkin = NULL;

	if ( ! pFnSetSkin )
		pFnSetSkin = (UFunction*) UObject::GObjObjects()->Data[ 43223 ];

	ADVPawnHeroAssassin_execSetSkin_Parms SetSkin_Parms;

	this->ProcessEvent ( pFnSetSkin, &SetSkin_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroAssassin.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVPawnHeroAssassin::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 43221 ];

	ADVPawnHeroAssassin_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVLogEntry.Destroyed
// [0x00020002] 
// Parameters infos:

void UDVLogEntry::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 45504 ];

	UDVLogEntry_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVLogEntry.Report
// [0x00820002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UDVLogEntry::Report ( )
{
	static UFunction* pFnReport = NULL;

	if ( ! pFnReport )
		pFnReport = (UFunction*) UObject::GObjObjects()->Data[ 45497 ];

	UDVLogEntry_execReport_Parms Report_Parms;

	this->ProcessEvent ( pFnReport, &Report_Parms, NULL );

	return Report_Parms.ReturnValue;
};

// Function ForgeGame.DVLogEntry.LogMiss
// [0x00020002] 
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )

void UDVLogEntry::LogMiss ( unsigned char Type )
{
	static UFunction* pFnLogMiss = NULL;

	if ( ! pFnLogMiss )
		pFnLogMiss = (UFunction*) UObject::GObjObjects()->Data[ 45494 ];

	UDVLogEntry_execLogMiss_Parms LogMiss_Parms;
	LogMiss_Parms.Type = Type;

	this->ProcessEvent ( pFnLogMiss, &LogMiss_Parms, NULL );
};

// Function ForgeGame.DVAbilityPuncture.Reset
// [0x00020002] 
// Parameters infos:

void ADVAbilityPuncture::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 43621 ];

	ADVAbilityPuncture_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function ForgeGame.DVAbilityPuncture.HotTick
// [0x00840003] ( FUNC_Final )
// Parameters infos:

void ADVAbilityPuncture::HotTick ( )
{
	static UFunction* pFnHotTick = NULL;

	if ( ! pFnHotTick )
		pFnHotTick = (UFunction*) UObject::GObjObjects()->Data[ 43619 ];

	ADVAbilityPuncture_execHotTick_Parms HotTick_Parms;

	this->ProcessEvent ( pFnHotTick, &HotTick_Parms, NULL );
};

// Function ForgeGame.DVAbilityPuncture.SendHot
// [0x00020000] 
// Parameters infos:
// class ADVPawn*                 HotTarget                      ( CPF_Parm )

void ADVAbilityPuncture::SendHot ( class ADVPawn* HotTarget )
{
	static UFunction* pFnSendHot = NULL;

	if ( ! pFnSendHot )
		pFnSendHot = (UFunction*) UObject::GObjObjects()->Data[ 43617 ];

	ADVAbilityPuncture_execSendHot_Parms SendHot_Parms;
	SendHot_Parms.HotTarget = HotTarget;

	this->ProcessEvent ( pFnSendHot, &SendHot_Parms, NULL );
};

// Function ForgeGame.DVAbilityPuncture.ClientRemoveAllStacks
// [0x010201C2] 
// Parameters infos:
// class ADVPlayerReplicationInfo* PRI                            ( CPF_Parm )

void ADVAbilityPuncture::ClientRemoveAllStacks ( class ADVPlayerReplicationInfo* PRI )
{
	static UFunction* pFnClientRemoveAllStacks = NULL;

	if ( ! pFnClientRemoveAllStacks )
		pFnClientRemoveAllStacks = (UFunction*) UObject::GObjObjects()->Data[ 43615 ];

	ADVAbilityPuncture_execClientRemoveAllStacks_Parms ClientRemoveAllStacks_Parms;
	ClientRemoveAllStacks_Parms.PRI = PRI;

	this->ProcessEvent ( pFnClientRemoveAllStacks, &ClientRemoveAllStacks_Parms, NULL );
};

// Function ForgeGame.DVAbilityPuncture.ClientRemoveStack
// [0x010201C2] 
// Parameters infos:
// class ADVPlayerReplicationInfo* PRI                            ( CPF_Parm )

void ADVAbilityPuncture::ClientRemoveStack ( class ADVPlayerReplicationInfo* PRI )
{
	static UFunction* pFnClientRemoveStack = NULL;

	if ( ! pFnClientRemoveStack )
		pFnClientRemoveStack = (UFunction*) UObject::GObjObjects()->Data[ 43613 ];

	ADVAbilityPuncture_execClientRemoveStack_Parms ClientRemoveStack_Parms;
	ClientRemoveStack_Parms.PRI = PRI;

	this->ProcessEvent ( pFnClientRemoveStack, &ClientRemoveStack_Parms, NULL );
};

// Function ForgeGame.DVAbilityPuncture.ClientAddStack
// [0x010201C2] 
// Parameters infos:
// class ADVPlayerReplicationInfo* PRI                            ( CPF_Parm )

void ADVAbilityPuncture::ClientAddStack ( class ADVPlayerReplicationInfo* PRI )
{
	static UFunction* pFnClientAddStack = NULL;

	if ( ! pFnClientAddStack )
		pFnClientAddStack = (UFunction*) UObject::GObjObjects()->Data[ 43611 ];

	ADVAbilityPuncture_execClientAddStack_Parms ClientAddStack_Parms;
	ClientAddStack_Parms.PRI = PRI;

	this->ProcessEvent ( pFnClientAddStack, &ClientAddStack_Parms, NULL );
};

// Function ForgeGame.DVAbilityPuncture.StackCountForPawn
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADVPawn*                 Pawn                           ( CPF_Parm )

int ADVAbilityPuncture::StackCountForPawn ( class ADVPawn* Pawn )
{
	static UFunction* pFnStackCountForPawn = NULL;

	if ( ! pFnStackCountForPawn )
		pFnStackCountForPawn = (UFunction*) UObject::GObjObjects()->Data[ 42853 ];

	ADVAbilityPuncture_execStackCountForPawn_Parms StackCountForPawn_Parms;
	StackCountForPawn_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnStackCountForPawn, &StackCountForPawn_Parms, NULL );

	return StackCountForPawn_Parms.ReturnValue;
};

// Function ForgeGame.DVAbilityPuncture.RemoveAllStacks
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADVPawn*                 Pawn                           ( CPF_Parm )

int ADVAbilityPuncture::RemoveAllStacks ( class ADVPawn* Pawn )
{
	static UFunction* pFnRemoveAllStacks = NULL;

	if ( ! pFnRemoveAllStacks )
		pFnRemoveAllStacks = (UFunction*) UObject::GObjObjects()->Data[ 43577 ];

	ADVAbilityPuncture_execRemoveAllStacks_Parms RemoveAllStacks_Parms;
	RemoveAllStacks_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnRemoveAllStacks, &RemoveAllStacks_Parms, NULL );

	return RemoveAllStacks_Parms.ReturnValue;
};

// Function ForgeGame.DVAbilityPuncture.RemoveStack
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADVPawn*                 Pawn                           ( CPF_Parm )

bool ADVAbilityPuncture::RemoveStack ( class ADVPawn* Pawn )
{
	static UFunction* pFnRemoveStack = NULL;

	if ( ! pFnRemoveStack )
		pFnRemoveStack = (UFunction*) UObject::GObjObjects()->Data[ 43601 ];

	ADVAbilityPuncture_execRemoveStack_Parms RemoveStack_Parms;
	RemoveStack_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnRemoveStack, &RemoveStack_Parms, NULL );

	return RemoveStack_Parms.ReturnValue;
};

// Function ForgeGame.DVAbilityPuncture.UpdateStacks
// [0x00020002] 
// Parameters infos:

void ADVAbilityPuncture::UpdateStacks ( )
{
	static UFunction* pFnUpdateStacks = NULL;

	if ( ! pFnUpdateStacks )
		pFnUpdateStacks = (UFunction*) UObject::GObjObjects()->Data[ 43600 ];

	ADVAbilityPuncture_execUpdateStacks_Parms UpdateStacks_Parms;

	this->ProcessEvent ( pFnUpdateStacks, &UpdateStacks_Parms, NULL );
};

// Function ForgeGame.DVAbilityPuncture.FireAbility
// [0x00880002] 
// Parameters infos:

void ADVAbilityPuncture::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 43598 ];

	ADVAbilityPuncture_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityHitscan.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityHitscan::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 43382 ];

	ADVAbilityHitscan_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityHitscan.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVAbilityHitscan::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43380 ];

	ADVAbilityHitscan_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVAbilityHitscan.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbilityHitscan::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 43372 ];

	ADVAbilityHitscan_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroPathfinder.TakeAttack
// [0x00420002] 
// Parameters infos:
// class UDVAttack*               Attack                         ( CPF_Parm | CPF_OutParm )

void ADVPawnHeroPathfinder::TakeAttack ( class UDVAttack** Attack )
{
	static UFunction* pFnTakeAttack = NULL;

	if ( ! pFnTakeAttack )
		pFnTakeAttack = (UFunction*) UObject::GObjObjects()->Data[ 43281 ];

	ADVPawnHeroPathfinder_execTakeAttack_Parms TakeAttack_Parms;

	this->ProcessEvent ( pFnTakeAttack, &TakeAttack_Parms, NULL );

	if ( Attack )
		*Attack = TakeAttack_Parms.Attack;
};

// Function ForgeGame.DVPawnHeroPathfinder.CanCapObjective
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADVPawnHeroPathfinder::CanCapObjective ( )
{
	static UFunction* pFnCanCapObjective = NULL;

	if ( ! pFnCanCapObjective )
		pFnCanCapObjective = (UFunction*) UObject::GObjObjects()->Data[ 43279 ];

	ADVPawnHeroPathfinder_execCanCapObjective_Parms CanCapObjective_Parms;

	this->ProcessEvent ( pFnCanCapObjective, &CanCapObjective_Parms, NULL );

	return CanCapObjective_Parms.ReturnValue;
};

// Function ForgeGame.DVPawnHeroPathfinder.ShouldDisplayOnHud
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADVPawnHeroPathfinder::ShouldDisplayOnHud ( )
{
	static UFunction* pFnShouldDisplayOnHud = NULL;

	if ( ! pFnShouldDisplayOnHud )
		pFnShouldDisplayOnHud = (UFunction*) UObject::GObjObjects()->Data[ 43277 ];

	ADVPawnHeroPathfinder_execShouldDisplayOnHud_Parms ShouldDisplayOnHud_Parms;

	this->ProcessEvent ( pFnShouldDisplayOnHud, &ShouldDisplayOnHud_Parms, NULL );

	return ShouldDisplayOnHud_Parms.ReturnValue;
};

// Function ForgeGame.DVPawnHeroPathfinder.SetCamouflaged
// [0x00820102] 
// Parameters infos:

void ADVPawnHeroPathfinder::SetCamouflaged ( )
{
	static UFunction* pFnSetCamouflaged = NULL;

	if ( ! pFnSetCamouflaged )
		pFnSetCamouflaged = (UFunction*) UObject::GObjObjects()->Data[ 43272 ];

	ADVPawnHeroPathfinder_execSetCamouflaged_Parms SetCamouflaged_Parms;

	this->ProcessEvent ( pFnSetCamouflaged, &SetCamouflaged_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroPathfinder.SetPostProcess
// [0x00020102] 
// Parameters infos:

void ADVPawnHeroPathfinder::SetPostProcess ( )
{
	static UFunction* pFnSetPostProcess = NULL;

	if ( ! pFnSetPostProcess )
		pFnSetPostProcess = (UFunction*) UObject::GObjObjects()->Data[ 43269 ];

	ADVPawnHeroPathfinder_execSetPostProcess_Parms SetPostProcess_Parms;

	this->ProcessEvent ( pFnSetPostProcess, &SetPostProcess_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroPathfinder.SetSkin
// [0x00020102] 
// Parameters infos:

void ADVPawnHeroPathfinder::SetSkin ( )
{
	static UFunction* pFnSetSkin = NULL;

	if ( ! pFnSetSkin )
		pFnSetSkin = (UFunction*) UObject::GObjObjects()->Data[ 43268 ];

	ADVPawnHeroPathfinder_execSetSkin_Parms SetSkin_Parms;

	this->ProcessEvent ( pFnSetSkin, &SetSkin_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroPathfinder.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVPawnHeroPathfinder::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 43266 ];

	ADVPawnHeroPathfinder_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroPathfinder.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVPawnHeroPathfinder::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43265 ];

	ADVPawnHeroPathfinder_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroPathfinder.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVPawnHeroPathfinder::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 43263 ];

	ADVPawnHeroPathfinder_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoTraining.AutoBalanceTeams
// [0x00020002] 
// Parameters infos:

void AForgeGameInfoTraining::AutoBalanceTeams ( )
{
	static UFunction* pFnAutoBalanceTeams = NULL;

	if ( ! pFnAutoBalanceTeams )
		pFnAutoBalanceTeams = (UFunction*) UObject::GObjObjects()->Data[ 46858 ];

	AForgeGameInfoTraining_execAutoBalanceTeams_Parms AutoBalanceTeams_Parms;

	this->ProcessEvent ( pFnAutoBalanceTeams, &AutoBalanceTeams_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoTraining.StartBots
// [0x00020002] 
// Parameters infos:

void AForgeGameInfoTraining::StartBots ( )
{
	static UFunction* pFnStartBots = NULL;

	if ( ! pFnStartBots )
		pFnStartBots = (UFunction*) UObject::GObjObjects()->Data[ 46856 ];

	AForgeGameInfoTraining_execStartBots_Parms StartBots_Parms;

	this->ProcessEvent ( pFnStartBots, &StartBots_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoTraining.SpawnDefaultPawnFor
// [0x00020002] 
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             NewPlayer                      ( CPF_Parm )
// class ANavigationPoint*        StartSpot                      ( CPF_Parm )

class APawn* AForgeGameInfoTraining::SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot )
{
	static UFunction* pFnSpawnDefaultPawnFor = NULL;

	if ( ! pFnSpawnDefaultPawnFor )
		pFnSpawnDefaultPawnFor = (UFunction*) UObject::GObjObjects()->Data[ 46852 ];

	AForgeGameInfoTraining_execSpawnDefaultPawnFor_Parms SpawnDefaultPawnFor_Parms;
	SpawnDefaultPawnFor_Parms.NewPlayer = NewPlayer;
	SpawnDefaultPawnFor_Parms.StartSpot = StartSpot;

	this->ProcessEvent ( pFnSpawnDefaultPawnFor, &SpawnDefaultPawnFor_Parms, NULL );

	return SpawnDefaultPawnFor_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfoTraining.SetupKismet
// [0x00020002] 
// Parameters infos:

void AForgeGameInfoTraining::SetupKismet ( )
{
	static UFunction* pFnSetupKismet = NULL;

	if ( ! pFnSetupKismet )
		pFnSetupKismet = (UFunction*) UObject::GObjObjects()->Data[ 46847 ];

	AForgeGameInfoTraining_execSetupKismet_Parms SetupKismet_Parms;

	this->ProcessEvent ( pFnSetupKismet, &SetupKismet_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoTraining.ChangeTeam
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Other                          ( CPF_Parm )
// int                            N                              ( CPF_Parm )
// unsigned long                  bNewTeam                       ( CPF_Parm )

bool AForgeGameInfoTraining::ChangeTeam ( class AController* Other, int N, unsigned long bNewTeam )
{
	static UFunction* pFnChangeTeam = NULL;

	if ( ! pFnChangeTeam )
		pFnChangeTeam = (UFunction*) UObject::GObjObjects()->Data[ 46842 ];

	AForgeGameInfoTraining_execChangeTeam_Parms ChangeTeam_Parms;
	ChangeTeam_Parms.Other = Other;
	ChangeTeam_Parms.N = N;
	ChangeTeam_Parms.bNewTeam = bNewTeam;

	this->ProcessEvent ( pFnChangeTeam, &ChangeTeam_Parms, NULL );

	return ChangeTeam_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfoTraining.CheckTowerActivation
// [0x00020000] 
// Parameters infos:

void AForgeGameInfoTraining::CheckTowerActivation ( )
{
	static UFunction* pFnCheckTowerActivation = NULL;

	if ( ! pFnCheckTowerActivation )
		pFnCheckTowerActivation = (UFunction*) UObject::GObjObjects()->Data[ 46841 ];

	AForgeGameInfoTraining_execCheckTowerActivation_Parms CheckTowerActivation_Parms;

	this->ProcessEvent ( pFnCheckTowerActivation, &CheckTowerActivation_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoTraining.OneTimeMapSetup
// [0x00020002] 
// Parameters infos:

void AForgeGameInfoTraining::OneTimeMapSetup ( )
{
	static UFunction* pFnOneTimeMapSetup = NULL;

	if ( ! pFnOneTimeMapSetup )
		pFnOneTimeMapSetup = (UFunction*) UObject::GObjObjects()->Data[ 46839 ];

	AForgeGameInfoTraining_execOneTimeMapSetup_Parms OneTimeMapSetup_Parms;

	this->ProcessEvent ( pFnOneTimeMapSetup, &OneTimeMapSetup_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoTraining.HandleSeamlessTravelPlayer
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// class AController*             C                              ( CPF_Parm | CPF_OutParm )

void AForgeGameInfoTraining::eventHandleSeamlessTravelPlayer ( class AController** C )
{
	static UFunction* pFnHandleSeamlessTravelPlayer = NULL;

	if ( ! pFnHandleSeamlessTravelPlayer )
		pFnHandleSeamlessTravelPlayer = (UFunction*) UObject::GObjObjects()->Data[ 46837 ];

	AForgeGameInfoTraining_eventHandleSeamlessTravelPlayer_Parms HandleSeamlessTravelPlayer_Parms;

	this->ProcessEvent ( pFnHandleSeamlessTravelPlayer, &HandleSeamlessTravelPlayer_Parms, NULL );

	if ( C )
		*C = HandleSeamlessTravelPlayer_Parms.C;
};

// Function ForgeGame.ForgeGameInfoTraining.PostSeamlessTravel
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AForgeGameInfoTraining::eventPostSeamlessTravel ( )
{
	static UFunction* pFnPostSeamlessTravel = NULL;

	if ( ! pFnPostSeamlessTravel )
		pFnPostSeamlessTravel = (UFunction*) UObject::GObjObjects()->Data[ 46836 ];

	AForgeGameInfoTraining_eventPostSeamlessTravel_Parms PostSeamlessTravel_Parms;

	this->ProcessEvent ( pFnPostSeamlessTravel, &PostSeamlessTravel_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoTraining.PostLogin
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       NewPlayer                      ( CPF_Parm )

void AForgeGameInfoTraining::eventPostLogin ( class APlayerController* NewPlayer )
{
	static UFunction* pFnPostLogin = NULL;

	if ( ! pFnPostLogin )
		pFnPostLogin = (UFunction*) UObject::GObjObjects()->Data[ 46834 ];

	AForgeGameInfoTraining_eventPostLogin_Parms PostLogin_Parms;
	PostLogin_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnPostLogin, &PostLogin_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoTraining.GetDeathTimerLength
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AForgeGameInfoTraining::GetDeathTimerLength ( )
{
	static UFunction* pFnGetDeathTimerLength = NULL;

	if ( ! pFnGetDeathTimerLength )
		pFnGetDeathTimerLength = (UFunction*) UObject::GObjObjects()->Data[ 46832 ];

	AForgeGameInfoTraining_execGetDeathTimerLength_Parms GetDeathTimerLength_Parms;

	this->ProcessEvent ( pFnGetDeathTimerLength, &GetDeathTimerLength_Parms, NULL );

	return GetDeathTimerLength_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfoCTF.WinningTeamId
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AForgeGameInfoCTF::WinningTeamId ( )
{
	static UFunction* pFnWinningTeamId = NULL;

	if ( ! pFnWinningTeamId )
		pFnWinningTeamId = (UFunction*) UObject::GObjObjects()->Data[ 46812 ];

	AForgeGameInfoCTF_execWinningTeamId_Parms WinningTeamId_Parms;

	this->ProcessEvent ( pFnWinningTeamId, &WinningTeamId_Parms, NULL );

	return WinningTeamId_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfoCTF.ScoreKill
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             Other                          ( CPF_Parm )

void AForgeGameInfoCTF::ScoreKill ( class AController* Killer, class AController* Other )
{
	static UFunction* pFnScoreKill = NULL;

	if ( ! pFnScoreKill )
		pFnScoreKill = (UFunction*) UObject::GObjObjects()->Data[ 46808 ];

	AForgeGameInfoCTF_execScoreKill_Parms ScoreKill_Parms;
	ScoreKill_Parms.Killer = Killer;
	ScoreKill_Parms.Other = Other;

	this->ProcessEvent ( pFnScoreKill, &ScoreKill_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoCTF.FlagCaptured
// [0x00020002] 
// Parameters infos:
// class ADVFlag*                 TheFlag                        ( CPF_Parm )

void AForgeGameInfoCTF::FlagCaptured ( class ADVFlag* TheFlag )
{
	static UFunction* pFnFlagCaptured = NULL;

	if ( ! pFnFlagCaptured )
		pFnFlagCaptured = (UFunction*) UObject::GObjObjects()->Data[ 46804 ];

	AForgeGameInfoCTF_execFlagCaptured_Parms FlagCaptured_Parms;
	FlagCaptured_Parms.TheFlag = TheFlag;

	this->ProcessEvent ( pFnFlagCaptured, &FlagCaptured_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoCTF.OneTimeMapSetup
// [0x00020002] 
// Parameters infos:

void AForgeGameInfoCTF::OneTimeMapSetup ( )
{
	static UFunction* pFnOneTimeMapSetup = NULL;

	if ( ! pFnOneTimeMapSetup )
		pFnOneTimeMapSetup = (UFunction*) UObject::GObjObjects()->Data[ 46802 ];

	AForgeGameInfoCTF_execOneTimeMapSetup_Parms OneTimeMapSetup_Parms;

	this->ProcessEvent ( pFnOneTimeMapSetup, &OneTimeMapSetup_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoCTF.MatchFinished
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AForgeGameInfoCTF::MatchFinished ( )
{
	static UFunction* pFnMatchFinished = NULL;

	if ( ! pFnMatchFinished )
		pFnMatchFinished = (UFunction*) UObject::GObjObjects()->Data[ 46799 ];

	AForgeGameInfoCTF_execMatchFinished_Parms MatchFinished_Parms;

	this->ProcessEvent ( pFnMatchFinished, &MatchFinished_Parms, NULL );

	return MatchFinished_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfoCTF.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AForgeGameInfoCTF::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 46798 ];

	AForgeGameInfoCTF_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVSmokeCloud.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVSmokeCloud::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 46451 ];

	ADVSmokeCloud_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVSmokeCloud.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVSmokeCloud::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 46450 ];

	ADVSmokeCloud_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVFlag.Throw
// [0x00820002] 
// Parameters infos:

void ADVFlag::Throw ( )
{
	static UFunction* pFnThrow = NULL;

	if ( ! pFnThrow )
		pFnThrow = (UFunction*) UObject::GObjObjects()->Data[ 45283 ];

	ADVFlag_execThrow_Parms Throw_Parms;

	this->ProcessEvent ( pFnThrow, &Throw_Parms, NULL );
};

// Function ForgeGame.DVFlag.Captured
// [0x00020002] 
// Parameters infos:

void ADVFlag::Captured ( )
{
	static UFunction* pFnCaptured = NULL;

	if ( ! pFnCaptured )
		pFnCaptured = (UFunction*) UObject::GObjObjects()->Data[ 45282 ];

	ADVFlag_execCaptured_Parms Captured_Parms;

	this->ProcessEvent ( pFnCaptured, &Captured_Parms, NULL );
};

// Function ForgeGame.DVFlag.ReturnFlag
// [0x00020102] 
// Parameters infos:

void ADVFlag::ReturnFlag ( )
{
	static UFunction* pFnReturnFlag = NULL;

	if ( ! pFnReturnFlag )
		pFnReturnFlag = (UFunction*) UObject::GObjObjects()->Data[ 45279 ];

	ADVFlag_execReturnFlag_Parms ReturnFlag_Parms;

	this->ProcessEvent ( pFnReturnFlag, &ReturnFlag_Parms, NULL );
};

// Function ForgeGame.DVFlag.DropFlag
// [0x00020102] 
// Parameters infos:

void ADVFlag::DropFlag ( )
{
	static UFunction* pFnDropFlag = NULL;

	if ( ! pFnDropFlag )
		pFnDropFlag = (UFunction*) UObject::GObjObjects()->Data[ 45277 ];

	ADVFlag_execDropFlag_Parms DropFlag_Parms;

	this->ProcessEvent ( pFnDropFlag, &DropFlag_Parms, NULL );
};

// Function ForgeGame.DVFlag.SetupColorblindMode
// [0x00020102] 
// Parameters infos:

void ADVFlag::SetupColorblindMode ( )
{
	static UFunction* pFnSetupColorblindMode = NULL;

	if ( ! pFnSetupColorblindMode )
		pFnSetupColorblindMode = (UFunction*) UObject::GObjObjects()->Data[ 45276 ];

	ADVFlag_execSetupColorblindMode_Parms SetupColorblindMode_Parms;

	this->ProcessEvent ( pFnSetupColorblindMode, &SetupColorblindMode_Parms, NULL );
};

// Function ForgeGame.DVFlag.Tick
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVFlag::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 45271 ];

	ADVFlag_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVFlag.RemoveAttachment
// [0x00820102] 
// Parameters infos:

void ADVFlag::RemoveAttachment ( )
{
	static UFunction* pFnRemoveAttachment = NULL;

	if ( ! pFnRemoveAttachment )
		pFnRemoveAttachment = (UFunction*) UObject::GObjObjects()->Data[ 45269 ];

	ADVFlag_execRemoveAttachment_Parms RemoveAttachment_Parms;

	this->ProcessEvent ( pFnRemoveAttachment, &RemoveAttachment_Parms, NULL );
};

// Function ForgeGame.DVFlag.AttachToCarryingHero
// [0x00020102] 
// Parameters infos:

void ADVFlag::AttachToCarryingHero ( )
{
	static UFunction* pFnAttachToCarryingHero = NULL;

	if ( ! pFnAttachToCarryingHero )
		pFnAttachToCarryingHero = (UFunction*) UObject::GObjObjects()->Data[ 45268 ];

	ADVFlag_execAttachToCarryingHero_Parms AttachToCarryingHero_Parms;

	this->ProcessEvent ( pFnAttachToCarryingHero, &AttachToCarryingHero_Parms, NULL );
};

// Function ForgeGame.DVFlag.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADVFlag::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 45260 ];

	ADVFlag_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function ForgeGame.DVFlag.SetOwnerStats
// [0x00020002] 
// Parameters infos:

void ADVFlag::SetOwnerStats ( )
{
	static UFunction* pFnSetOwnerStats = NULL;

	if ( ! pFnSetOwnerStats )
		pFnSetOwnerStats = (UFunction*) UObject::GObjObjects()->Data[ 45258 ];

	ADVFlag_execSetOwnerStats_Parms SetOwnerStats_Parms;

	this->ProcessEvent ( pFnSetOwnerStats, &SetOwnerStats_Parms, NULL );
};

// Function ForgeGame.DVFlag.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVFlag::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 45257 ];

	ADVFlag_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVFlag.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVFlag::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 45255 ];

	ADVFlag_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAbilityStealth.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityStealth::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43679 ];

	ADVAbilityStealth_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityStealth.LeaveStealth
// [0x00020002] 
// Parameters infos:

void ADVAbilityStealth::LeaveStealth ( )
{
	static UFunction* pFnLeaveStealth = NULL;

	if ( ! pFnLeaveStealth )
		pFnLeaveStealth = (UFunction*) UObject::GObjObjects()->Data[ 43678 ];

	ADVAbilityStealth_execLeaveStealth_Parms LeaveStealth_Parms;

	this->ProcessEvent ( pFnLeaveStealth, &LeaveStealth_Parms, NULL );
};

// Function ForgeGame.DVAbilityStealth.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityStealth::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 43677 ];

	ADVAbilityStealth_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityStealth.ReadyToActivate
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADVAbilityStealth::ReadyToActivate ( )
{
	static UFunction* pFnReadyToActivate = NULL;

	if ( ! pFnReadyToActivate )
		pFnReadyToActivate = (UFunction*) UObject::GObjObjects()->Data[ 43675 ];

	ADVAbilityStealth_execReadyToActivate_Parms ReadyToActivate_Parms;

	this->ProcessEvent ( pFnReadyToActivate, &ReadyToActivate_Parms, NULL );

	return ReadyToActivate_Parms.ReturnValue;
};

// Function ForgeGame.DVAbilityCamouflage.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityCamouflage::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43859 ];

	ADVAbilityCamouflage_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityCamouflage.LeaveCamo
// [0x00020002] 
// Parameters infos:

void ADVAbilityCamouflage::LeaveCamo ( )
{
	static UFunction* pFnLeaveCamo = NULL;

	if ( ! pFnLeaveCamo )
		pFnLeaveCamo = (UFunction*) UObject::GObjObjects()->Data[ 43858 ];

	ADVAbilityCamouflage_execLeaveCamo_Parms LeaveCamo_Parms;

	this->ProcessEvent ( pFnLeaveCamo, &LeaveCamo_Parms, NULL );
};

// Function ForgeGame.DVAbilityCamouflage.ModifyDefense
// [0x00420002] 
// Parameters infos:
// class UDVAttack*               IncomingAttack                 ( CPF_Parm )
// class ADVPawn*                 Defender                       ( CPF_Parm )
// TArray< struct FSDamage >      DamageTaken                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// int                            ProtectionDone                 ( CPF_Parm | CPF_OutParm )

void ADVAbilityCamouflage::ModifyDefense ( class UDVAttack* IncomingAttack, class ADVPawn* Defender, TArray< struct FSDamage >* DamageTaken, int* ProtectionDone )
{
	static UFunction* pFnModifyDefense = NULL;

	if ( ! pFnModifyDefense )
		pFnModifyDefense = (UFunction*) UObject::GObjObjects()->Data[ 43852 ];

	ADVAbilityCamouflage_execModifyDefense_Parms ModifyDefense_Parms;
	ModifyDefense_Parms.IncomingAttack = IncomingAttack;
	ModifyDefense_Parms.Defender = Defender;

	this->ProcessEvent ( pFnModifyDefense, &ModifyDefense_Parms, NULL );

	if ( DamageTaken )
		memcpy ( DamageTaken, &ModifyDefense_Parms.DamageTaken, 0xC );

	if ( ProtectionDone )
		*ProtectionDone = ModifyDefense_Parms.ProtectionDone;
};

// Function ForgeGame.DVAbilityCamouflage.SwapWithPawn
// [0x00820002] 
// Parameters infos:
// class ADVPawn*                 SwapTarget                     ( CPF_Parm )

void ADVAbilityCamouflage::SwapWithPawn ( class ADVPawn* SwapTarget )
{
	static UFunction* pFnSwapWithPawn = NULL;

	if ( ! pFnSwapWithPawn )
		pFnSwapWithPawn = (UFunction*) UObject::GObjObjects()->Data[ 43849 ];

	ADVAbilityCamouflage_execSwapWithPawn_Parms SwapWithPawn_Parms;
	SwapWithPawn_Parms.SwapTarget = SwapTarget;

	this->ProcessEvent ( pFnSwapWithPawn, &SwapWithPawn_Parms, NULL );
};

// Function ForgeGame.DVAbilityCamouflage.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityCamouflage::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 43848 ];

	ADVAbilityCamouflage_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityCamouflage.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbilityCamouflage::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 43846 ];

	ADVAbilityCamouflage_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroPyromancer.Landed
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  FloorActor                     ( CPF_Parm )

void ADVPawnHeroPyromancer::eventLanded ( struct FVector HitNormal, class AActor* FloorActor )
{
	static UFunction* pFnLanded = NULL;

	if ( ! pFnLanded )
		pFnLanded = (UFunction*) UObject::GObjObjects()->Data[ 43292 ];

	ADVPawnHeroPyromancer_eventLanded_Parms Landed_Parms;
	memcpy ( &Landed_Parms.HitNormal, &HitNormal, 0xC );
	Landed_Parms.FloorActor = FloorActor;

	this->ProcessEvent ( pFnLanded, &Landed_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroWarden.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ADVPawnHeroWarden::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 43330 ];

	ADVPawnHeroWarden_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function ForgeGame.DVPawnHeroWarden.DoJump
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bUpdating                      ( CPF_Parm )

bool ADVPawnHeroWarden::DoJump ( unsigned long bUpdating )
{
	static UFunction* pFnDoJump = NULL;

	if ( ! pFnDoJump )
		pFnDoJump = (UFunction*) UObject::GObjObjects()->Data[ 43327 ];

	ADVPawnHeroWarden_execDoJump_Parms DoJump_Parms;
	DoJump_Parms.bUpdating = bUpdating;

	this->ProcessEvent ( pFnDoJump, &DoJump_Parms, NULL );

	return DoJump_Parms.ReturnValue;
};

// Function ForgeGame.DVPawnHeroWarden.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVPawnHeroWarden::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 43323 ];

	ADVPawnHeroWarden_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroWarden.ReplicatedEvent
// [0x00020102] 
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVPawnHeroWarden::ReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 43320 ];

	ADVPawnHeroWarden_execReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAbilityToggleAOE.PerTickEffect
// [0x00024000] 
// Parameters infos:
// class ADVPawn*                 CurPawn                        ( CPF_Parm )
// unsigned long                  SecondRun                      ( CPF_OptionalParm | CPF_Parm )

void ADVAbilityToggleAOE::PerTickEffect ( class ADVPawn* CurPawn, unsigned long SecondRun )
{
	static UFunction* pFnPerTickEffect = NULL;

	if ( ! pFnPerTickEffect )
		pFnPerTickEffect = (UFunction*) UObject::GObjObjects()->Data[ 44457 ];

	ADVAbilityToggleAOE_execPerTickEffect_Parms PerTickEffect_Parms;
	PerTickEffect_Parms.CurPawn = CurPawn;
	PerTickEffect_Parms.SecondRun = SecondRun;

	this->ProcessEvent ( pFnPerTickEffect, &PerTickEffect_Parms, NULL );
};

// Function ForgeGame.DVAbilityToggleAOE.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAbilityToggleAOE::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44455 ];

	ADVAbilityToggleAOE_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAbilityToggle.Reset
// [0x00020002] 
// Parameters infos:

void ADVAbilityToggle::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 44451 ];

	ADVAbilityToggle_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function ForgeGame.DVAbilityToggle.PlayCastEffect
// [0x00020102] 
// Parameters infos:

void ADVAbilityToggle::PlayCastEffect ( )
{
	static UFunction* pFnPlayCastEffect = NULL;

	if ( ! pFnPlayCastEffect )
		pFnPlayCastEffect = (UFunction*) UObject::GObjObjects()->Data[ 44450 ];

	ADVAbilityToggle_execPlayCastEffect_Parms PlayCastEffect_Parms;

	this->ProcessEvent ( pFnPlayCastEffect, &PlayCastEffect_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroRavager.UpdateFocusAnimSetsTimer
// [0x00020102] 
// Parameters infos:

void ADVPawnHeroRavager::UpdateFocusAnimSetsTimer ( )
{
	static UFunction* pFnUpdateFocusAnimSetsTimer = NULL;

	if ( ! pFnUpdateFocusAnimSetsTimer )
		pFnUpdateFocusAnimSetsTimer = (UFunction*) UObject::GObjObjects()->Data[ 43354 ];

	ADVPawnHeroRavager_execUpdateFocusAnimSetsTimer_Parms UpdateFocusAnimSetsTimer_Parms;

	this->ProcessEvent ( pFnUpdateFocusAnimSetsTimer, &UpdateFocusAnimSetsTimer_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroRavager.UpdateFocusAnimSets
// [0x00020102] 
// Parameters infos:

void ADVPawnHeroRavager::UpdateFocusAnimSets ( )
{
	static UFunction* pFnUpdateFocusAnimSets = NULL;

	if ( ! pFnUpdateFocusAnimSets )
		pFnUpdateFocusAnimSets = (UFunction*) UObject::GObjObjects()->Data[ 43353 ];

	ADVPawnHeroRavager_execUpdateFocusAnimSets_Parms UpdateFocusAnimSets_Parms;

	this->ProcessEvent ( pFnUpdateFocusAnimSets, &UpdateFocusAnimSets_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroRavager.SetCurrentFocus
// [0x00020102] 
// Parameters infos:
// unsigned char                  NewFocus                       ( CPF_Parm )

void ADVPawnHeroRavager::SetCurrentFocus ( unsigned char NewFocus )
{
	static UFunction* pFnSetCurrentFocus = NULL;

	if ( ! pFnSetCurrentFocus )
		pFnSetCurrentFocus = (UFunction*) UObject::GObjObjects()->Data[ 43351 ];

	ADVPawnHeroRavager_execSetCurrentFocus_Parms SetCurrentFocus_Parms;
	SetCurrentFocus_Parms.NewFocus = NewFocus;

	this->ProcessEvent ( pFnSetCurrentFocus, &SetCurrentFocus_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroRavager.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVPawnHeroRavager::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 43349 ];

	ADVPawnHeroRavager_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVPawnHeroRavager.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVPawnHeroRavager::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43348 ];

	ADVPawnHeroRavager_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.ShowTutorialMisc
// [0x00024002] 
// Parameters infos:
// struct FString                 MiscItem                       ( CPF_Parm | CPF_NeedCtorLink )
// class AActor*                  TheSubject                     ( CPF_OptionalParm | CPF_Parm )

void UForgeGFxHUD::ShowTutorialMisc ( struct FString MiscItem, class AActor* TheSubject )
{
	static UFunction* pFnShowTutorialMisc = NULL;

	if ( ! pFnShowTutorialMisc )
		pFnShowTutorialMisc = (UFunction*) UObject::GObjObjects()->Data[ 49494 ];

	UForgeGFxHUD_execShowTutorialMisc_Parms ShowTutorialMisc_Parms;
	memcpy ( &ShowTutorialMisc_Parms.MiscItem, &MiscItem, 0xC );
	ShowTutorialMisc_Parms.TheSubject = TheSubject;

	this->ProcessEvent ( pFnShowTutorialMisc, &ShowTutorialMisc_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.ShowTutorialAbility
// [0x00020002] 
// Parameters infos:
// int                            AbilityIndex                   ( CPF_Parm )

void UForgeGFxHUD::ShowTutorialAbility ( int AbilityIndex )
{
	static UFunction* pFnShowTutorialAbility = NULL;

	if ( ! pFnShowTutorialAbility )
		pFnShowTutorialAbility = (UFunction*) UObject::GObjObjects()->Data[ 49485 ];

	UForgeGFxHUD_execShowTutorialAbility_Parms ShowTutorialAbility_Parms;
	ShowTutorialAbility_Parms.AbilityIndex = AbilityIndex;

	this->ProcessEvent ( pFnShowTutorialAbility, &ShowTutorialAbility_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.SetupTipsWindow
// [0x00824002] 
// Parameters infos:
// struct FString                 NewTitle                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 NewDescription                 ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  IsAbilityHint                  ( CPF_Parm )
// struct FName                   KeyName                        ( CPF_OptionalParm | CPF_Parm )

void UForgeGFxHUD::SetupTipsWindow ( struct FString NewTitle, struct FString NewDescription, unsigned long IsAbilityHint, struct FName KeyName )
{
	static UFunction* pFnSetupTipsWindow = NULL;

	if ( ! pFnSetupTipsWindow )
		pFnSetupTipsWindow = (UFunction*) UObject::GObjObjects()->Data[ 49476 ];

	UForgeGFxHUD_execSetupTipsWindow_Parms SetupTipsWindow_Parms;
	memcpy ( &SetupTipsWindow_Parms.NewTitle, &NewTitle, 0xC );
	memcpy ( &SetupTipsWindow_Parms.NewDescription, &NewDescription, 0xC );
	SetupTipsWindow_Parms.IsAbilityHint = IsAbilityHint;
	memcpy ( &SetupTipsWindow_Parms.KeyName, &KeyName, 0x8 );

	this->ProcessEvent ( pFnSetupTipsWindow, &SetupTipsWindow_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateTips
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxHUD::UpdateTips ( float DeltaTime )
{
	static UFunction* pFnUpdateTips = NULL;

	if ( ! pFnUpdateTips )
		pFnUpdateTips = (UFunction*) UObject::GObjObjects()->Data[ 49473 ];

	UForgeGFxHUD_execUpdateTips_Parms UpdateTips_Parms;
	UpdateTips_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateTips, &UpdateTips_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateHelp
// [0x00820002] 
// Parameters infos:

void UForgeGFxHUD::UpdateHelp ( )
{
	static UFunction* pFnUpdateHelp = NULL;

	if ( ! pFnUpdateHelp )
		pFnUpdateHelp = (UFunction*) UObject::GObjObjects()->Data[ 49469 ];

	UForgeGFxHUD_execUpdateHelp_Parms UpdateHelp_Parms;

	this->ProcessEvent ( pFnUpdateHelp, &UpdateHelp_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateTutorial
// [0x00020002] 
// Parameters infos:

void UForgeGFxHUD::UpdateTutorial ( )
{
	static UFunction* pFnUpdateTutorial = NULL;

	if ( ! pFnUpdateTutorial )
		pFnUpdateTutorial = (UFunction*) UObject::GObjObjects()->Data[ 49466 ];

	UForgeGFxHUD_execUpdateTutorial_Parms UpdateTutorial_Parms;

	this->ProcessEvent ( pFnUpdateTutorial, &UpdateTutorial_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.DisplayKeyDetails
// [0x00020002] 
// Parameters infos:
// class UGFxObject*              KeyNameTF                      ( CPF_Parm )
// class UGFxObject*              KeyBackgroundMC                ( CPF_Parm )
// struct FName                   TheKey                         ( CPF_Parm )

void UForgeGFxHUD::DisplayKeyDetails ( class UGFxObject* KeyNameTF, class UGFxObject* KeyBackgroundMC, struct FName TheKey )
{
	static UFunction* pFnDisplayKeyDetails = NULL;

	if ( ! pFnDisplayKeyDetails )
		pFnDisplayKeyDetails = (UFunction*) UObject::GObjObjects()->Data[ 49462 ];

	UForgeGFxHUD_execDisplayKeyDetails_Parms DisplayKeyDetails_Parms;
	DisplayKeyDetails_Parms.KeyNameTF = KeyNameTF;
	DisplayKeyDetails_Parms.KeyBackgroundMC = KeyBackgroundMC;
	memcpy ( &DisplayKeyDetails_Parms.TheKey, &TheKey, 0x8 );

	this->ProcessEvent ( pFnDisplayKeyDetails, &DisplayKeyDetails_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateVoiceNotifications
// [0x00020002] 
// Parameters infos:
// class ADVGameReplicationInfo*  TheGRI                         ( CPF_Parm )

void UForgeGFxHUD::UpdateVoiceNotifications ( class ADVGameReplicationInfo* TheGRI )
{
	static UFunction* pFnUpdateVoiceNotifications = NULL;

	if ( ! pFnUpdateVoiceNotifications )
		pFnUpdateVoiceNotifications = (UFunction*) UObject::GObjObjects()->Data[ 49454 ];

	UForgeGFxHUD_execUpdateVoiceNotifications_Parms UpdateVoiceNotifications_Parms;
	UpdateVoiceNotifications_Parms.TheGRI = TheGRI;

	this->ProcessEvent ( pFnUpdateVoiceNotifications, &UpdateVoiceNotifications_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateCrosshair
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxHUD::UpdateCrosshair ( float DeltaTime )
{
	static UFunction* pFnUpdateCrosshair = NULL;

	if ( ! pFnUpdateCrosshair )
		pFnUpdateCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 49451 ];

	UForgeGFxHUD_execUpdateCrosshair_Parms UpdateCrosshair_Parms;
	UpdateCrosshair_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateCrosshair, &UpdateCrosshair_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.AttackHitEnemy
// [0x00020002] 
// Parameters infos:
// class ADVPawn*                 EnemyHit                       ( CPF_Parm )
// unsigned long                  IsHeal                         ( CPF_Parm )
// unsigned long                  ExactlyTargetted               ( CPF_Parm )

void UForgeGFxHUD::AttackHitEnemy ( class ADVPawn* EnemyHit, unsigned long IsHeal, unsigned long ExactlyTargetted )
{
	static UFunction* pFnAttackHitEnemy = NULL;

	if ( ! pFnAttackHitEnemy )
		pFnAttackHitEnemy = (UFunction*) UObject::GObjObjects()->Data[ 49446 ];

	UForgeGFxHUD_execAttackHitEnemy_Parms AttackHitEnemy_Parms;
	AttackHitEnemy_Parms.EnemyHit = EnemyHit;
	AttackHitEnemy_Parms.IsHeal = IsHeal;
	AttackHitEnemy_Parms.ExactlyTargetted = ExactlyTargetted;

	this->ProcessEvent ( pFnAttackHitEnemy, &AttackHitEnemy_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.PulseCrosshair
// [0x00024002] 
// Parameters infos:
// class ADVPawn*                 TheHitPawn                     ( CPF_Parm )
// unsigned long                  IsFriendly                     ( CPF_OptionalParm | CPF_Parm )

void UForgeGFxHUD::PulseCrosshair ( class ADVPawn* TheHitPawn, unsigned long IsFriendly )
{
	static UFunction* pFnPulseCrosshair = NULL;

	if ( ! pFnPulseCrosshair )
		pFnPulseCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 49442 ];

	UForgeGFxHUD_execPulseCrosshair_Parms PulseCrosshair_Parms;
	PulseCrosshair_Parms.TheHitPawn = TheHitPawn;
	PulseCrosshair_Parms.IsFriendly = IsFriendly;

	this->ProcessEvent ( pFnPulseCrosshair, &PulseCrosshair_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.ShowPawnCasting
// [0x00020002] 
// Parameters infos:
// class ADVPawnHero*             CastingPawn                    ( CPF_Parm )
// class ADVAbility*              TheAbility                     ( CPF_Parm )

void UForgeGFxHUD::ShowPawnCasting ( class ADVPawnHero* CastingPawn, class ADVAbility* TheAbility )
{
	static UFunction* pFnShowPawnCasting = NULL;

	if ( ! pFnShowPawnCasting )
		pFnShowPawnCasting = (UFunction*) UObject::GObjObjects()->Data[ 49438 ];

	UForgeGFxHUD_execShowPawnCasting_Parms ShowPawnCasting_Parms;
	ShowPawnCasting_Parms.CastingPawn = CastingPawn;
	ShowPawnCasting_Parms.TheAbility = TheAbility;

	this->ProcessEvent ( pFnShowPawnCasting, &ShowPawnCasting_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.AddPawnHealthChange
// [0x00824002] 
// Parameters infos:
// class ADVPawn*                 TheReceivingPawn               ( CPF_Parm )
// float                          DamageAmount                   ( CPF_Parm )
// struct FString                 MissText                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxHUD::AddPawnHealthChange ( class ADVPawn* TheReceivingPawn, float DamageAmount, struct FString MissText )
{
	static UFunction* pFnAddPawnHealthChange = NULL;

	if ( ! pFnAddPawnHealthChange )
		pFnAddPawnHealthChange = (UFunction*) UObject::GObjObjects()->Data[ 49426 ];

	UForgeGFxHUD_execAddPawnHealthChange_Parms AddPawnHealthChange_Parms;
	AddPawnHealthChange_Parms.TheReceivingPawn = TheReceivingPawn;
	AddPawnHealthChange_Parms.DamageAmount = DamageAmount;
	memcpy ( &AddPawnHealthChange_Parms.MissText, &MissText, 0xC );

	this->ProcessEvent ( pFnAddPawnHealthChange, &AddPawnHealthChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.RegisterHeroPawn
// [0x00020002] 
// Parameters infos:
// class ADVPawn*                 NewPawn                        ( CPF_Parm )

void UForgeGFxHUD::RegisterHeroPawn ( class ADVPawn* NewPawn )
{
	static UFunction* pFnRegisterHeroPawn = NULL;

	if ( ! pFnRegisterHeroPawn )
		pFnRegisterHeroPawn = (UFunction*) UObject::GObjObjects()->Data[ 49423 ];

	UForgeGFxHUD_execRegisterHeroPawn_Parms RegisterHeroPawn_Parms;
	RegisterHeroPawn_Parms.NewPawn = NewPawn;

	this->ProcessEvent ( pFnRegisterHeroPawn, &RegisterHeroPawn_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.DeRegisterPRI
// [0x00020002] 
// Parameters infos:
// class ADVPlayerReplicationInfo* OldPRI                         ( CPF_Parm )

void UForgeGFxHUD::DeRegisterPRI ( class ADVPlayerReplicationInfo* OldPRI )
{
	static UFunction* pFnDeRegisterPRI = NULL;

	if ( ! pFnDeRegisterPRI )
		pFnDeRegisterPRI = (UFunction*) UObject::GObjObjects()->Data[ 49420 ];

	UForgeGFxHUD_execDeRegisterPRI_Parms DeRegisterPRI_Parms;
	DeRegisterPRI_Parms.OldPRI = OldPRI;

	this->ProcessEvent ( pFnDeRegisterPRI, &DeRegisterPRI_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.RegisterPRI
// [0x00820002] 
// Parameters infos:
// class ADVPlayerReplicationInfo* NewPRI                         ( CPF_Parm )

void UForgeGFxHUD::RegisterPRI ( class ADVPlayerReplicationInfo* NewPRI )
{
	static UFunction* pFnRegisterPRI = NULL;

	if ( ! pFnRegisterPRI )
		pFnRegisterPRI = (UFunction*) UObject::GObjObjects()->Data[ 49415 ];

	UForgeGFxHUD_execRegisterPRI_Parms RegisterPRI_Parms;
	RegisterPRI_Parms.NewPRI = NewPRI;

	this->ProcessEvent ( pFnRegisterPRI, &RegisterPRI_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.ConfigForRes
// [0x00820002] 
// Parameters infos:
// int                            SizeX                          ( CPF_Parm )
// int                            SizeY                          ( CPF_Parm )

void UForgeGFxHUD::ConfigForRes ( int SizeX, int SizeY )
{
	static UFunction* pFnConfigForRes = NULL;

	if ( ! pFnConfigForRes )
		pFnConfigForRes = (UFunction*) UObject::GObjObjects()->Data[ 49411 ];

	UForgeGFxHUD_execConfigForRes_Parms ConfigForRes_Parms;
	ConfigForRes_Parms.SizeX = SizeX;
	ConfigForRes_Parms.SizeY = SizeY;

	this->ProcessEvent ( pFnConfigForRes, &ConfigForRes_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.HideWorldMessage
// [0x00020002] 
// Parameters infos:
// class UDVSeqAct_DrawText*      TheOwningKismetNode            ( CPF_Parm )

void UForgeGFxHUD::HideWorldMessage ( class UDVSeqAct_DrawText* TheOwningKismetNode )
{
	static UFunction* pFnHideWorldMessage = NULL;

	if ( ! pFnHideWorldMessage )
		pFnHideWorldMessage = (UFunction*) UObject::GObjObjects()->Data[ 49408 ];

	UForgeGFxHUD_execHideWorldMessage_Parms HideWorldMessage_Parms;
	HideWorldMessage_Parms.TheOwningKismetNode = TheOwningKismetNode;

	this->ProcessEvent ( pFnHideWorldMessage, &HideWorldMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.ShowWorldMessage
// [0x00824002] 
// Parameters infos:
// struct FString                 NewMessage                     ( CPF_Parm | CPF_NeedCtorLink )
// class AActor*                  NewTarget                      ( CPF_Parm )
// class UDVSeqAct_DrawText*      NewOwningKismetNode            ( CPF_Parm )
// float                          NewDuration                    ( CPF_OptionalParm | CPF_Parm )
// int                            NewFontSize                    ( CPF_OptionalParm | CPF_Parm )

void UForgeGFxHUD::ShowWorldMessage ( struct FString NewMessage, class AActor* NewTarget, class UDVSeqAct_DrawText* NewOwningKismetNode, float NewDuration, int NewFontSize )
{
	static UFunction* pFnShowWorldMessage = NULL;

	if ( ! pFnShowWorldMessage )
		pFnShowWorldMessage = (UFunction*) UObject::GObjObjects()->Data[ 49399 ];

	UForgeGFxHUD_execShowWorldMessage_Parms ShowWorldMessage_Parms;
	memcpy ( &ShowWorldMessage_Parms.NewMessage, &NewMessage, 0xC );
	ShowWorldMessage_Parms.NewTarget = NewTarget;
	ShowWorldMessage_Parms.NewOwningKismetNode = NewOwningKismetNode;
	ShowWorldMessage_Parms.NewDuration = NewDuration;
	ShowWorldMessage_Parms.NewFontSize = NewFontSize;

	this->ProcessEvent ( pFnShowWorldMessage, &ShowWorldMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateWorldMessages
// [0x00820002] 
// Parameters infos:
// float                          CurrentWorldTime               ( CPF_Parm )

void UForgeGFxHUD::UpdateWorldMessages ( float CurrentWorldTime )
{
	static UFunction* pFnUpdateWorldMessages = NULL;

	if ( ! pFnUpdateWorldMessages )
		pFnUpdateWorldMessages = (UFunction*) UObject::GObjObjects()->Data[ 49388 ];

	UForgeGFxHUD_execUpdateWorldMessages_Parms UpdateWorldMessages_Parms;
	UpdateWorldMessages_Parms.CurrentWorldTime = CurrentWorldTime;

	this->ProcessEvent ( pFnUpdateWorldMessages, &UpdateWorldMessages_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateHeroCastBar
// [0x00820002] 
// Parameters infos:
// int                            HeroIndex                      ( CPF_Parm )

void UForgeGFxHUD::UpdateHeroCastBar ( int HeroIndex )
{
	static UFunction* pFnUpdateHeroCastBar = NULL;

	if ( ! pFnUpdateHeroCastBar )
		pFnUpdateHeroCastBar = (UFunction*) UObject::GObjObjects()->Data[ 49380 ];

	UForgeGFxHUD_execUpdateHeroCastBar_Parms UpdateHeroCastBar_Parms;
	UpdateHeroCastBar_Parms.HeroIndex = HeroIndex;

	this->ProcessEvent ( pFnUpdateHeroCastBar, &UpdateHeroCastBar_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateWorldIcons
// [0x00820002] 
// Parameters infos:

void UForgeGFxHUD::UpdateWorldIcons ( )
{
	static UFunction* pFnUpdateWorldIcons = NULL;

	if ( ! pFnUpdateWorldIcons )
		pFnUpdateWorldIcons = (UFunction*) UObject::GObjObjects()->Data[ 49360 ];

	UForgeGFxHUD_execUpdateWorldIcons_Parms UpdateWorldIcons_Parms;

	this->ProcessEvent ( pFnUpdateWorldIcons, &UpdateWorldIcons_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.DrawObjectAtWorldLocation
// [0x00824002] 
// Parameters infos:
// class UGFxObject*              TheObject                      ( CPF_Parm )
// struct FVector                 TheWorldLocation               ( CPF_Parm )
// float                          NewScale                       ( CPF_OptionalParm | CPF_Parm )

void UForgeGFxHUD::DrawObjectAtWorldLocation ( class UGFxObject* TheObject, struct FVector TheWorldLocation, float NewScale )
{
	static UFunction* pFnDrawObjectAtWorldLocation = NULL;

	if ( ! pFnDrawObjectAtWorldLocation )
		pFnDrawObjectAtWorldLocation = (UFunction*) UObject::GObjObjects()->Data[ 49352 ];

	UForgeGFxHUD_execDrawObjectAtWorldLocation_Parms DrawObjectAtWorldLocation_Parms;
	DrawObjectAtWorldLocation_Parms.TheObject = TheObject;
	memcpy ( &DrawObjectAtWorldLocation_Parms.TheWorldLocation, &TheWorldLocation, 0xC );
	DrawObjectAtWorldLocation_Parms.NewScale = NewScale;

	this->ProcessEvent ( pFnDrawObjectAtWorldLocation, &DrawObjectAtWorldLocation_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateFlagHints
// [0x00820002] 
// Parameters infos:

void UForgeGFxHUD::UpdateFlagHints ( )
{
	static UFunction* pFnUpdateFlagHints = NULL;

	if ( ! pFnUpdateFlagHints )
		pFnUpdateFlagHints = (UFunction*) UObject::GObjObjects()->Data[ 49339 ];

	UForgeGFxHUD_execUpdateFlagHints_Parms UpdateFlagHints_Parms;

	this->ProcessEvent ( pFnUpdateFlagHints, &UpdateFlagHints_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateFlagStandIcon
// [0x00820002] 
// Parameters infos:

void UForgeGFxHUD::UpdateFlagStandIcon ( )
{
	static UFunction* pFnUpdateFlagStandIcon = NULL;

	if ( ! pFnUpdateFlagStandIcon )
		pFnUpdateFlagStandIcon = (UFunction*) UObject::GObjObjects()->Data[ 49333 ];

	UForgeGFxHUD_execUpdateFlagStandIcon_Parms UpdateFlagStandIcon_Parms;

	this->ProcessEvent ( pFnUpdateFlagStandIcon, &UpdateFlagStandIcon_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.PlayAward
// [0x00020002] 
// Parameters infos:

void UForgeGFxHUD::PlayAward ( )
{
	static UFunction* pFnPlayAward = NULL;

	if ( ! pFnPlayAward )
		pFnPlayAward = (UFunction*) UObject::GObjObjects()->Data[ 49331 ];

	UForgeGFxHUD_execPlayAward_Parms PlayAward_Parms;

	this->ProcessEvent ( pFnPlayAward, &PlayAward_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateAwardQueue
// [0x00820002] 
// Parameters infos:

void UForgeGFxHUD::UpdateAwardQueue ( )
{
	static UFunction* pFnUpdateAwardQueue = NULL;

	if ( ! pFnUpdateAwardQueue )
		pFnUpdateAwardQueue = (UFunction*) UObject::GObjObjects()->Data[ 49327 ];

	UForgeGFxHUD_execUpdateAwardQueue_Parms UpdateAwardQueue_Parms;

	this->ProcessEvent ( pFnUpdateAwardQueue, &UpdateAwardQueue_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.OnQueueAchievement
// [0x00820002] 
// Parameters infos:
// unsigned char                  AchievementType                ( CPF_Parm )
// unsigned char                  AchievementLevel               ( CPF_Parm )
// int                            AchievementXP                  ( CPF_Parm )
// int                            AchievementRequiredPoints      ( CPF_Parm )

void UForgeGFxHUD::OnQueueAchievement ( unsigned char AchievementType, unsigned char AchievementLevel, int AchievementXP, int AchievementRequiredPoints )
{
	static UFunction* pFnOnQueueAchievement = NULL;

	if ( ! pFnOnQueueAchievement )
		pFnOnQueueAchievement = (UFunction*) UObject::GObjObjects()->Data[ 49321 ];

	UForgeGFxHUD_execOnQueueAchievement_Parms OnQueueAchievement_Parms;
	OnQueueAchievement_Parms.AchievementType = AchievementType;
	OnQueueAchievement_Parms.AchievementLevel = AchievementLevel;
	OnQueueAchievement_Parms.AchievementXP = AchievementXP;
	OnQueueAchievement_Parms.AchievementRequiredPoints = AchievementRequiredPoints;

	this->ProcessEvent ( pFnOnQueueAchievement, &OnQueueAchievement_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.OnQueueAward
// [0x00820002] 
// Parameters infos:
// unsigned char                  MedalType                      ( CPF_Parm )
// unsigned char                  MedalLevel                     ( CPF_Parm )
// int                            MedalXP                        ( CPF_Parm )
// int                            MedalRequiredPoints            ( CPF_Parm )

void UForgeGFxHUD::OnQueueAward ( unsigned char MedalType, unsigned char MedalLevel, int MedalXP, int MedalRequiredPoints )
{
	static UFunction* pFnOnQueueAward = NULL;

	if ( ! pFnOnQueueAward )
		pFnOnQueueAward = (UFunction*) UObject::GObjObjects()->Data[ 49315 ];

	UForgeGFxHUD_execOnQueueAward_Parms OnQueueAward_Parms;
	OnQueueAward_Parms.MedalType = MedalType;
	OnQueueAward_Parms.MedalLevel = MedalLevel;
	OnQueueAward_Parms.MedalXP = MedalXP;
	OnQueueAward_Parms.MedalRequiredPoints = MedalRequiredPoints;

	this->ProcessEvent ( pFnOnQueueAward, &OnQueueAward_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.HideKismetMessage
// [0x00020002] 
// Parameters infos:

void UForgeGFxHUD::HideKismetMessage ( )
{
	static UFunction* pFnHideKismetMessage = NULL;

	if ( ! pFnHideKismetMessage )
		pFnHideKismetMessage = (UFunction*) UObject::GObjObjects()->Data[ 49314 ];

	UForgeGFxHUD_execHideKismetMessage_Parms HideKismetMessage_Parms;

	this->ProcessEvent ( pFnHideKismetMessage, &HideKismetMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.PlayKismetMessage
// [0x00820002] 
// Parameters infos:
// struct FString                 TheMessage                     ( CPF_Parm | CPF_NeedCtorLink )
// float                          TheDuration                    ( CPF_Parm )

void UForgeGFxHUD::PlayKismetMessage ( struct FString TheMessage, float TheDuration )
{
	static UFunction* pFnPlayKismetMessage = NULL;

	if ( ! pFnPlayKismetMessage )
		pFnPlayKismetMessage = (UFunction*) UObject::GObjObjects()->Data[ 49310 ];

	UForgeGFxHUD_execPlayKismetMessage_Parms PlayKismetMessage_Parms;
	memcpy ( &PlayKismetMessage_Parms.TheMessage, &TheMessage, 0xC );
	PlayKismetMessage_Parms.TheDuration = TheDuration;

	this->ProcessEvent ( pFnPlayKismetMessage, &PlayKismetMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.PlayMessage
// [0x00820002] 
// Parameters infos:

void UForgeGFxHUD::PlayMessage ( )
{
	static UFunction* pFnPlayMessage = NULL;

	if ( ! pFnPlayMessage )
		pFnPlayMessage = (UFunction*) UObject::GObjObjects()->Data[ 49308 ];

	UForgeGFxHUD_execPlayMessage_Parms PlayMessage_Parms;

	this->ProcessEvent ( pFnPlayMessage, &PlayMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateMessageQueue
// [0x00820002] 
// Parameters infos:

void UForgeGFxHUD::UpdateMessageQueue ( )
{
	static UFunction* pFnUpdateMessageQueue = NULL;

	if ( ! pFnUpdateMessageQueue )
		pFnUpdateMessageQueue = (UFunction*) UObject::GObjObjects()->Data[ 49305 ];

	UForgeGFxHUD_execUpdateMessageQueue_Parms UpdateMessageQueue_Parms;

	this->ProcessEvent ( pFnUpdateMessageQueue, &UpdateMessageQueue_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.OnQueueMessage
// [0x00824002] 
// Parameters infos:
// struct FString                 NewMessage                     ( CPF_Parm | CPF_NeedCtorLink )
// float                          NewDisplayPeriod               ( CPF_OptionalParm | CPF_Parm )

void UForgeGFxHUD::OnQueueMessage ( struct FString NewMessage, float NewDisplayPeriod )
{
	static UFunction* pFnOnQueueMessage = NULL;

	if ( ! pFnOnQueueMessage )
		pFnOnQueueMessage = (UFunction*) UObject::GObjObjects()->Data[ 49301 ];

	UForgeGFxHUD_execOnQueueMessage_Parms OnQueueMessage_Parms;
	memcpy ( &OnQueueMessage_Parms.NewMessage, &NewMessage, 0xC );
	OnQueueMessage_Parms.NewDisplayPeriod = NewDisplayPeriod;

	this->ProcessEvent ( pFnOnQueueMessage, &OnQueueMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.DoTerminate
// [0x00020002] 
// Parameters infos:

void UForgeGFxHUD::DoTerminate ( )
{
	static UFunction* pFnDoTerminate = NULL;

	if ( ! pFnDoTerminate )
		pFnDoTerminate = (UFunction*) UObject::GObjObjects()->Data[ 49300 ];

	UForgeGFxHUD_execDoTerminate_Parms DoTerminate_Parms;

	this->ProcessEvent ( pFnDoTerminate, &DoTerminate_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.OnQueueTerminateMessage
// [0x00020002] 
// Parameters infos:
// struct FString                 NewMessage                     ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxHUD::OnQueueTerminateMessage ( struct FString NewMessage )
{
	static UFunction* pFnOnQueueTerminateMessage = NULL;

	if ( ! pFnOnQueueTerminateMessage )
		pFnOnQueueTerminateMessage = (UFunction*) UObject::GObjObjects()->Data[ 49298 ];

	UForgeGFxHUD_execOnQueueTerminateMessage_Parms OnQueueTerminateMessage_Parms;
	memcpy ( &OnQueueTerminateMessage_Parms.NewMessage, &NewMessage, 0xC );

	this->ProcessEvent ( pFnOnQueueTerminateMessage, &OnQueueTerminateMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateArcs
// [0x00820002] 
// Parameters infos:

void UForgeGFxHUD::UpdateArcs ( )
{
	static UFunction* pFnUpdateArcs = NULL;

	if ( ! pFnUpdateArcs )
		pFnUpdateArcs = (UFunction*) UObject::GObjObjects()->Data[ 49292 ];

	UForgeGFxHUD_execUpdateArcs_Parms UpdateArcs_Parms;

	this->ProcessEvent ( pFnUpdateArcs, &UpdateArcs_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateDVTowerBars
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxHUD::UpdateDVTowerBars ( float DeltaTime )
{
	static UFunction* pFnUpdateDVTowerBars = NULL;

	if ( ! pFnUpdateDVTowerBars )
		pFnUpdateDVTowerBars = (UFunction*) UObject::GObjObjects()->Data[ 49284 ];

	UForgeGFxHUD_execUpdateDVTowerBars_Parms UpdateDVTowerBars_Parms;
	UpdateDVTowerBars_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateDVTowerBars, &UpdateDVTowerBars_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateDMTeamInfo
// [0x00020002] 
// Parameters infos:

void UForgeGFxHUD::UpdateDMTeamInfo ( )
{
	static UFunction* pFnUpdateDMTeamInfo = NULL;

	if ( ! pFnUpdateDMTeamInfo )
		pFnUpdateDMTeamInfo = (UFunction*) UObject::GObjObjects()->Data[ 49279 ];

	UForgeGFxHUD_execUpdateDMTeamInfo_Parms UpdateDMTeamInfo_Parms;

	this->ProcessEvent ( pFnUpdateDMTeamInfo, &UpdateDMTeamInfo_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateCTFTeamInfo
// [0x00020002] 
// Parameters infos:

void UForgeGFxHUD::UpdateCTFTeamInfo ( )
{
	static UFunction* pFnUpdateCTFTeamInfo = NULL;

	if ( ! pFnUpdateCTFTeamInfo )
		pFnUpdateCTFTeamInfo = (UFunction*) UObject::GObjObjects()->Data[ 49274 ];

	UForgeGFxHUD_execUpdateCTFTeamInfo_Parms UpdateCTFTeamInfo_Parms;

	this->ProcessEvent ( pFnUpdateCTFTeamInfo, &UpdateCTFTeamInfo_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateBlood
// [0x00020002] 
// Parameters infos:

void UForgeGFxHUD::UpdateBlood ( )
{
	static UFunction* pFnUpdateBlood = NULL;

	if ( ! pFnUpdateBlood )
		pFnUpdateBlood = (UFunction*) UObject::GObjObjects()->Data[ 49272 ];

	UForgeGFxHUD_execUpdateBlood_Parms UpdateBlood_Parms;

	this->ProcessEvent ( pFnUpdateBlood, &UpdateBlood_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.HideCalloutArrows
// [0x00020002] 
// Parameters infos:

void UForgeGFxHUD::HideCalloutArrows ( )
{
	static UFunction* pFnHideCalloutArrows = NULL;

	if ( ! pFnHideCalloutArrows )
		pFnHideCalloutArrows = (UFunction*) UObject::GObjObjects()->Data[ 49271 ];

	UForgeGFxHUD_execHideCalloutArrows_Parms HideCalloutArrows_Parms;

	this->ProcessEvent ( pFnHideCalloutArrows, &HideCalloutArrows_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.OffScreen
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 WorldLocation                  ( CPF_Parm )

bool UForgeGFxHUD::OffScreen ( struct FVector WorldLocation )
{
	static UFunction* pFnOffScreen = NULL;

	if ( ! pFnOffScreen )
		pFnOffScreen = (UFunction*) UObject::GObjObjects()->Data[ 49267 ];

	UForgeGFxHUD_execOffScreen_Parms OffScreen_Parms;
	memcpy ( &OffScreen_Parms.WorldLocation, &WorldLocation, 0xC );

	this->ProcessEvent ( pFnOffScreen, &OffScreen_Parms, NULL );

	return OffScreen_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxHUD.UpdateCalloutArrows
// [0x00820002] 
// Parameters infos:
// class ADVPlayerController*     MyDVPC                         ( CPF_Parm )
// class ADVPawnHero*             MyPawn                         ( CPF_Parm )

void UForgeGFxHUD::UpdateCalloutArrows ( class ADVPlayerController* MyDVPC, class ADVPawnHero* MyPawn )
{
	static UFunction* pFnUpdateCalloutArrows = NULL;

	if ( ! pFnUpdateCalloutArrows )
		pFnUpdateCalloutArrows = (UFunction*) UObject::GObjObjects()->Data[ 49257 ];

	UForgeGFxHUD_execUpdateCalloutArrows_Parms UpdateCalloutArrows_Parms;
	UpdateCalloutArrows_Parms.MyDVPC = MyDVPC;
	UpdateCalloutArrows_Parms.MyPawn = MyPawn;

	this->ProcessEvent ( pFnUpdateCalloutArrows, &UpdateCalloutArrows_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.HideDamageArrows
// [0x00020002] 
// Parameters infos:

void UForgeGFxHUD::HideDamageArrows ( )
{
	static UFunction* pFnHideDamageArrows = NULL;

	if ( ! pFnHideDamageArrows )
		pFnHideDamageArrows = (UFunction*) UObject::GObjObjects()->Data[ 49256 ];

	UForgeGFxHUD_execHideDamageArrows_Parms HideDamageArrows_Parms;

	this->ProcessEvent ( pFnHideDamageArrows, &HideDamageArrows_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateDamageArrows
// [0x00820002] 
// Parameters infos:
// class ADVPlayerController*     MyDVPC                         ( CPF_Parm )

void UForgeGFxHUD::UpdateDamageArrows ( class ADVPlayerController* MyDVPC )
{
	static UFunction* pFnUpdateDamageArrows = NULL;

	if ( ! pFnUpdateDamageArrows )
		pFnUpdateDamageArrows = (UFunction*) UObject::GObjObjects()->Data[ 49247 ];

	UForgeGFxHUD_execUpdateDamageArrows_Parms UpdateDamageArrows_Parms;
	UpdateDamageArrows_Parms.MyDVPC = MyDVPC;

	this->ProcessEvent ( pFnUpdateDamageArrows, &UpdateDamageArrows_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.AttackedFrom
// [0x00820002] 
// Parameters infos:
// struct FVector                 WorldLocation                  ( CPF_Parm )

void UForgeGFxHUD::AttackedFrom ( struct FVector WorldLocation )
{
	static UFunction* pFnAttackedFrom = NULL;

	if ( ! pFnAttackedFrom )
		pFnAttackedFrom = (UFunction*) UObject::GObjObjects()->Data[ 49244 ];

	UForgeGFxHUD_execAttackedFrom_Parms AttackedFrom_Parms;
	memcpy ( &AttackedFrom_Parms.WorldLocation, &WorldLocation, 0xC );

	this->ProcessEvent ( pFnAttackedFrom, &AttackedFrom_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.MyAbilityBlocked
// [0x00020002] 
// Parameters infos:
// class ADVAbility*              BlockedAbility                 ( CPF_Parm )
// class ADVPawn*                 MissedPawn                     ( CPF_Parm )
// unsigned char                  ReasonFailed                   ( CPF_Parm )

void UForgeGFxHUD::MyAbilityBlocked ( class ADVAbility* BlockedAbility, class ADVPawn* MissedPawn, unsigned char ReasonFailed )
{
	static UFunction* pFnMyAbilityBlocked = NULL;

	if ( ! pFnMyAbilityBlocked )
		pFnMyAbilityBlocked = (UFunction*) UObject::GObjObjects()->Data[ 49239 ];

	UForgeGFxHUD_execMyAbilityBlocked_Parms MyAbilityBlocked_Parms;
	MyAbilityBlocked_Parms.BlockedAbility = BlockedAbility;
	MyAbilityBlocked_Parms.MissedPawn = MissedPawn;
	MyAbilityBlocked_Parms.ReasonFailed = ReasonFailed;

	this->ProcessEvent ( pFnMyAbilityBlocked, &MyAbilityBlocked_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.BlockWorked
// [0x00820002] 
// Parameters infos:
// class ADVAbility*              BlockedAbility                 ( CPF_Parm )

void UForgeGFxHUD::BlockWorked ( class ADVAbility* BlockedAbility )
{
	static UFunction* pFnBlockWorked = NULL;

	if ( ! pFnBlockWorked )
		pFnBlockWorked = (UFunction*) UObject::GObjObjects()->Data[ 49235 ];

	UForgeGFxHUD_execBlockWorked_Parms BlockWorked_Parms;
	BlockWorked_Parms.BlockedAbility = BlockedAbility;

	this->ProcessEvent ( pFnBlockWorked, &BlockWorked_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.HideBlockFlash
// [0x00020002] 
// Parameters infos:

void UForgeGFxHUD::HideBlockFlash ( )
{
	static UFunction* pFnHideBlockFlash = NULL;

	if ( ! pFnHideBlockFlash )
		pFnHideBlockFlash = (UFunction*) UObject::GObjObjects()->Data[ 49234 ];

	UForgeGFxHUD_execHideBlockFlash_Parms HideBlockFlash_Parms;

	this->ProcessEvent ( pFnHideBlockFlash, &HideBlockFlash_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.ShowBlockFlash
// [0x00020002] 
// Parameters infos:

void UForgeGFxHUD::ShowBlockFlash ( )
{
	static UFunction* pFnShowBlockFlash = NULL;

	if ( ! pFnShowBlockFlash )
		pFnShowBlockFlash = (UFunction*) UObject::GObjObjects()->Data[ 49233 ];

	UForgeGFxHUD_execShowBlockFlash_Parms ShowBlockFlash_Parms;

	this->ProcessEvent ( pFnShowBlockFlash, &ShowBlockFlash_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateBlockFlash
// [0x00820002] 
// Parameters infos:
// class ADVPlayerController*     MyPC                           ( CPF_Parm )

void UForgeGFxHUD::UpdateBlockFlash ( class ADVPlayerController* MyPC )
{
	static UFunction* pFnUpdateBlockFlash = NULL;

	if ( ! pFnUpdateBlockFlash )
		pFnUpdateBlockFlash = (UFunction*) UObject::GObjObjects()->Data[ 49228 ];

	UForgeGFxHUD_execUpdateBlockFlash_Parms UpdateBlockFlash_Parms;
	UpdateBlockFlash_Parms.MyPC = MyPC;

	this->ProcessEvent ( pFnUpdateBlockFlash, &UpdateBlockFlash_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateKillMessages
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxHUD::UpdateKillMessages ( float DeltaTime )
{
	static UFunction* pFnUpdateKillMessages = NULL;

	if ( ! pFnUpdateKillMessages )
		pFnUpdateKillMessages = (UFunction*) UObject::GObjObjects()->Data[ 49221 ];

	UForgeGFxHUD_execUpdateKillMessages_Parms UpdateKillMessages_Parms;
	UpdateKillMessages_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateKillMessages, &UpdateKillMessages_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.SetKillPlayerName
// [0x00020002] 
// Parameters infos:
// class UGFxObject*              PlayerNameTF                   ( CPF_Parm )
// class ADVPlayerReplicationInfo* ThePRI                         ( CPF_Parm )

void UForgeGFxHUD::SetKillPlayerName ( class UGFxObject* PlayerNameTF, class ADVPlayerReplicationInfo* ThePRI )
{
	static UFunction* pFnSetKillPlayerName = NULL;

	if ( ! pFnSetKillPlayerName )
		pFnSetKillPlayerName = (UFunction*) UObject::GObjObjects()->Data[ 49216 ];

	UForgeGFxHUD_execSetKillPlayerName_Parms SetKillPlayerName_Parms;
	SetKillPlayerName_Parms.PlayerNameTF = PlayerNameTF;
	SetKillPlayerName_Parms.ThePRI = ThePRI;

	this->ProcessEvent ( pFnSetKillPlayerName, &SetKillPlayerName_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.AddKillMessage
// [0x00820002] 
// Parameters infos:
// struct FString                 KillerClass                    ( CPF_Parm | CPF_NeedCtorLink )
// class ADVPlayerReplicationInfo* KillerPRI                      ( CPF_Parm )
// int                            KillingAbilityIndex            ( CPF_Parm )
// class ADVPlayerReplicationInfo* KilledPRI                      ( CPF_Parm )
// struct FString                 KilledClass                    ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxHUD::AddKillMessage ( struct FString KillerClass, class ADVPlayerReplicationInfo* KillerPRI, int KillingAbilityIndex, class ADVPlayerReplicationInfo* KilledPRI, struct FString KilledClass )
{
	static UFunction* pFnAddKillMessage = NULL;

	if ( ! pFnAddKillMessage )
		pFnAddKillMessage = (UFunction*) UObject::GObjObjects()->Data[ 49203 ];

	UForgeGFxHUD_execAddKillMessage_Parms AddKillMessage_Parms;
	memcpy ( &AddKillMessage_Parms.KillerClass, &KillerClass, 0xC );
	AddKillMessage_Parms.KillerPRI = KillerPRI;
	AddKillMessage_Parms.KillingAbilityIndex = KillingAbilityIndex;
	AddKillMessage_Parms.KilledPRI = KilledPRI;
	memcpy ( &AddKillMessage_Parms.KilledClass, &KilledClass, 0xC );

	this->ProcessEvent ( pFnAddKillMessage, &AddKillMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.PlayCooldownFlash
// [0x00020002] 
// Parameters infos:

void UForgeGFxHUD::PlayCooldownFlash ( )
{
	static UFunction* pFnPlayCooldownFlash = NULL;

	if ( ! pFnPlayCooldownFlash )
		pFnPlayCooldownFlash = (UFunction*) UObject::GObjObjects()->Data[ 49201 ];

	UForgeGFxHUD_execPlayCooldownFlash_Parms PlayCooldownFlash_Parms;

	this->ProcessEvent ( pFnPlayCooldownFlash, &PlayCooldownFlash_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateCooldownFlashQueue
// [0x00820002] 
// Parameters infos:

void UForgeGFxHUD::UpdateCooldownFlashQueue ( )
{
	static UFunction* pFnUpdateCooldownFlashQueue = NULL;

	if ( ! pFnUpdateCooldownFlashQueue )
		pFnUpdateCooldownFlashQueue = (UFunction*) UObject::GObjObjects()->Data[ 49198 ];

	UForgeGFxHUD_execUpdateCooldownFlashQueue_Parms UpdateCooldownFlashQueue_Parms;

	this->ProcessEvent ( pFnUpdateCooldownFlashQueue, &UpdateCooldownFlashQueue_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.OnQueueCooldownFlash
// [0x00820002] 
// Parameters infos:
// int                            AbilityIndex                   ( CPF_Parm )

void UForgeGFxHUD::OnQueueCooldownFlash ( int AbilityIndex )
{
	static UFunction* pFnOnQueueCooldownFlash = NULL;

	if ( ! pFnOnQueueCooldownFlash )
		pFnOnQueueCooldownFlash = (UFunction*) UObject::GObjObjects()->Data[ 49195 ];

	UForgeGFxHUD_execOnQueueCooldownFlash_Parms OnQueueCooldownFlash_Parms;
	OnQueueCooldownFlash_Parms.AbilityIndex = AbilityIndex;

	this->ProcessEvent ( pFnOnQueueCooldownFlash, &OnQueueCooldownFlash_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.UpdateAbilityCooldown
// [0x00824002] 
// Parameters infos:
// struct FSAbilityIcon           TheAbility                     ( CPF_Parm )
// float                          CooldownLength                 ( CPF_Parm )
// float                          CooldownRatio                  ( CPF_Parm )
// unsigned long                  FromGCD                        ( CPF_OptionalParm | CPF_Parm )

void UForgeGFxHUD::UpdateAbilityCooldown ( struct FSAbilityIcon TheAbility, float CooldownLength, float CooldownRatio, unsigned long FromGCD )
{
	static UFunction* pFnUpdateAbilityCooldown = NULL;

	if ( ! pFnUpdateAbilityCooldown )
		pFnUpdateAbilityCooldown = (UFunction*) UObject::GObjObjects()->Data[ 49188 ];

	UForgeGFxHUD_execUpdateAbilityCooldown_Parms UpdateAbilityCooldown_Parms;
	memcpy ( &UpdateAbilityCooldown_Parms.TheAbility, &TheAbility, 0x40 );
	UpdateAbilityCooldown_Parms.CooldownLength = CooldownLength;
	UpdateAbilityCooldown_Parms.CooldownRatio = CooldownRatio;
	UpdateAbilityCooldown_Parms.FromGCD = FromGCD;

	this->ProcessEvent ( pFnUpdateAbilityCooldown, &UpdateAbilityCooldown_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.GetShortVersionOfKey
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 KeyName                        ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

struct FString UForgeGFxHUD::GetShortVersionOfKey ( struct FString KeyName )
{
	static UFunction* pFnGetShortVersionOfKey = NULL;

	if ( ! pFnGetShortVersionOfKey )
		pFnGetShortVersionOfKey = (UFunction*) UObject::GObjObjects()->Data[ 48569 ];

	UForgeGFxHUD_execGetShortVersionOfKey_Parms GetShortVersionOfKey_Parms;
	memcpy ( &GetShortVersionOfKey_Parms.KeyName, &KeyName, 0xC );

	this->ProcessEvent ( pFnGetShortVersionOfKey, &GetShortVersionOfKey_Parms, NULL );

	return GetShortVersionOfKey_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxHUD.GetCommaFormat
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Value                          ( CPF_Parm )

struct FString UForgeGFxHUD::GetCommaFormat ( int Value )
{
	static UFunction* pFnGetCommaFormat = NULL;

	if ( ! pFnGetCommaFormat )
		pFnGetCommaFormat = (UFunction*) UObject::GObjObjects()->Data[ 47649 ];

	UForgeGFxHUD_execGetCommaFormat_Parms GetCommaFormat_Parms;
	GetCommaFormat_Parms.Value = Value;

	this->ProcessEvent ( pFnGetCommaFormat, &GetCommaFormat_Parms, NULL );

	return GetCommaFormat_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxHUD.GetTimerShortFormat
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// float                          TimeSeconds                    ( CPF_Parm )
// int                            Places                         ( CPF_Parm )

struct FString UForgeGFxHUD::GetTimerShortFormat ( float TimeSeconds, int Places )
{
	static UFunction* pFnGetTimerShortFormat = NULL;

	if ( ! pFnGetTimerShortFormat )
		pFnGetTimerShortFormat = (UFunction*) UObject::GObjObjects()->Data[ 43405 ];

	UForgeGFxHUD_execGetTimerShortFormat_Parms GetTimerShortFormat_Parms;
	GetTimerShortFormat_Parms.TimeSeconds = TimeSeconds;
	GetTimerShortFormat_Parms.Places = Places;

	this->ProcessEvent ( pFnGetTimerShortFormat, &GetTimerShortFormat_Parms, NULL );

	return GetTimerShortFormat_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxHUD.GetTimerFormat
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// float                          TimeSeconds                    ( CPF_Parm )
// int                            Places                         ( CPF_Parm )

struct FString UForgeGFxHUD::GetTimerFormat ( float TimeSeconds, int Places )
{
	static UFunction* pFnGetTimerFormat = NULL;

	if ( ! pFnGetTimerFormat )
		pFnGetTimerFormat = (UFunction*) UObject::GObjObjects()->Data[ 47833 ];

	UForgeGFxHUD_execGetTimerFormat_Parms GetTimerFormat_Parms;
	GetTimerFormat_Parms.TimeSeconds = TimeSeconds;
	GetTimerFormat_Parms.Places = Places;

	this->ProcessEvent ( pFnGetTimerFormat, &GetTimerFormat_Parms, NULL );

	return GetTimerFormat_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxHUD.GetClockFormat
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// float                          TimeSeconds                    ( CPF_Parm )
// unsigned long                  HideZeroes                     ( CPF_OptionalParm | CPF_Parm )

struct FString UForgeGFxHUD::GetClockFormat ( float TimeSeconds, unsigned long HideZeroes )
{
	static UFunction* pFnGetClockFormat = NULL;

	if ( ! pFnGetClockFormat )
		pFnGetClockFormat = (UFunction*) UObject::GObjObjects()->Data[ 49167 ];

	UForgeGFxHUD_execGetClockFormat_Parms GetClockFormat_Parms;
	GetClockFormat_Parms.TimeSeconds = TimeSeconds;
	GetClockFormat_Parms.HideZeroes = HideZeroes;

	this->ProcessEvent ( pFnGetClockFormat, &GetClockFormat_Parms, NULL );

	return GetClockFormat_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxHUD.CheckColorblind
// [0x00020002] 
// Parameters infos:

void UForgeGFxHUD::CheckColorblind ( )
{
	static UFunction* pFnCheckColorblind = NULL;

	if ( ! pFnCheckColorblind )
		pFnCheckColorblind = (UFunction*) UObject::GObjObjects()->Data[ 49165 ];

	UForgeGFxHUD_execCheckColorblind_Parms CheckColorblind_Parms;

	this->ProcessEvent ( pFnCheckColorblind, &CheckColorblind_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.Tick
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxHUD::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 49152 ];

	UForgeGFxHUD_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.SetupAbilityIcons
// [0x00820002] 
// Parameters infos:

void UForgeGFxHUD::SetupAbilityIcons ( )
{
	static UFunction* pFnSetupAbilityIcons = NULL;

	if ( ! pFnSetupAbilityIcons )
		pFnSetupAbilityIcons = (UFunction*) UObject::GObjObjects()->Data[ 49141 ];

	UForgeGFxHUD_execSetupAbilityIcons_Parms SetupAbilityIcons_Parms;

	this->ProcessEvent ( pFnSetupAbilityIcons, &SetupAbilityIcons_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.SetupResourceBars
// [0x00020002] 
// Parameters infos:

void UForgeGFxHUD::SetupResourceBars ( )
{
	static UFunction* pFnSetupResourceBars = NULL;

	if ( ! pFnSetupResourceBars )
		pFnSetupResourceBars = (UFunction*) UObject::GObjObjects()->Data[ 49140 ];

	UForgeGFxHUD_execSetupResourceBars_Parms SetupResourceBars_Parms;

	this->ProcessEvent ( pFnSetupResourceBars, &SetupResourceBars_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.SetupHUDForClass
// [0x00020002] 
// Parameters infos:
// struct FString                 ClassName                      ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxHUD::SetupHUDForClass ( struct FString ClassName )
{
	static UFunction* pFnSetupHUDForClass = NULL;

	if ( ! pFnSetupHUDForClass )
		pFnSetupHUDForClass = (UFunction*) UObject::GObjObjects()->Data[ 49138 ];

	UForgeGFxHUD_execSetupHUDForClass_Parms SetupHUDForClass_Parms;
	memcpy ( &SetupHUDForClass_Parms.ClassName, &ClassName, 0xC );

	this->ProcessEvent ( pFnSetupHUDForClass, &SetupHUDForClass_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.ApplySteamCloudSettings
// [0x00020002] 
// Parameters infos:

void UForgeGFxHUD::ApplySteamCloudSettings ( )
{
	static UFunction* pFnApplySteamCloudSettings = NULL;

	if ( ! pFnApplySteamCloudSettings )
		pFnApplySteamCloudSettings = (UFunction*) UObject::GObjObjects()->Data[ 49134 ];

	UForgeGFxHUD_execApplySteamCloudSettings_Parms ApplySteamCloudSettings_Parms;

	this->ProcessEvent ( pFnApplySteamCloudSettings, &ApplySteamCloudSettings_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.ConfigAbilityIcons
// [0x00820002] 
// Parameters infos:

void UForgeGFxHUD::ConfigAbilityIcons ( )
{
	static UFunction* pFnConfigAbilityIcons = NULL;

	if ( ! pFnConfigAbilityIcons )
		pFnConfigAbilityIcons = (UFunction*) UObject::GObjObjects()->Data[ 49131 ];

	UForgeGFxHUD_execConfigAbilityIcons_Parms ConfigAbilityIcons_Parms;

	this->ProcessEvent ( pFnConfigAbilityIcons, &ConfigAbilityIcons_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.ConfigHUD
// [0x00820002] 
// Parameters infos:

void UForgeGFxHUD::ConfigHUD ( )
{
	static UFunction* pFnConfigHUD = NULL;

	if ( ! pFnConfigHUD )
		pFnConfigHUD = (UFunction*) UObject::GObjObjects()->Data[ 49122 ];

	UForgeGFxHUD_execConfigHUD_Parms ConfigHUD_Parms;

	this->ProcessEvent ( pFnConfigHUD, &ConfigHUD_Parms, NULL );
};

// Function ForgeGame.ForgeGFxHUD.Start
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  StartPaused                    ( CPF_OptionalParm | CPF_Parm )

bool UForgeGFxHUD::Start ( unsigned long StartPaused )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 45423 ];

	UForgeGFxHUD_execStart_Parms Start_Parms;
	Start_Parms.StartPaused = StartPaused;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	return Start_Parms.ReturnValue;
};

// Function ForgeGame.DVSkeletalMeshAttachment.ToggleHidden
// [0x00020102] 
// Parameters infos:
// unsigned long                  ShouldHide                     ( CPF_Parm )

void ADVSkeletalMeshAttachment::ToggleHidden ( unsigned long ShouldHide )
{
	static UFunction* pFnToggleHidden = NULL;

	if ( ! pFnToggleHidden )
		pFnToggleHidden = (UFunction*) UObject::GObjObjects()->Data[ 46442 ];

	ADVSkeletalMeshAttachment_execToggleHidden_Parms ToggleHidden_Parms;
	ToggleHidden_Parms.ShouldHide = ShouldHide;

	this->ProcessEvent ( pFnToggleHidden, &ToggleHidden_Parms, NULL );
};

// Function ForgeGame.DVSkeletalMeshAttachment.ForceMipLevels
// [0x00020102] 
// Parameters infos:

void ADVSkeletalMeshAttachment::ForceMipLevels ( )
{
	static UFunction* pFnForceMipLevels = NULL;

	if ( ! pFnForceMipLevels )
		pFnForceMipLevels = (UFunction*) UObject::GObjObjects()->Data[ 46440 ];

	ADVSkeletalMeshAttachment_execForceMipLevels_Parms ForceMipLevels_Parms;

	this->ProcessEvent ( pFnForceMipLevels, &ForceMipLevels_Parms, NULL );
};

// Function ForgeGame.DVSkeletalMeshAttachment.NotifyOwnerDied
// [0x00820102] 
// Parameters infos:
// class APawn*                   Pawn                           ( CPF_Parm )
// struct FName                   SocketName                     ( CPF_Parm )

void ADVSkeletalMeshAttachment::NotifyOwnerDied ( class APawn* Pawn, struct FName SocketName )
{
	static UFunction* pFnNotifyOwnerDied = NULL;

	if ( ! pFnNotifyOwnerDied )
		pFnNotifyOwnerDied = (UFunction*) UObject::GObjObjects()->Data[ 46435 ];

	ADVSkeletalMeshAttachment_execNotifyOwnerDied_Parms NotifyOwnerDied_Parms;
	NotifyOwnerDied_Parms.Pawn = Pawn;
	memcpy ( &NotifyOwnerDied_Parms.SocketName, &SocketName, 0x8 );

	this->ProcessEvent ( pFnNotifyOwnerDied, &NotifyOwnerDied_Parms, NULL );
};

// Function ForgeGame.DVSkeletalMeshAttachment.PostInitAnimTree
// [0x00020102] 
// Parameters infos:
// class USkeletalMeshComponent*  SkelComp                       ( CPF_Parm | CPF_EditInline )

void ADVSkeletalMeshAttachment::PostInitAnimTree ( class USkeletalMeshComponent* SkelComp )
{
	static UFunction* pFnPostInitAnimTree = NULL;

	if ( ! pFnPostInitAnimTree )
		pFnPostInitAnimTree = (UFunction*) UObject::GObjObjects()->Data[ 46433 ];

	ADVSkeletalMeshAttachment_execPostInitAnimTree_Parms PostInitAnimTree_Parms;
	PostInitAnimTree_Parms.SkelComp = SkelComp;

	this->ProcessEvent ( pFnPostInitAnimTree, &PostInitAnimTree_Parms, NULL );
};

// Function ForgeGame.DVSkeletalMeshAttachment.Destroyed
// [0x00020102] 
// Parameters infos:

void ADVSkeletalMeshAttachment::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 46432 ];

	ADVSkeletalMeshAttachment_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVSkeletalMeshAttachment.GetComponent
// [0x00020102] 
// Parameters infos:
// class UPrimitiveComponent*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class UPrimitiveComponent* ADVSkeletalMeshAttachment::GetComponent ( )
{
	static UFunction* pFnGetComponent = NULL;

	if ( ! pFnGetComponent )
		pFnGetComponent = (UFunction*) UObject::GObjObjects()->Data[ 46430 ];

	ADVSkeletalMeshAttachment_execGetComponent_Parms GetComponent_Parms;

	this->ProcessEvent ( pFnGetComponent, &GetComponent_Parms, NULL );

	return GetComponent_Parms.ReturnValue;
};

// Function ForgeGame.DVSkeletalMeshAttachment.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVSkeletalMeshAttachment::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 46428 ];

	ADVSkeletalMeshAttachment_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVMeshAttachment.PlayDetermined
// [0x00020102] 
// Parameters infos:
// unsigned long                  Determined                     ( CPF_Parm )

void ADVMeshAttachment::PlayDetermined ( unsigned long Determined )
{
	static UFunction* pFnPlayDetermined = NULL;

	if ( ! pFnPlayDetermined )
		pFnPlayDetermined = (UFunction*) UObject::GObjObjects()->Data[ 45516 ];

	ADVMeshAttachment_execPlayDetermined_Parms PlayDetermined_Parms;
	PlayDetermined_Parms.Determined = Determined;

	this->ProcessEvent ( pFnPlayDetermined, &PlayDetermined_Parms, NULL );
};

// Function ForgeGame.DVMeshAttachment.SetStealth
// [0x00020102] 
// Parameters infos:
// unsigned long                  IsStealthed                    ( CPF_Parm )
// unsigned long                  IsCamouflaged                  ( CPF_Parm )

void ADVMeshAttachment::SetStealth ( unsigned long IsStealthed, unsigned long IsCamouflaged )
{
	static UFunction* pFnSetStealth = NULL;

	if ( ! pFnSetStealth )
		pFnSetStealth = (UFunction*) UObject::GObjObjects()->Data[ 45512 ];

	ADVMeshAttachment_execSetStealth_Parms SetStealth_Parms;
	SetStealth_Parms.IsStealthed = IsStealthed;
	SetStealth_Parms.IsCamouflaged = IsCamouflaged;

	this->ProcessEvent ( pFnSetStealth, &SetStealth_Parms, NULL );
};

// Function ForgeGame.DVMeshAttachment.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVMeshAttachment::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 45510 ];

	ADVMeshAttachment_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVAbilityStrike.PlayAnim
// [0x00020102] 
// Parameters infos:

void ADVAbilityStrike::PlayAnim ( )
{
	static UFunction* pFnPlayAnim = NULL;

	if ( ! pFnPlayAnim )
		pFnPlayAnim = (UFunction*) UObject::GObjObjects()->Data[ 43563 ];

	ADVAbilityStrike_execPlayAnim_Parms PlayAnim_Parms;

	this->ProcessEvent ( pFnPlayAnim, &PlayAnim_Parms, NULL );
};

// Function ForgeGame.DVAbilityPanterasKiss.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityPanterasKiss::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43588 ];

	ADVAbilityPanterasKiss_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityPanterasKiss.Reset
// [0x00020002] 
// Parameters infos:

void ADVAbilityPanterasKiss::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 43587 ];

	ADVAbilityPanterasKiss_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function ForgeGame.DVAbilityPanterasKiss.DamageTick
// [0x00020002] 
// Parameters infos:

void ADVAbilityPanterasKiss::DamageTick ( )
{
	static UFunction* pFnDamageTick = NULL;

	if ( ! pFnDamageTick )
		pFnDamageTick = (UFunction*) UObject::GObjObjects()->Data[ 43586 ];

	ADVAbilityPanterasKiss_execDamageTick_Parms DamageTick_Parms;

	this->ProcessEvent ( pFnDamageTick, &DamageTick_Parms, NULL );
};

// Function ForgeGame.DVAbilityPanterasKiss.ModifyDefense
// [0x00420002] 
// Parameters infos:
// class UDVAttack*               IncomingAttack                 ( CPF_Parm )
// class ADVPawn*                 Defender                       ( CPF_Parm )
// TArray< struct FSDamage >      DamageTaken                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// int                            ProtectionDone                 ( CPF_Parm | CPF_OutParm )

void ADVAbilityPanterasKiss::ModifyDefense ( class UDVAttack* IncomingAttack, class ADVPawn* Defender, TArray< struct FSDamage >* DamageTaken, int* ProtectionDone )
{
	static UFunction* pFnModifyDefense = NULL;

	if ( ! pFnModifyDefense )
		pFnModifyDefense = (UFunction*) UObject::GObjObjects()->Data[ 43579 ];

	ADVAbilityPanterasKiss_execModifyDefense_Parms ModifyDefense_Parms;
	ModifyDefense_Parms.IncomingAttack = IncomingAttack;
	ModifyDefense_Parms.Defender = Defender;

	this->ProcessEvent ( pFnModifyDefense, &ModifyDefense_Parms, NULL );

	if ( DamageTaken )
		memcpy ( DamageTaken, &ModifyDefense_Parms.DamageTaken, 0xC );

	if ( ProtectionDone )
		*ProtectionDone = ModifyDefense_Parms.ProtectionDone;
};

// Function ForgeGame.DVAbilityPanterasKiss.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityPanterasKiss::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 43574 ];

	ADVAbilityPanterasKiss_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityPanterasKiss.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVAbilityPanterasKiss::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43573 ];

	ADVAbilityPanterasKiss_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVAbilityShadowShift.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityShadowShift::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43629 ];

	ADVAbilityShadowShift_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityShadowShift.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityShadowShift::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 43627 ];

	ADVAbilityShadowShift_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityDisorientingStrike.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityDisorientingStrike::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43646 ];

	ADVAbilityDisorientingStrike_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityDisorientingStrike.ModifyAttack
// [0x00020002] 
// Parameters infos:
// class UDVAttack*               OutGoingAttack                 ( CPF_Parm )

void ADVAbilityDisorientingStrike::ModifyAttack ( class UDVAttack* OutGoingAttack )
{
	static UFunction* pFnModifyAttack = NULL;

	if ( ! pFnModifyAttack )
		pFnModifyAttack = (UFunction*) UObject::GObjObjects()->Data[ 43644 ];

	ADVAbilityDisorientingStrike_execModifyAttack_Parms ModifyAttack_Parms;
	ModifyAttack_Parms.OutGoingAttack = OutGoingAttack;

	this->ProcessEvent ( pFnModifyAttack, &ModifyAttack_Parms, NULL );
};

// Function ForgeGame.DVAbilityDisorientingStrike.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityDisorientingStrike::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 43643 ];

	ADVAbilityDisorientingStrike_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityDisorientingStrike.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVAbilityDisorientingStrike::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43642 ];

	ADVAbilityDisorientingStrike_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVAbilityDisorientingStrike.PlayFireEffect
// [0x00020102] 
// Parameters infos:
// class ADVPawn*                 HitPawn                        ( CPF_Parm )

void ADVAbilityDisorientingStrike::PlayFireEffect ( class ADVPawn* HitPawn )
{
	static UFunction* pFnPlayFireEffect = NULL;

	if ( ! pFnPlayFireEffect )
		pFnPlayFireEffect = (UFunction*) UObject::GObjObjects()->Data[ 43640 ];

	ADVAbilityDisorientingStrike_execPlayFireEffect_Parms PlayFireEffect_Parms;
	PlayFireEffect_Parms.HitPawn = HitPawn;

	this->ProcessEvent ( pFnPlayFireEffect, &PlayFireEffect_Parms, NULL );
};

// Function ForgeGame.DVAbilityDisorientingStrike.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbilityDisorientingStrike::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 43638 ];

	ADVAbilityDisorientingStrike_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAbilityShadowLeap.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityShadowLeap::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43671 ];

	ADVAbilityShadowLeap_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityShadowLeap.ModifyAttack
// [0x00020002] 
// Parameters infos:
// class UDVAttack*               OutGoingAttack                 ( CPF_Parm )

void ADVAbilityShadowLeap::ModifyAttack ( class UDVAttack* OutGoingAttack )
{
	static UFunction* pFnModifyAttack = NULL;

	if ( ! pFnModifyAttack )
		pFnModifyAttack = (UFunction*) UObject::GObjObjects()->Data[ 43669 ];

	ADVAbilityShadowLeap_execModifyAttack_Parms ModifyAttack_Parms;
	ModifyAttack_Parms.OutGoingAttack = OutGoingAttack;

	this->ProcessEvent ( pFnModifyAttack, &ModifyAttack_Parms, NULL );
};

// Function ForgeGame.DVAbilityShadowLeap.PerformAbility
// [0x00880002] 
// Parameters infos:

void ADVAbilityShadowLeap::PerformAbility ( )
{
	static UFunction* pFnPerformAbility = NULL;

	if ( ! pFnPerformAbility )
		pFnPerformAbility = (UFunction*) UObject::GObjObjects()->Data[ 43663 ];

	ADVAbilityShadowLeap_execPerformAbility_Parms PerformAbility_Parms;

	this->ProcessEvent ( pFnPerformAbility, &PerformAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityShadowLeap.ReadyToActivate
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADVAbilityShadowLeap::ReadyToActivate ( )
{
	static UFunction* pFnReadyToActivate = NULL;

	if ( ! pFnReadyToActivate )
		pFnReadyToActivate = (UFunction*) UObject::GObjObjects()->Data[ 43661 ];

	ADVAbilityShadowLeap_execReadyToActivate_Parms ReadyToActivate_Parms;

	this->ProcessEvent ( pFnReadyToActivate, &ReadyToActivate_Parms, NULL );

	return ReadyToActivate_Parms.ReturnValue;
};

// Function ForgeGame.DVAbilityShadowLeap.PlayHitEffect
// [0x00020102] 
// Parameters infos:
// class ADVPawn*                 HitPawn                        ( CPF_Parm )

void ADVAbilityShadowLeap::PlayHitEffect ( class ADVPawn* HitPawn )
{
	static UFunction* pFnPlayHitEffect = NULL;

	if ( ! pFnPlayHitEffect )
		pFnPlayHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 43659 ];

	ADVAbilityShadowLeap_execPlayHitEffect_Parms PlayHitEffect_Parms;
	PlayHitEffect_Parms.HitPawn = HitPawn;

	this->ProcessEvent ( pFnPlayHitEffect, &PlayHitEffect_Parms, NULL );
};

// Function ForgeGame.DVAbilityShadowLeap.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVAbilityShadowLeap::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43658 ];

	ADVAbilityShadowLeap_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVAbilityShadowLeap.PlayFireEffect
// [0x00020102] 
// Parameters infos:
// class ADVPawn*                 HitPawn                        ( CPF_Parm )

void ADVAbilityShadowLeap::PlayFireEffect ( class ADVPawn* HitPawn )
{
	static UFunction* pFnPlayFireEffect = NULL;

	if ( ! pFnPlayFireEffect )
		pFnPlayFireEffect = (UFunction*) UObject::GObjObjects()->Data[ 43656 ];

	ADVAbilityShadowLeap_execPlayFireEffect_Parms PlayFireEffect_Parms;
	PlayFireEffect_Parms.HitPawn = HitPawn;

	this->ProcessEvent ( pFnPlayFireEffect, &PlayFireEffect_Parms, NULL );
};

// Function ForgeGame.DVAbilityShadowLeap.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbilityShadowLeap::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 43654 ];

	ADVAbilityShadowLeap_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAbilitySmokeCloud.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilitySmokeCloud::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43693 ];

	ADVAbilitySmokeCloud_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilitySmokeCloud.Reset
// [0x00020002] 
// Parameters infos:

void ADVAbilitySmokeCloud::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 43692 ];

	ADVAbilitySmokeCloud_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function ForgeGame.DVAbilitySmokeCloud.FireAbility
// [0x00880002] 
// Parameters infos:

void ADVAbilitySmokeCloud::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 43689 ];

	ADVAbilitySmokeCloud_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilitySmokeCloud.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVAbilitySmokeCloud::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43688 ];

	ADVAbilitySmokeCloud_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVAbilitySmokeCloud.ReadyToActivate
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADVAbilitySmokeCloud::ReadyToActivate ( )
{
	static UFunction* pFnReadyToActivate = NULL;

	if ( ! pFnReadyToActivate )
		pFnReadyToActivate = (UFunction*) UObject::GObjObjects()->Data[ 43686 ];

	ADVAbilitySmokeCloud_execReadyToActivate_Parms ReadyToActivate_Parms;

	this->ProcessEvent ( pFnReadyToActivate, &ReadyToActivate_Parms, NULL );

	return ReadyToActivate_Parms.ReturnValue;
};

// Function ForgeGame.DVProjectile.Explode
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADVProjectile::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 43902 ];

	ADVProjectile_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function ForgeGame.DVProjectile.Landed
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  FloorActor                     ( CPF_Parm )

void ADVProjectile::eventLanded ( struct FVector HitNormal, class AActor* FloorActor )
{
	static UFunction* pFnLanded = NULL;

	if ( ! pFnLanded )
		pFnLanded = (UFunction*) UObject::GObjObjects()->Data[ 43899 ];

	ADVProjectile_eventLanded_Parms Landed_Parms;
	memcpy ( &Landed_Parms.HitNormal, &HitNormal, 0xC );
	Landed_Parms.FloorActor = FloorActor;

	this->ProcessEvent ( pFnLanded, &Landed_Parms, NULL );
};

// Function ForgeGame.DVProjectile.ProjectileMisses
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADVPawn*                 Pawn                           ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ADVProjectile::ProjectileMisses ( class ADVPawn* Pawn, struct FVector HitLocation )
{
	static UFunction* pFnProjectileMisses = NULL;

	if ( ! pFnProjectileMisses )
		pFnProjectileMisses = (UFunction*) UObject::GObjObjects()->Data[ 43894 ];

	ADVProjectile_execProjectileMisses_Parms ProjectileMisses_Parms;
	ProjectileMisses_Parms.Pawn = Pawn;
	memcpy ( &ProjectileMisses_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnProjectileMisses, &ProjectileMisses_Parms, NULL );

	return ProjectileMisses_Parms.ReturnValue;
};

// Function ForgeGame.DVProjectile.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADVProjectile::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 43888 ];

	ADVProjectile_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function ForgeGame.DVProjectile.StopsProjectile
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AProjectile*             P                              ( CPF_Parm )

bool ADVProjectile::StopsProjectile ( class AProjectile* P )
{
	static UFunction* pFnStopsProjectile = NULL;

	if ( ! pFnStopsProjectile )
		pFnStopsProjectile = (UFunction*) UObject::GObjObjects()->Data[ 43885 ];

	ADVProjectile_execStopsProjectile_Parms StopsProjectile_Parms;
	StopsProjectile_Parms.P = P;

	this->ProcessEvent ( pFnStopsProjectile, &StopsProjectile_Parms, NULL );

	return StopsProjectile_Parms.ReturnValue;
};

// Function ForgeGame.DVProjectile.ProjectileHoming
// [0x00020102] 
// Parameters infos:

void ADVProjectile::ProjectileHoming ( )
{
	static UFunction* pFnProjectileHoming = NULL;

	if ( ! pFnProjectileHoming )
		pFnProjectileHoming = (UFunction*) UObject::GObjObjects()->Data[ 43884 ];

	ADVProjectile_execProjectileHoming_Parms ProjectileHoming_Parms;

	this->ProcessEvent ( pFnProjectileHoming, &ProjectileHoming_Parms, NULL );
};

// Function ForgeGame.DVProjectile.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVProjectile::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 43882 ];

	ADVProjectile_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVProjectile.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVProjectile::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43881 ];

	ADVProjectile_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVAbilityPoisonedArrow.Tick
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAbilityPoisonedArrow::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 43779 ];

	ADVAbilityPoisonedArrow_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAbilityPoisonedArrow.ProjectileHit
// [0x00820002] 
// Parameters infos:
// class ADVPawn*                 HitPawn                        ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// class ADVProjectile*           Projectile                     ( CPF_Parm )

void ADVAbilityPoisonedArrow::ProjectileHit ( class ADVPawn* HitPawn, struct FVector HitLocation, struct FVector HitNormal, class ADVProjectile* Projectile )
{
	static UFunction* pFnProjectileHit = NULL;

	if ( ! pFnProjectileHit )
		pFnProjectileHit = (UFunction*) UObject::GObjObjects()->Data[ 43773 ];

	ADVAbilityPoisonedArrow_execProjectileHit_Parms ProjectileHit_Parms;
	ProjectileHit_Parms.HitPawn = HitPawn;
	memcpy ( &ProjectileHit_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProjectileHit_Parms.HitNormal, &HitNormal, 0xC );
	ProjectileHit_Parms.Projectile = Projectile;

	this->ProcessEvent ( pFnProjectileHit, &ProjectileHit_Parms, NULL );
};

// Function ForgeGame.DVAbilityVolley.ProjectileHit
// [0x00020002] 
// Parameters infos:
// class ADVPawn*                 HitPawn                        ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// class ADVProjectile*           Projectile                     ( CPF_Parm )

void ADVAbilityVolley::ProjectileHit ( class ADVPawn* HitPawn, struct FVector HitLocation, struct FVector HitNormal, class ADVProjectile* Projectile )
{
	static UFunction* pFnProjectileHit = NULL;

	if ( ! pFnProjectileHit )
		pFnProjectileHit = (UFunction*) UObject::GObjObjects()->Data[ 43791 ];

	ADVAbilityVolley_execProjectileHit_Parms ProjectileHit_Parms;
	ProjectileHit_Parms.HitPawn = HitPawn;
	memcpy ( &ProjectileHit_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProjectileHit_Parms.HitNormal, &HitNormal, 0xC );
	ProjectileHit_Parms.Projectile = Projectile;

	this->ProcessEvent ( pFnProjectileHit, &ProjectileHit_Parms, NULL );
};

// Function ForgeGame.DVAbilityVolley.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityVolley::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 43788 ];

	ADVAbilityVolley_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityTrap.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityTrap::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43822 ];

	ADVAbilityTrap_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityTrap.ActivateTrap
// [0x00020002] 
// Parameters infos:
// struct FVector                 TrapLocation                   ( CPF_Parm )
// class ADVPawnHero*             OtherHero                      ( CPF_Parm )

void ADVAbilityTrap::ActivateTrap ( struct FVector TrapLocation, class ADVPawnHero* OtherHero )
{
	static UFunction* pFnActivateTrap = NULL;

	if ( ! pFnActivateTrap )
		pFnActivateTrap = (UFunction*) UObject::GObjObjects()->Data[ 43819 ];

	ADVAbilityTrap_execActivateTrap_Parms ActivateTrap_Parms;
	memcpy ( &ActivateTrap_Parms.TrapLocation, &TrapLocation, 0xC );
	ActivateTrap_Parms.OtherHero = OtherHero;

	this->ProcessEvent ( pFnActivateTrap, &ActivateTrap_Parms, NULL );
};

// Function ForgeGame.DVAbilityTrap.Reset
// [0x00020002] 
// Parameters infos:

void ADVAbilityTrap::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 43818 ];

	ADVAbilityTrap_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function ForgeGame.DVAbilityTrap.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityTrap::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 43813 ];

	ADVAbilityTrap_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityTrap.PlayFireEffect
// [0x00020102] 
// Parameters infos:
// class ADVPawn*                 HitPawn                        ( CPF_Parm )

void ADVAbilityTrap::PlayFireEffect ( class ADVPawn* HitPawn )
{
	static UFunction* pFnPlayFireEffect = NULL;

	if ( ! pFnPlayFireEffect )
		pFnPlayFireEffect = (UFunction*) UObject::GObjObjects()->Data[ 43811 ];

	ADVAbilityTrap_execPlayFireEffect_Parms PlayFireEffect_Parms;
	PlayFireEffect_Parms.HitPawn = HitPawn;

	this->ProcessEvent ( pFnPlayFireEffect, &PlayFireEffect_Parms, NULL );
};

// Function ForgeGame.DVAbilityTrap.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbilityTrap::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 43809 ];

	ADVAbilityTrap_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVTrap.Landed
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  FloorActor                     ( CPF_Parm )

void ADVTrap::eventLanded ( struct FVector HitNormal, class AActor* FloorActor )
{
	static UFunction* pFnLanded = NULL;

	if ( ! pFnLanded )
		pFnLanded = (UFunction*) UObject::GObjObjects()->Data[ 43955 ];

	ADVTrap_eventLanded_Parms Landed_Parms;
	memcpy ( &Landed_Parms.HitNormal, &HitNormal, 0xC );
	Landed_Parms.FloorActor = FloorActor;

	this->ProcessEvent ( pFnLanded, &Landed_Parms, NULL );
};

// Function ForgeGame.DVTrap.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVTrap::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 43952 ];

	ADVTrap_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVTrap.SetStealth
// [0x00020102] 
// Parameters infos:

void ADVTrap::SetStealth ( )
{
	static UFunction* pFnSetStealth = NULL;

	if ( ! pFnSetStealth )
		pFnSetStealth = (UFunction*) UObject::GObjObjects()->Data[ 43950 ];

	ADVTrap_execSetStealth_Parms SetStealth_Parms;

	this->ProcessEvent ( pFnSetStealth, &SetStealth_Parms, NULL );
};

// Function ForgeGame.DVTrap.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class USkeletalMeshComponent*  SkelComp                       ( CPF_Parm | CPF_EditInline )

void ADVTrap::eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp )
{
	static UFunction* pFnPostInitAnimTree = NULL;

	if ( ! pFnPostInitAnimTree )
		pFnPostInitAnimTree = (UFunction*) UObject::GObjObjects()->Data[ 43948 ];

	ADVTrap_eventPostInitAnimTree_Parms PostInitAnimTree_Parms;
	PostInitAnimTree_Parms.SkelComp = SkelComp;

	this->ProcessEvent ( pFnPostInitAnimTree, &PostInitAnimTree_Parms, NULL );
};

// Function ForgeGame.DVTrap.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVTrap::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43947 ];

	ADVTrap_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVTrap.PlayDrop
// [0x00020102] 
// Parameters infos:

void ADVTrap::PlayDrop ( )
{
	static UFunction* pFnPlayDrop = NULL;

	if ( ! pFnPlayDrop )
		pFnPlayDrop = (UFunction*) UObject::GObjObjects()->Data[ 43946 ];

	ADVTrap_execPlayDrop_Parms PlayDrop_Parms;

	this->ProcessEvent ( pFnPlayDrop, &PlayDrop_Parms, NULL );
};

// Function ForgeGame.DVTrap.PlayTigger
// [0x00020102] 
// Parameters infos:

void ADVTrap::PlayTigger ( )
{
	static UFunction* pFnPlayTigger = NULL;

	if ( ! pFnPlayTigger )
		pFnPlayTigger = (UFunction*) UObject::GObjObjects()->Data[ 43945 ];

	ADVTrap_execPlayTigger_Parms PlayTigger_Parms;

	this->ProcessEvent ( pFnPlayTigger, &PlayTigger_Parms, NULL );
};

// Function ForgeGame.DVTrap.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVTrap::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 43943 ];

	ADVTrap_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAbilityCaltrips.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityCaltrips::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43829 ];

	ADVAbilityCaltrips_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityCaltrips.ActivateTrap
// [0x00020002] 
// Parameters infos:
// struct FVector                 TrapLocation                   ( CPF_Parm )
// class ADVPawnHero*             OtherHero                      ( CPF_Parm )

void ADVAbilityCaltrips::ActivateTrap ( struct FVector TrapLocation, class ADVPawnHero* OtherHero )
{
	static UFunction* pFnActivateTrap = NULL;

	if ( ! pFnActivateTrap )
		pFnActivateTrap = (UFunction*) UObject::GObjObjects()->Data[ 43826 ];

	ADVAbilityCaltrips_execActivateTrap_Parms ActivateTrap_Parms;
	memcpy ( &ActivateTrap_Parms.TrapLocation, &TrapLocation, 0xC );
	ActivateTrap_Parms.OtherHero = OtherHero;

	this->ProcessEvent ( pFnActivateTrap, &ActivateTrap_Parms, NULL );
};

// Function ForgeGame.DVAbilityBlindingArrow.ProjectileHit
// [0x00020002] 
// Parameters infos:
// class ADVPawn*                 HitPawn                        ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// class ADVProjectile*           Projectile                     ( CPF_Parm )

void ADVAbilityBlindingArrow::ProjectileHit ( class ADVPawn* HitPawn, struct FVector HitLocation, struct FVector HitNormal, class ADVProjectile* Projectile )
{
	static UFunction* pFnProjectileHit = NULL;

	if ( ! pFnProjectileHit )
		pFnProjectileHit = (UFunction*) UObject::GObjObjects()->Data[ 43833 ];

	ADVAbilityBlindingArrow_execProjectileHit_Parms ProjectileHit_Parms;
	ProjectileHit_Parms.HitPawn = HitPawn;
	memcpy ( &ProjectileHit_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProjectileHit_Parms.HitNormal, &HitNormal, 0xC );
	ProjectileHit_Parms.Projectile = Projectile;

	this->ProcessEvent ( pFnProjectileHit, &ProjectileHit_Parms, NULL );
};

// Function ForgeGame.DVAbilityExplosiveTrap.ActivateTrap
// [0x00020002] 
// Parameters infos:
// struct FVector                 TrapLocation                   ( CPF_Parm )
// class ADVPawnHero*             OtherHero                      ( CPF_Parm )

void ADVAbilityExplosiveTrap::ActivateTrap ( struct FVector TrapLocation, class ADVPawnHero* OtherHero )
{
	static UFunction* pFnActivateTrap = NULL;

	if ( ! pFnActivateTrap )
		pFnActivateTrap = (UFunction*) UObject::GObjObjects()->Data[ 43864 ];

	ADVAbilityExplosiveTrap_execActivateTrap_Parms ActivateTrap_Parms;
	memcpy ( &ActivateTrap_Parms.TrapLocation, &TrapLocation, 0xC );
	ActivateTrap_Parms.OtherHero = OtherHero;

	this->ProcessEvent ( pFnActivateTrap, &ActivateTrap_Parms, NULL );
};

// Function ForgeGame.DVAbilityCurseOfFlame.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityCurseOfFlame::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 44015 ];

	ADVAbilityCurseOfFlame_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityCurseOfFlame.GetDescriptionNumbers
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class ADVAbility*              AbilityArchetype               ( CPF_Parm )
// unsigned char                  TheClass                       ( CPF_Parm )
// struct FString                 StaticFriendlyColor            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 StaticEnemyColor               ( CPF_Parm | CPF_NeedCtorLink )

struct FString ADVAbilityCurseOfFlame::GetDescriptionNumbers ( class ADVAbility* AbilityArchetype, unsigned char TheClass, struct FString StaticFriendlyColor, struct FString StaticEnemyColor )
{
	static UFunction* pFnGetDescriptionNumbers = NULL;

	if ( ! pFnGetDescriptionNumbers )
		pFnGetDescriptionNumbers = (UFunction*) UObject::GObjObjects()->Data[ 44007 ];

	ADVAbilityCurseOfFlame_execGetDescriptionNumbers_Parms GetDescriptionNumbers_Parms;
	GetDescriptionNumbers_Parms.AbilityArchetype = AbilityArchetype;
	GetDescriptionNumbers_Parms.TheClass = TheClass;
	memcpy ( &GetDescriptionNumbers_Parms.StaticFriendlyColor, &StaticFriendlyColor, 0xC );
	memcpy ( &GetDescriptionNumbers_Parms.StaticEnemyColor, &StaticEnemyColor, 0xC );

	this->ProcessEvent ( pFnGetDescriptionNumbers, &GetDescriptionNumbers_Parms, NULL );

	return GetDescriptionNumbers_Parms.ReturnValue;
};

// Function ForgeGame.DVAbilityCurseOfFlame.Detonate
// [0x00020002] 
// Parameters infos:

void ADVAbilityCurseOfFlame::Detonate ( )
{
	static UFunction* pFnDetonate = NULL;

	if ( ! pFnDetonate )
		pFnDetonate = (UFunction*) UObject::GObjObjects()->Data[ 44005 ];

	ADVAbilityCurseOfFlame_execDetonate_Parms Detonate_Parms;

	this->ProcessEvent ( pFnDetonate, &Detonate_Parms, NULL );
};

// Function ForgeGame.DVAbilityCurseOfFlame.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityCurseOfFlame::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44004 ];

	ADVAbilityCurseOfFlame_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityFlameBurst.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityFlameBurst::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44028 ];

	ADVAbilityFlameBurst_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityFlameBurst.PlayFireEffect
// [0x00020102] 
// Parameters infos:
// class ADVPawn*                 RepHitPawn                     ( CPF_Parm )

void ADVAbilityFlameBurst::PlayFireEffect ( class ADVPawn* RepHitPawn )
{
	static UFunction* pFnPlayFireEffect = NULL;

	if ( ! pFnPlayFireEffect )
		pFnPlayFireEffect = (UFunction*) UObject::GObjObjects()->Data[ 44024 ];

	ADVAbilityFlameBurst_execPlayFireEffect_Parms PlayFireEffect_Parms;
	PlayFireEffect_Parms.RepHitPawn = RepHitPawn;

	this->ProcessEvent ( pFnPlayFireEffect, &PlayFireEffect_Parms, NULL );
};

// Function ForgeGame.DVAbilityFlameBurst.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbilityFlameBurst::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 44022 ];

	ADVAbilityFlameBurst_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAbilityMoltenArmor.ModifyDefense
// [0x00420002] 
// Parameters infos:
// class UDVAttack*               IncomingAttack                 ( CPF_Parm )
// class ADVPawn*                 Defender                       ( CPF_Parm )
// TArray< struct FSDamage >      DamageTaken                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// int                            ProtectionDone                 ( CPF_Parm | CPF_OutParm )

void ADVAbilityMoltenArmor::ModifyDefense ( class UDVAttack* IncomingAttack, class ADVPawn* Defender, TArray< struct FSDamage >* DamageTaken, int* ProtectionDone )
{
	static UFunction* pFnModifyDefense = NULL;

	if ( ! pFnModifyDefense )
		pFnModifyDefense = (UFunction*) UObject::GObjObjects()->Data[ 44062 ];

	ADVAbilityMoltenArmor_execModifyDefense_Parms ModifyDefense_Parms;
	ModifyDefense_Parms.IncomingAttack = IncomingAttack;
	ModifyDefense_Parms.Defender = Defender;

	this->ProcessEvent ( pFnModifyDefense, &ModifyDefense_Parms, NULL );

	if ( DamageTaken )
		memcpy ( DamageTaken, &ModifyDefense_Parms.DamageTaken, 0xC );

	if ( ProtectionDone )
		*ProtectionDone = ModifyDefense_Parms.ProtectionDone;
};

// Function ForgeGame.DVAbilityMoltenArmor.StopAbility
// [0x00020002] 
// Parameters infos:

void ADVAbilityMoltenArmor::StopAbility ( )
{
	static UFunction* pFnStopAbility = NULL;

	if ( ! pFnStopAbility )
		pFnStopAbility = (UFunction*) UObject::GObjObjects()->Data[ 44061 ];

	ADVAbilityMoltenArmor_execStopAbility_Parms StopAbility_Parms;

	this->ProcessEvent ( pFnStopAbility, &StopAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityMoltenArmor.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityMoltenArmor::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44060 ];

	ADVAbilityMoltenArmor_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityMoltenArmor.PlayFireEffect
// [0x00020102] 
// Parameters infos:
// class ADVPawn*                 RepHitPawn                     ( CPF_Parm )

void ADVAbilityMoltenArmor::PlayFireEffect ( class ADVPawn* RepHitPawn )
{
	static UFunction* pFnPlayFireEffect = NULL;

	if ( ! pFnPlayFireEffect )
		pFnPlayFireEffect = (UFunction*) UObject::GObjObjects()->Data[ 44056 ];

	ADVAbilityMoltenArmor_execPlayFireEffect_Parms PlayFireEffect_Parms;
	PlayFireEffect_Parms.RepHitPawn = RepHitPawn;

	this->ProcessEvent ( pFnPlayFireEffect, &PlayFireEffect_Parms, NULL );
};

// Function ForgeGame.DVAbilityMoltenArmor.PlayFinishedCast
// [0x00020102] 
// Parameters infos:

void ADVAbilityMoltenArmor::PlayFinishedCast ( )
{
	static UFunction* pFnPlayFinishedCast = NULL;

	if ( ! pFnPlayFinishedCast )
		pFnPlayFinishedCast = (UFunction*) UObject::GObjObjects()->Data[ 44054 ];

	ADVAbilityMoltenArmor_execPlayFinishedCast_Parms PlayFinishedCast_Parms;

	this->ProcessEvent ( pFnPlayFinishedCast, &PlayFinishedCast_Parms, NULL );
};

// Function ForgeGame.DVAbilityMoltenArmor.PlayCastEffect
// [0x00020102] 
// Parameters infos:

void ADVAbilityMoltenArmor::PlayCastEffect ( )
{
	static UFunction* pFnPlayCastEffect = NULL;

	if ( ! pFnPlayCastEffect )
		pFnPlayCastEffect = (UFunction*) UObject::GObjObjects()->Data[ 44051 ];

	ADVAbilityMoltenArmor_execPlayCastEffect_Parms PlayCastEffect_Parms;

	this->ProcessEvent ( pFnPlayCastEffect, &PlayCastEffect_Parms, NULL );
};

// Function ForgeGame.DVAbilityMoltenArmor.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbilityMoltenArmor::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 44049 ];

	ADVAbilityMoltenArmor_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAbilityWallOfFlame.Reset
// [0x00020002] 
// Parameters infos:

void ADVAbilityWallOfFlame::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 44089 ];

	ADVAbilityWallOfFlame_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function ForgeGame.DVAbilityWallOfFlame.FireAbility
// [0x00880002] 
// Parameters infos:

void ADVAbilityWallOfFlame::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44077 ];

	ADVAbilityWallOfFlame_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVWallOfFlame_C.SetParticleSystemForAlignment
// [0x00024102] 
// Parameters infos:
// unsigned long                  ForceUpdate                    ( CPF_OptionalParm | CPF_Parm )

void ADVWallOfFlame_C::SetParticleSystemForAlignment ( unsigned long ForceUpdate )
{
	static UFunction* pFnSetParticleSystemForAlignment = NULL;

	if ( ! pFnSetParticleSystemForAlignment )
		pFnSetParticleSystemForAlignment = (UFunction*) UObject::GObjObjects()->Data[ 44163 ];

	ADVWallOfFlame_C_execSetParticleSystemForAlignment_Parms SetParticleSystemForAlignment_Parms;
	SetParticleSystemForAlignment_Parms.ForceUpdate = ForceUpdate;

	this->ProcessEvent ( pFnSetParticleSystemForAlignment, &SetParticleSystemForAlignment_Parms, NULL );
};

// Function ForgeGame.DVWallOfFlame_C.Tick
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVWallOfFlame_C::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44158 ];

	ADVWallOfFlame_C_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVWallOfFlame_C.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVWallOfFlame_C::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 44157 ];

	ADVWallOfFlame_C_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVWallOfFlame_C.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVWallOfFlame_C::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 44155 ];

	ADVWallOfFlame_C_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAbilityFireStorm.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityFireStorm::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 44106 ];

	ADVAbilityFireStorm_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityFireStorm.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAbilityFireStorm::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44103 ];

	ADVAbilityFireStorm_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAbilityFireStorm.StopAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityFireStorm::StopAbility ( )
{
	static UFunction* pFnStopAbility = NULL;

	if ( ! pFnStopAbility )
		pFnStopAbility = (UFunction*) UObject::GObjObjects()->Data[ 44102 ];

	ADVAbilityFireStorm_execStopAbility_Parms StopAbility_Parms;

	this->ProcessEvent ( pFnStopAbility, &StopAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityFireStorm.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityFireStorm::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44101 ];

	ADVAbilityFireStorm_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityFireStorm.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbilityFireStorm::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 44099 ];

	ADVAbilityFireStorm_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpiritualBalance.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilitySpiritualBalance::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44185 ];

	ADVAbilitySpiritualBalance_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpiritualBalance.PlayHitEffect
// [0x00020102] 
// Parameters infos:
// class ADVPawn*                 HitPawn                        ( CPF_Parm )

void ADVAbilitySpiritualBalance::PlayHitEffect ( class ADVPawn* HitPawn )
{
	static UFunction* pFnPlayHitEffect = NULL;

	if ( ! pFnPlayHitEffect )
		pFnPlayHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 44182 ];

	ADVAbilitySpiritualBalance_execPlayHitEffect_Parms PlayHitEffect_Parms;
	PlayHitEffect_Parms.HitPawn = HitPawn;

	this->ProcessEvent ( pFnPlayHitEffect, &PlayHitEffect_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpiritualBond.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilitySpiritualBond::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 44201 ];

	ADVAbilitySpiritualBond_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpiritualBond.UpdateBeamEmitter
// [0x00020102] 
// Parameters infos:
// struct FVector                 EndLocation                    ( CPF_Parm )

void ADVAbilitySpiritualBond::UpdateBeamEmitter ( struct FVector EndLocation )
{
	static UFunction* pFnUpdateBeamEmitter = NULL;

	if ( ! pFnUpdateBeamEmitter )
		pFnUpdateBeamEmitter = (UFunction*) UObject::GObjObjects()->Data[ 44199 ];

	ADVAbilitySpiritualBond_execUpdateBeamEmitter_Parms UpdateBeamEmitter_Parms;
	memcpy ( &UpdateBeamEmitter_Parms.EndLocation, &EndLocation, 0xC );

	this->ProcessEvent ( pFnUpdateBeamEmitter, &UpdateBeamEmitter_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpiritualBond.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAbilitySpiritualBond::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44197 ];

	ADVAbilitySpiritualBond_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpiritualBond.Deactivate
// [0x00020002] 
// Parameters infos:

void ADVAbilitySpiritualBond::Deactivate ( )
{
	static UFunction* pFnDeactivate = NULL;

	if ( ! pFnDeactivate )
		pFnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 44196 ];

	ADVAbilitySpiritualBond_execDeactivate_Parms Deactivate_Parms;

	this->ProcessEvent ( pFnDeactivate, &Deactivate_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpiritualBond.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilitySpiritualBond::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44195 ];

	ADVAbilitySpiritualBond_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpiritualBond.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVAbilitySpiritualBond::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 44194 ];

	ADVAbilitySpiritualBond_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpiritualBurden.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilitySpiritualBurden::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 44215 ];

	ADVAbilitySpiritualBurden_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpiritualBurden.Reset
// [0x00020002] 
// Parameters infos:

void ADVAbilitySpiritualBurden::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 44214 ];

	ADVAbilitySpiritualBurden_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpiritualBurden.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAbilitySpiritualBurden::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44212 ];

	ADVAbilitySpiritualBurden_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpiritualBurden.StopAbility
// [0x00020002] 
// Parameters infos:

void ADVAbilitySpiritualBurden::StopAbility ( )
{
	static UFunction* pFnStopAbility = NULL;

	if ( ! pFnStopAbility )
		pFnStopAbility = (UFunction*) UObject::GObjObjects()->Data[ 44211 ];

	ADVAbilitySpiritualBurden_execStopAbility_Parms StopAbility_Parms;

	this->ProcessEvent ( pFnStopAbility, &StopAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpiritualBurden.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilitySpiritualBurden::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44210 ];

	ADVAbilitySpiritualBurden_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilitySpiritualBurden.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbilitySpiritualBurden::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 44208 ];

	ADVAbilitySpiritualBurden_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAbilityBlessedAura.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityBlessedAura::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44231 ];

	ADVAbilityBlessedAura_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityBlessedAura.PlayFireEffect
// [0x00020102] 
// Parameters infos:
// class ADVPawn*                 HitPawn                        ( CPF_Parm )

void ADVAbilityBlessedAura::PlayFireEffect ( class ADVPawn* HitPawn )
{
	static UFunction* pFnPlayFireEffect = NULL;

	if ( ! pFnPlayFireEffect )
		pFnPlayFireEffect = (UFunction*) UObject::GObjObjects()->Data[ 44226 ];

	ADVAbilityBlessedAura_execPlayFireEffect_Parms PlayFireEffect_Parms;
	PlayFireEffect_Parms.HitPawn = HitPawn;

	this->ProcessEvent ( pFnPlayFireEffect, &PlayFireEffect_Parms, NULL );
};

// Function ForgeGame.DVAbilityBlessedAura.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbilityBlessedAura::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 44224 ];

	ADVAbilityBlessedAura_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAbilityHeal.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityHeal::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44236 ];

	ADVAbilityHeal_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilitySelf.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilitySelf::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44243 ];

	ADVAbilitySelf_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityDomeOfProtection.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityDomeOfProtection::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 44315 ];

	ADVAbilityDomeOfProtection_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityDomeOfProtection.Reset
// [0x00020002] 
// Parameters infos:

void ADVAbilityDomeOfProtection::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 44314 ];

	ADVAbilityDomeOfProtection_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function ForgeGame.DVAbilityDomeOfProtection.DomeKilled
// [0x00020002] 
// Parameters infos:

void ADVAbilityDomeOfProtection::DomeKilled ( )
{
	static UFunction* pFnDomeKilled = NULL;

	if ( ! pFnDomeKilled )
		pFnDomeKilled = (UFunction*) UObject::GObjObjects()->Data[ 44312 ];

	ADVAbilityDomeOfProtection_execDomeKilled_Parms DomeKilled_Parms;

	this->ProcessEvent ( pFnDomeKilled, &DomeKilled_Parms, NULL );
};

// Function ForgeGame.DVAbilityDomeOfProtection.ModifyDefense
// [0x00420002] 
// Parameters infos:
// class UDVAttack*               IncomingAttack                 ( CPF_Parm )
// class ADVPawn*                 Defender                       ( CPF_Parm )
// TArray< struct FSDamage >      DamageTaken                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// int                            ProtectionDone                 ( CPF_Parm | CPF_OutParm )

void ADVAbilityDomeOfProtection::ModifyDefense ( class UDVAttack* IncomingAttack, class ADVPawn* Defender, TArray< struct FSDamage >* DamageTaken, int* ProtectionDone )
{
	static UFunction* pFnModifyDefense = NULL;

	if ( ! pFnModifyDefense )
		pFnModifyDefense = (UFunction*) UObject::GObjObjects()->Data[ 44303 ];

	ADVAbilityDomeOfProtection_execModifyDefense_Parms ModifyDefense_Parms;
	ModifyDefense_Parms.IncomingAttack = IncomingAttack;
	ModifyDefense_Parms.Defender = Defender;

	this->ProcessEvent ( pFnModifyDefense, &ModifyDefense_Parms, NULL );

	if ( DamageTaken )
		memcpy ( DamageTaken, &ModifyDefense_Parms.DamageTaken, 0xC );

	if ( ProtectionDone )
		*ProtectionDone = ModifyDefense_Parms.ProtectionDone;
};

// Function ForgeGame.DVAbilityDomeOfProtection.FireAbility
// [0x00880002] 
// Parameters infos:

void ADVAbilityDomeOfProtection::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44299 ];

	ADVAbilityDomeOfProtection_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVDomeOfProtection_C.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADVDomeOfProtection_C::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 44369 ];

	ADVDomeOfProtection_C_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVDomeOfProtection_C.UnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void ADVDomeOfProtection_C::eventUnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 44366 ];

	ADVDomeOfProtection_C_eventUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function ForgeGame.DVDomeOfProtection_C.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADVDomeOfProtection_C::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 44360 ];

	ADVDomeOfProtection_C_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function ForgeGame.DVDomeOfProtection_C.SetParticleSystemForAlignment
// [0x00024102] 
// Parameters infos:
// unsigned long                  ForceUpdate                    ( CPF_OptionalParm | CPF_Parm )

void ADVDomeOfProtection_C::SetParticleSystemForAlignment ( unsigned long ForceUpdate )
{
	static UFunction* pFnSetParticleSystemForAlignment = NULL;

	if ( ! pFnSetParticleSystemForAlignment )
		pFnSetParticleSystemForAlignment = (UFunction*) UObject::GObjObjects()->Data[ 44357 ];

	ADVDomeOfProtection_C_execSetParticleSystemForAlignment_Parms SetParticleSystemForAlignment_Parms;
	SetParticleSystemForAlignment_Parms.ForceUpdate = ForceUpdate;

	this->ProcessEvent ( pFnSetParticleSystemForAlignment, &SetParticleSystemForAlignment_Parms, NULL );
};

// Function ForgeGame.DVDomeOfProtection_C.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVDomeOfProtection_C::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44355 ];

	ADVDomeOfProtection_C_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVDomeOfProtection_C.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVDomeOfProtection_C::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 44354 ];

	ADVDomeOfProtection_C_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVDomeOfProtection_C.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVDomeOfProtection_C::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 44352 ];

	ADVDomeOfProtection_C_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAbilitySelfAOE.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilitySelfAOE::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44390 ];

	ADVAbilitySelfAOE_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilitySelfAOE.PlayFireEffect
// [0x00020102] 
// Parameters infos:
// class ADVPawn*                 RepHitPawn                     ( CPF_Parm )

void ADVAbilitySelfAOE::PlayFireEffect ( class ADVPawn* RepHitPawn )
{
	static UFunction* pFnPlayFireEffect = NULL;

	if ( ! pFnPlayFireEffect )
		pFnPlayFireEffect = (UFunction*) UObject::GObjObjects()->Data[ 44386 ];

	ADVAbilitySelfAOE_execPlayFireEffect_Parms PlayFireEffect_Parms;
	PlayFireEffect_Parms.RepHitPawn = RepHitPawn;

	this->ProcessEvent ( pFnPlayFireEffect, &PlayFireEffect_Parms, NULL );
};

// Function ForgeGame.DVAbilitySelfAOE.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbilitySelfAOE::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 44384 ];

	ADVAbilitySelfAOE_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAbilityVengeance.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityVengeance::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 44403 ];

	ADVAbilityVengeance_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityVengeance.Reset
// [0x00020002] 
// Parameters infos:

void ADVAbilityVengeance::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 44402 ];

	ADVAbilityVengeance_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function ForgeGame.DVAbilityVengeance.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAbilityVengeance::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44400 ];

	ADVAbilityVengeance_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAbilityVengeance.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityVengeance::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44398 ];

	ADVAbilityVengeance_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityShockwave.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityShockwave::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44409 ];

	ADVAbilityShockwave_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityChargingLeap.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityChargingLeap::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 44427 ];

	ADVAbilityChargingLeap_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityChargingLeap.HitTarget
// [0x00020002] 
// Parameters infos:

void ADVAbilityChargingLeap::HitTarget ( )
{
	static UFunction* pFnHitTarget = NULL;

	if ( ! pFnHitTarget )
		pFnHitTarget = (UFunction*) UObject::GObjObjects()->Data[ 44425 ];

	ADVAbilityChargingLeap_execHitTarget_Parms HitTarget_Parms;

	this->ProcessEvent ( pFnHitTarget, &HitTarget_Parms, NULL );
};

// Function ForgeGame.DVAbilityChargingLeap.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAbilityChargingLeap::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44423 ];

	ADVAbilityChargingLeap_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAbilityChargingLeap.PerformAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityChargingLeap::PerformAbility ( )
{
	static UFunction* pFnPerformAbility = NULL;

	if ( ! pFnPerformAbility )
		pFnPerformAbility = (UFunction*) UObject::GObjObjects()->Data[ 44422 ];

	ADVAbilityChargingLeap_execPerformAbility_Parms PerformAbility_Parms;

	this->ProcessEvent ( pFnPerformAbility, &PerformAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityChargingLeap.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVAbilityChargingLeap::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 44421 ];

	ADVAbilityChargingLeap_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVAbilityChargingLeap.ReplicatedEvent
// [0x00020102] 
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbilityChargingLeap::ReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 44419 ];

	ADVAbilityChargingLeap_execReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAbilityShieldStorm.TriggerTouch
// [0x00020002] 
// Parameters infos:
// class ADVPawn*                 OtherPawn                      ( CPF_Parm )

void ADVAbilityShieldStorm::TriggerTouch ( class ADVPawn* OtherPawn )
{
	static UFunction* pFnTriggerTouch = NULL;

	if ( ! pFnTriggerTouch )
		pFnTriggerTouch = (UFunction*) UObject::GObjObjects()->Data[ 44445 ];

	ADVAbilityShieldStorm_execTriggerTouch_Parms TriggerTouch_Parms;
	TriggerTouch_Parms.OtherPawn = OtherPawn;

	this->ProcessEvent ( pFnTriggerTouch, &TriggerTouch_Parms, NULL );
};

// Function ForgeGame.DVAbilityShieldStorm.Tick
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAbilityShieldStorm::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44442 ];

	ADVAbilityShieldStorm_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAbilityShieldStorm.Deactivate
// [0x00020002] 
// Parameters infos:

void ADVAbilityShieldStorm::Deactivate ( )
{
	static UFunction* pFnDeactivate = NULL;

	if ( ! pFnDeactivate )
		pFnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 44441 ];

	ADVAbilityShieldStorm_execDeactivate_Parms Deactivate_Parms;

	this->ProcessEvent ( pFnDeactivate, &Deactivate_Parms, NULL );
};

// Function ForgeGame.DVAbilityShieldStorm.PerformAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityShieldStorm::PerformAbility ( )
{
	static UFunction* pFnPerformAbility = NULL;

	if ( ! pFnPerformAbility )
		pFnPerformAbility = (UFunction*) UObject::GObjObjects()->Data[ 44438 ];

	ADVAbilityShieldStorm_execPerformAbility_Parms PerformAbility_Parms;

	this->ProcessEvent ( pFnPerformAbility, &PerformAbility_Parms, NULL );
};

// Function ForgeGame.DVTriggerShieldStorm.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVTriggerShieldStorm::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 46524 ];

	ADVTriggerShieldStorm_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAbilityRaiseMorale.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityRaiseMorale::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 44472 ];

	ADVAbilityRaiseMorale_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityRaiseMorale.PerTickEffect
// [0x00824002] 
// Parameters infos:
// class ADVPawn*                 CurPawn                        ( CPF_Parm )
// unsigned long                  SecondRun                      ( CPF_OptionalParm | CPF_Parm )

void ADVAbilityRaiseMorale::PerTickEffect ( class ADVPawn* CurPawn, unsigned long SecondRun )
{
	static UFunction* pFnPerTickEffect = NULL;

	if ( ! pFnPerTickEffect )
		pFnPerTickEffect = (UFunction*) UObject::GObjObjects()->Data[ 44465 ];

	ADVAbilityRaiseMorale_execPerTickEffect_Parms PerTickEffect_Parms;
	PerTickEffect_Parms.CurPawn = CurPawn;
	PerTickEffect_Parms.SecondRun = SecondRun;

	this->ProcessEvent ( pFnPerTickEffect, &PerTickEffect_Parms, NULL );
};

// Function ForgeGame.DVAbilityRaiseMorale.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityRaiseMorale::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44464 ];

	ADVAbilityRaiseMorale_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityStandGround.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityStandGround::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 44487 ];

	ADVAbilityStandGround_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityStandGround.ModifyDefense
// [0x00420002] 
// Parameters infos:
// class UDVAttack*               IncomingAttack                 ( CPF_Parm )
// class ADVPawn*                 Defender                       ( CPF_Parm )
// TArray< struct FSDamage >      DamageTaken                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// int                            ProtectionDone                 ( CPF_Parm | CPF_OutParm )

void ADVAbilityStandGround::ModifyDefense ( class UDVAttack* IncomingAttack, class ADVPawn* Defender, TArray< struct FSDamage >* DamageTaken, int* ProtectionDone )
{
	static UFunction* pFnModifyDefense = NULL;

	if ( ! pFnModifyDefense )
		pFnModifyDefense = (UFunction*) UObject::GObjObjects()->Data[ 44481 ];

	ADVAbilityStandGround_execModifyDefense_Parms ModifyDefense_Parms;
	ModifyDefense_Parms.IncomingAttack = IncomingAttack;
	ModifyDefense_Parms.Defender = Defender;

	this->ProcessEvent ( pFnModifyDefense, &ModifyDefense_Parms, NULL );

	if ( DamageTaken )
		memcpy ( DamageTaken, &ModifyDefense_Parms.DamageTaken, 0xC );

	if ( ProtectionDone )
		*ProtectionDone = ModifyDefense_Parms.ProtectionDone;
};

// Function ForgeGame.DVAbilityStandGround.Interrupt
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  SelfInterrupt                  ( CPF_Parm )

bool ADVAbilityStandGround::Interrupt ( unsigned long SelfInterrupt )
{
	static UFunction* pFnInterrupt = NULL;

	if ( ! pFnInterrupt )
		pFnInterrupt = (UFunction*) UObject::GObjObjects()->Data[ 44478 ];

	ADVAbilityStandGround_execInterrupt_Parms Interrupt_Parms;
	Interrupt_Parms.SelfInterrupt = SelfInterrupt;

	this->ProcessEvent ( pFnInterrupt, &Interrupt_Parms, NULL );

	return Interrupt_Parms.ReturnValue;
};

// Function ForgeGame.DVAbilityStandGround.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityStandGround::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44477 ];

	ADVAbilityStandGround_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityStandGround.PerformAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityStandGround::PerformAbility ( )
{
	static UFunction* pFnPerformAbility = NULL;

	if ( ! pFnPerformAbility )
		pFnPerformAbility = (UFunction*) UObject::GObjObjects()->Data[ 44476 ];

	ADVAbilityStandGround_execPerformAbility_Parms PerformAbility_Parms;

	this->ProcessEvent ( pFnPerformAbility, &PerformAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityProtectAllies.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityProtectAllies::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 44500 ];

	ADVAbilityProtectAllies_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityProtectAllies.PerTickEffect
// [0x00824002] 
// Parameters infos:
// class ADVPawn*                 CurPawn                        ( CPF_Parm )
// unsigned long                  SecondRun                      ( CPF_OptionalParm | CPF_Parm )

void ADVAbilityProtectAllies::PerTickEffect ( class ADVPawn* CurPawn, unsigned long SecondRun )
{
	static UFunction* pFnPerTickEffect = NULL;

	if ( ! pFnPerTickEffect )
		pFnPerTickEffect = (UFunction*) UObject::GObjObjects()->Data[ 44493 ];

	ADVAbilityProtectAllies_execPerTickEffect_Parms PerTickEffect_Parms;
	PerTickEffect_Parms.CurPawn = CurPawn;
	PerTickEffect_Parms.SecondRun = SecondRun;

	this->ProcessEvent ( pFnPerTickEffect, &PerTickEffect_Parms, NULL );
};

// Function ForgeGame.DVAbilityProtectAllies.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityProtectAllies::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44492 ];

	ADVAbilityProtectAllies_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityRavagerAttack.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityRavagerAttack::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44554 ];

	ADVAbilityRavagerAttack_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityRavagerAttack.PlayFireEffect
// [0x00020102] 
// Parameters infos:
// class ADVPawn*                 RepHitPawnFire                 ( CPF_Parm )

void ADVAbilityRavagerAttack::PlayFireEffect ( class ADVPawn* RepHitPawnFire )
{
	static UFunction* pFnPlayFireEffect = NULL;

	if ( ! pFnPlayFireEffect )
		pFnPlayFireEffect = (UFunction*) UObject::GObjObjects()->Data[ 44550 ];

	ADVAbilityRavagerAttack_execPlayFireEffect_Parms PlayFireEffect_Parms;
	PlayFireEffect_Parms.RepHitPawnFire = RepHitPawnFire;

	this->ProcessEvent ( pFnPlayFireEffect, &PlayFireEffect_Parms, NULL );
};

// Function ForgeGame.DVAbilityRavagerAttack.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVAbilityRavagerAttack::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 44549 ];

	ADVAbilityRavagerAttack_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVAbilityRavagerAttack.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbilityRavagerAttack::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 44547 ];

	ADVAbilityRavagerAttack_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAbilityRavagerFocus.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityRavagerFocus::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44558 ];

	ADVAbilityRavagerFocus_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityHook.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVAbilityHook::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 44579 ];

	ADVAbilityHook_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVAbilityHook.PullPawn
// [0x00020102] 
// Parameters infos:

void ADVAbilityHook::PullPawn ( )
{
	static UFunction* pFnPullPawn = NULL;

	if ( ! pFnPullPawn )
		pFnPullPawn = (UFunction*) UObject::GObjObjects()->Data[ 44578 ];

	ADVAbilityHook_execPullPawn_Parms PullPawn_Parms;

	this->ProcessEvent ( pFnPullPawn, &PullPawn_Parms, NULL );
};

// Function ForgeGame.DVAbilityHook.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAbilityHook::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44576 ];

	ADVAbilityHook_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAbilityHook.HookEnded
// [0x00020002] 
// Parameters infos:

void ADVAbilityHook::HookEnded ( )
{
	static UFunction* pFnHookEnded = NULL;

	if ( ! pFnHookEnded )
		pFnHookEnded = (UFunction*) UObject::GObjObjects()->Data[ 44575 ];

	ADVAbilityHook_execHookEnded_Parms HookEnded_Parms;

	this->ProcessEvent ( pFnHookEnded, &HookEnded_Parms, NULL );
};

// Function ForgeGame.DVAbilityHook.ProjectileHit
// [0x00020002] 
// Parameters infos:
// class ADVPawn*                 HitPawn                        ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// class ADVProjectile*           Projectile                     ( CPF_Parm )

void ADVAbilityHook::ProjectileHit ( class ADVPawn* HitPawn, struct FVector HitLocation, struct FVector HitNormal, class ADVProjectile* Projectile )
{
	static UFunction* pFnProjectileHit = NULL;

	if ( ! pFnProjectileHit )
		pFnProjectileHit = (UFunction*) UObject::GObjObjects()->Data[ 44568 ];

	ADVAbilityHook_execProjectileHit_Parms ProjectileHit_Parms;
	ProjectileHit_Parms.HitPawn = HitPawn;
	memcpy ( &ProjectileHit_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProjectileHit_Parms.HitNormal, &HitNormal, 0xC );
	ProjectileHit_Parms.Projectile = Projectile;

	this->ProcessEvent ( pFnProjectileHit, &ProjectileHit_Parms, NULL );
};

// Function ForgeGame.DVAbilityHook.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityHook::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44566 ];

	ADVAbilityHook_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityGrapple.HookEnded
// [0x00020002] 
// Parameters infos:

void ADVAbilityGrapple::HookEnded ( )
{
	static UFunction* pFnHookEnded = NULL;

	if ( ! pFnHookEnded )
		pFnHookEnded = (UFunction*) UObject::GObjObjects()->Data[ 44590 ];

	ADVAbilityGrapple_execHookEnded_Parms HookEnded_Parms;

	this->ProcessEvent ( pFnHookEnded, &HookEnded_Parms, NULL );
};

// Function ForgeGame.DVAbilityGrapple.PullPawn
// [0x00020102] 
// Parameters infos:

void ADVAbilityGrapple::PullPawn ( )
{
	static UFunction* pFnPullPawn = NULL;

	if ( ! pFnPullPawn )
		pFnPullPawn = (UFunction*) UObject::GObjObjects()->Data[ 44589 ];

	ADVAbilityGrapple_execPullPawn_Parms PullPawn_Parms;

	this->ProcessEvent ( pFnPullPawn, &PullPawn_Parms, NULL );
};

// Function ForgeGame.DVAbilityGrapple.ProjectileHit
// [0x00020002] 
// Parameters infos:
// class ADVPawn*                 HitPawn                        ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// class ADVProjectile*           Projectile                     ( CPF_Parm )

void ADVAbilityGrapple::ProjectileHit ( class ADVPawn* HitPawn, struct FVector HitLocation, struct FVector HitNormal, class ADVProjectile* Projectile )
{
	static UFunction* pFnProjectileHit = NULL;

	if ( ! pFnProjectileHit )
		pFnProjectileHit = (UFunction*) UObject::GObjObjects()->Data[ 44582 ];

	ADVAbilityGrapple_execProjectileHit_Parms ProjectileHit_Parms;
	ProjectileHit_Parms.HitPawn = HitPawn;
	memcpy ( &ProjectileHit_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProjectileHit_Parms.HitNormal, &HitNormal, 0xC );
	ProjectileHit_Parms.Projectile = Projectile;

	this->ProcessEvent ( pFnProjectileHit, &ProjectileHit_Parms, NULL );
};

// Function ForgeGame.DVAbilityChainSlap.FireAbility
// [0x00880002] 
// Parameters infos:

void ADVAbilityChainSlap::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44604 ];

	ADVAbilityChainSlap_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityChainSlap.PlayFireEffect
// [0x00820102] 
// Parameters infos:
// class ADVPawn*                 RepHitPawn                     ( CPF_Parm )

void ADVAbilityChainSlap::PlayFireEffect ( class ADVPawn* RepHitPawn )
{
	static UFunction* pFnPlayFireEffect = NULL;

	if ( ! pFnPlayFireEffect )
		pFnPlayFireEffect = (UFunction*) UObject::GObjObjects()->Data[ 44598 ];

	ADVAbilityChainSlap_execPlayFireEffect_Parms PlayFireEffect_Parms;
	PlayFireEffect_Parms.RepHitPawn = RepHitPawn;

	this->ProcessEvent ( pFnPlayFireEffect, &PlayFireEffect_Parms, NULL );
};

// Function ForgeGame.DVAbilityChainSlap.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVAbilityChainSlap::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 44596 ];

	ADVAbilityChainSlap_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAbilityLift.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAbilityLift::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44617 ];

	ADVAbilityLift_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAbilityLift.StopAbility
// [0x00020002] 
// Parameters infos:

void ADVAbilityLift::StopAbility ( )
{
	static UFunction* pFnStopAbility = NULL;

	if ( ! pFnStopAbility )
		pFnStopAbility = (UFunction*) UObject::GObjObjects()->Data[ 44616 ];

	ADVAbilityLift_execStopAbility_Parms StopAbility_Parms;

	this->ProcessEvent ( pFnStopAbility, &StopAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityLift.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityLift::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44615 ];

	ADVAbilityLift_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityGravityOfWill.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAbilityGravityOfWill::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44633 ];

	ADVAbilityGravityOfWill_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAbilityGravityOfWill.Interrupt
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  SelfInterrupt                  ( CPF_Parm )

bool ADVAbilityGravityOfWill::Interrupt ( unsigned long SelfInterrupt )
{
	static UFunction* pFnInterrupt = NULL;

	if ( ! pFnInterrupt )
		pFnInterrupt = (UFunction*) UObject::GObjObjects()->Data[ 44630 ];

	ADVAbilityGravityOfWill_execInterrupt_Parms Interrupt_Parms;
	Interrupt_Parms.SelfInterrupt = SelfInterrupt;

	this->ProcessEvent ( pFnInterrupt, &Interrupt_Parms, NULL );

	return Interrupt_Parms.ReturnValue;
};

// Function ForgeGame.DVAbilityGravityOfWill.Reset
// [0x00020002] 
// Parameters infos:

void ADVAbilityGravityOfWill::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 44629 ];

	ADVAbilityGravityOfWill_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function ForgeGame.DVAbilityGravityOfWill.StopPull
// [0x00020002] 
// Parameters infos:

void ADVAbilityGravityOfWill::StopPull ( )
{
	static UFunction* pFnStopPull = NULL;

	if ( ! pFnStopPull )
		pFnStopPull = (UFunction*) UObject::GObjObjects()->Data[ 44628 ];

	ADVAbilityGravityOfWill_execStopPull_Parms StopPull_Parms;

	this->ProcessEvent ( pFnStopPull, &StopPull_Parms, NULL );
};

// Function ForgeGame.DVAbilityGravityOfWill.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityGravityOfWill::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44627 ];

	ADVAbilityGravityOfWill_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityGravityOfWill.PerformAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityGravityOfWill::PerformAbility ( )
{
	static UFunction* pFnPerformAbility = NULL;

	if ( ! pFnPerformAbility )
		pFnPerformAbility = (UFunction*) UObject::GObjObjects()->Data[ 44626 ];

	ADVAbilityGravityOfWill_execPerformAbility_Parms PerformAbility_Parms;

	this->ProcessEvent ( pFnPerformAbility, &PerformAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityPainOfAllegiance.TickDamage
// [0x00020002] 
// Parameters infos:

void ADVAbilityPainOfAllegiance::TickDamage ( )
{
	static UFunction* pFnTickDamage = NULL;

	if ( ! pFnTickDamage )
		pFnTickDamage = (UFunction*) UObject::GObjObjects()->Data[ 44643 ];

	ADVAbilityPainOfAllegiance_execTickDamage_Parms TickDamage_Parms;

	this->ProcessEvent ( pFnTickDamage, &TickDamage_Parms, NULL );
};

// Function ForgeGame.DVAbilityPainOfAllegiance.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityPainOfAllegiance::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44642 ];

	ADVAbilityPainOfAllegiance_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityUnstuck.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityUnstuck::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44648 ];

	ADVAbilityUnstuck_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.GenerateKickData
// [0x00422002] 
// Parameters infos:
// struct FUniqueNetId            KickedUniqueNetId              ( CPF_Parm )
// TArray< unsigned char >        OutData                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UForgeOnlineSubsystemDelegates::GenerateKickData ( struct FUniqueNetId KickedUniqueNetId, TArray< unsigned char >* OutData )
{
	static UFunction* pFnGenerateKickData = NULL;

	if ( ! pFnGenerateKickData )
		pFnGenerateKickData = (UFunction*) UObject::GObjObjects()->Data[ 50131 ];

	UForgeOnlineSubsystemDelegates_execGenerateKickData_Parms GenerateKickData_Parms;
	memcpy ( &GenerateKickData_Parms.KickedUniqueNetId, &KickedUniqueNetId, 0x8 );

	this->ProcessEvent ( pFnGenerateKickData, &GenerateKickData_Parms, NULL );

	if ( OutData )
		memcpy ( OutData, &GenerateKickData_Parms.OutData, 0xC );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.GenerateJoinServerData
// [0x00422002] 
// Parameters infos:
// struct FString                 ServerURL                      ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        OutData                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UForgeOnlineSubsystemDelegates::GenerateJoinServerData ( struct FString ServerURL, TArray< unsigned char >* OutData )
{
	static UFunction* pFnGenerateJoinServerData = NULL;

	if ( ! pFnGenerateJoinServerData )
		pFnGenerateJoinServerData = (UFunction*) UObject::GObjObjects()->Data[ 50125 ];

	UForgeOnlineSubsystemDelegates_execGenerateJoinServerData_Parms GenerateJoinServerData_Parms;
	memcpy ( &GenerateJoinServerData_Parms.ServerURL, &ServerURL, 0xC );

	this->ProcessEvent ( pFnGenerateJoinServerData, &GenerateJoinServerData_Parms, NULL );

	if ( OutData )
		memcpy ( OutData, &GenerateJoinServerData_Parms.OutData, 0xC );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.GetBestServerFromResults
// [0x00026002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FOnlineGameSearchResult > AllSearchResults               ( CPF_Parm | CPF_NeedCtorLink )
// int                            SizeOfGroup                    ( CPF_Parm )
// int                            DesiredSkill                   ( CPF_OptionalParm | CPF_Parm )

int UForgeOnlineSubsystemDelegates::GetBestServerFromResults ( TArray< struct FOnlineGameSearchResult > AllSearchResults, int SizeOfGroup, int DesiredSkill )
{
	static UFunction* pFnGetBestServerFromResults = NULL;

	if ( ! pFnGetBestServerFromResults )
		pFnGetBestServerFromResults = (UFunction*) UObject::GObjObjects()->Data[ 48146 ];

	UForgeOnlineSubsystemDelegates_execGetBestServerFromResults_Parms GetBestServerFromResults_Parms;
	memcpy ( &GetBestServerFromResults_Parms.AllSearchResults, &AllSearchResults, 0xC );
	GetBestServerFromResults_Parms.SizeOfGroup = SizeOfGroup;
	GetBestServerFromResults_Parms.DesiredSkill = DesiredSkill;

	this->ProcessEvent ( pFnGetBestServerFromResults, &GetBestServerFromResults_Parms, NULL );

	return GetBestServerFromResults_Parms.ReturnValue;
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.FindOnlineGameCanceled
// [0x00022000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UForgeOnlineSubsystemDelegates::FindOnlineGameCanceled ( unsigned long bWasSuccessful )
{
	static UFunction* pFnFindOnlineGameCanceled = NULL;

	if ( ! pFnFindOnlineGameCanceled )
		pFnFindOnlineGameCanceled = (UFunction*) UObject::GObjObjects()->Data[ 50113 ];

	UForgeOnlineSubsystemDelegates_execFindOnlineGameCanceled_Parms FindOnlineGameCanceled_Parms;
	FindOnlineGameCanceled_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnFindOnlineGameCanceled, &FindOnlineGameCanceled_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.FindOnlineGameComplete
// [0x00022002] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UForgeOnlineSubsystemDelegates::FindOnlineGameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnFindOnlineGameComplete = NULL;

	if ( ! pFnFindOnlineGameComplete )
		pFnFindOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 50106 ];

	UForgeOnlineSubsystemDelegates_execFindOnlineGameComplete_Parms FindOnlineGameComplete_Parms;
	FindOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnFindOnlineGameComplete, &FindOnlineGameComplete_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.FindOnlineGames
// [0x00026002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  IsLanQuery                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Environment                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            SteamRegionId                  ( CPF_OptionalParm | CPF_Parm )
// struct FString                 GameModeQueue                  ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ForgeVersion                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UForgeOnlineSubsystemDelegates::FindOnlineGames ( unsigned long IsLanQuery, struct FString Environment, int SteamRegionId, struct FString GameModeQueue, struct FString ForgeVersion )
{
	static UFunction* pFnFindOnlineGames = NULL;

	if ( ! pFnFindOnlineGames )
		pFnFindOnlineGames = (UFunction*) UObject::GObjObjects()->Data[ 48135 ];

	UForgeOnlineSubsystemDelegates_execFindOnlineGames_Parms FindOnlineGames_Parms;
	FindOnlineGames_Parms.IsLanQuery = IsLanQuery;
	memcpy ( &FindOnlineGames_Parms.Environment, &Environment, 0xC );
	FindOnlineGames_Parms.SteamRegionId = SteamRegionId;
	memcpy ( &FindOnlineGames_Parms.GameModeQueue, &GameModeQueue, 0xC );
	memcpy ( &FindOnlineGames_Parms.ForgeVersion, &ForgeVersion, 0xC );

	this->ProcessEvent ( pFnFindOnlineGames, &FindOnlineGames_Parms, NULL );

	return FindOnlineGames_Parms.ReturnValue;
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.HandleSteamGameSearchEvents
// [0x00022002] 
// Parameters infos:

void UForgeOnlineSubsystemDelegates::HandleSteamGameSearchEvents ( )
{
	static UFunction* pFnHandleSteamGameSearchEvents = NULL;

	if ( ! pFnHandleSteamGameSearchEvents )
		pFnHandleSteamGameSearchEvents = (UFunction*) UObject::GObjObjects()->Data[ 50094 ];

	UForgeOnlineSubsystemDelegates_execHandleSteamGameSearchEvents_Parms HandleSteamGameSearchEvents_Parms;

	this->ProcessEvent ( pFnHandleSteamGameSearchEvents, &HandleSteamGameSearchEvents_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.LobbyMemberStatusUpdate
// [0x00422002] 
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            MemberIndex                    ( CPF_Parm )
// int                            InstigatorIndex                ( CPF_Parm )
// struct FString                 Status                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FActiveLobbyInfo > LobbyList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UForgeOnlineSubsystemDelegates::LobbyMemberStatusUpdate ( int LobbyIndex, int MemberIndex, int InstigatorIndex, struct FString Status, TArray< struct FActiveLobbyInfo >* LobbyList )
{
	static UFunction* pFnLobbyMemberStatusUpdate = NULL;

	if ( ! pFnLobbyMemberStatusUpdate )
		pFnLobbyMemberStatusUpdate = (UFunction*) UObject::GObjObjects()->Data[ 50085 ];

	UForgeOnlineSubsystemDelegates_execLobbyMemberStatusUpdate_Parms LobbyMemberStatusUpdate_Parms;
	LobbyMemberStatusUpdate_Parms.LobbyIndex = LobbyIndex;
	LobbyMemberStatusUpdate_Parms.MemberIndex = MemberIndex;
	LobbyMemberStatusUpdate_Parms.InstigatorIndex = InstigatorIndex;
	memcpy ( &LobbyMemberStatusUpdate_Parms.Status, &Status, 0xC );

	this->ProcessEvent ( pFnLobbyMemberStatusUpdate, &LobbyMemberStatusUpdate_Parms, NULL );

	if ( LobbyList )
		memcpy ( LobbyList, &LobbyMemberStatusUpdate_Parms.LobbyList, 0xC );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.LobbyMemberSettingsUpdate
// [0x00422002] 
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            MemberIndex                    ( CPF_Parm )
// TArray< struct FActiveLobbyInfo > LobbyList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UForgeOnlineSubsystemDelegates::LobbyMemberSettingsUpdate ( int LobbyIndex, int MemberIndex, TArray< struct FActiveLobbyInfo >* LobbyList )
{
	static UFunction* pFnLobbyMemberSettingsUpdate = NULL;

	if ( ! pFnLobbyMemberSettingsUpdate )
		pFnLobbyMemberSettingsUpdate = (UFunction*) UObject::GObjObjects()->Data[ 50078 ];

	UForgeOnlineSubsystemDelegates_execLobbyMemberSettingsUpdate_Parms LobbyMemberSettingsUpdate_Parms;
	LobbyMemberSettingsUpdate_Parms.LobbyIndex = LobbyIndex;
	LobbyMemberSettingsUpdate_Parms.MemberIndex = MemberIndex;

	this->ProcessEvent ( pFnLobbyMemberSettingsUpdate, &LobbyMemberSettingsUpdate_Parms, NULL );

	if ( LobbyList )
		memcpy ( LobbyList, &LobbyMemberSettingsUpdate_Parms.LobbyList, 0xC );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.LobbySettingsUpdate
// [0x00422002] 
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// TArray< struct FActiveLobbyInfo > LobbyList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UForgeOnlineSubsystemDelegates::LobbySettingsUpdate ( int LobbyIndex, TArray< struct FActiveLobbyInfo >* LobbyList )
{
	static UFunction* pFnLobbySettingsUpdate = NULL;

	if ( ! pFnLobbySettingsUpdate )
		pFnLobbySettingsUpdate = (UFunction*) UObject::GObjObjects()->Data[ 50072 ];

	UForgeOnlineSubsystemDelegates_execLobbySettingsUpdate_Parms LobbySettingsUpdate_Parms;
	LobbySettingsUpdate_Parms.LobbyIndex = LobbyIndex;

	this->ProcessEvent ( pFnLobbySettingsUpdate, &LobbySettingsUpdate_Parms, NULL );

	if ( LobbyList )
		memcpy ( LobbyList, &LobbySettingsUpdate_Parms.LobbyList, 0xC );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.LobbyReceiveBinaryData
// [0x00C22002] 
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            MemberIndex                    ( CPF_Parm )
// TArray< struct FActiveLobbyInfo > LobbyList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< unsigned char >        Data                           ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UForgeOnlineSubsystemDelegates::LobbyReceiveBinaryData ( int LobbyIndex, int MemberIndex, TArray< struct FActiveLobbyInfo >* LobbyList, TArray< unsigned char >* Data )
{
	static UFunction* pFnLobbyReceiveBinaryData = NULL;

	if ( ! pFnLobbyReceiveBinaryData )
		pFnLobbyReceiveBinaryData = (UFunction*) UObject::GObjObjects()->Data[ 50056 ];

	UForgeOnlineSubsystemDelegates_execLobbyReceiveBinaryData_Parms LobbyReceiveBinaryData_Parms;
	LobbyReceiveBinaryData_Parms.LobbyIndex = LobbyIndex;
	LobbyReceiveBinaryData_Parms.MemberIndex = MemberIndex;

	this->ProcessEvent ( pFnLobbyReceiveBinaryData, &LobbyReceiveBinaryData_Parms, NULL );

	if ( LobbyList )
		memcpy ( LobbyList, &LobbyReceiveBinaryData_Parms.LobbyList, 0xC );

	if ( Data )
		memcpy ( Data, &LobbyReceiveBinaryData_Parms.Data, 0xC );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.LobbyReceiveMessage
// [0x00422002] 
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            MemberIndex                    ( CPF_Parm )
// struct FString                 Type                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FActiveLobbyInfo > LobbyList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UForgeOnlineSubsystemDelegates::LobbyReceiveMessage ( int LobbyIndex, int MemberIndex, struct FString Type, struct FString Message, TArray< struct FActiveLobbyInfo >* LobbyList )
{
	static UFunction* pFnLobbyReceiveMessage = NULL;

	if ( ! pFnLobbyReceiveMessage )
		pFnLobbyReceiveMessage = (UFunction*) UObject::GObjObjects()->Data[ 50047 ];

	UForgeOnlineSubsystemDelegates_execLobbyReceiveMessage_Parms LobbyReceiveMessage_Parms;
	LobbyReceiveMessage_Parms.LobbyIndex = LobbyIndex;
	LobbyReceiveMessage_Parms.MemberIndex = MemberIndex;
	memcpy ( &LobbyReceiveMessage_Parms.Type, &Type, 0xC );
	memcpy ( &LobbyReceiveMessage_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnLobbyReceiveMessage, &LobbyReceiveMessage_Parms, NULL );

	if ( LobbyList )
		memcpy ( LobbyList, &LobbyReceiveMessage_Parms.LobbyList, 0xC );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.JoinLobbyComplete
// [0x00422002] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// int                            LobbyIndex                     ( CPF_Parm )
// struct FUniqueNetId            LobbyUID                       ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FActiveLobbyInfo > LobbyList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UForgeOnlineSubsystemDelegates::JoinLobbyComplete ( unsigned long bWasSuccessful, int LobbyIndex, struct FUniqueNetId LobbyUID, struct FString Error, TArray< struct FActiveLobbyInfo >* LobbyList )
{
	static UFunction* pFnJoinLobbyComplete = NULL;

	if ( ! pFnJoinLobbyComplete )
		pFnJoinLobbyComplete = (UFunction*) UObject::GObjObjects()->Data[ 50038 ];

	UForgeOnlineSubsystemDelegates_execJoinLobbyComplete_Parms JoinLobbyComplete_Parms;
	JoinLobbyComplete_Parms.bWasSuccessful = bWasSuccessful;
	JoinLobbyComplete_Parms.LobbyIndex = LobbyIndex;
	memcpy ( &JoinLobbyComplete_Parms.LobbyUID, &LobbyUID, 0x8 );
	memcpy ( &JoinLobbyComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnJoinLobbyComplete, &JoinLobbyComplete_Parms, NULL );

	if ( LobbyList )
		memcpy ( LobbyList, &JoinLobbyComplete_Parms.LobbyList, 0xC );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.LobbyInvite
// [0x00022002] 
// Parameters infos:
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )
// struct FUniqueNetId            FriendId                       ( CPF_Parm )
// unsigned long                  bAccepted                      ( CPF_Parm )

void UForgeOnlineSubsystemDelegates::LobbyInvite ( struct FUniqueNetId LobbyId, struct FUniqueNetId FriendId, unsigned long bAccepted )
{
	static UFunction* pFnLobbyInvite = NULL;

	if ( ! pFnLobbyInvite )
		pFnLobbyInvite = (UFunction*) UObject::GObjObjects()->Data[ 50031 ];

	UForgeOnlineSubsystemDelegates_execLobbyInvite_Parms LobbyInvite_Parms;
	memcpy ( &LobbyInvite_Parms.LobbyId, &LobbyId, 0x8 );
	memcpy ( &LobbyInvite_Parms.FriendId, &FriendId, 0x8 );
	LobbyInvite_Parms.bAccepted = bAccepted;

	this->ProcessEvent ( pFnLobbyInvite, &LobbyInvite_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.HandleSteamLobbyEvents
// [0x00022002] 
// Parameters infos:

void UForgeOnlineSubsystemDelegates::HandleSteamLobbyEvents ( )
{
	static UFunction* pFnHandleSteamLobbyEvents = NULL;

	if ( ! pFnHandleSteamLobbyEvents )
		pFnHandleSteamLobbyEvents = (UFunction*) UObject::GObjObjects()->Data[ 50027 ];

	UForgeOnlineSubsystemDelegates_execHandleSteamLobbyEvents_Parms HandleSteamLobbyEvents_Parms;

	this->ProcessEvent ( pFnHandleSteamLobbyEvents, &HandleSteamLobbyEvents_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.CreateLobbyCompleted
// [0x00022002] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UForgeOnlineSubsystemDelegates::CreateLobbyCompleted ( unsigned long bWasSuccessful, struct FUniqueNetId LobbyId, struct FString Error )
{
	static UFunction* pFnCreateLobbyCompleted = NULL;

	if ( ! pFnCreateLobbyCompleted )
		pFnCreateLobbyCompleted = (UFunction*) UObject::GObjObjects()->Data[ 50021 ];

	UForgeOnlineSubsystemDelegates_execCreateLobbyCompleted_Parms CreateLobbyCompleted_Parms;
	CreateLobbyCompleted_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &CreateLobbyCompleted_Parms.LobbyId, &LobbyId, 0x8 );
	memcpy ( &CreateLobbyCompleted_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnCreateLobbyCompleted, &CreateLobbyCompleted_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.CreateLobby
// [0x00822002] 
// Parameters infos:

void UForgeOnlineSubsystemDelegates::CreateLobby ( )
{
	static UFunction* pFnCreateLobby = NULL;

	if ( ! pFnCreateLobby )
		pFnCreateLobby = (UFunction*) UObject::GObjObjects()->Data[ 50014 ];

	UForgeOnlineSubsystemDelegates_execCreateLobby_Parms CreateLobby_Parms;

	this->ProcessEvent ( pFnCreateLobby, &CreateLobby_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.SetSkinChoiceForClass
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ChosenClass                    ( CPF_Parm )
// unsigned char                  TheChosenSkin                  ( CPF_Parm )

bool UForgeOnlineSubsystemDelegates::SetSkinChoiceForClass ( unsigned char ChosenClass, unsigned char TheChosenSkin )
{
	static UFunction* pFnSetSkinChoiceForClass = NULL;

	if ( ! pFnSetSkinChoiceForClass )
		pFnSetSkinChoiceForClass = (UFunction*) UObject::GObjObjects()->Data[ 47789 ];

	UForgeOnlineSubsystemDelegates_execSetSkinChoiceForClass_Parms SetSkinChoiceForClass_Parms;
	SetSkinChoiceForClass_Parms.ChosenClass = ChosenClass;
	SetSkinChoiceForClass_Parms.TheChosenSkin = TheChosenSkin;

	this->ProcessEvent ( pFnSetSkinChoiceForClass, &SetSkinChoiceForClass_Parms, NULL );

	return SetSkinChoiceForClass_Parms.ReturnValue;
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.GetSkinChoiceForClass
// [0x00422002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ChosenClass                    ( CPF_Parm )
// unsigned char                  TheChosenSkin                  ( CPF_Parm | CPF_OutParm )

bool UForgeOnlineSubsystemDelegates::GetSkinChoiceForClass ( unsigned char ChosenClass, unsigned char* TheChosenSkin )
{
	static UFunction* pFnGetSkinChoiceForClass = NULL;

	if ( ! pFnGetSkinChoiceForClass )
		pFnGetSkinChoiceForClass = (UFunction*) UObject::GObjObjects()->Data[ 45747 ];

	UForgeOnlineSubsystemDelegates_execGetSkinChoiceForClass_Parms GetSkinChoiceForClass_Parms;
	GetSkinChoiceForClass_Parms.ChosenClass = ChosenClass;

	this->ProcessEvent ( pFnGetSkinChoiceForClass, &GetSkinChoiceForClass_Parms, NULL );

	if ( TheChosenSkin )
		*TheChosenSkin = GetSkinChoiceForClass_Parms.TheChosenSkin;

	return GetSkinChoiceForClass_Parms.ReturnValue;
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.CloudWriteComplete
// [0x00022000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UForgeOnlineSubsystemDelegates::CloudWriteComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnCloudWriteComplete = NULL;

	if ( ! pFnCloudWriteComplete )
		pFnCloudWriteComplete = (UFunction*) UObject::GObjObjects()->Data[ 50005 ];

	UForgeOnlineSubsystemDelegates_execCloudWriteComplete_Parms CloudWriteComplete_Parms;
	CloudWriteComplete_Parms.LocalUserNum = LocalUserNum;
	CloudWriteComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnCloudWriteComplete, &CloudWriteComplete_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.WriteCloudSettings
// [0x00022002] 
// Parameters infos:

void UForgeOnlineSubsystemDelegates::WriteCloudSettings ( )
{
	static UFunction* pFnWriteCloudSettings = NULL;

	if ( ! pFnWriteCloudSettings )
		pFnWriteCloudSettings = (UFunction*) UObject::GObjObjects()->Data[ 50001 ];

	UForgeOnlineSubsystemDelegates_execWriteCloudSettings_Parms WriteCloudSettings_Parms;

	this->ProcessEvent ( pFnWriteCloudSettings, &WriteCloudSettings_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.ReadCloudSettingsComplete
// [0x00022002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UForgeOnlineSubsystemDelegates::ReadCloudSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnReadCloudSettingsComplete = NULL;

	if ( ! pFnReadCloudSettingsComplete )
		pFnReadCloudSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 49996 ];

	UForgeOnlineSubsystemDelegates_execReadCloudSettingsComplete_Parms ReadCloudSettingsComplete_Parms;
	ReadCloudSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	ReadCloudSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnReadCloudSettingsComplete, &ReadCloudSettingsComplete_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.ReadCloudSettings
// [0x00022002] 
// Parameters infos:

void UForgeOnlineSubsystemDelegates::ReadCloudSettings ( )
{
	static UFunction* pFnReadCloudSettings = NULL;

	if ( ! pFnReadCloudSettings )
		pFnReadCloudSettings = (UFunction*) UObject::GObjObjects()->Data[ 49992 ];

	UForgeOnlineSubsystemDelegates_execReadCloudSettings_Parms ReadCloudSettings_Parms;

	this->ProcessEvent ( pFnReadCloudSettings, &ReadCloudSettings_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.SetCloudSetting
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SettingId                      ( CPF_Parm | CPF_CoerceParm )
// struct FString                 NewValue                       ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

bool UForgeOnlineSubsystemDelegates::SetCloudSetting ( int SettingId, struct FString NewValue )
{
	static UFunction* pFnSetCloudSetting = NULL;

	if ( ! pFnSetCloudSetting )
		pFnSetCloudSetting = (UFunction*) UObject::GObjObjects()->Data[ 47802 ];

	UForgeOnlineSubsystemDelegates_execSetCloudSetting_Parms SetCloudSetting_Parms;
	SetCloudSetting_Parms.SettingId = SettingId;
	memcpy ( &SetCloudSetting_Parms.NewValue, &NewValue, 0xC );

	this->ProcessEvent ( pFnSetCloudSetting, &SetCloudSetting_Parms, NULL );

	return SetCloudSetting_Parms.ReturnValue;
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.GetCloudSetting
// [0x00422002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SettingId                      ( CPF_Parm | CPF_CoerceParm )
// struct FString                 TheSettingValue                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UForgeOnlineSubsystemDelegates::GetCloudSetting ( int SettingId, struct FString* TheSettingValue )
{
	static UFunction* pFnGetCloudSetting = NULL;

	if ( ! pFnGetCloudSetting )
		pFnGetCloudSetting = (UFunction*) UObject::GObjObjects()->Data[ 44740 ];

	UForgeOnlineSubsystemDelegates_execGetCloudSetting_Parms GetCloudSetting_Parms;
	GetCloudSetting_Parms.SettingId = SettingId;

	this->ProcessEvent ( pFnGetCloudSetting, &GetCloudSetting_Parms, NULL );

	if ( TheSettingValue )
		memcpy ( TheSettingValue, &GetCloudSetting_Parms.TheSettingValue, 0xC );

	return GetCloudSetting_Parms.ReturnValue;
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.FlushSteamStatsComplete
// [0x00022002] 
// Parameters infos:
// struct FName                   SessionNameThing               ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UForgeOnlineSubsystemDelegates::FlushSteamStatsComplete ( struct FName SessionNameThing, unsigned long bWasSuccessful )
{
	static UFunction* pFnFlushSteamStatsComplete = NULL;

	if ( ! pFnFlushSteamStatsComplete )
		pFnFlushSteamStatsComplete = (UFunction*) UObject::GObjObjects()->Data[ 49979 ];

	UForgeOnlineSubsystemDelegates_execFlushSteamStatsComplete_Parms FlushSteamStatsComplete_Parms;
	memcpy ( &FlushSteamStatsComplete_Parms.SessionNameThing, &SessionNameThing, 0x8 );
	FlushSteamStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnFlushSteamStatsComplete, &FlushSteamStatsComplete_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.WriteUpdatedSteamStats
// [0x00022002] 
// Parameters infos:
// class ADVPlayerController*     TheDVPC                        ( CPF_Parm )
// struct FUniqueNetId            TheUniqueId                    ( CPF_Parm )
// class UForgeOnlineStatsRead*   TheStatsReader                 ( CPF_Parm )
// class UForgeOnlineStatsWrite*  TheStatsWriter                 ( CPF_Parm )

void UForgeOnlineSubsystemDelegates::WriteUpdatedSteamStats ( class ADVPlayerController* TheDVPC, struct FUniqueNetId TheUniqueId, class UForgeOnlineStatsRead* TheStatsReader, class UForgeOnlineStatsWrite* TheStatsWriter )
{
	static UFunction* pFnWriteUpdatedSteamStats = NULL;

	if ( ! pFnWriteUpdatedSteamStats )
		pFnWriteUpdatedSteamStats = (UFunction*) UObject::GObjObjects()->Data[ 49970 ];

	UForgeOnlineSubsystemDelegates_execWriteUpdatedSteamStats_Parms WriteUpdatedSteamStats_Parms;
	WriteUpdatedSteamStats_Parms.TheDVPC = TheDVPC;
	memcpy ( &WriteUpdatedSteamStats_Parms.TheUniqueId, &TheUniqueId, 0x8 );
	WriteUpdatedSteamStats_Parms.TheStatsReader = TheStatsReader;
	WriteUpdatedSteamStats_Parms.TheStatsWriter = TheStatsWriter;

	this->ProcessEvent ( pFnWriteUpdatedSteamStats, &WriteUpdatedSteamStats_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.OnReadOnlineAvatarComplete
// [0x00022002] 
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Const | CPF_Parm )
// class UTexture2D*              Avatar                         ( CPF_Parm )

void UForgeOnlineSubsystemDelegates::OnReadOnlineAvatarComplete ( struct FUniqueNetId PlayerNetId, class UTexture2D* Avatar )
{
	static UFunction* pFnOnReadOnlineAvatarComplete = NULL;

	if ( ! pFnOnReadOnlineAvatarComplete )
		pFnOnReadOnlineAvatarComplete = (UFunction*) UObject::GObjObjects()->Data[ 49964 ];

	UForgeOnlineSubsystemDelegates_execOnReadOnlineAvatarComplete_Parms OnReadOnlineAvatarComplete_Parms;
	memcpy ( &OnReadOnlineAvatarComplete_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	OnReadOnlineAvatarComplete_Parms.Avatar = Avatar;

	this->ProcessEvent ( pFnOnReadOnlineAvatarComplete, &OnReadOnlineAvatarComplete_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.GetAvatarForUniqueId
// [0x00022002] 
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )

void UForgeOnlineSubsystemDelegates::GetAvatarForUniqueId ( struct FUniqueNetId PlayerNetId )
{
	static UFunction* pFnGetAvatarForUniqueId = NULL;

	if ( ! pFnGetAvatarForUniqueId )
		pFnGetAvatarForUniqueId = (UFunction*) UObject::GObjObjects()->Data[ 49959 ];

	UForgeOnlineSubsystemDelegates_execGetAvatarForUniqueId_Parms GetAvatarForUniqueId_Parms;
	memcpy ( &GetAvatarForUniqueId_Parms.PlayerNetId, &PlayerNetId, 0x8 );

	this->ProcessEvent ( pFnGetAvatarForUniqueId, &GetAvatarForUniqueId_Parms, NULL );
};

// Function ForgeGame.DVAbilityResetCD.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityResetCD::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44878 ];

	ADVAbilityResetCD_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVAbilityShrine.FireAbility
// [0x00080002] 
// Parameters infos:

void ADVAbilityShrine::FireAbility ( )
{
	static UFunction* pFnFireAbility = NULL;

	if ( ! pFnFireAbility )
		pFnFireAbility = (UFunction*) UObject::GObjObjects()->Data[ 44884 ];

	ADVAbilityShrine_execFireAbility_Parms FireAbility_Parms;

	this->ProcessEvent ( pFnFireAbility, &FireAbility_Parms, NULL );
};

// Function ForgeGame.DVDummyController.OnToggleCinematicMode
// [0x00020000] 
// Parameters infos:
// class USeqAct_ToggleCinematicMode* Action                         ( CPF_Parm )

void ADVDummyController::OnToggleCinematicMode ( class USeqAct_ToggleCinematicMode* Action )
{
	static UFunction* pFnOnToggleCinematicMode = NULL;

	if ( ! pFnOnToggleCinematicMode )
		pFnOnToggleCinematicMode = (UFunction*) UObject::GObjObjects()->Data[ 44897 ];

	ADVDummyController_execOnToggleCinematicMode_Parms OnToggleCinematicMode_Parms;
	OnToggleCinematicMode_Parms.Action = Action;

	this->ProcessEvent ( pFnOnToggleCinematicMode, &OnToggleCinematicMode_Parms, NULL );
};

// Function ForgeGame.DVDummyController.OnToggleInput
// [0x00020000] 
// Parameters infos:
// class USeqAct_ToggleInput*     inAction                       ( CPF_Parm )

void ADVDummyController::OnToggleInput ( class USeqAct_ToggleInput* inAction )
{
	static UFunction* pFnOnToggleInput = NULL;

	if ( ! pFnOnToggleInput )
		pFnOnToggleInput = (UFunction*) UObject::GObjObjects()->Data[ 44895 ];

	ADVDummyController_execOnToggleInput_Parms OnToggleInput_Parms;
	OnToggleInput_Parms.inAction = inAction;

	this->ProcessEvent ( pFnOnToggleInput, &OnToggleInput_Parms, NULL );
};

// Function ForgeGame.DVDummyController.IncomingAbility
// [0x00020000] 
// Parameters infos:
// class ADVAbility*              Ability                        ( CPF_Parm )

void ADVDummyController::IncomingAbility ( class ADVAbility* Ability )
{
	static UFunction* pFnIncomingAbility = NULL;

	if ( ! pFnIncomingAbility )
		pFnIncomingAbility = (UFunction*) UObject::GObjObjects()->Data[ 44893 ];

	ADVDummyController_execIncomingAbility_Parms IncomingAbility_Parms;
	IncomingAbility_Parms.Ability = Ability;

	this->ProcessEvent ( pFnIncomingAbility, &IncomingAbility_Parms, NULL );
};

// Function ForgeGame.DVDummyController.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ADVDummyController::eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 44890 ];

	ADVDummyController_eventPossess_Parms Possess_Parms;
	Possess_Parms.inPawn = inPawn;
	Possess_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function ForgeGame.DVDummyController.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void ADVDummyController::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 44889 ];

	ADVDummyController_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.ForgeTaunts.IsSubUserType
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ParentType                     ( CPF_Parm )
// unsigned char                  ChildType                      ( CPF_Parm )

bool UForgeTaunts::IsSubUserType ( unsigned char ParentType, unsigned char ChildType )
{
	static UFunction* pFnIsSubUserType = NULL;

	if ( ! pFnIsSubUserType )
		pFnIsSubUserType = (UFunction*) UObject::GObjObjects()->Data[ 44909 ];

	UForgeTaunts_execIsSubUserType_Parms IsSubUserType_Parms;
	IsSubUserType_Parms.ParentType = ParentType;
	IsSubUserType_Parms.ChildType = ChildType;

	this->ProcessEvent ( pFnIsSubUserType, &IsSubUserType_Parms, NULL );

	return IsSubUserType_Parms.ReturnValue;
};

// Function ForgeGame.ForgeTaunts.TauntApplies
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FSChatTaunt             TheTaunt                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  TheSituation                   ( CPF_Parm )
// unsigned char                  UserType                       ( CPF_Parm )
// unsigned char                  TargetType                     ( CPF_Parm )

bool UForgeTaunts::TauntApplies ( struct FSChatTaunt TheTaunt, unsigned char TheSituation, unsigned char UserType, unsigned char TargetType )
{
	static UFunction* pFnTauntApplies = NULL;

	if ( ! pFnTauntApplies )
		pFnTauntApplies = (UFunction*) UObject::GObjObjects()->Data[ 44903 ];

	UForgeTaunts_execTauntApplies_Parms TauntApplies_Parms;
	memcpy ( &TauntApplies_Parms.TheTaunt, &TheTaunt, 0x10 );
	TauntApplies_Parms.TheSituation = TheSituation;
	TauntApplies_Parms.UserType = UserType;
	TauntApplies_Parms.TargetType = TargetType;

	this->ProcessEvent ( pFnTauntApplies, &TauntApplies_Parms, NULL );

	return TauntApplies_Parms.ReturnValue;
};

// Function ForgeGame.DVAIController.DoTaunt
// [0x00820002] 
// Parameters infos:
// unsigned char                  TargetClass                    ( CPF_Parm )
// unsigned char                  context                        ( CPF_Parm )

void ADVAIController::DoTaunt ( unsigned char TargetClass, unsigned char context )
{
	static UFunction* pFnDoTaunt = NULL;

	if ( ! pFnDoTaunt )
		pFnDoTaunt = (UFunction*) UObject::GObjObjects()->Data[ 44987 ];

	ADVAIController_execDoTaunt_Parms DoTaunt_Parms;
	DoTaunt_Parms.TargetClass = TargetClass;
	DoTaunt_Parms.context = context;

	this->ProcessEvent ( pFnDoTaunt, &DoTaunt_Parms, NULL );
};

// Function ForgeGame.DVAIController.PawnDied
// [0x00020002] 
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )

void ADVAIController::PawnDied ( class APawn* inPawn )
{
	static UFunction* pFnPawnDied = NULL;

	if ( ! pFnPawnDied )
		pFnPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 44984 ];

	ADVAIController_execPawnDied_Parms PawnDied_Parms;
	PawnDied_Parms.inPawn = inPawn;

	this->ProcessEvent ( pFnPawnDied, &PawnDied_Parms, NULL );
};

// Function ForgeGame.DVAIController.Flee
// [0x00020002] 
// Parameters infos:

void ADVAIController::Flee ( )
{
	static UFunction* pFnFlee = NULL;

	if ( ! pFnFlee )
		pFnFlee = (UFunction*) UObject::GObjObjects()->Data[ 44974 ];

	ADVAIController_execFlee_Parms Flee_Parms;

	this->ProcessEvent ( pFnFlee, &Flee_Parms, NULL );
};

// Function ForgeGame.DVAIController.FindShrine
// [0x00020002] 
// Parameters infos:
// class ADVShrine*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADVShrine* ADVAIController::FindShrine ( )
{
	static UFunction* pFnFindShrine = NULL;

	if ( ! pFnFindShrine )
		pFnFindShrine = (UFunction*) UObject::GObjObjects()->Data[ 44965 ];

	ADVAIController_execFindShrine_Parms FindShrine_Parms;

	this->ProcessEvent ( pFnFindShrine, &FindShrine_Parms, NULL );

	return FindShrine_Parms.ReturnValue;
};

// Function ForgeGame.DVAIController.PathToTarget
// [0x00020002] 
// Parameters infos:

void ADVAIController::PathToTarget ( )
{
	static UFunction* pFnPathToTarget = NULL;

	if ( ! pFnPathToTarget )
		pFnPathToTarget = (UFunction*) UObject::GObjObjects()->Data[ 44964 ];

	ADVAIController_execPathToTarget_Parms PathToTarget_Parms;

	this->ProcessEvent ( pFnPathToTarget, &PathToTarget_Parms, NULL );
};

// Function ForgeGame.DVAIController.AIMovement
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAIController::AIMovement ( float DeltaTime )
{
	static UFunction* pFnAIMovement = NULL;

	if ( ! pFnAIMovement )
		pFnAIMovement = (UFunction*) UObject::GObjObjects()->Data[ 44962 ];

	ADVAIController_execAIMovement_Parms AIMovement_Parms;
	AIMovement_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnAIMovement, &AIMovement_Parms, NULL );
};

// Function ForgeGame.DVAIController.UnStuck
// [0x00020002] 
// Parameters infos:

void ADVAIController::UnStuck ( )
{
	static UFunction* pFnUnStuck = NULL;

	if ( ! pFnUnStuck )
		pFnUnStuck = (UFunction*) UObject::GObjObjects()->Data[ 44961 ];

	ADVAIController_execUnStuck_Parms UnStuck_Parms;

	this->ProcessEvent ( pFnUnStuck, &UnStuck_Parms, NULL );
};

// Function ForgeGame.DVAIController.CheckForStuck
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAIController::CheckForStuck ( float DeltaTime )
{
	static UFunction* pFnCheckForStuck = NULL;

	if ( ! pFnCheckForStuck )
		pFnCheckForStuck = (UFunction*) UObject::GObjObjects()->Data[ 44959 ];

	ADVAIController_execCheckForStuck_Parms CheckForStuck_Parms;
	CheckForStuck_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnCheckForStuck, &CheckForStuck_Parms, NULL );
};

// Function ForgeGame.DVAIController.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAIController::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44956 ];

	ADVAIController_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAIController.PerformBlock
// [0x00020102] 
// Parameters infos:
// unsigned long                  StartBlock                     ( CPF_Parm )

void ADVAIController::PerformBlock ( unsigned long StartBlock )
{
	static UFunction* pFnPerformBlock = NULL;

	if ( ! pFnPerformBlock )
		pFnPerformBlock = (UFunction*) UObject::GObjObjects()->Data[ 44954 ];

	ADVAIController_execPerformBlock_Parms PerformBlock_Parms;
	PerformBlock_Parms.StartBlock = StartBlock;

	this->ProcessEvent ( pFnPerformBlock, &PerformBlock_Parms, NULL );
};

// Function ForgeGame.DVAIController.UnBlock
// [0x00020002] 
// Parameters infos:

void ADVAIController::UnBlock ( )
{
	static UFunction* pFnUnBlock = NULL;

	if ( ! pFnUnBlock )
		pFnUnBlock = (UFunction*) UObject::GObjObjects()->Data[ 44953 ];

	ADVAIController_execUnBlock_Parms UnBlock_Parms;

	this->ProcessEvent ( pFnUnBlock, &UnBlock_Parms, NULL );
};

// Function ForgeGame.DVAIController.bLock
// [0x00020002] 
// Parameters infos:

void ADVAIController::bLock ( )
{
	static UFunction* pFnbLock = NULL;

	if ( ! pFnbLock )
		pFnbLock = (UFunction*) UObject::GObjObjects()->Data[ 44952 ];

	ADVAIController_execbLock_Parms bLock_Parms;

	this->ProcessEvent ( pFnbLock, &bLock_Parms, NULL );
};

// Function ForgeGame.DVAIController.IncomingAbility
// [0x00020002] 
// Parameters infos:
// class ADVAbility*              Ability                        ( CPF_Parm )

void ADVAIController::IncomingAbility ( class ADVAbility* Ability )
{
	static UFunction* pFnIncomingAbility = NULL;

	if ( ! pFnIncomingAbility )
		pFnIncomingAbility = (UFunction*) UObject::GObjObjects()->Data[ 44950 ];

	ADVAIController_execIncomingAbility_Parms IncomingAbility_Parms;
	IncomingAbility_Parms.Ability = Ability;

	this->ProcessEvent ( pFnIncomingAbility, &IncomingAbility_Parms, NULL );
};

// Function ForgeGame.DVAIController.UseAbility
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  AbilityNumber                  ( CPF_OptionalParm | CPF_Parm )

bool ADVAIController::UseAbility ( unsigned char AbilityNumber )
{
	static UFunction* pFnUseAbility = NULL;

	if ( ! pFnUseAbility )
		pFnUseAbility = (UFunction*) UObject::GObjObjects()->Data[ 44946 ];

	ADVAIController_execUseAbility_Parms UseAbility_Parms;
	UseAbility_Parms.AbilityNumber = AbilityNumber;

	this->ProcessEvent ( pFnUseAbility, &UseAbility_Parms, NULL );

	return UseAbility_Parms.ReturnValue;
};

// Function ForgeGame.DVAIController.ChooseAbility
// [0x00020002] 
// Parameters infos:

void ADVAIController::ChooseAbility ( )
{
	static UFunction* pFnChooseAbility = NULL;

	if ( ! pFnChooseAbility )
		pFnChooseAbility = (UFunction*) UObject::GObjObjects()->Data[ 44945 ];

	ADVAIController_execChooseAbility_Parms ChooseAbility_Parms;

	this->ProcessEvent ( pFnChooseAbility, &ChooseAbility_Parms, NULL );
};

// Function ForgeGame.DVAIController.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ADVAIController::eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 44942 ];

	ADVAIController_eventPossess_Parms Possess_Parms;
	Possess_Parms.inPawn = inPawn;
	Possess_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function ForgeGame.DVAIController.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void ADVAIController::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 44941 ];

	ADVAIController_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVPathNodeFlee.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void ADVPathNodeFlee::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 45687 ];

	ADVPathNodeFlee_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVShrine.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVShrine::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 46409 ];

	ADVShrine_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVShrine.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVShrine::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 46408 ];

	ADVShrine_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function ForgeGame.DVShrine.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVShrine::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 46406 ];

	ADVShrine_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVShrine.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVShrine::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 46404 ];

	ADVShrine_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVAIControllerAssassin.AIMovement
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAIControllerAssassin::AIMovement ( float DeltaTime )
{
	static UFunction* pFnAIMovement = NULL;

	if ( ! pFnAIMovement )
		pFnAIMovement = (UFunction*) UObject::GObjObjects()->Data[ 45007 ];

	ADVAIControllerAssassin_execAIMovement_Parms AIMovement_Parms;
	AIMovement_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnAIMovement, &AIMovement_Parms, NULL );
};

// Function ForgeGame.DVAIControllerAssassin.UnStuck
// [0x00020002] 
// Parameters infos:

void ADVAIControllerAssassin::UnStuck ( )
{
	static UFunction* pFnUnStuck = NULL;

	if ( ! pFnUnStuck )
		pFnUnStuck = (UFunction*) UObject::GObjObjects()->Data[ 45006 ];

	ADVAIControllerAssassin_execUnStuck_Parms UnStuck_Parms;

	this->ProcessEvent ( pFnUnStuck, &UnStuck_Parms, NULL );
};

// Function ForgeGame.DVAIControllerAssassin.ChooseAbility
// [0x00020002] 
// Parameters infos:

void ADVAIControllerAssassin::ChooseAbility ( )
{
	static UFunction* pFnChooseAbility = NULL;

	if ( ! pFnChooseAbility )
		pFnChooseAbility = (UFunction*) UObject::GObjObjects()->Data[ 45005 ];

	ADVAIControllerAssassin_execChooseAbility_Parms ChooseAbility_Parms;

	this->ProcessEvent ( pFnChooseAbility, &ChooseAbility_Parms, NULL );
};

// Function ForgeGame.DVAIControllerAssassin.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ADVAIControllerAssassin::eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 45002 ];

	ADVAIControllerAssassin_eventPossess_Parms Possess_Parms;
	Possess_Parms.inPawn = inPawn;
	Possess_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function ForgeGame.DVAIControllerPathfinder.AIMovement
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAIControllerPathfinder::AIMovement ( float DeltaTime )
{
	static UFunction* pFnAIMovement = NULL;

	if ( ! pFnAIMovement )
		pFnAIMovement = (UFunction*) UObject::GObjObjects()->Data[ 45020 ];

	ADVAIControllerPathfinder_execAIMovement_Parms AIMovement_Parms;
	AIMovement_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnAIMovement, &AIMovement_Parms, NULL );
};

// Function ForgeGame.DVAIControllerPathfinder.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAIControllerPathfinder::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 45018 ];

	ADVAIControllerPathfinder_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAIControllerPathfinder.ChooseAbility
// [0x00020002] 
// Parameters infos:

void ADVAIControllerPathfinder::ChooseAbility ( )
{
	static UFunction* pFnChooseAbility = NULL;

	if ( ! pFnChooseAbility )
		pFnChooseAbility = (UFunction*) UObject::GObjObjects()->Data[ 45017 ];

	ADVAIControllerPathfinder_execChooseAbility_Parms ChooseAbility_Parms;

	this->ProcessEvent ( pFnChooseAbility, &ChooseAbility_Parms, NULL );
};

// Function ForgeGame.DVAIControllerPathfinder.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ADVAIControllerPathfinder::eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 45014 ];

	ADVAIControllerPathfinder_eventPossess_Parms Possess_Parms;
	Possess_Parms.inPawn = inPawn;
	Possess_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function ForgeGame.DVAIControllerPyromancer.ChooseAbility
// [0x00820002] 
// Parameters infos:

void ADVAIControllerPyromancer::ChooseAbility ( )
{
	static UFunction* pFnChooseAbility = NULL;

	if ( ! pFnChooseAbility )
		pFnChooseAbility = (UFunction*) UObject::GObjObjects()->Data[ 45028 ];

	ADVAIControllerPyromancer_execChooseAbility_Parms ChooseAbility_Parms;

	this->ProcessEvent ( pFnChooseAbility, &ChooseAbility_Parms, NULL );
};

// Function ForgeGame.DVAIControllerPyromancer.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ADVAIControllerPyromancer::eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 45025 ];

	ADVAIControllerPyromancer_eventPossess_Parms Possess_Parms;
	Possess_Parms.inPawn = inPawn;
	Possess_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function ForgeGame.DVAIControllerShaman.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVAIControllerShaman::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 45038 ];

	ADVAIControllerShaman_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVAIControllerShaman.ChooseAbility
// [0x00020002] 
// Parameters infos:

void ADVAIControllerShaman::ChooseAbility ( )
{
	static UFunction* pFnChooseAbility = NULL;

	if ( ! pFnChooseAbility )
		pFnChooseAbility = (UFunction*) UObject::GObjObjects()->Data[ 45037 ];

	ADVAIControllerShaman_execChooseAbility_Parms ChooseAbility_Parms;

	this->ProcessEvent ( pFnChooseAbility, &ChooseAbility_Parms, NULL );
};

// Function ForgeGame.DVAIControllerShaman.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ADVAIControllerShaman::eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 45034 ];

	ADVAIControllerShaman_eventPossess_Parms Possess_Parms;
	Possess_Parms.inPawn = inPawn;
	Possess_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function ForgeGame.DVAIControllerWarden.UnStuck
// [0x00020002] 
// Parameters infos:

void ADVAIControllerWarden::UnStuck ( )
{
	static UFunction* pFnUnStuck = NULL;

	if ( ! pFnUnStuck )
		pFnUnStuck = (UFunction*) UObject::GObjObjects()->Data[ 45047 ];

	ADVAIControllerWarden_execUnStuck_Parms UnStuck_Parms;

	this->ProcessEvent ( pFnUnStuck, &UnStuck_Parms, NULL );
};

// Function ForgeGame.DVAIControllerWarden.ChooseAbility
// [0x00020002] 
// Parameters infos:

void ADVAIControllerWarden::ChooseAbility ( )
{
	static UFunction* pFnChooseAbility = NULL;

	if ( ! pFnChooseAbility )
		pFnChooseAbility = (UFunction*) UObject::GObjObjects()->Data[ 45046 ];

	ADVAIControllerWarden_execChooseAbility_Parms ChooseAbility_Parms;

	this->ProcessEvent ( pFnChooseAbility, &ChooseAbility_Parms, NULL );
};

// Function ForgeGame.DVAIControllerWarden.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ADVAIControllerWarden::eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 45043 ];

	ADVAIControllerWarden_eventPossess_Parms Possess_Parms;
	Possess_Parms.inPawn = inPawn;
	Possess_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function ForgeGame.DVAnimNotify_AttachmentVisibility.Notify
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Owner                          ( CPF_Parm )
// class UAnimNodeSequence*       AnimSeqInstigator              ( CPF_Parm )

void UDVAnimNotify_AttachmentVisibility::eventNotify ( class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator )
{
	static UFunction* pFnNotify = NULL;

	if ( ! pFnNotify )
		pFnNotify = (UFunction*) UObject::GObjObjects()->Data[ 45063 ];

	UDVAnimNotify_AttachmentVisibility_eventNotify_Parms Notify_Parms;
	Notify_Parms.Owner = Owner;
	Notify_Parms.AnimSeqInstigator = AnimSeqInstigator;

	this->ProcessEvent ( pFnNotify, &Notify_Parms, NULL );
};

// Function ForgeGame.DVAnimNotify_Ragdoll.NotifyEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Owner                          ( CPF_Parm )
// class UAnimNodeSequence*       AnimSeqInstigator              ( CPF_Parm )

void UDVAnimNotify_Ragdoll::eventNotifyEnd ( class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator )
{
	static UFunction* pFnNotifyEnd = NULL;

	if ( ! pFnNotifyEnd )
		pFnNotifyEnd = (UFunction*) UObject::GObjObjects()->Data[ 45079 ];

	UDVAnimNotify_Ragdoll_eventNotifyEnd_Parms NotifyEnd_Parms;
	NotifyEnd_Parms.Owner = Owner;
	NotifyEnd_Parms.AnimSeqInstigator = AnimSeqInstigator;

	this->ProcessEvent ( pFnNotifyEnd, &NotifyEnd_Parms, NULL );
};

// Function ForgeGame.DVAnimNotify_Ragdoll.Notify
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Owner                          ( CPF_Parm )
// class UAnimNodeSequence*       AnimSeqInstigator              ( CPF_Parm )

void UDVAnimNotify_Ragdoll::eventNotify ( class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator )
{
	static UFunction* pFnNotify = NULL;

	if ( ! pFnNotify )
		pFnNotify = (UFunction*) UObject::GObjObjects()->Data[ 45075 ];

	UDVAnimNotify_Ragdoll_eventNotify_Parms Notify_Parms;
	Notify_Parms.Owner = Owner;
	Notify_Parms.AnimSeqInstigator = AnimSeqInstigator;

	this->ProcessEvent ( pFnNotify, &Notify_Parms, NULL );
};

// Function ForgeGame.DVArenaBlock.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVArenaBlock::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 45086 ];

	ADVArenaBlock_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVCamera.TracePawn
// [0x00C20002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 TraceEnd                       ( CPF_Parm )
// struct FVector                 TraceStart                     ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm | CPF_OutParm )
// struct FVector                 HitNormal                      ( CPF_Parm | CPF_OutParm )
// unsigned char                  UsingAssist                    ( CPF_Parm | CPF_OutParm )

class AActor* ADVCamera::TracePawn ( struct FVector TraceEnd, struct FVector TraceStart, float DeltaTime, struct FVector* HitLocation, struct FVector* HitNormal, unsigned char* UsingAssist )
{
	static UFunction* pFnTracePawn = NULL;

	if ( ! pFnTracePawn )
		pFnTracePawn = (UFunction*) UObject::GObjObjects()->Data[ 45175 ];

	ADVCamera_execTracePawn_Parms TracePawn_Parms;
	memcpy ( &TracePawn_Parms.TraceEnd, &TraceEnd, 0xC );
	memcpy ( &TracePawn_Parms.TraceStart, &TraceStart, 0xC );
	TracePawn_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTracePawn, &TracePawn_Parms, NULL );

	if ( HitLocation )
		memcpy ( HitLocation, &TracePawn_Parms.HitLocation, 0xC );

	if ( HitNormal )
		memcpy ( HitNormal, &TracePawn_Parms.HitNormal, 0xC );

	if ( UsingAssist )
		*UsingAssist = TracePawn_Parms.UsingAssist;

	return TracePawn_Parms.ReturnValue;
};

// Function ForgeGame.DVCamera.UpdateViewTarget
// [0x00C20002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void ADVCamera::UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateViewTarget = NULL;

	if ( ! pFnUpdateViewTarget )
		pFnUpdateViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 45160 ];

	ADVCamera_execUpdateViewTarget_Parms UpdateViewTarget_Parms;
	UpdateViewTarget_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateViewTarget, &UpdateViewTarget_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateViewTarget_Parms.OutVT, 0x2C );
};

// Function ForgeGame.DVDummyBlockingController.PerformBlock
// [0x00020102] 
// Parameters infos:
// unsigned long                  StartBlock                     ( CPF_Parm )

void ADVDummyBlockingController::PerformBlock ( unsigned long StartBlock )
{
	static UFunction* pFnPerformBlock = NULL;

	if ( ! pFnPerformBlock )
		pFnPerformBlock = (UFunction*) UObject::GObjObjects()->Data[ 45213 ];

	ADVDummyBlockingController_execPerformBlock_Parms PerformBlock_Parms;
	PerformBlock_Parms.StartBlock = StartBlock;

	this->ProcessEvent ( pFnPerformBlock, &PerformBlock_Parms, NULL );
};

// Function ForgeGame.DVDummyBlockingController.UnBlock
// [0x00020002] 
// Parameters infos:

void ADVDummyBlockingController::UnBlock ( )
{
	static UFunction* pFnUnBlock = NULL;

	if ( ! pFnUnBlock )
		pFnUnBlock = (UFunction*) UObject::GObjObjects()->Data[ 45212 ];

	ADVDummyBlockingController_execUnBlock_Parms UnBlock_Parms;

	this->ProcessEvent ( pFnUnBlock, &UnBlock_Parms, NULL );
};

// Function ForgeGame.DVDummyBlockingController.bLock
// [0x00020002] 
// Parameters infos:

void ADVDummyBlockingController::bLock ( )
{
	static UFunction* pFnbLock = NULL;

	if ( ! pFnbLock )
		pFnbLock = (UFunction*) UObject::GObjObjects()->Data[ 45211 ];

	ADVDummyBlockingController_execbLock_Parms bLock_Parms;

	this->ProcessEvent ( pFnbLock, &bLock_Parms, NULL );
};

// Function ForgeGame.DVDummyBlockingController.IncomingAbility
// [0x00020002] 
// Parameters infos:
// class ADVAbility*              Ability                        ( CPF_Parm )

void ADVDummyBlockingController::IncomingAbility ( class ADVAbility* Ability )
{
	static UFunction* pFnIncomingAbility = NULL;

	if ( ! pFnIncomingAbility )
		pFnIncomingAbility = (UFunction*) UObject::GObjObjects()->Data[ 45209 ];

	ADVDummyBlockingController_execIncomingAbility_Parms IncomingAbility_Parms;
	IncomingAbility_Parms.Ability = Ability;

	this->ProcessEvent ( pFnIncomingAbility, &IncomingAbility_Parms, NULL );
};

// Function ForgeGame.DVDummyBlockingController.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ADVDummyBlockingController::eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 45206 ];

	ADVDummyBlockingController_eventPossess_Parms Possess_Parms;
	Possess_Parms.inPawn = inPawn;
	Possess_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function ForgeGame.DVFlagStand.Deactivate
// [0x00020002] 
// Parameters infos:

void ADVFlagStand::Deactivate ( )
{
	static UFunction* pFnDeactivate = NULL;

	if ( ! pFnDeactivate )
		pFnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 45328 ];

	ADVFlagStand_execDeactivate_Parms Deactivate_Parms;

	this->ProcessEvent ( pFnDeactivate, &Deactivate_Parms, NULL );
};

// Function ForgeGame.DVFlagStand.Activate
// [0x00020002] 
// Parameters infos:

void ADVFlagStand::Activate ( )
{
	static UFunction* pFnActivate = NULL;

	if ( ! pFnActivate )
		pFnActivate = (UFunction*) UObject::GObjObjects()->Data[ 45327 ];

	ADVFlagStand_execActivate_Parms Activate_Parms;

	this->ProcessEvent ( pFnActivate, &Activate_Parms, NULL );
};

// Function ForgeGame.DVFlagStand.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADVFlagStand::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 45322 ];

	ADVFlagStand_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function ForgeGame.DVFlagStand.SpawnTheFlag
// [0x00020002] 
// Parameters infos:

void ADVFlagStand::SpawnTheFlag ( )
{
	static UFunction* pFnSpawnTheFlag = NULL;

	if ( ! pFnSpawnTheFlag )
		pFnSpawnTheFlag = (UFunction*) UObject::GObjObjects()->Data[ 45321 ];

	ADVFlagStand_execSpawnTheFlag_Parms SpawnTheFlag_Parms;

	this->ProcessEvent ( pFnSpawnTheFlag, &SpawnTheFlag_Parms, NULL );
};

// Function ForgeGame.DVFlagStand.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVFlagStand::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 45320 ];

	ADVFlagStand_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.DVGameReplicationInfo.DestroyPRIs
// [0x00020002] 
// Parameters infos:

void ADVGameReplicationInfo::DestroyPRIs ( )
{
	static UFunction* pFnDestroyPRIs = NULL;

	if ( ! pFnDestroyPRIs )
		pFnDestroyPRIs = (UFunction*) UObject::GObjObjects()->Data[ 45355 ];

	ADVGameReplicationInfo_execDestroyPRIs_Parms DestroyPRIs_Parms;

	this->ProcessEvent ( pFnDestroyPRIs, &DestroyPRIs_Parms, NULL );
};

// Function ForgeGame.DVGameReplicationInfo.PlayFinalMusic
// [0x00020102] 
// Parameters infos:

void ADVGameReplicationInfo::PlayFinalMusic ( )
{
	static UFunction* pFnPlayFinalMusic = NULL;

	if ( ! pFnPlayFinalMusic )
		pFnPlayFinalMusic = (UFunction*) UObject::GObjObjects()->Data[ 45353 ];

	ADVGameReplicationInfo_execPlayFinalMusic_Parms PlayFinalMusic_Parms;

	this->ProcessEvent ( pFnPlayFinalMusic, &PlayFinalMusic_Parms, NULL );
};

// Function ForgeGame.DVGameReplicationInfo.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVGameReplicationInfo::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 45351 ];

	ADVGameReplicationInfo_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVGameReplicationInfo.Timer
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADVGameReplicationInfo::eventTimer ( )
{
	static UFunction* pFnTimer = NULL;

	if ( ! pFnTimer )
		pFnTimer = (UFunction*) UObject::GObjObjects()->Data[ 45350 ];

	ADVGameReplicationInfo_eventTimer_Parms Timer_Parms;

	this->ProcessEvent ( pFnTimer, &Timer_Parms, NULL );
};

// Function ForgeGame.DVGameReplicationInfo.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADVGameReplicationInfo::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 45347 ];

	ADVGameReplicationInfo_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function ForgeGame.DVGameViewportClientExtend.DrawLoadingScreen
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UDVGameViewportClientExtend::DrawLoadingScreen ( class UCanvas* Canvas )
{
	static UFunction* pFnDrawLoadingScreen = NULL;

	if ( ! pFnDrawLoadingScreen )
		pFnDrawLoadingScreen = (UFunction*) UObject::GObjObjects()->Data[ 45391 ];

	UDVGameViewportClientExtend_execDrawLoadingScreen_Parms DrawLoadingScreen_Parms;
	DrawLoadingScreen_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDrawLoadingScreen, &DrawLoadingScreen_Parms, NULL );
};

// Function ForgeGame.DVGameViewportClientExtend.DrawTransition
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UDVGameViewportClientExtend::DrawTransition ( class UCanvas* Canvas )
{
	static UFunction* pFnDrawTransition = NULL;

	if ( ! pFnDrawTransition )
		pFnDrawTransition = (UFunction*) UObject::GObjObjects()->Data[ 45389 ];

	UDVGameViewportClientExtend_execDrawTransition_Parms DrawTransition_Parms;
	DrawTransition_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDrawTransition, &DrawTransition_Parms, NULL );
};

// Function ForgeGame.DVGameViewportClientExtend.NotifyConnectionError
// [0x00024002] 
// Parameters infos:
// unsigned char                  MessageType                    ( CPF_Parm )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Title                          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UDVGameViewportClientExtend::NotifyConnectionError ( unsigned char MessageType, struct FString Message, struct FString Title )
{
	static UFunction* pFnNotifyConnectionError = NULL;

	if ( ! pFnNotifyConnectionError )
		pFnNotifyConnectionError = (UFunction*) UObject::GObjObjects()->Data[ 45381 ];

	UDVGameViewportClientExtend_execNotifyConnectionError_Parms NotifyConnectionError_Parms;
	NotifyConnectionError_Parms.MessageType = MessageType;
	memcpy ( &NotifyConnectionError_Parms.Message, &Message, 0xC );
	memcpy ( &NotifyConnectionError_Parms.Title, &Title, 0xC );

	this->ProcessEvent ( pFnNotifyConnectionError, &NotifyConnectionError_Parms, NULL );
};

// Function ForgeGame.DVHUDFrontEnd.GetLocalPlayerOwnerIndex
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADVHUDFrontEnd::GetLocalPlayerOwnerIndex ( )
{
	static UFunction* pFnGetLocalPlayerOwnerIndex = NULL;

	if ( ! pFnGetLocalPlayerOwnerIndex )
		pFnGetLocalPlayerOwnerIndex = (UFunction*) UObject::GObjObjects()->Data[ 45489 ];

	ADVHUDFrontEnd_execGetLocalPlayerOwnerIndex_Parms GetLocalPlayerOwnerIndex_Parms;

	this->ProcessEvent ( pFnGetLocalPlayerOwnerIndex, &GetLocalPlayerOwnerIndex_Parms, NULL );

	return GetLocalPlayerOwnerIndex_Parms.ReturnValue;
};

// Function ForgeGame.DVHUDFrontEnd.ResolutionChanged
// [0x00020002] 
// Parameters infos:

void ADVHUDFrontEnd::ResolutionChanged ( )
{
	static UFunction* pFnResolutionChanged = NULL;

	if ( ! pFnResolutionChanged )
		pFnResolutionChanged = (UFunction*) UObject::GObjObjects()->Data[ 45488 ];

	ADVHUDFrontEnd_execResolutionChanged_Parms ResolutionChanged_Parms;

	this->ProcessEvent ( pFnResolutionChanged, &ResolutionChanged_Parms, NULL );
};

// Function ForgeGame.DVHUDFrontEnd.PostRender
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADVHUDFrontEnd::eventPostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 45483 ];

	ADVHUDFrontEnd_eventPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function ForgeGame.DVHUDFrontEnd.PostBeginPlay
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void ADVHUDFrontEnd::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 45480 ];

	ADVHUDFrontEnd_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.ForgeGFxKillCam.Hide
// [0x00020002] 
// Parameters infos:

void UForgeGFxKillCam::Hide ( )
{
	static UFunction* pFnHide = NULL;

	if ( ! pFnHide )
		pFnHide = (UFunction*) UObject::GObjObjects()->Data[ 49531 ];

	UForgeGFxKillCam_execHide_Parms Hide_Parms;

	this->ProcessEvent ( pFnHide, &Hide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxKillCam.ConfigureForKiller
// [0x00020002] 
// Parameters infos:
// struct FString                 KillerClassName                ( CPF_Parm | CPF_NeedCtorLink )
// class ADVPlayerReplicationInfo* KillerPRI                      ( CPF_Parm )
// int                            KillingAbilityIndex            ( CPF_Parm )

void UForgeGFxKillCam::ConfigureForKiller ( struct FString KillerClassName, class ADVPlayerReplicationInfo* KillerPRI, int KillingAbilityIndex )
{
	static UFunction* pFnConfigureForKiller = NULL;

	if ( ! pFnConfigureForKiller )
		pFnConfigureForKiller = (UFunction*) UObject::GObjObjects()->Data[ 49523 ];

	UForgeGFxKillCam_execConfigureForKiller_Parms ConfigureForKiller_Parms;
	memcpy ( &ConfigureForKiller_Parms.KillerClassName, &KillerClassName, 0xC );
	ConfigureForKiller_Parms.KillerPRI = KillerPRI;
	ConfigureForKiller_Parms.KillingAbilityIndex = KillingAbilityIndex;

	this->ProcessEvent ( pFnConfigureForKiller, &ConfigureForKiller_Parms, NULL );
};

// Function ForgeGame.ForgeGFxKillCam.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxKillCam::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 49521 ];

	UForgeGFxKillCam_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxKillCam.ConfigKillCam
// [0x00020002] 
// Parameters infos:

void UForgeGFxKillCam::ConfigKillCam ( )
{
	static UFunction* pFnConfigKillCam = NULL;

	if ( ! pFnConfigKillCam )
		pFnConfigKillCam = (UFunction*) UObject::GObjObjects()->Data[ 49520 ];

	UForgeGFxKillCam_execConfigKillCam_Parms ConfigKillCam_Parms;

	this->ProcessEvent ( pFnConfigKillCam, &ConfigKillCam_Parms, NULL );
};

// Function ForgeGame.ForgeGFxKillCam.Start
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  StartPaused                    ( CPF_OptionalParm | CPF_Parm )

bool UForgeGFxKillCam::Start ( unsigned long StartPaused )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 45456 ];

	UForgeGFxKillCam_execStart_Parms Start_Parms;
	Start_Parms.StartPaused = StartPaused;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	return Start_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxAbilitiesMenu.SetVisibility
// [0x00020002] 
// Parameters infos:
// unsigned long                  NewVisiblity                   ( CPF_Parm )

void UForgeGFxAbilitiesMenu::SetVisibility ( unsigned long NewVisiblity )
{
	static UFunction* pFnSetVisibility = NULL;

	if ( ! pFnSetVisibility )
		pFnSetVisibility = (UFunction*) UObject::GObjObjects()->Data[ 46960 ];

	UForgeGFxAbilitiesMenu_execSetVisibility_Parms SetVisibility_Parms;
	SetVisibility_Parms.NewVisiblity = NewVisiblity;

	this->ProcessEvent ( pFnSetVisibility, &SetVisibility_Parms, NULL );
};

// Function ForgeGame.ForgeGFxAbilitiesMenu.UpdateAbilitiesForClass
// [0x00020002] 
// Parameters infos:
// unsigned char                  ClassEnum                      ( CPF_Parm )

void UForgeGFxAbilitiesMenu::UpdateAbilitiesForClass ( unsigned char ClassEnum )
{
	static UFunction* pFnUpdateAbilitiesForClass = NULL;

	if ( ! pFnUpdateAbilitiesForClass )
		pFnUpdateAbilitiesForClass = (UFunction*) UObject::GObjObjects()->Data[ 46954 ];

	UForgeGFxAbilitiesMenu_execUpdateAbilitiesForClass_Parms UpdateAbilitiesForClass_Parms;
	UpdateAbilitiesForClass_Parms.ClassEnum = ClassEnum;

	this->ProcessEvent ( pFnUpdateAbilitiesForClass, &UpdateAbilitiesForClass_Parms, NULL );
};

// Function ForgeGame.ForgeGFxAbilitiesMenu.UpdateAbilityBindText
// [0x00020002] 
// Parameters infos:
// int                            AbilityIndex                   ( CPF_Parm )

void UForgeGFxAbilitiesMenu::UpdateAbilityBindText ( int AbilityIndex )
{
	static UFunction* pFnUpdateAbilityBindText = NULL;

	if ( ! pFnUpdateAbilityBindText )
		pFnUpdateAbilityBindText = (UFunction*) UObject::GObjObjects()->Data[ 46949 ];

	UForgeGFxAbilitiesMenu_execUpdateAbilityBindText_Parms UpdateAbilityBindText_Parms;
	UpdateAbilityBindText_Parms.AbilityIndex = AbilityIndex;

	this->ProcessEvent ( pFnUpdateAbilityBindText, &UpdateAbilityBindText_Parms, NULL );
};

// Function ForgeGame.ForgeGFxAbilitiesMenu.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxAbilitiesMenu::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 46945 ];

	UForgeGFxAbilitiesMenu_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxAbilitiesMenu.ConfigAbilitiesMenu
// [0x00020002] 
// Parameters infos:

void UForgeGFxAbilitiesMenu::ConfigAbilitiesMenu ( )
{
	static UFunction* pFnConfigAbilitiesMenu = NULL;

	if ( ! pFnConfigAbilitiesMenu )
		pFnConfigAbilitiesMenu = (UFunction*) UObject::GObjObjects()->Data[ 46943 ];

	UForgeGFxAbilitiesMenu_execConfigAbilitiesMenu_Parms ConfigAbilitiesMenu_Parms;

	this->ProcessEvent ( pFnConfigAbilitiesMenu, &ConfigAbilitiesMenu_Parms, NULL );
};

// Function ForgeGame.ForgeGFxAbilitiesMenu.Start
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  StartPaused                    ( CPF_OptionalParm | CPF_Parm )

bool UForgeGFxAbilitiesMenu::Start ( unsigned long StartPaused )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 46940 ];

	UForgeGFxAbilitiesMenu_execStart_Parms Start_Parms;
	Start_Parms.StartPaused = StartPaused;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	return Start_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxManager.SwapFromTo
// [0x00020000] 
// Parameters infos:
// struct FString                 OldSlideName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 NewSlideName                   ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxManager::SwapFromTo ( struct FString OldSlideName, struct FString NewSlideName )
{
	static UFunction* pFnSwapFromTo = NULL;

	if ( ! pFnSwapFromTo )
		pFnSwapFromTo = (UFunction*) UObject::GObjObjects()->Data[ 46926 ];

	UForgeGFxManager_execSwapFromTo_Parms SwapFromTo_Parms;
	memcpy ( &SwapFromTo_Parms.OldSlideName, &OldSlideName, 0xC );
	memcpy ( &SwapFromTo_Parms.NewSlideName, &NewSlideName, 0xC );

	this->ProcessEvent ( pFnSwapFromTo, &SwapFromTo_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoreBoard.ConfigForRes
// [0x00820002] 
// Parameters infos:
// int                            SizeX                          ( CPF_Parm )
// int                            SizeY                          ( CPF_Parm )

void UForgeGFxScoreBoard::ConfigForRes ( int SizeX, int SizeY )
{
	static UFunction* pFnConfigForRes = NULL;

	if ( ! pFnConfigForRes )
		pFnConfigForRes = (UFunction*) UObject::GObjObjects()->Data[ 49801 ];

	UForgeGFxScoreBoard_execConfigForRes_Parms ConfigForRes_Parms;
	ConfigForRes_Parms.SizeX = SizeX;
	ConfigForRes_Parms.SizeY = SizeY;

	this->ProcessEvent ( pFnConfigForRes, &ConfigForRes_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoreBoard.Tick
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxScoreBoard::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 49778 ];

	UForgeGFxScoreBoard_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoreBoard.SetVisibility
// [0x00020002] 
// Parameters infos:
// unsigned long                  NewVisiblity                   ( CPF_Parm )

void UForgeGFxScoreBoard::SetVisibility ( unsigned long NewVisiblity )
{
	static UFunction* pFnSetVisibility = NULL;

	if ( ! pFnSetVisibility )
		pFnSetVisibility = (UFunction*) UObject::GObjObjects()->Data[ 49776 ];

	UForgeGFxScoreBoard_execSetVisibility_Parms SetVisibility_Parms;
	SetVisibility_Parms.NewVisiblity = NewVisiblity;

	this->ProcessEvent ( pFnSetVisibility, &SetVisibility_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoreBoard.PlayerSummaryInit
// [0x00024002] 
// Parameters infos:
// class UGFxObject*              NewPlayerSummaryMC             ( CPF_Parm )
// unsigned long                  NewForScoreboard               ( CPF_OptionalParm | CPF_Parm )

void UForgeGFxScoreBoard::PlayerSummaryInit ( class UGFxObject* NewPlayerSummaryMC, unsigned long NewForScoreboard )
{
	static UFunction* pFnPlayerSummaryInit = NULL;

	if ( ! pFnPlayerSummaryInit )
		pFnPlayerSummaryInit = (UFunction*) UObject::GObjObjects()->Data[ 49773 ];

	UForgeGFxScoreBoard_execPlayerSummaryInit_Parms PlayerSummaryInit_Parms;
	PlayerSummaryInit_Parms.NewPlayerSummaryMC = NewPlayerSummaryMC;
	PlayerSummaryInit_Parms.NewForScoreboard = NewForScoreboard;

	this->ProcessEvent ( pFnPlayerSummaryInit, &PlayerSummaryInit_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoreBoard.ConfigScoreBoard
// [0x00020002] 
// Parameters infos:

void UForgeGFxScoreBoard::ConfigScoreBoard ( )
{
	static UFunction* pFnConfigScoreBoard = NULL;

	if ( ! pFnConfigScoreBoard )
		pFnConfigScoreBoard = (UFunction*) UObject::GObjObjects()->Data[ 49770 ];

	UForgeGFxScoreBoard_execConfigScoreBoard_Parms ConfigScoreBoard_Parms;

	this->ProcessEvent ( pFnConfigScoreBoard, &ConfigScoreBoard_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoreBoard.Start
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  StartPaused                    ( CPF_OptionalParm | CPF_Parm )

bool UForgeGFxScoreBoard::Start ( unsigned long StartPaused )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 45449 ];

	UForgeGFxScoreBoard_execStart_Parms Start_Parms;
	Start_Parms.StartPaused = StartPaused;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	return Start_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxScoresSlide.OnAddFriendSelect
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxScoresSlide::OnAddFriendSelect ( struct FEventData ev )
{
	static UFunction* pFnOnAddFriendSelect = NULL;

	if ( ! pFnOnAddFriendSelect )
		pFnOnAddFriendSelect = (UFunction*) UObject::GObjObjects()->Data[ 49715 ];

	UForgeGFxScoresSlide_execOnAddFriendSelect_Parms OnAddFriendSelect_Parms;
	memcpy ( &OnAddFriendSelect_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnAddFriendSelect, &OnAddFriendSelect_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.OnViewProfileSelect
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxScoresSlide::OnViewProfileSelect ( struct FEventData ev )
{
	static UFunction* pFnOnViewProfileSelect = NULL;

	if ( ! pFnOnViewProfileSelect )
		pFnOnViewProfileSelect = (UFunction*) UObject::GObjObjects()->Data[ 49710 ];

	UForgeGFxScoresSlide_execOnViewProfileSelect_Parms OnViewProfileSelect_Parms;
	memcpy ( &OnViewProfileSelect_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnViewProfileSelect, &OnViewProfileSelect_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.OnPlayerMuteChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxScoresSlide::OnPlayerMuteChange ( struct FEventData ev )
{
	static UFunction* pFnOnPlayerMuteChange = NULL;

	if ( ! pFnOnPlayerMuteChange )
		pFnOnPlayerMuteChange = (UFunction*) UObject::GObjObjects()->Data[ 49705 ];

	UForgeGFxScoresSlide_execOnPlayerMuteChange_Parms OnPlayerMuteChange_Parms;
	memcpy ( &OnPlayerMuteChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnPlayerMuteChange, &OnPlayerMuteChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.MoveSteamDropDownToMouse
// [0x00820002] 
// Parameters infos:

void UForgeGFxScoresSlide::MoveSteamDropDownToMouse ( )
{
	static UFunction* pFnMoveSteamDropDownToMouse = NULL;

	if ( ! pFnMoveSteamDropDownToMouse )
		pFnMoveSteamDropDownToMouse = (UFunction*) UObject::GObjObjects()->Data[ 49700 ];

	UForgeGFxScoresSlide_execMoveSteamDropDownToMouse_Parms MoveSteamDropDownToMouse_Parms;

	this->ProcessEvent ( pFnMoveSteamDropDownToMouse, &MoveSteamDropDownToMouse_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.GetPRIFromData
// [0x00420002] 
// Parameters infos:
// struct FString                 DataString                     ( CPF_Parm | CPF_NeedCtorLink )
// class ADVPlayerReplicationInfo* TargetPRI                      ( CPF_Parm | CPF_OutParm )

void UForgeGFxScoresSlide::GetPRIFromData ( struct FString DataString, class ADVPlayerReplicationInfo** TargetPRI )
{
	static UFunction* pFnGetPRIFromData = NULL;

	if ( ! pFnGetPRIFromData )
		pFnGetPRIFromData = (UFunction*) UObject::GObjObjects()->Data[ 49695 ];

	UForgeGFxScoresSlide_execGetPRIFromData_Parms GetPRIFromData_Parms;
	memcpy ( &GetPRIFromData_Parms.DataString, &DataString, 0xC );

	this->ProcessEvent ( pFnGetPRIFromData, &GetPRIFromData_Parms, NULL );

	if ( TargetPRI )
		*TargetPRI = GetPRIFromData_Parms.TargetPRI;
};

// Function ForgeGame.ForgeGFxScoresSlide.OnPlayerClicked
// [0x00820002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxScoresSlide::OnPlayerClicked ( struct FEventData ev )
{
	static UFunction* pFnOnPlayerClicked = NULL;

	if ( ! pFnOnPlayerClicked )
		pFnOnPlayerClicked = (UFunction*) UObject::GObjObjects()->Data[ 49689 ];

	UForgeGFxScoresSlide_execOnPlayerClicked_Parms OnPlayerClicked_Parms;
	memcpy ( &OnPlayerClicked_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnPlayerClicked, &OnPlayerClicked_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.OnTeamSelected
// [0x00020000] 
// Parameters infos:

void UForgeGFxScoresSlide::OnTeamSelected ( )
{
	static UFunction* pFnOnTeamSelected = NULL;

	if ( ! pFnOnTeamSelected )
		pFnOnTeamSelected = (UFunction*) UObject::GObjObjects()->Data[ 49688 ];

	UForgeGFxScoresSlide_execOnTeamSelected_Parms OnTeamSelected_Parms;

	this->ProcessEvent ( pFnOnTeamSelected, &OnTeamSelected_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.CheckSwapToTeam
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  NewTeamNum                     ( CPF_Parm )

bool UForgeGFxScoresSlide::CheckSwapToTeam ( unsigned char NewTeamNum )
{
	static UFunction* pFnCheckSwapToTeam = NULL;

	if ( ! pFnCheckSwapToTeam )
		pFnCheckSwapToTeam = (UFunction*) UObject::GObjObjects()->Data[ 49683 ];

	UForgeGFxScoresSlide_execCheckSwapToTeam_Parms CheckSwapToTeam_Parms;
	CheckSwapToTeam_Parms.NewTeamNum = NewTeamNum;

	this->ProcessEvent ( pFnCheckSwapToTeam, &CheckSwapToTeam_Parms, NULL );

	return CheckSwapToTeam_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxScoresSlide.OnDevotedPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxScoresSlide::OnDevotedPress ( struct FEventData ev )
{
	static UFunction* pFnOnDevotedPress = NULL;

	if ( ! pFnOnDevotedPress )
		pFnOnDevotedPress = (UFunction*) UObject::GObjObjects()->Data[ 49681 ];

	UForgeGFxScoresSlide_execOnDevotedPress_Parms OnDevotedPress_Parms;
	memcpy ( &OnDevotedPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnDevotedPress, &OnDevotedPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.OnZealousPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxScoresSlide::OnZealousPress ( struct FEventData ev )
{
	static UFunction* pFnOnZealousPress = NULL;

	if ( ! pFnOnZealousPress )
		pFnOnZealousPress = (UFunction*) UObject::GObjObjects()->Data[ 49679 ];

	UForgeGFxScoresSlide_execOnZealousPress_Parms OnZealousPress_Parms;
	memcpy ( &OnZealousPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnZealousPress, &OnZealousPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.UpdateGenericTeamInfo
// [0x00020002] 
// Parameters infos:
// class UClass*                  TheGameMode                    ( CPF_Parm )

void UForgeGFxScoresSlide::UpdateGenericTeamInfo ( class UClass* TheGameMode )
{
	static UFunction* pFnUpdateGenericTeamInfo = NULL;

	if ( ! pFnUpdateGenericTeamInfo )
		pFnUpdateGenericTeamInfo = (UFunction*) UObject::GObjObjects()->Data[ 49673 ];

	UForgeGFxScoresSlide_execUpdateGenericTeamInfo_Parms UpdateGenericTeamInfo_Parms;
	UpdateGenericTeamInfo_Parms.TheGameMode = TheGameMode;

	this->ProcessEvent ( pFnUpdateGenericTeamInfo, &UpdateGenericTeamInfo_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.UpdateCTFTeamInfo
// [0x00020002] 
// Parameters infos:

void UForgeGFxScoresSlide::UpdateCTFTeamInfo ( )
{
	static UFunction* pFnUpdateCTFTeamInfo = NULL;

	if ( ! pFnUpdateCTFTeamInfo )
		pFnUpdateCTFTeamInfo = (UFunction*) UObject::GObjObjects()->Data[ 49668 ];

	UForgeGFxScoresSlide_execUpdateCTFTeamInfo_Parms UpdateCTFTeamInfo_Parms;

	this->ProcessEvent ( pFnUpdateCTFTeamInfo, &UpdateCTFTeamInfo_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.SortPRIsByScore
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerReplicationInfo*  PRI1                           ( CPF_Parm )
// class APlayerReplicationInfo*  PRI2                           ( CPF_Parm )

int UForgeGFxScoresSlide::SortPRIsByScore ( class APlayerReplicationInfo* PRI1, class APlayerReplicationInfo* PRI2 )
{
	static UFunction* pFnSortPRIsByScore = NULL;

	if ( ! pFnSortPRIsByScore )
		pFnSortPRIsByScore = (UFunction*) UObject::GObjObjects()->Data[ 49664 ];

	UForgeGFxScoresSlide_execSortPRIsByScore_Parms SortPRIsByScore_Parms;
	SortPRIsByScore_Parms.PRI1 = PRI1;
	SortPRIsByScore_Parms.PRI2 = PRI2;

	this->ProcessEvent ( pFnSortPRIsByScore, &SortPRIsByScore_Parms, NULL );

	return SortPRIsByScore_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxScoresSlide.SetBackgroundColor
// [0x00020002] 
// Parameters infos:
// class UGFxObject*              TheLineBackground              ( CPF_Parm )
// unsigned char                  LineTeam                       ( CPF_Parm )
// unsigned char                  PlayerTeam                     ( CPF_Parm )

void UForgeGFxScoresSlide::SetBackgroundColor ( class UGFxObject* TheLineBackground, unsigned char LineTeam, unsigned char PlayerTeam )
{
	static UFunction* pFnSetBackgroundColor = NULL;

	if ( ! pFnSetBackgroundColor )
		pFnSetBackgroundColor = (UFunction*) UObject::GObjObjects()->Data[ 49660 ];

	UForgeGFxScoresSlide_execSetBackgroundColor_Parms SetBackgroundColor_Parms;
	SetBackgroundColor_Parms.TheLineBackground = TheLineBackground;
	SetBackgroundColor_Parms.LineTeam = LineTeam;
	SetBackgroundColor_Parms.PlayerTeam = PlayerTeam;

	this->ProcessEvent ( pFnSetBackgroundColor, &SetBackgroundColor_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxScoresSlide::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 49650 ];

	UForgeGFxScoresSlide_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.SteamDropDownInit
// [0x00020002] 
// Parameters infos:
// class UGFxObject*              NewSteamDropDownMC             ( CPF_Parm )

void UForgeGFxScoresSlide::SteamDropDownInit ( class UGFxObject* NewSteamDropDownMC )
{
	static UFunction* pFnSteamDropDownInit = NULL;

	if ( ! pFnSteamDropDownInit )
		pFnSteamDropDownInit = (UFunction*) UObject::GObjObjects()->Data[ 49648 ];

	UForgeGFxScoresSlide_execSteamDropDownInit_Parms SteamDropDownInit_Parms;
	SteamDropDownInit_Parms.NewSteamDropDownMC = NewSteamDropDownMC;

	this->ProcessEvent ( pFnSteamDropDownInit, &SteamDropDownInit_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.TeamSummaryInit
// [0x00020002] 
// Parameters infos:
// class UGFxObject*              NewTeamSummaryMC               ( CPF_Parm )

void UForgeGFxScoresSlide::TeamSummaryInit ( class UGFxObject* NewTeamSummaryMC )
{
	static UFunction* pFnTeamSummaryInit = NULL;

	if ( ! pFnTeamSummaryInit )
		pFnTeamSummaryInit = (UFunction*) UObject::GObjObjects()->Data[ 49646 ];

	UForgeGFxScoresSlide_execTeamSummaryInit_Parms TeamSummaryInit_Parms;
	TeamSummaryInit_Parms.NewTeamSummaryMC = NewTeamSummaryMC;

	this->ProcessEvent ( pFnTeamSummaryInit, &TeamSummaryInit_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.UpdatePlayerLine
// [0x00820002] 
// Parameters infos:
// struct FSPlayerLineElement     ThePlayerLine                  ( CPF_Parm )
// class ADVPlayerReplicationInfo* UpdatePRI                      ( CPF_Parm )

void UForgeGFxScoresSlide::UpdatePlayerLine ( struct FSPlayerLineElement ThePlayerLine, class ADVPlayerReplicationInfo* UpdatePRI )
{
	static UFunction* pFnUpdatePlayerLine = NULL;

	if ( ! pFnUpdatePlayerLine )
		pFnUpdatePlayerLine = (UFunction*) UObject::GObjObjects()->Data[ 49628 ];

	UForgeGFxScoresSlide_execUpdatePlayerLine_Parms UpdatePlayerLine_Parms;
	memcpy ( &UpdatePlayerLine_Parms.ThePlayerLine, &ThePlayerLine, 0x40 );
	UpdatePlayerLine_Parms.UpdatePRI = UpdatePRI;

	this->ProcessEvent ( pFnUpdatePlayerLine, &UpdatePlayerLine_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.ClearPlayerLine
// [0x00020002] 
// Parameters infos:
// struct FSPlayerLineElement     ThePlayerLine                  ( CPF_Parm )

void UForgeGFxScoresSlide::ClearPlayerLine ( struct FSPlayerLineElement ThePlayerLine )
{
	static UFunction* pFnClearPlayerLine = NULL;

	if ( ! pFnClearPlayerLine )
		pFnClearPlayerLine = (UFunction*) UObject::GObjObjects()->Data[ 49625 ];

	UForgeGFxScoresSlide_execClearPlayerLine_Parms ClearPlayerLine_Parms;
	memcpy ( &ClearPlayerLine_Parms.ThePlayerLine, &ThePlayerLine, 0x40 );

	this->ProcessEvent ( pFnClearPlayerLine, &ClearPlayerLine_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.ConfigPlayerSummaryForTeam
// [0x00820002] 
// Parameters infos:
// struct FSTeamElements          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 CurTeamName                    ( CPF_Parm | CPF_NeedCtorLink )

struct FSTeamElements UForgeGFxScoresSlide::ConfigPlayerSummaryForTeam ( struct FString CurTeamName )
{
	static UFunction* pFnConfigPlayerSummaryForTeam = NULL;

	if ( ! pFnConfigPlayerSummaryForTeam )
		pFnConfigPlayerSummaryForTeam = (UFunction*) UObject::GObjObjects()->Data[ 49616 ];

	UForgeGFxScoresSlide_execConfigPlayerSummaryForTeam_Parms ConfigPlayerSummaryForTeam_Parms;
	memcpy ( &ConfigPlayerSummaryForTeam_Parms.CurTeamName, &CurTeamName, 0xC );

	this->ProcessEvent ( pFnConfigPlayerSummaryForTeam, &ConfigPlayerSummaryForTeam_Parms, NULL );

	return ConfigPlayerSummaryForTeam_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxScoresSlide.ShowMessage
// [0x00020000] 
// Parameters infos:
// struct FString                 TheMessageText                 ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxScoresSlide::ShowMessage ( struct FString TheMessageText )
{
	static UFunction* pFnShowMessage = NULL;

	if ( ! pFnShowMessage )
		pFnShowMessage = (UFunction*) UObject::GObjObjects()->Data[ 49614 ];

	UForgeGFxScoresSlide_execShowMessage_Parms ShowMessage_Parms;
	memcpy ( &ShowMessage_Parms.TheMessageText, &TheMessageText, 0xC );

	this->ProcessEvent ( pFnShowMessage, &ShowMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.SetVisibility
// [0x00020002] 
// Parameters infos:
// unsigned long                  NewVisiblity                   ( CPF_Parm )

void UForgeGFxScoresSlide::SetVisibility ( unsigned long NewVisiblity )
{
	static UFunction* pFnSetVisibility = NULL;

	if ( ! pFnSetVisibility )
		pFnSetVisibility = (UFunction*) UObject::GObjObjects()->Data[ 49612 ];

	UForgeGFxScoresSlide_execSetVisibility_Parms SetVisibility_Parms;
	SetVisibility_Parms.NewVisiblity = NewVisiblity;

	this->ProcessEvent ( pFnSetVisibility, &SetVisibility_Parms, NULL );
};

// Function ForgeGame.ForgeGFxScoresSlide.PlayerSummaryInit
// [0x00024002] 
// Parameters infos:
// class UGFxObject*              NewPlayerSummaryMC             ( CPF_Parm )
// unsigned long                  NewForScoreboard               ( CPF_OptionalParm | CPF_Parm )

void UForgeGFxScoresSlide::PlayerSummaryInit ( class UGFxObject* NewPlayerSummaryMC, unsigned long NewForScoreboard )
{
	static UFunction* pFnPlayerSummaryInit = NULL;

	if ( ! pFnPlayerSummaryInit )
		pFnPlayerSummaryInit = (UFunction*) UObject::GObjObjects()->Data[ 49609 ];

	UForgeGFxScoresSlide_execPlayerSummaryInit_Parms PlayerSummaryInit_Parms;
	PlayerSummaryInit_Parms.NewPlayerSummaryMC = NewPlayerSummaryMC;
	PlayerSummaryInit_Parms.NewForScoreboard = NewForScoreboard;

	this->ProcessEvent ( pFnPlayerSummaryInit, &PlayerSummaryInit_Parms, NULL );
};

// Function ForgeGame.ForgeGFxTeamSelect.OnTeamSelected
// [0x00020002] 
// Parameters infos:

void UForgeGFxTeamSelect::OnTeamSelected ( )
{
	static UFunction* pFnOnTeamSelected = NULL;

	if ( ! pFnOnTeamSelected )
		pFnOnTeamSelected = (UFunction*) UObject::GObjObjects()->Data[ 49889 ];

	UForgeGFxTeamSelect_execOnTeamSelected_Parms OnTeamSelected_Parms;

	this->ProcessEvent ( pFnOnTeamSelected, &OnTeamSelected_Parms, NULL );
};

// Function ForgeGame.ForgeGFxTeamSelect.FilterButtonInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   ButtonName                     ( CPF_Parm )
// unsigned char                  InputEvent                     ( CPF_Parm )

bool UForgeGFxTeamSelect::eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent )
{
	static UFunction* pFnFilterButtonInput = NULL;

	if ( ! pFnFilterButtonInput )
		pFnFilterButtonInput = (UFunction*) UObject::GObjObjects()->Data[ 49884 ];

	UForgeGFxTeamSelect_eventFilterButtonInput_Parms FilterButtonInput_Parms;
	FilterButtonInput_Parms.ControllerId = ControllerId;
	memcpy ( &FilterButtonInput_Parms.ButtonName, &ButtonName, 0x8 );
	FilterButtonInput_Parms.InputEvent = InputEvent;

	this->ProcessEvent ( pFnFilterButtonInput, &FilterButtonInput_Parms, NULL );

	return FilterButtonInput_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxTeamSelect.OnRandomButtonPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxTeamSelect::OnRandomButtonPress ( struct FEventData ev )
{
	static UFunction* pFnOnRandomButtonPress = NULL;

	if ( ! pFnOnRandomButtonPress )
		pFnOnRandomButtonPress = (UFunction*) UObject::GObjObjects()->Data[ 49880 ];

	UForgeGFxTeamSelect_execOnRandomButtonPress_Parms OnRandomButtonPress_Parms;
	memcpy ( &OnRandomButtonPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnRandomButtonPress, &OnRandomButtonPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxTeamSelect.OnSpectateButtonPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxTeamSelect::OnSpectateButtonPress ( struct FEventData ev )
{
	static UFunction* pFnOnSpectateButtonPress = NULL;

	if ( ! pFnOnSpectateButtonPress )
		pFnOnSpectateButtonPress = (UFunction*) UObject::GObjObjects()->Data[ 49878 ];

	UForgeGFxTeamSelect_execOnSpectateButtonPress_Parms OnSpectateButtonPress_Parms;
	memcpy ( &OnSpectateButtonPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnSpectateButtonPress, &OnSpectateButtonPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxTeamSelect.ConfigForRes
// [0x00820002] 
// Parameters infos:
// int                            SizeX                          ( CPF_Parm )
// int                            SizeY                          ( CPF_Parm )

void UForgeGFxTeamSelect::ConfigForRes ( int SizeX, int SizeY )
{
	static UFunction* pFnConfigForRes = NULL;

	if ( ! pFnConfigForRes )
		pFnConfigForRes = (UFunction*) UObject::GObjObjects()->Data[ 49870 ];

	UForgeGFxTeamSelect_execConfigForRes_Parms ConfigForRes_Parms;
	ConfigForRes_Parms.SizeX = SizeX;
	ConfigForRes_Parms.SizeY = SizeY;

	this->ProcessEvent ( pFnConfigForRes, &ConfigForRes_Parms, NULL );
};

// Function ForgeGame.ForgeGFxTeamSelect.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxTeamSelect::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 49865 ];

	UForgeGFxTeamSelect_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxTeamSelect.ShowMessage
// [0x00020002] 
// Parameters infos:
// struct FString                 TheMessageText                 ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxTeamSelect::ShowMessage ( struct FString TheMessageText )
{
	static UFunction* pFnShowMessage = NULL;

	if ( ! pFnShowMessage )
		pFnShowMessage = (UFunction*) UObject::GObjObjects()->Data[ 49863 ];

	UForgeGFxTeamSelect_execShowMessage_Parms ShowMessage_Parms;
	memcpy ( &ShowMessage_Parms.TheMessageText, &TheMessageText, 0xC );

	this->ProcessEvent ( pFnShowMessage, &ShowMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxTeamSelect.ConfigTeamSelect
// [0x00820002] 
// Parameters infos:

void UForgeGFxTeamSelect::ConfigTeamSelect ( )
{
	static UFunction* pFnConfigTeamSelect = NULL;

	if ( ! pFnConfigTeamSelect )
		pFnConfigTeamSelect = (UFunction*) UObject::GObjObjects()->Data[ 49861 ];

	UForgeGFxTeamSelect_execConfigTeamSelect_Parms ConfigTeamSelect_Parms;

	this->ProcessEvent ( pFnConfigTeamSelect, &ConfigTeamSelect_Parms, NULL );
};

// Function ForgeGame.ForgeGFxTeamSelect.Start
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  StartPaused                    ( CPF_OptionalParm | CPF_Parm )

bool UForgeGFxTeamSelect::Start ( unsigned long StartPaused )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 45443 ];

	UForgeGFxTeamSelect_execStart_Parms Start_Parms;
	Start_Parms.StartPaused = StartPaused;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	return Start_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxClassSelect.FilterButtonInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   ButtonName                     ( CPF_Parm )
// unsigned char                  InputEvent                     ( CPF_Parm )

bool UForgeGFxClassSelect::eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent )
{
	static UFunction* pFnFilterButtonInput = NULL;

	if ( ! pFnFilterButtonInput )
		pFnFilterButtonInput = (UFunction*) UObject::GObjObjects()->Data[ 47147 ];

	UForgeGFxClassSelect_eventFilterButtonInput_Parms FilterButtonInput_Parms;
	FilterButtonInput_Parms.ControllerId = ControllerId;
	memcpy ( &FilterButtonInput_Parms.ButtonName, &ButtonName, 0x8 );
	FilterButtonInput_Parms.InputEvent = InputEvent;

	this->ProcessEvent ( pFnFilterButtonInput, &FilterButtonInput_Parms, NULL );

	return FilterButtonInput_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxClassSelect.SelectAbility
// [0x00020002] 
// Parameters infos:
// int                            AbilitySlot                    ( CPF_Parm )

void UForgeGFxClassSelect::SelectAbility ( int AbilitySlot )
{
	static UFunction* pFnSelectAbility = NULL;

	if ( ! pFnSelectAbility )
		pFnSelectAbility = (UFunction*) UObject::GObjObjects()->Data[ 47137 ];

	UForgeGFxClassSelect_execSelectAbility_Parms SelectAbility_Parms;
	SelectAbility_Parms.AbilitySlot = AbilitySlot;

	this->ProcessEvent ( pFnSelectAbility, &SelectAbility_Parms, NULL );
};

// Function ForgeGame.ForgeGFxClassSelect.OnClassButtonChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxClassSelect::OnClassButtonChange ( struct FEventData ev )
{
	static UFunction* pFnOnClassButtonChange = NULL;

	if ( ! pFnOnClassButtonChange )
		pFnOnClassButtonChange = (UFunction*) UObject::GObjObjects()->Data[ 47133 ];

	UForgeGFxClassSelect_execOnClassButtonChange_Parms OnClassButtonChange_Parms;
	memcpy ( &OnClassButtonChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnClassButtonChange, &OnClassButtonChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxClassSelect.OnClassButtonPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxClassSelect::OnClassButtonPress ( struct FEventData ev )
{
	static UFunction* pFnOnClassButtonPress = NULL;

	if ( ! pFnOnClassButtonPress )
		pFnOnClassButtonPress = (UFunction*) UObject::GObjObjects()->Data[ 47130 ];

	UForgeGFxClassSelect_execOnClassButtonPress_Parms OnClassButtonPress_Parms;
	memcpy ( &OnClassButtonPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnClassButtonPress, &OnClassButtonPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxClassSelect.OnAbilityButtonPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxClassSelect::OnAbilityButtonPress ( struct FEventData ev )
{
	static UFunction* pFnOnAbilityButtonPress = NULL;

	if ( ! pFnOnAbilityButtonPress )
		pFnOnAbilityButtonPress = (UFunction*) UObject::GObjObjects()->Data[ 47127 ];

	UForgeGFxClassSelect_execOnAbilityButtonPress_Parms OnAbilityButtonPress_Parms;
	memcpy ( &OnAbilityButtonPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnAbilityButtonPress, &OnAbilityButtonPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxClassSelect.OnSelectButtonPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxClassSelect::OnSelectButtonPress ( struct FEventData ev )
{
	static UFunction* pFnOnSelectButtonPress = NULL;

	if ( ! pFnOnSelectButtonPress )
		pFnOnSelectButtonPress = (UFunction*) UObject::GObjObjects()->Data[ 47125 ];

	UForgeGFxClassSelect_execOnSelectButtonPress_Parms OnSelectButtonPress_Parms;
	memcpy ( &OnSelectButtonPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnSelectButtonPress, &OnSelectButtonPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxClassSelect.OnCancelButtonPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxClassSelect::OnCancelButtonPress ( struct FEventData ev )
{
	static UFunction* pFnOnCancelButtonPress = NULL;

	if ( ! pFnOnCancelButtonPress )
		pFnOnCancelButtonPress = (UFunction*) UObject::GObjObjects()->Data[ 47123 ];

	UForgeGFxClassSelect_execOnCancelButtonPress_Parms OnCancelButtonPress_Parms;
	memcpy ( &OnCancelButtonPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnCancelButtonPress, &OnCancelButtonPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxClassSelect.OnSlideRightPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxClassSelect::OnSlideRightPress ( struct FEventData ev )
{
	static UFunction* pFnOnSlideRightPress = NULL;

	if ( ! pFnOnSlideRightPress )
		pFnOnSlideRightPress = (UFunction*) UObject::GObjObjects()->Data[ 47121 ];

	UForgeGFxClassSelect_execOnSlideRightPress_Parms OnSlideRightPress_Parms;
	memcpy ( &OnSlideRightPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnSlideRightPress, &OnSlideRightPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxClassSelect.OnSlideLeftPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxClassSelect::OnSlideLeftPress ( struct FEventData ev )
{
	static UFunction* pFnOnSlideLeftPress = NULL;

	if ( ! pFnOnSlideLeftPress )
		pFnOnSlideLeftPress = (UFunction*) UObject::GObjObjects()->Data[ 47119 ];

	UForgeGFxClassSelect_execOnSlideLeftPress_Parms OnSlideLeftPress_Parms;
	memcpy ( &OnSlideLeftPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnSlideLeftPress, &OnSlideLeftPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxClassSelect.ConfigForRes
// [0x00820002] 
// Parameters infos:
// int                            SizeX                          ( CPF_Parm )
// int                            SizeY                          ( CPF_Parm )

void UForgeGFxClassSelect::ConfigForRes ( int SizeX, int SizeY )
{
	static UFunction* pFnConfigForRes = NULL;

	if ( ! pFnConfigForRes )
		pFnConfigForRes = (UFunction*) UObject::GObjObjects()->Data[ 47113 ];

	UForgeGFxClassSelect_execConfigForRes_Parms ConfigForRes_Parms;
	ConfigForRes_Parms.SizeX = SizeX;
	ConfigForRes_Parms.SizeY = SizeY;

	this->ProcessEvent ( pFnConfigForRes, &ConfigForRes_Parms, NULL );
};

// Function ForgeGame.ForgeGFxClassSelect.Tick
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxClassSelect::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 47104 ];

	UForgeGFxClassSelect_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxClassSelect.ConfigureAbility
// [0x00020002] 
// Parameters infos:
// int                            AbilityNumber                  ( CPF_Parm )

void UForgeGFxClassSelect::ConfigureAbility ( int AbilityNumber )
{
	static UFunction* pFnConfigureAbility = NULL;

	if ( ! pFnConfigureAbility )
		pFnConfigureAbility = (UFunction*) UObject::GObjObjects()->Data[ 47099 ];

	UForgeGFxClassSelect_execConfigureAbility_Parms ConfigureAbility_Parms;
	ConfigureAbility_Parms.AbilityNumber = AbilityNumber;

	this->ProcessEvent ( pFnConfigureAbility, &ConfigureAbility_Parms, NULL );
};

// Function ForgeGame.ForgeGFxClassSelect.ApplySteamCloudSettings
// [0x00020002] 
// Parameters infos:

void UForgeGFxClassSelect::ApplySteamCloudSettings ( )
{
	static UFunction* pFnApplySteamCloudSettings = NULL;

	if ( ! pFnApplySteamCloudSettings )
		pFnApplySteamCloudSettings = (UFunction*) UObject::GObjObjects()->Data[ 47098 ];

	UForgeGFxClassSelect_execApplySteamCloudSettings_Parms ApplySteamCloudSettings_Parms;

	this->ProcessEvent ( pFnApplySteamCloudSettings, &ApplySteamCloudSettings_Parms, NULL );
};

// Function ForgeGame.ForgeGFxClassSelect.ConfigForClass
// [0x00020002] 
// Parameters infos:
// struct FString                 ClassName                      ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxClassSelect::ConfigForClass ( struct FString ClassName )
{
	static UFunction* pFnConfigForClass = NULL;

	if ( ! pFnConfigForClass )
		pFnConfigForClass = (UFunction*) UObject::GObjObjects()->Data[ 47095 ];

	UForgeGFxClassSelect_execConfigForClass_Parms ConfigForClass_Parms;
	memcpy ( &ConfigForClass_Parms.ClassName, &ClassName, 0xC );

	this->ProcessEvent ( pFnConfigForClass, &ConfigForClass_Parms, NULL );
};

// Function ForgeGame.ForgeGFxClassSelect.ConfigureClassButtonFor
// [0x00820002] 
// Parameters infos:
// struct UForgeGFxClassSelect_FSClassSelectionButton ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 ClassName                      ( CPF_Parm | CPF_NeedCtorLink )

struct UForgeGFxClassSelect_FSClassSelectionButton UForgeGFxClassSelect::ConfigureClassButtonFor ( struct FString ClassName )
{
	static UFunction* pFnConfigureClassButtonFor = NULL;

	if ( ! pFnConfigureClassButtonFor )
		pFnConfigureClassButtonFor = (UFunction*) UObject::GObjObjects()->Data[ 47090 ];

	UForgeGFxClassSelect_execConfigureClassButtonFor_Parms ConfigureClassButtonFor_Parms;
	memcpy ( &ConfigureClassButtonFor_Parms.ClassName, &ClassName, 0xC );

	this->ProcessEvent ( pFnConfigureClassButtonFor, &ConfigureClassButtonFor_Parms, NULL );

	return ConfigureClassButtonFor_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxClassSelect.ConfigClassSelect
// [0x00020002] 
// Parameters infos:

void UForgeGFxClassSelect::ConfigClassSelect ( )
{
	static UFunction* pFnConfigClassSelect = NULL;

	if ( ! pFnConfigClassSelect )
		pFnConfigClassSelect = (UFunction*) UObject::GObjObjects()->Data[ 47088 ];

	UForgeGFxClassSelect_execConfigClassSelect_Parms ConfigClassSelect_Parms;

	this->ProcessEvent ( pFnConfigClassSelect, &ConfigClassSelect_Parms, NULL );
};

// Function ForgeGame.ForgeGFxClassSelect.Start
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  StartPaused                    ( CPF_OptionalParm | CPF_Parm )

bool UForgeGFxClassSelect::Start ( unsigned long StartPaused )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 45439 ];

	UForgeGFxClassSelect_execStart_Parms Start_Parms;
	Start_Parms.StartPaused = StartPaused;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	return Start_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxEscapeMenu.FilterButtonInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   ButtonName                     ( CPF_Parm )
// unsigned char                  InputEvent                     ( CPF_Parm )

bool UForgeGFxEscapeMenu::eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent )
{
	static UFunction* pFnFilterButtonInput = NULL;

	if ( ! pFnFilterButtonInput )
		pFnFilterButtonInput = (UFunction*) UObject::GObjObjects()->Data[ 47226 ];

	UForgeGFxEscapeMenu_eventFilterButtonInput_Parms FilterButtonInput_Parms;
	FilterButtonInput_Parms.ControllerId = ControllerId;
	memcpy ( &FilterButtonInput_Parms.ButtonName, &ButtonName, 0x8 );
	FilterButtonInput_Parms.InputEvent = InputEvent;

	this->ProcessEvent ( pFnFilterButtonInput, &FilterButtonInput_Parms, NULL );

	return FilterButtonInput_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxEscapeMenu.OnQuitNagPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxEscapeMenu::OnQuitNagPress ( struct FEventData ev )
{
	static UFunction* pFnOnQuitNagPress = NULL;

	if ( ! pFnOnQuitNagPress )
		pFnOnQuitNagPress = (UFunction*) UObject::GObjObjects()->Data[ 47224 ];

	UForgeGFxEscapeMenu_execOnQuitNagPress_Parms OnQuitNagPress_Parms;
	memcpy ( &OnQuitNagPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnQuitNagPress, &OnQuitNagPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxEscapeMenu.OnConfirmYesPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxEscapeMenu::OnConfirmYesPress ( struct FEventData ev )
{
	static UFunction* pFnOnConfirmYesPress = NULL;

	if ( ! pFnOnConfirmYesPress )
		pFnOnConfirmYesPress = (UFunction*) UObject::GObjObjects()->Data[ 47222 ];

	UForgeGFxEscapeMenu_execOnConfirmYesPress_Parms OnConfirmYesPress_Parms;
	memcpy ( &OnConfirmYesPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnConfirmYesPress, &OnConfirmYesPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxEscapeMenu.OnConfirmNoPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxEscapeMenu::OnConfirmNoPress ( struct FEventData ev )
{
	static UFunction* pFnOnConfirmNoPress = NULL;

	if ( ! pFnOnConfirmNoPress )
		pFnOnConfirmNoPress = (UFunction*) UObject::GObjObjects()->Data[ 47220 ];

	UForgeGFxEscapeMenu_execOnConfirmNoPress_Parms OnConfirmNoPress_Parms;
	memcpy ( &OnConfirmNoPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnConfirmNoPress, &OnConfirmNoPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxEscapeMenu.OnExitGamePress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxEscapeMenu::OnExitGamePress ( struct FEventData ev )
{
	static UFunction* pFnOnExitGamePress = NULL;

	if ( ! pFnOnExitGamePress )
		pFnOnExitGamePress = (UFunction*) UObject::GObjObjects()->Data[ 47218 ];

	UForgeGFxEscapeMenu_execOnExitGamePress_Parms OnExitGamePress_Parms;
	memcpy ( &OnExitGamePress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnExitGamePress, &OnExitGamePress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxEscapeMenu.OnExitMenuPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxEscapeMenu::OnExitMenuPress ( struct FEventData ev )
{
	static UFunction* pFnOnExitMenuPress = NULL;

	if ( ! pFnOnExitMenuPress )
		pFnOnExitMenuPress = (UFunction*) UObject::GObjObjects()->Data[ 47216 ];

	UForgeGFxEscapeMenu_execOnExitMenuPress_Parms OnExitMenuPress_Parms;
	memcpy ( &OnExitMenuPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnExitMenuPress, &OnExitMenuPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxEscapeMenu.OnSettingsPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxEscapeMenu::OnSettingsPress ( struct FEventData ev )
{
	static UFunction* pFnOnSettingsPress = NULL;

	if ( ! pFnOnSettingsPress )
		pFnOnSettingsPress = (UFunction*) UObject::GObjObjects()->Data[ 47214 ];

	UForgeGFxEscapeMenu_execOnSettingsPress_Parms OnSettingsPress_Parms;
	memcpy ( &OnSettingsPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnSettingsPress, &OnSettingsPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxEscapeMenu.OnChangeClassPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxEscapeMenu::OnChangeClassPress ( struct FEventData ev )
{
	static UFunction* pFnOnChangeClassPress = NULL;

	if ( ! pFnOnChangeClassPress )
		pFnOnChangeClassPress = (UFunction*) UObject::GObjObjects()->Data[ 47212 ];

	UForgeGFxEscapeMenu_execOnChangeClassPress_Parms OnChangeClassPress_Parms;
	memcpy ( &OnChangeClassPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnChangeClassPress, &OnChangeClassPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxEscapeMenu.OnChangeTeamPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxEscapeMenu::OnChangeTeamPress ( struct FEventData ev )
{
	static UFunction* pFnOnChangeTeamPress = NULL;

	if ( ! pFnOnChangeTeamPress )
		pFnOnChangeTeamPress = (UFunction*) UObject::GObjObjects()->Data[ 47210 ];

	UForgeGFxEscapeMenu_execOnChangeTeamPress_Parms OnChangeTeamPress_Parms;
	memcpy ( &OnChangeTeamPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnChangeTeamPress, &OnChangeTeamPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxEscapeMenu.SlideInit
// [0x00020002] 
// Parameters infos:
// class UGFxObject*              NewSlideMC                     ( CPF_Parm )
// struct FString                 NewSlideName                   ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxEscapeMenu::SlideInit ( class UGFxObject* NewSlideMC, struct FString NewSlideName )
{
	static UFunction* pFnSlideInit = NULL;

	if ( ! pFnSlideInit )
		pFnSlideInit = (UFunction*) UObject::GObjObjects()->Data[ 47204 ];

	UForgeGFxEscapeMenu_execSlideInit_Parms SlideInit_Parms;
	SlideInit_Parms.NewSlideMC = NewSlideMC;
	memcpy ( &SlideInit_Parms.NewSlideName, &NewSlideName, 0xC );

	this->ProcessEvent ( pFnSlideInit, &SlideInit_Parms, NULL );
};

// Function ForgeGame.ForgeGFxEscapeMenu.ToggleEscapeMenuEnabled
// [0x00020002] 
// Parameters infos:
// unsigned long                  ShouldBeEnabled                ( CPF_Parm )

void UForgeGFxEscapeMenu::ToggleEscapeMenuEnabled ( unsigned long ShouldBeEnabled )
{
	static UFunction* pFnToggleEscapeMenuEnabled = NULL;

	if ( ! pFnToggleEscapeMenuEnabled )
		pFnToggleEscapeMenuEnabled = (UFunction*) UObject::GObjObjects()->Data[ 47202 ];

	UForgeGFxEscapeMenu_execToggleEscapeMenuEnabled_Parms ToggleEscapeMenuEnabled_Parms;
	ToggleEscapeMenuEnabled_Parms.ShouldBeEnabled = ShouldBeEnabled;

	this->ProcessEvent ( pFnToggleEscapeMenuEnabled, &ToggleEscapeMenuEnabled_Parms, NULL );
};

// Function ForgeGame.ForgeGFxEscapeMenu.SwapFromTo
// [0x00020002] 
// Parameters infos:
// struct FString                 OldSlideName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 NewSlideName                   ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxEscapeMenu::SwapFromTo ( struct FString OldSlideName, struct FString NewSlideName )
{
	static UFunction* pFnSwapFromTo = NULL;

	if ( ! pFnSwapFromTo )
		pFnSwapFromTo = (UFunction*) UObject::GObjObjects()->Data[ 47199 ];

	UForgeGFxEscapeMenu_execSwapFromTo_Parms SwapFromTo_Parms;
	memcpy ( &SwapFromTo_Parms.OldSlideName, &OldSlideName, 0xC );
	memcpy ( &SwapFromTo_Parms.NewSlideName, &NewSlideName, 0xC );

	this->ProcessEvent ( pFnSwapFromTo, &SwapFromTo_Parms, NULL );
};

// Function ForgeGame.ForgeGFxEscapeMenu.Tick
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxEscapeMenu::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 47193 ];

	UForgeGFxEscapeMenu_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxEscapeMenu.ConfigForRes
// [0x00020002] 
// Parameters infos:
// int                            SizeX                          ( CPF_Parm )
// int                            SizeY                          ( CPF_Parm )

void UForgeGFxEscapeMenu::ConfigForRes ( int SizeX, int SizeY )
{
	static UFunction* pFnConfigForRes = NULL;

	if ( ! pFnConfigForRes )
		pFnConfigForRes = (UFunction*) UObject::GObjObjects()->Data[ 47190 ];

	UForgeGFxEscapeMenu_execConfigForRes_Parms ConfigForRes_Parms;
	ConfigForRes_Parms.SizeX = SizeX;
	ConfigForRes_Parms.SizeY = SizeY;

	this->ProcessEvent ( pFnConfigForRes, &ConfigForRes_Parms, NULL );
};

// Function ForgeGame.ForgeGFxEscapeMenu.ConfigEscapeMenu
// [0x00820002] 
// Parameters infos:

void UForgeGFxEscapeMenu::ConfigEscapeMenu ( )
{
	static UFunction* pFnConfigEscapeMenu = NULL;

	if ( ! pFnConfigEscapeMenu )
		pFnConfigEscapeMenu = (UFunction*) UObject::GObjObjects()->Data[ 47188 ];

	UForgeGFxEscapeMenu_execConfigEscapeMenu_Parms ConfigEscapeMenu_Parms;

	this->ProcessEvent ( pFnConfigEscapeMenu, &ConfigEscapeMenu_Parms, NULL );
};

// Function ForgeGame.ForgeGFxEscapeMenu.Start
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  StartPaused                    ( CPF_OptionalParm | CPF_Parm )

bool UForgeGFxEscapeMenu::Start ( unsigned long StartPaused )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 45433 ];

	UForgeGFxEscapeMenu_execStart_Parms Start_Parms;
	Start_Parms.StartPaused = StartPaused;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	return Start_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxChat.DrawChatMessage
// [0x00820002] 
// Parameters infos:
// struct FSChatItem              NewChatItem                    ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxChat::DrawChatMessage ( struct FSChatItem NewChatItem )
{
	static UFunction* pFnDrawChatMessage = NULL;

	if ( ! pFnDrawChatMessage )
		pFnDrawChatMessage = (UFunction*) UObject::GObjObjects()->Data[ 47032 ];

	UForgeGFxChat_execDrawChatMessage_Parms DrawChatMessage_Parms;
	memcpy ( &DrawChatMessage_Parms.NewChatItem, &NewChatItem, 0x28 );

	this->ProcessEvent ( pFnDrawChatMessage, &DrawChatMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxChat.ReDrawAllChatMessages
// [0x00020002] 
// Parameters infos:

void UForgeGFxChat::ReDrawAllChatMessages ( )
{
	static UFunction* pFnReDrawAllChatMessages = NULL;

	if ( ! pFnReDrawAllChatMessages )
		pFnReDrawAllChatMessages = (UFunction*) UObject::GObjObjects()->Data[ 47029 ];

	UForgeGFxChat_execReDrawAllChatMessages_Parms ReDrawAllChatMessages_Parms;

	this->ProcessEvent ( pFnReDrawAllChatMessages, &ReDrawAllChatMessages_Parms, NULL );
};

// Function ForgeGame.ForgeGFxChat.AddSayMessage
// [0x00820002] 
// Parameters infos:
// class APlayerReplicationInfo*  SayingPRI                      ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FName                   MessageType                    ( CPF_Parm )

void UForgeGFxChat::AddSayMessage ( class APlayerReplicationInfo* SayingPRI, struct FString Message, struct FName MessageType )
{
	static UFunction* pFnAddSayMessage = NULL;

	if ( ! pFnAddSayMessage )
		pFnAddSayMessage = (UFunction*) UObject::GObjObjects()->Data[ 47017 ];

	UForgeGFxChat_execAddSayMessage_Parms AddSayMessage_Parms;
	AddSayMessage_Parms.SayingPRI = SayingPRI;
	memcpy ( &AddSayMessage_Parms.Message, &Message, 0xC );
	memcpy ( &AddSayMessage_Parms.MessageType, &MessageType, 0x8 );

	this->ProcessEvent ( pFnAddSayMessage, &AddSayMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxChat.FilterButtonInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   ButtonName                     ( CPF_Parm )
// unsigned char                  InputEvent                     ( CPF_Parm )

bool UForgeGFxChat::eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent )
{
	static UFunction* pFnFilterButtonInput = NULL;

	if ( ! pFnFilterButtonInput )
		pFnFilterButtonInput = (UFunction*) UObject::GObjObjects()->Data[ 47011 ];

	UForgeGFxChat_eventFilterButtonInput_Parms FilterButtonInput_Parms;
	FilterButtonInput_Parms.ControllerId = ControllerId;
	memcpy ( &FilterButtonInput_Parms.ButtonName, &ButtonName, 0x8 );
	FilterButtonInput_Parms.InputEvent = InputEvent;

	this->ProcessEvent ( pFnFilterButtonInput, &FilterButtonInput_Parms, NULL );

	return FilterButtonInput_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxChat.StopChatting
// [0x00020002] 
// Parameters infos:

void UForgeGFxChat::StopChatting ( )
{
	static UFunction* pFnStopChatting = NULL;

	if ( ! pFnStopChatting )
		pFnStopChatting = (UFunction*) UObject::GObjObjects()->Data[ 47010 ];

	UForgeGFxChat_execStopChatting_Parms StopChatting_Parms;

	this->ProcessEvent ( pFnStopChatting, &StopChatting_Parms, NULL );
};

// Function ForgeGame.ForgeGFxChat.SendMessage
// [0x00020002] 
// Parameters infos:

void UForgeGFxChat::SendMessage ( )
{
	static UFunction* pFnSendMessage = NULL;

	if ( ! pFnSendMessage )
		pFnSendMessage = (UFunction*) UObject::GObjObjects()->Data[ 47008 ];

	UForgeGFxChat_execSendMessage_Parms SendMessage_Parms;

	this->ProcessEvent ( pFnSendMessage, &SendMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxChat.StartChatting
// [0x00024002] 
// Parameters infos:
// unsigned long                  WantsTeamChat                  ( CPF_OptionalParm | CPF_Parm )

void UForgeGFxChat::StartChatting ( unsigned long WantsTeamChat )
{
	static UFunction* pFnStartChatting = NULL;

	if ( ! pFnStartChatting )
		pFnStartChatting = (UFunction*) UObject::GObjObjects()->Data[ 47006 ];

	UForgeGFxChat_execStartChatting_Parms StartChatting_Parms;
	StartChatting_Parms.WantsTeamChat = WantsTeamChat;

	this->ProcessEvent ( pFnStartChatting, &StartChatting_Parms, NULL );
};

// Function ForgeGame.ForgeGFxChat.ChatScrollDown
// [0x00020002] 
// Parameters infos:

void UForgeGFxChat::ChatScrollDown ( )
{
	static UFunction* pFnChatScrollDown = NULL;

	if ( ! pFnChatScrollDown )
		pFnChatScrollDown = (UFunction*) UObject::GObjObjects()->Data[ 47005 ];

	UForgeGFxChat_execChatScrollDown_Parms ChatScrollDown_Parms;

	this->ProcessEvent ( pFnChatScrollDown, &ChatScrollDown_Parms, NULL );
};

// Function ForgeGame.ForgeGFxChat.ChatScrollUp
// [0x00020002] 
// Parameters infos:

void UForgeGFxChat::ChatScrollUp ( )
{
	static UFunction* pFnChatScrollUp = NULL;

	if ( ! pFnChatScrollUp )
		pFnChatScrollUp = (UFunction*) UObject::GObjObjects()->Data[ 47004 ];

	UForgeGFxChat_execChatScrollUp_Parms ChatScrollUp_Parms;

	this->ProcessEvent ( pFnChatScrollUp, &ChatScrollUp_Parms, NULL );
};

// Function ForgeGame.ForgeGFxChat.ClearChat
// [0x00020002] 
// Parameters infos:

void UForgeGFxChat::ClearChat ( )
{
	static UFunction* pFnClearChat = NULL;

	if ( ! pFnClearChat )
		pFnClearChat = (UFunction*) UObject::GObjObjects()->Data[ 47002 ];

	UForgeGFxChat_execClearChat_Parms ClearChat_Parms;

	this->ProcessEvent ( pFnClearChat, &ClearChat_Parms, NULL );
};

// Function ForgeGame.ForgeGFxChat.HideChat
// [0x00020002] 
// Parameters infos:

void UForgeGFxChat::HideChat ( )
{
	static UFunction* pFnHideChat = NULL;

	if ( ! pFnHideChat )
		pFnHideChat = (UFunction*) UObject::GObjObjects()->Data[ 47001 ];

	UForgeGFxChat_execHideChat_Parms HideChat_Parms;

	this->ProcessEvent ( pFnHideChat, &HideChat_Parms, NULL );
};

// Function ForgeGame.ForgeGFxChat.ShowChat
// [0x00020002] 
// Parameters infos:

void UForgeGFxChat::ShowChat ( )
{
	static UFunction* pFnShowChat = NULL;

	if ( ! pFnShowChat )
		pFnShowChat = (UFunction*) UObject::GObjObjects()->Data[ 47000 ];

	UForgeGFxChat_execShowChat_Parms ShowChat_Parms;

	this->ProcessEvent ( pFnShowChat, &ShowChat_Parms, NULL );
};

// Function ForgeGame.ForgeGFxChat.ConfigForRes
// [0x00820002] 
// Parameters infos:
// int                            SizeX                          ( CPF_Parm )
// int                            SizeY                          ( CPF_Parm )

void UForgeGFxChat::ConfigForRes ( int SizeX, int SizeY )
{
	static UFunction* pFnConfigForRes = NULL;

	if ( ! pFnConfigForRes )
		pFnConfigForRes = (UFunction*) UObject::GObjObjects()->Data[ 46996 ];

	UForgeGFxChat_execConfigForRes_Parms ConfigForRes_Parms;
	ConfigForRes_Parms.SizeX = SizeX;
	ConfigForRes_Parms.SizeY = SizeY;

	this->ProcessEvent ( pFnConfigForRes, &ConfigForRes_Parms, NULL );
};

// Function ForgeGame.ForgeGFxChat.Tick
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxChat::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 46980 ];

	UForgeGFxChat_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxChat.ConfigChat
// [0x00020002] 
// Parameters infos:

void UForgeGFxChat::ConfigChat ( )
{
	static UFunction* pFnConfigChat = NULL;

	if ( ! pFnConfigChat )
		pFnConfigChat = (UFunction*) UObject::GObjObjects()->Data[ 46968 ];

	UForgeGFxChat_execConfigChat_Parms ConfigChat_Parms;

	this->ProcessEvent ( pFnConfigChat, &ConfigChat_Parms, NULL );
};

// Function ForgeGame.ForgeGFxChat.Start
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  StartPaused                    ( CPF_OptionalParm | CPF_Parm )

bool UForgeGFxChat::Start ( unsigned long StartPaused )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 45425 ];

	UForgeGFxChat_execStart_Parms Start_Parms;
	Start_Parms.StartPaused = StartPaused;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	return Start_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEnd.ConnectTo
// [0x00020002] 
// Parameters infos:
// struct FOnlineGameSearchResult TheMatchedServer               ( CPF_Parm )

void UForgeGFxFrontEnd::ConnectTo ( struct FOnlineGameSearchResult TheMatchedServer )
{
	static UFunction* pFnConnectTo = NULL;

	if ( ! pFnConnectTo )
		pFnConnectTo = (UFunction*) UObject::GObjObjects()->Data[ 47372 ];

	UForgeGFxFrontEnd_execConnectTo_Parms ConnectTo_Parms;
	memcpy ( &ConnectTo_Parms.TheMatchedServer, &TheMatchedServer, 0x8 );

	this->ProcessEvent ( pFnConnectTo, &ConnectTo_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.FilterButtonInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   ButtonName                     ( CPF_Parm )
// unsigned char                  InputEvent                     ( CPF_Parm )

bool UForgeGFxFrontEnd::eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent )
{
	static UFunction* pFnFilterButtonInput = NULL;

	if ( ! pFnFilterButtonInput )
		pFnFilterButtonInput = (UFunction*) UObject::GObjObjects()->Data[ 47346 ];

	UForgeGFxFrontEnd_eventFilterButtonInput_Parms FilterButtonInput_Parms;
	FilterButtonInput_Parms.ControllerId = ControllerId;
	memcpy ( &FilterButtonInput_Parms.ButtonName, &ButtonName, 0x8 );
	FilterButtonInput_Parms.InputEvent = InputEvent;

	this->ProcessEvent ( pFnFilterButtonInput, &FilterButtonInput_Parms, NULL );

	return FilterButtonInput_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEnd.ConfigForRes
// [0x00020002] 
// Parameters infos:
// int                            SizeX                          ( CPF_Parm )
// int                            SizeY                          ( CPF_Parm )

void UForgeGFxFrontEnd::ConfigForRes ( int SizeX, int SizeY )
{
	static UFunction* pFnConfigForRes = NULL;

	if ( ! pFnConfigForRes )
		pFnConfigForRes = (UFunction*) UObject::GObjObjects()->Data[ 47343 ];

	UForgeGFxFrontEnd_execConfigForRes_Parms ConfigForRes_Parms;
	ConfigForRes_Parms.SizeX = SizeX;
	ConfigForRes_Parms.SizeY = SizeY;

	this->ProcessEvent ( pFnConfigForRes, &ConfigForRes_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.ShowInvite
// [0x00820002] 
// Parameters infos:
// struct FUniqueNetId            GroupID                        ( CPF_Parm )
// struct FString                 LeaderName                     ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEnd::ShowInvite ( struct FUniqueNetId GroupID, struct FString LeaderName )
{
	static UFunction* pFnShowInvite = NULL;

	if ( ! pFnShowInvite )
		pFnShowInvite = (UFunction*) UObject::GObjObjects()->Data[ 47339 ];

	UForgeGFxFrontEnd_execShowInvite_Parms ShowInvite_Parms;
	memcpy ( &ShowInvite_Parms.GroupID, &GroupID, 0x8 );
	memcpy ( &ShowInvite_Parms.LeaderName, &LeaderName, 0xC );

	this->ProcessEvent ( pFnShowInvite, &ShowInvite_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.ShowNotification
// [0x00820002] 
// Parameters infos:
// struct FString                 TheMessage                     ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEnd::ShowNotification ( struct FString TheMessage )
{
	static UFunction* pFnShowNotification = NULL;

	if ( ! pFnShowNotification )
		pFnShowNotification = (UFunction*) UObject::GObjObjects()->Data[ 47336 ];

	UForgeGFxFrontEnd_execShowNotification_Parms ShowNotification_Parms;
	memcpy ( &ShowNotification_Parms.TheMessage, &TheMessage, 0xC );

	this->ProcessEvent ( pFnShowNotification, &ShowNotification_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.SetTerminateMessage
// [0x00820002] 
// Parameters infos:
// struct FString                 TheMessage                     ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEnd::SetTerminateMessage ( struct FString TheMessage )
{
	static UFunction* pFnSetTerminateMessage = NULL;

	if ( ! pFnSetTerminateMessage )
		pFnSetTerminateMessage = (UFunction*) UObject::GObjObjects()->Data[ 47333 ];

	UForgeGFxFrontEnd_execSetTerminateMessage_Parms SetTerminateMessage_Parms;
	memcpy ( &SetTerminateMessage_Parms.TheMessage, &TheMessage, 0xC );

	this->ProcessEvent ( pFnSetTerminateMessage, &SetTerminateMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.SetGeneralMessage
// [0x00820002] 
// Parameters infos:
// struct FString                 TheMessage                     ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEnd::SetGeneralMessage ( struct FString TheMessage )
{
	static UFunction* pFnSetGeneralMessage = NULL;

	if ( ! pFnSetGeneralMessage )
		pFnSetGeneralMessage = (UFunction*) UObject::GObjObjects()->Data[ 47330 ];

	UForgeGFxFrontEnd_execSetGeneralMessage_Parms SetGeneralMessage_Parms;
	memcpy ( &SetGeneralMessage_Parms.TheMessage, &TheMessage, 0xC );

	this->ProcessEvent ( pFnSetGeneralMessage, &SetGeneralMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.SetKickMessage
// [0x00022002] 
// Parameters infos:
// struct FString                 NewKickMessage                 ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEnd::SetKickMessage ( struct FString NewKickMessage )
{
	static UFunction* pFnSetKickMessage = NULL;

	if ( ! pFnSetKickMessage )
		pFnSetKickMessage = (UFunction*) UObject::GObjObjects()->Data[ 47328 ];

	UForgeGFxFrontEnd_execSetKickMessage_Parms SetKickMessage_Parms;
	memcpy ( &SetKickMessage_Parms.NewKickMessage, &NewKickMessage, 0xC );

	this->ProcessEvent ( pFnSetKickMessage, &SetKickMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.EnableJoinPlayerButtons
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEnd::EnableJoinPlayerButtons ( )
{
	static UFunction* pFnEnableJoinPlayerButtons = NULL;

	if ( ! pFnEnableJoinPlayerButtons )
		pFnEnableJoinPlayerButtons = (UFunction*) UObject::GObjObjects()->Data[ 47327 ];

	UForgeGFxFrontEnd_execEnableJoinPlayerButtons_Parms EnableJoinPlayerButtons_Parms;

	this->ProcessEvent ( pFnEnableJoinPlayerButtons, &EnableJoinPlayerButtons_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.DisableJoinPlayerButtons
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEnd::DisableJoinPlayerButtons ( )
{
	static UFunction* pFnDisableJoinPlayerButtons = NULL;

	if ( ! pFnDisableJoinPlayerButtons )
		pFnDisableJoinPlayerButtons = (UFunction*) UObject::GObjObjects()->Data[ 47326 ];

	UForgeGFxFrontEnd_execDisableJoinPlayerButtons_Parms DisableJoinPlayerButtons_Parms;

	this->ProcessEvent ( pFnDisableJoinPlayerButtons, &DisableJoinPlayerButtons_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.EnableQueueButtons
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEnd::EnableQueueButtons ( )
{
	static UFunction* pFnEnableQueueButtons = NULL;

	if ( ! pFnEnableQueueButtons )
		pFnEnableQueueButtons = (UFunction*) UObject::GObjObjects()->Data[ 47325 ];

	UForgeGFxFrontEnd_execEnableQueueButtons_Parms EnableQueueButtons_Parms;

	this->ProcessEvent ( pFnEnableQueueButtons, &EnableQueueButtons_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.DisableQueueButtons
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEnd::DisableQueueButtons ( )
{
	static UFunction* pFnDisableQueueButtons = NULL;

	if ( ! pFnDisableQueueButtons )
		pFnDisableQueueButtons = (UFunction*) UObject::GObjObjects()->Data[ 47324 ];

	UForgeGFxFrontEnd_execDisableQueueButtons_Parms DisableQueueButtons_Parms;

	this->ProcessEvent ( pFnDisableQueueButtons, &DisableQueueButtons_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.SetMenuFailMessage
// [0x00020002] 
// Parameters infos:
// struct FString                 NewMenuFailMessage             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEnd::SetMenuFailMessage ( struct FString NewMenuFailMessage )
{
	static UFunction* pFnSetMenuFailMessage = NULL;

	if ( ! pFnSetMenuFailMessage )
		pFnSetMenuFailMessage = (UFunction*) UObject::GObjObjects()->Data[ 47322 ];

	UForgeGFxFrontEnd_execSetMenuFailMessage_Parms SetMenuFailMessage_Parms;
	memcpy ( &SetMenuFailMessage_Parms.NewMenuFailMessage, &NewMenuFailMessage, 0xC );

	this->ProcessEvent ( pFnSetMenuFailMessage, &SetMenuFailMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.JoinLobby
// [0x00020002] 
// Parameters infos:
// struct FUniqueNetId            GroupID                        ( CPF_Parm )
// TArray< struct FActiveLobbyInfo > LobbyList                      ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEnd::JoinLobby ( struct FUniqueNetId GroupID, TArray< struct FActiveLobbyInfo > LobbyList )
{
	static UFunction* pFnJoinLobby = NULL;

	if ( ! pFnJoinLobby )
		pFnJoinLobby = (UFunction*) UObject::GObjObjects()->Data[ 47317 ];

	UForgeGFxFrontEnd_execJoinLobby_Parms JoinLobby_Parms;
	memcpy ( &JoinLobby_Parms.GroupID, &GroupID, 0x8 );
	memcpy ( &JoinLobby_Parms.LobbyList, &LobbyList, 0xC );

	this->ProcessEvent ( pFnJoinLobby, &JoinLobby_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.DeclineInvite
// [0x00820002] 
// Parameters infos:
// struct FUniqueNetId            GroupID                        ( CPF_Parm )

void UForgeGFxFrontEnd::DeclineInvite ( struct FUniqueNetId GroupID )
{
	static UFunction* pFnDeclineInvite = NULL;

	if ( ! pFnDeclineInvite )
		pFnDeclineInvite = (UFunction*) UObject::GObjObjects()->Data[ 47314 ];

	UForgeGFxFrontEnd_execDeclineInvite_Parms DeclineInvite_Parms;
	memcpy ( &DeclineInvite_Parms.GroupID, &GroupID, 0x8 );

	this->ProcessEvent ( pFnDeclineInvite, &DeclineInvite_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.AcceptInvite
// [0x00820002] 
// Parameters infos:
// struct FUniqueNetId            GroupID                        ( CPF_Parm )

void UForgeGFxFrontEnd::AcceptInvite ( struct FUniqueNetId GroupID )
{
	static UFunction* pFnAcceptInvite = NULL;

	if ( ! pFnAcceptInvite )
		pFnAcceptInvite = (UFunction*) UObject::GObjObjects()->Data[ 47310 ];

	UForgeGFxFrontEnd_execAcceptInvite_Parms AcceptInvite_Parms;
	memcpy ( &AcceptInvite_Parms.GroupID, &GroupID, 0x8 );

	this->ProcessEvent ( pFnAcceptInvite, &AcceptInvite_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.OnInviteDeclinePress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEnd::OnInviteDeclinePress ( struct FEventData ev )
{
	static UFunction* pFnOnInviteDeclinePress = NULL;

	if ( ! pFnOnInviteDeclinePress )
		pFnOnInviteDeclinePress = (UFunction*) UObject::GObjObjects()->Data[ 47308 ];

	UForgeGFxFrontEnd_execOnInviteDeclinePress_Parms OnInviteDeclinePress_Parms;
	memcpy ( &OnInviteDeclinePress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnInviteDeclinePress, &OnInviteDeclinePress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.OnInviteAcceptPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEnd::OnInviteAcceptPress ( struct FEventData ev )
{
	static UFunction* pFnOnInviteAcceptPress = NULL;

	if ( ! pFnOnInviteAcceptPress )
		pFnOnInviteAcceptPress = (UFunction*) UObject::GObjObjects()->Data[ 47306 ];

	UForgeGFxFrontEnd_execOnInviteAcceptPress_Parms OnInviteAcceptPress_Parms;
	memcpy ( &OnInviteAcceptPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnInviteAcceptPress, &OnInviteAcceptPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.Tick
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxFrontEnd::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 47300 ];

	UForgeGFxFrontEnd_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.GetSlideByName
// [0x00020002] 
// Parameters infos:
// class UForgeGFxFrontEndSlide*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SlideName                      ( CPF_Parm | CPF_NeedCtorLink )

class UForgeGFxFrontEndSlide* UForgeGFxFrontEnd::GetSlideByName ( struct FString SlideName )
{
	static UFunction* pFnGetSlideByName = NULL;

	if ( ! pFnGetSlideByName )
		pFnGetSlideByName = (UFunction*) UObject::GObjObjects()->Data[ 47297 ];

	UForgeGFxFrontEnd_execGetSlideByName_Parms GetSlideByName_Parms;
	memcpy ( &GetSlideByName_Parms.SlideName, &SlideName, 0xC );

	this->ProcessEvent ( pFnGetSlideByName, &GetSlideByName_Parms, NULL );

	return GetSlideByName_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEnd.SwapFromTo
// [0x00020002] 
// Parameters infos:
// struct FString                 OldSlideName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 NewSlideName                   ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEnd::SwapFromTo ( struct FString OldSlideName, struct FString NewSlideName )
{
	static UFunction* pFnSwapFromTo = NULL;

	if ( ! pFnSwapFromTo )
		pFnSwapFromTo = (UFunction*) UObject::GObjObjects()->Data[ 47291 ];

	UForgeGFxFrontEnd_execSwapFromTo_Parms SwapFromTo_Parms;
	memcpy ( &SwapFromTo_Parms.OldSlideName, &OldSlideName, 0xC );
	memcpy ( &SwapFromTo_Parms.NewSlideName, &NewSlideName, 0xC );

	this->ProcessEvent ( pFnSwapFromTo, &SwapFromTo_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.SlideInit
// [0x00020002] 
// Parameters infos:
// class UGFxObject*              NewSlideMC                     ( CPF_Parm )
// struct FString                 NewSlideName                   ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEnd::SlideInit ( class UGFxObject* NewSlideMC, struct FString NewSlideName )
{
	static UFunction* pFnSlideInit = NULL;

	if ( ! pFnSlideInit )
		pFnSlideInit = (UFunction*) UObject::GObjObjects()->Data[ 47288 ];

	UForgeGFxFrontEnd_execSlideInit_Parms SlideInit_Parms;
	SlideInit_Parms.NewSlideMC = NewSlideMC;
	memcpy ( &SlideInit_Parms.NewSlideName, &NewSlideName, 0xC );

	this->ProcessEvent ( pFnSlideInit, &SlideInit_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.ConfigFrontEnd
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEnd::ConfigFrontEnd ( )
{
	static UFunction* pFnConfigFrontEnd = NULL;

	if ( ! pFnConfigFrontEnd )
		pFnConfigFrontEnd = (UFunction*) UObject::GObjObjects()->Data[ 47287 ];

	UForgeGFxFrontEnd_execConfigFrontEnd_Parms ConfigFrontEnd_Parms;

	this->ProcessEvent ( pFnConfigFrontEnd, &ConfigFrontEnd_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEnd.Start
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  StartPaused                    ( CPF_OptionalParm | CPF_Parm )

bool UForgeGFxFrontEnd::Start ( unsigned long StartPaused )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 45486 ];

	UForgeGFxFrontEnd_execStart_Parms Start_Parms;
	Start_Parms.StartPaused = StartPaused;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	return Start_Parms.ReturnValue;
};

// Function ForgeGame.DVNetworkLink.HandleAuthSteamPlayerResponse
// [0x00020002] 
// Parameters infos:
// struct FString                 ResponseString                 ( CPF_Parm | CPF_NeedCtorLink )

void ADVNetworkLink::HandleAuthSteamPlayerResponse ( struct FString ResponseString )
{
	static UFunction* pFnHandleAuthSteamPlayerResponse = NULL;

	if ( ! pFnHandleAuthSteamPlayerResponse )
		pFnHandleAuthSteamPlayerResponse = (UFunction*) UObject::GObjObjects()->Data[ 45615 ];

	ADVNetworkLink_execHandleAuthSteamPlayerResponse_Parms HandleAuthSteamPlayerResponse_Parms;
	memcpy ( &HandleAuthSteamPlayerResponse_Parms.ResponseString, &ResponseString, 0xC );

	this->ProcessEvent ( pFnHandleAuthSteamPlayerResponse, &HandleAuthSteamPlayerResponse_Parms, NULL );
};

// Function ForgeGame.DVNetworkLink.HandleMessage
// [0x00020002] 
// Parameters infos:
// class UJsonObject*             TheMessage                     ( CPF_Parm )

void ADVNetworkLink::HandleMessage ( class UJsonObject* TheMessage )
{
	static UFunction* pFnHandleMessage = NULL;

	if ( ! pFnHandleMessage )
		pFnHandleMessage = (UFunction*) UObject::GObjObjects()->Data[ 45613 ];

	ADVNetworkLink_execHandleMessage_Parms HandleMessage_Parms;
	HandleMessage_Parms.TheMessage = TheMessage;

	this->ProcessEvent ( pFnHandleMessage, &HandleMessage_Parms, NULL );
};

// Function ForgeGame.DVNetworkLink.HandleMessages
// [0x00020002] 
// Parameters infos:
// struct FString                 MessagesJSON                   ( CPF_Parm | CPF_NeedCtorLink )

void ADVNetworkLink::HandleMessages ( struct FString MessagesJSON )
{
	static UFunction* pFnHandleMessages = NULL;

	if ( ! pFnHandleMessages )
		pFnHandleMessages = (UFunction*) UObject::GObjObjects()->Data[ 45609 ];

	ADVNetworkLink_execHandleMessages_Parms HandleMessages_Parms;
	memcpy ( &HandleMessages_Parms.MessagesJSON, &MessagesJSON, 0xC );

	this->ProcessEvent ( pFnHandleMessages, &HandleMessages_Parms, NULL );
};

// Function ForgeGame.DVNetworkLink.ReceivedText
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )

void ADVNetworkLink::eventReceivedText ( struct FString Text )
{
	static UFunction* pFnReceivedText = NULL;

	if ( ! pFnReceivedText )
		pFnReceivedText = (UFunction*) UObject::GObjObjects()->Data[ 45601 ];

	ADVNetworkLink_eventReceivedText_Parms ReceivedText_Parms;
	memcpy ( &ReceivedText_Parms.Text, &Text, 0xC );

	this->ProcessEvent ( pFnReceivedText, &ReceivedText_Parms, NULL );
};

// Function ForgeGame.DVNetworkLink.GetContentFromHTTP
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 PacketText                     ( CPF_Parm | CPF_NeedCtorLink )

struct FString ADVNetworkLink::GetContentFromHTTP ( struct FString PacketText )
{
	static UFunction* pFnGetContentFromHTTP = NULL;

	if ( ! pFnGetContentFromHTTP )
		pFnGetContentFromHTTP = (UFunction*) UObject::GObjObjects()->Data[ 45598 ];

	ADVNetworkLink_execGetContentFromHTTP_Parms GetContentFromHTTP_Parms;
	memcpy ( &GetContentFromHTTP_Parms.PacketText, &PacketText, 0xC );

	this->ProcessEvent ( pFnGetContentFromHTTP, &GetContentFromHTTP_Parms, NULL );

	return GetContentFromHTTP_Parms.ReturnValue;
};

// Function ForgeGame.DVNetworkLink.Opened
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADVNetworkLink::eventOpened ( )
{
	static UFunction* pFnOpened = NULL;

	if ( ! pFnOpened )
		pFnOpened = (UFunction*) UObject::GObjObjects()->Data[ 45558 ];

	ADVNetworkLink_eventOpened_Parms Opened_Parms;

	this->ProcessEvent ( pFnOpened, &Opened_Parms, NULL );
};

// Function ForgeGame.DVNetworkLink.GetPlayerStats
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ADVNetworkLink::GetPlayerStats ( )
{
	static UFunction* pFnGetPlayerStats = NULL;

	if ( ! pFnGetPlayerStats )
		pFnGetPlayerStats = (UFunction*) UObject::GObjObjects()->Data[ 45542 ];

	ADVNetworkLink_execGetPlayerStats_Parms GetPlayerStats_Parms;

	this->ProcessEvent ( pFnGetPlayerStats, &GetPlayerStats_Parms, NULL );

	return GetPlayerStats_Parms.ReturnValue;
};

// Function ForgeGame.DVNetworkLink.URLEncode
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 URLString                      ( CPF_Parm | CPF_NeedCtorLink )

struct FString ADVNetworkLink::URLEncode ( struct FString URLString )
{
	static UFunction* pFnURLEncode = NULL;

	if ( ! pFnURLEncode )
		pFnURLEncode = (UFunction*) UObject::GObjObjects()->Data[ 45536 ];

	ADVNetworkLink_execURLEncode_Parms URLEncode_Parms;
	memcpy ( &URLEncode_Parms.URLString, &URLString, 0xC );

	this->ProcessEvent ( pFnURLEncode, &URLEncode_Parms, NULL );

	return URLEncode_Parms.ReturnValue;
};

// Function ForgeGame.DVNetworkLink.ResolveFailed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADVNetworkLink::eventResolveFailed ( )
{
	static UFunction* pFnResolveFailed = NULL;

	if ( ! pFnResolveFailed )
		pFnResolveFailed = (UFunction*) UObject::GObjObjects()->Data[ 45535 ];

	ADVNetworkLink_eventResolveFailed_Parms ResolveFailed_Parms;

	this->ProcessEvent ( pFnResolveFailed, &ResolveFailed_Parms, NULL );
};

// Function ForgeGame.DVNetworkLink.Resolved
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FIpAddr                 Addr                           ( CPF_Parm )

void ADVNetworkLink::eventResolved ( struct FIpAddr Addr )
{
	static UFunction* pFnResolved = NULL;

	if ( ! pFnResolved )
		pFnResolved = (UFunction*) UObject::GObjObjects()->Data[ 45533 ];

	ADVNetworkLink_eventResolved_Parms Resolved_Parms;
	memcpy ( &Resolved_Parms.Addr, &Addr, 0x8 );

	this->ProcessEvent ( pFnResolved, &Resolved_Parms, NULL );
};

// Function ForgeGame.DVNetworkLink.ConnectFailed
// [0x00020002] 
// Parameters infos:

void ADVNetworkLink::ConnectFailed ( )
{
	static UFunction* pFnConnectFailed = NULL;

	if ( ! pFnConnectFailed )
		pFnConnectFailed = (UFunction*) UObject::GObjObjects()->Data[ 45531 ];

	ADVNetworkLink_execConnectFailed_Parms ConnectFailed_Parms;

	this->ProcessEvent ( pFnConnectFailed, &ConnectFailed_Parms, NULL );
};

// Function ForgeGame.DVNetworkLink.InitNetworkLink
// [0x00020002] 
// Parameters infos:
// unsigned char                  NewQueryType                   ( CPF_Parm )

void ADVNetworkLink::InitNetworkLink ( unsigned char NewQueryType )
{
	static UFunction* pFnInitNetworkLink = NULL;

	if ( ! pFnInitNetworkLink )
		pFnInitNetworkLink = (UFunction*) UObject::GObjObjects()->Data[ 45524 ];

	ADVNetworkLink_execInitNetworkLink_Parms InitNetworkLink_Parms;
	InitNetworkLink_Parms.NewQueryType = NewQueryType;

	this->ProcessEvent ( pFnInitNetworkLink, &InitNetworkLink_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.ConnectTo
// [0x00820002] 
// Parameters infos:
// struct FOnlineGameSearchResult TheMatchedServer               ( CPF_Parm )

void UForgeGFxFrontEndQuickMatchMenu::ConnectTo ( struct FOnlineGameSearchResult TheMatchedServer )
{
	static UFunction* pFnConnectTo = NULL;

	if ( ! pFnConnectTo )
		pFnConnectTo = (UFunction*) UObject::GObjObjects()->Data[ 48344 ];

	UForgeGFxFrontEndQuickMatchMenu_execConnectTo_Parms ConnectTo_Parms;
	memcpy ( &ConnectTo_Parms.TheMatchedServer, &TheMatchedServer, 0x8 );

	this->ProcessEvent ( pFnConnectTo, &ConnectTo_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.HandleGameSearchResults
// [0x00020002] 
// Parameters infos:
// TArray< struct FOnlineGameSearchResult > AllSearchResults               ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndQuickMatchMenu::HandleGameSearchResults ( TArray< struct FOnlineGameSearchResult > AllSearchResults )
{
	static UFunction* pFnHandleGameSearchResults = NULL;

	if ( ! pFnHandleGameSearchResults )
		pFnHandleGameSearchResults = (UFunction*) UObject::GObjObjects()->Data[ 48340 ];

	UForgeGFxFrontEndQuickMatchMenu_execHandleGameSearchResults_Parms HandleGameSearchResults_Parms;
	memcpy ( &HandleGameSearchResults_Parms.AllSearchResults, &AllSearchResults, 0xC );

	this->ProcessEvent ( pFnHandleGameSearchResults, &HandleGameSearchResults_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.SearchForServer
// [0x00020002] 
// Parameters infos:
// struct FString                 GameModeQueue                  ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndQuickMatchMenu::SearchForServer ( struct FString GameModeQueue )
{
	static UFunction* pFnSearchForServer = NULL;

	if ( ! pFnSearchForServer )
		pFnSearchForServer = (UFunction*) UObject::GObjObjects()->Data[ 48336 ];

	UForgeGFxFrontEndQuickMatchMenu_execSearchForServer_Parms SearchForServer_Parms;
	memcpy ( &SearchForServer_Parms.GameModeQueue, &GameModeQueue, 0xC );

	this->ProcessEvent ( pFnSearchForServer, &SearchForServer_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.OnAssaultPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndQuickMatchMenu::OnAssaultPress ( struct FEventData ev )
{
	static UFunction* pFnOnAssaultPress = NULL;

	if ( ! pFnOnAssaultPress )
		pFnOnAssaultPress = (UFunction*) UObject::GObjObjects()->Data[ 48334 ];

	UForgeGFxFrontEndQuickMatchMenu_execOnAssaultPress_Parms OnAssaultPress_Parms;
	memcpy ( &OnAssaultPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnAssaultPress, &OnAssaultPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.OnArenaPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndQuickMatchMenu::OnArenaPress ( struct FEventData ev )
{
	static UFunction* pFnOnArenaPress = NULL;

	if ( ! pFnOnArenaPress )
		pFnOnArenaPress = (UFunction*) UObject::GObjObjects()->Data[ 48332 ];

	UForgeGFxFrontEndQuickMatchMenu_execOnArenaPress_Parms OnArenaPress_Parms;
	memcpy ( &OnArenaPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnArenaPress, &OnArenaPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.OnKOTHPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndQuickMatchMenu::OnKOTHPress ( struct FEventData ev )
{
	static UFunction* pFnOnKOTHPress = NULL;

	if ( ! pFnOnKOTHPress )
		pFnOnKOTHPress = (UFunction*) UObject::GObjObjects()->Data[ 48330 ];

	UForgeGFxFrontEndQuickMatchMenu_execOnKOTHPress_Parms OnKOTHPress_Parms;
	memcpy ( &OnKOTHPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnKOTHPress, &OnKOTHPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.OnCTFPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndQuickMatchMenu::OnCTFPress ( struct FEventData ev )
{
	static UFunction* pFnOnCTFPress = NULL;

	if ( ! pFnOnCTFPress )
		pFnOnCTFPress = (UFunction*) UObject::GObjObjects()->Data[ 48328 ];

	UForgeGFxFrontEndQuickMatchMenu_execOnCTFPress_Parms OnCTFPress_Parms;
	memcpy ( &OnCTFPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnCTFPress, &OnCTFPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.OnTDMPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndQuickMatchMenu::OnTDMPress ( struct FEventData ev )
{
	static UFunction* pFnOnTDMPress = NULL;

	if ( ! pFnOnTDMPress )
		pFnOnTDMPress = (UFunction*) UObject::GObjObjects()->Data[ 48326 ];

	UForgeGFxFrontEndQuickMatchMenu_execOnTDMPress_Parms OnTDMPress_Parms;
	memcpy ( &OnTDMPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnTDMPress, &OnTDMPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.OnRandomPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndQuickMatchMenu::OnRandomPress ( struct FEventData ev )
{
	static UFunction* pFnOnRandomPress = NULL;

	if ( ! pFnOnRandomPress )
		pFnOnRandomPress = (UFunction*) UObject::GObjObjects()->Data[ 48324 ];

	UForgeGFxFrontEndQuickMatchMenu_execOnRandomPress_Parms OnRandomPress_Parms;
	memcpy ( &OnRandomPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnRandomPress, &OnRandomPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.OnRegionChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndQuickMatchMenu::OnRegionChange ( struct FEventData ev )
{
	static UFunction* pFnOnRegionChange = NULL;

	if ( ! pFnOnRegionChange )
		pFnOnRegionChange = (UFunction*) UObject::GObjObjects()->Data[ 48322 ];

	UForgeGFxFrontEndQuickMatchMenu_execOnRegionChange_Parms OnRegionChange_Parms;
	memcpy ( &OnRegionChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnRegionChange, &OnRegionChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.OnBackPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndQuickMatchMenu::OnBackPress ( struct FEventData ev )
{
	static UFunction* pFnOnBackPress = NULL;

	if ( ! pFnOnBackPress )
		pFnOnBackPress = (UFunction*) UObject::GObjObjects()->Data[ 48320 ];

	UForgeGFxFrontEndQuickMatchMenu_execOnBackPress_Parms OnBackPress_Parms;
	memcpy ( &OnBackPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnBackPress, &OnBackPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxFrontEndQuickMatchMenu::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 48317 ];

	UForgeGFxFrontEndQuickMatchMenu_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.EnableQueueButtons
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndQuickMatchMenu::EnableQueueButtons ( )
{
	static UFunction* pFnEnableQueueButtons = NULL;

	if ( ! pFnEnableQueueButtons )
		pFnEnableQueueButtons = (UFunction*) UObject::GObjObjects()->Data[ 48316 ];

	UForgeGFxFrontEndQuickMatchMenu_execEnableQueueButtons_Parms EnableQueueButtons_Parms;

	this->ProcessEvent ( pFnEnableQueueButtons, &EnableQueueButtons_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.DisableQueueButtons
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndQuickMatchMenu::DisableQueueButtons ( )
{
	static UFunction* pFnDisableQueueButtons = NULL;

	if ( ! pFnDisableQueueButtons )
		pFnDisableQueueButtons = (UFunction*) UObject::GObjObjects()->Data[ 48315 ];

	UForgeGFxFrontEndQuickMatchMenu_execDisableQueueButtons_Parms DisableQueueButtons_Parms;

	this->ProcessEvent ( pFnDisableQueueButtons, &DisableQueueButtons_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.ConfigSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndQuickMatchMenu::ConfigSlide ( )
{
	static UFunction* pFnConfigSlide = NULL;

	if ( ! pFnConfigSlide )
		pFnConfigSlide = (UFunction*) UObject::GObjObjects()->Data[ 48313 ];

	UForgeGFxFrontEndQuickMatchMenu_execConfigSlide_Parms ConfigSlide_Parms;

	this->ProcessEvent ( pFnConfigSlide, &ConfigSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlideBar.Tick
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxFrontEndSlideBar::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 47922 ];

	UForgeGFxFrontEndSlideBar_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlideBar.FixDisappearing
// [0x00820002] 
// Parameters infos:

void UForgeGFxFrontEndSlideBar::FixDisappearing ( )
{
	static UFunction* pFnFixDisappearing = NULL;

	if ( ! pFnFixDisappearing )
		pFnFixDisappearing = (UFunction*) UObject::GObjObjects()->Data[ 47920 ];

	UForgeGFxFrontEndSlideBar_execFixDisappearing_Parms FixDisappearing_Parms;

	this->ProcessEvent ( pFnFixDisappearing, &FixDisappearing_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlideBar.SlideInSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndSlideBar::SlideInSlide ( )
{
	static UFunction* pFnSlideInSlide = NULL;

	if ( ! pFnSlideInSlide )
		pFnSlideInSlide = (UFunction*) UObject::GObjObjects()->Data[ 47919 ];

	UForgeGFxFrontEndSlideBar_execSlideInSlide_Parms SlideInSlide_Parms;

	this->ProcessEvent ( pFnSlideInSlide, &SlideInSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlideBar.ShowSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndSlideBar::ShowSlide ( )
{
	static UFunction* pFnShowSlide = NULL;

	if ( ! pFnShowSlide )
		pFnShowSlide = (UFunction*) UObject::GObjObjects()->Data[ 47918 ];

	UForgeGFxFrontEndSlideBar_execShowSlide_Parms ShowSlide_Parms;

	this->ProcessEvent ( pFnShowSlide, &ShowSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlideBar.SlideOutSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndSlideBar::SlideOutSlide ( )
{
	static UFunction* pFnSlideOutSlide = NULL;

	if ( ! pFnSlideOutSlide )
		pFnSlideOutSlide = (UFunction*) UObject::GObjObjects()->Data[ 47917 ];

	UForgeGFxFrontEndSlideBar_execSlideOutSlide_Parms SlideOutSlide_Parms;

	this->ProcessEvent ( pFnSlideOutSlide, &SlideOutSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndSlideBar.HideSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndSlideBar::HideSlide ( )
{
	static UFunction* pFnHideSlide = NULL;

	if ( ! pFnHideSlide )
		pFnHideSlide = (UFunction*) UObject::GObjObjects()->Data[ 47916 ];

	UForgeGFxFrontEndSlideBar_execHideSlide_Parms HideSlide_Parms;

	this->ProcessEvent ( pFnHideSlide, &HideSlide_Parms, NULL );
};

// Function ForgeGame.DVParticleEffectManager.HandleParticleModuleEventSendToGame
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// class UParticleModuleEventSendToGame* InEvent                        ( CPF_Parm )
// struct FVector                 InCollideDirection             ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FVector                 InHitLocation                  ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FVector                 InHitNormal                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FName                   InBoneName                     ( CPF_Const | CPF_Parm | CPF_OutParm )

void ADVParticleEffectManager::eventHandleParticleModuleEventSendToGame ( class UParticleModuleEventSendToGame* InEvent, struct FVector* InCollideDirection, struct FVector* InHitLocation, struct FVector* InHitNormal, struct FName* InBoneName )
{
	static UFunction* pFnHandleParticleModuleEventSendToGame = NULL;

	if ( ! pFnHandleParticleModuleEventSendToGame )
		pFnHandleParticleModuleEventSendToGame = (UFunction*) UObject::GObjObjects()->Data[ 45634 ];

	ADVParticleEffectManager_eventHandleParticleModuleEventSendToGame_Parms HandleParticleModuleEventSendToGame_Parms;
	HandleParticleModuleEventSendToGame_Parms.InEvent = InEvent;

	this->ProcessEvent ( pFnHandleParticleModuleEventSendToGame, &HandleParticleModuleEventSendToGame_Parms, NULL );

	if ( InCollideDirection )
		memcpy ( InCollideDirection, &HandleParticleModuleEventSendToGame_Parms.InCollideDirection, 0xC );

	if ( InHitLocation )
		memcpy ( InHitLocation, &HandleParticleModuleEventSendToGame_Parms.InHitLocation, 0xC );

	if ( InHitNormal )
		memcpy ( InHitNormal, &HandleParticleModuleEventSendToGame_Parms.InHitNormal, 0xC );

	if ( InBoneName )
		memcpy ( InBoneName, &HandleParticleModuleEventSendToGame_Parms.InBoneName, 0x8 );
};

// Function ForgeGame.DVParticleModuleSpawnDecalGameEvent.DoEvent
// [0x00C20802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 InCollideDirection             ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FVector                 InHitLocation                  ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FVector                 InHitNormal                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FName                   InBoneName                     ( CPF_Const | CPF_Parm | CPF_OutParm )

void UDVParticleModuleSpawnDecalGameEvent::eventDoEvent ( struct FVector* InCollideDirection, struct FVector* InHitLocation, struct FVector* InHitNormal, struct FName* InBoneName )
{
	static UFunction* pFnDoEvent = NULL;

	if ( ! pFnDoEvent )
		pFnDoEvent = (UFunction*) UObject::GObjObjects()->Data[ 45653 ];

	UDVParticleModuleSpawnDecalGameEvent_eventDoEvent_Parms DoEvent_Parms;

	this->ProcessEvent ( pFnDoEvent, &DoEvent_Parms, NULL );

	if ( InCollideDirection )
		memcpy ( InCollideDirection, &DoEvent_Parms.InCollideDirection, 0xC );

	if ( InHitLocation )
		memcpy ( InHitLocation, &DoEvent_Parms.InHitLocation, 0xC );

	if ( InHitNormal )
		memcpy ( InHitNormal, &DoEvent_Parms.InHitNormal, 0xC );

	if ( InBoneName )
		memcpy ( InBoneName, &DoEvent_Parms.InBoneName, 0x8 );
};

// Function ForgeGame.DVParticleSystemAttachment.AttachToSocketOnSkeletalMeshComponent
// [0x00020102] 
// Parameters infos:
// class USkeletalMeshComponent*  BaseSkeletalMeshComponent      ( CPF_Parm | CPF_EditInline )
// struct FName                   SocketName                     ( CPF_Parm )

void ADVParticleSystemAttachment::AttachToSocketOnSkeletalMeshComponent ( class USkeletalMeshComponent* BaseSkeletalMeshComponent, struct FName SocketName )
{
	static UFunction* pFnAttachToSocketOnSkeletalMeshComponent = NULL;

	if ( ! pFnAttachToSocketOnSkeletalMeshComponent )
		pFnAttachToSocketOnSkeletalMeshComponent = (UFunction*) UObject::GObjObjects()->Data[ 45680 ];

	ADVParticleSystemAttachment_execAttachToSocketOnSkeletalMeshComponent_Parms AttachToSocketOnSkeletalMeshComponent_Parms;
	AttachToSocketOnSkeletalMeshComponent_Parms.BaseSkeletalMeshComponent = BaseSkeletalMeshComponent;
	memcpy ( &AttachToSocketOnSkeletalMeshComponent_Parms.SocketName, &SocketName, 0x8 );

	this->ProcessEvent ( pFnAttachToSocketOnSkeletalMeshComponent, &AttachToSocketOnSkeletalMeshComponent_Parms, NULL );
};

// Function ForgeGame.DVParticleSystemAttachment.AttachToSocket
// [0x00020102] 
// Parameters infos:
// class ADVPawn*                 DVPawn                         ( CPF_Parm )
// struct FName                   SocketName                     ( CPF_Parm )

void ADVParticleSystemAttachment::AttachToSocket ( class ADVPawn* DVPawn, struct FName SocketName )
{
	static UFunction* pFnAttachToSocket = NULL;

	if ( ! pFnAttachToSocket )
		pFnAttachToSocket = (UFunction*) UObject::GObjObjects()->Data[ 45676 ];

	ADVParticleSystemAttachment_execAttachToSocket_Parms AttachToSocket_Parms;
	AttachToSocket_Parms.DVPawn = DVPawn;
	memcpy ( &AttachToSocket_Parms.SocketName, &SocketName, 0x8 );

	this->ProcessEvent ( pFnAttachToSocket, &AttachToSocket_Parms, NULL );
};

// Function ForgeGame.DVParticleSystemAttachment.GetComponent
// [0x00020102] 
// Parameters infos:
// class UPrimitiveComponent*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class UPrimitiveComponent* ADVParticleSystemAttachment::GetComponent ( )
{
	static UFunction* pFnGetComponent = NULL;

	if ( ! pFnGetComponent )
		pFnGetComponent = (UFunction*) UObject::GObjObjects()->Data[ 45674 ];

	ADVParticleSystemAttachment_execGetComponent_Parms GetComponent_Parms;

	this->ProcessEvent ( pFnGetComponent, &GetComponent_Parms, NULL );

	return GetComponent_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfoArena.CheckTowerActivation
// [0x00020002] 
// Parameters infos:

void AForgeGameInfoArena::CheckTowerActivation ( )
{
	static UFunction* pFnCheckTowerActivation = NULL;

	if ( ! pFnCheckTowerActivation )
		pFnCheckTowerActivation = (UFunction*) UObject::GObjObjects()->Data[ 46782 ];

	AForgeGameInfoArena_execCheckTowerActivation_Parms CheckTowerActivation_Parms;

	this->ProcessEvent ( pFnCheckTowerActivation, &CheckTowerActivation_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoArena.SpawnDefaultPawnFor
// [0x00020002] 
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             NewPlayer                      ( CPF_Parm )
// class ANavigationPoint*        StartSpot                      ( CPF_Parm )

class APawn* AForgeGameInfoArena::SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot )
{
	static UFunction* pFnSpawnDefaultPawnFor = NULL;

	if ( ! pFnSpawnDefaultPawnFor )
		pFnSpawnDefaultPawnFor = (UFunction*) UObject::GObjObjects()->Data[ 46770 ];

	AForgeGameInfoArena_execSpawnDefaultPawnFor_Parms SpawnDefaultPawnFor_Parms;
	SpawnDefaultPawnFor_Parms.NewPlayer = NewPlayer;
	SpawnDefaultPawnFor_Parms.StartSpot = StartSpot;

	this->ProcessEvent ( pFnSpawnDefaultPawnFor, &SpawnDefaultPawnFor_Parms, NULL );

	return SpawnDefaultPawnFor_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfoArena.WinningTeamId
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AForgeGameInfoArena::WinningTeamId ( )
{
	static UFunction* pFnWinningTeamId = NULL;

	if ( ! pFnWinningTeamId )
		pFnWinningTeamId = (UFunction*) UObject::GObjObjects()->Data[ 46762 ];

	AForgeGameInfoArena_execWinningTeamId_Parms WinningTeamId_Parms;

	this->ProcessEvent ( pFnWinningTeamId, &WinningTeamId_Parms, NULL );

	return WinningTeamId_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfoArena.OneTimeMapSetup
// [0x00020002] 
// Parameters infos:

void AForgeGameInfoArena::OneTimeMapSetup ( )
{
	static UFunction* pFnOneTimeMapSetup = NULL;

	if ( ! pFnOneTimeMapSetup )
		pFnOneTimeMapSetup = (UFunction*) UObject::GObjObjects()->Data[ 46759 ];

	AForgeGameInfoArena_execOneTimeMapSetup_Parms OneTimeMapSetup_Parms;

	this->ProcessEvent ( pFnOneTimeMapSetup, &OneTimeMapSetup_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoArena.MatchFinished
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AForgeGameInfoArena::MatchFinished ( )
{
	static UFunction* pFnMatchFinished = NULL;

	if ( ! pFnMatchFinished )
		pFnMatchFinished = (UFunction*) UObject::GObjObjects()->Data[ 46751 ];

	AForgeGameInfoArena_execMatchFinished_Parms MatchFinished_Parms;

	this->ProcessEvent ( pFnMatchFinished, &MatchFinished_Parms, NULL );

	return MatchFinished_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfoArena.ScoreKill
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             Other                          ( CPF_Parm )

void AForgeGameInfoArena::ScoreKill ( class AController* Killer, class AController* Other )
{
	static UFunction* pFnScoreKill = NULL;

	if ( ! pFnScoreKill )
		pFnScoreKill = (UFunction*) UObject::GObjObjects()->Data[ 46748 ];

	AForgeGameInfoArena_execScoreKill_Parms ScoreKill_Parms;
	ScoreKill_Parms.Killer = Killer;
	ScoreKill_Parms.Other = Other;

	this->ProcessEvent ( pFnScoreKill, &ScoreKill_Parms, NULL );
};

// Function ForgeGame.DVTower.Deactivate
// [0x00020002] 
// Parameters infos:

void ADVTower::Deactivate ( )
{
	static UFunction* pFnDeactivate = NULL;

	if ( ! pFnDeactivate )
		pFnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 46517 ];

	ADVTower_execDeactivate_Parms Deactivate_Parms;

	this->ProcessEvent ( pFnDeactivate, &Deactivate_Parms, NULL );
};

// Function ForgeGame.DVTower.Activate
// [0x00020002] 
// Parameters infos:

void ADVTower::Activate ( )
{
	static UFunction* pFnActivate = NULL;

	if ( ! pFnActivate )
		pFnActivate = (UFunction*) UObject::GObjObjects()->Data[ 46516 ];

	ADVTower_execActivate_Parms Activate_Parms;

	this->ProcessEvent ( pFnActivate, &Activate_Parms, NULL );
};

// Function ForgeGame.DVTower.ResetForNewRound
// [0x00020002] 
// Parameters infos:

void ADVTower::ResetForNewRound ( )
{
	static UFunction* pFnResetForNewRound = NULL;

	if ( ! pFnResetForNewRound )
		pFnResetForNewRound = (UFunction*) UObject::GObjObjects()->Data[ 46515 ];

	ADVTower_execResetForNewRound_Parms ResetForNewRound_Parms;

	this->ProcessEvent ( pFnResetForNewRound, &ResetForNewRound_Parms, NULL );
};

// Function ForgeGame.DVTower.SetOwningTeam
// [0x00020002] 
// Parameters infos:

void ADVTower::SetOwningTeam ( )
{
	static UFunction* pFnSetOwningTeam = NULL;

	if ( ! pFnSetOwningTeam )
		pFnSetOwningTeam = (UFunction*) UObject::GObjObjects()->Data[ 46514 ];

	ADVTower_execSetOwningTeam_Parms SetOwningTeam_Parms;

	this->ProcessEvent ( pFnSetOwningTeam, &SetOwningTeam_Parms, NULL );
};

// Function ForgeGame.DVTower.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVTower::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 46508 ];

	ADVTower_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVTower.GiveTuggersCredit
// [0x00020002] 
// Parameters infos:

void ADVTower::GiveTuggersCredit ( )
{
	static UFunction* pFnGiveTuggersCredit = NULL;

	if ( ! pFnGiveTuggersCredit )
		pFnGiveTuggersCredit = (UFunction*) UObject::GObjObjects()->Data[ 46502 ];

	ADVTower_execGiveTuggersCredit_Parms GiveTuggersCredit_Parms;

	this->ProcessEvent ( pFnGiveTuggersCredit, &GiveTuggersCredit_Parms, NULL );
};

// Function ForgeGame.DVTower.CheckTuggerValidity
// [0x00020002] 
// Parameters infos:

void ADVTower::CheckTuggerValidity ( )
{
	static UFunction* pFnCheckTuggerValidity = NULL;

	if ( ! pFnCheckTuggerValidity )
		pFnCheckTuggerValidity = (UFunction*) UObject::GObjObjects()->Data[ 46500 ];

	ADVTower_execCheckTuggerValidity_Parms CheckTuggerValidity_Parms;

	this->ProcessEvent ( pFnCheckTuggerValidity, &CheckTuggerValidity_Parms, NULL );
};

// Function ForgeGame.DVTower.UnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void ADVTower::eventUnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 46498 ];

	ADVTower_eventUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function ForgeGame.DVTower.Touch
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADVTower::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 46493 ];

	ADVTower_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function ForgeGame.DVTower.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADVTower::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 46492 ];

	ADVTower_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineStatsRead.GetGlobalStats
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FUniqueNetId            PlayerUniqueId                 ( CPF_Parm )
// int                            ColumnId                       ( CPF_Parm )

struct FString UForgeOnlineStatsRead::GetGlobalStats ( struct FUniqueNetId PlayerUniqueId, int ColumnId )
{
	static UFunction* pFnGetGlobalStats = NULL;

	if ( ! pFnGetGlobalStats )
		pFnGetGlobalStats = (UFunction*) UObject::GObjObjects()->Data[ 47631 ];

	UForgeOnlineStatsRead_execGetGlobalStats_Parms GetGlobalStats_Parms;
	memcpy ( &GetGlobalStats_Parms.PlayerUniqueId, &PlayerUniqueId, 0x8 );
	GetGlobalStats_Parms.ColumnId = ColumnId;

	this->ProcessEvent ( pFnGetGlobalStats, &GetGlobalStats_Parms, NULL );

	return GetGlobalStats_Parms.ReturnValue;
};

// Function ForgeGame.ForgeOnlineStatsRead.GetStatsForClass
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FUniqueNetId            PlayerUniqueId                 ( CPF_Parm )
// struct FString                 ChosenClass                    ( CPF_Parm | CPF_NeedCtorLink )

struct FString UForgeOnlineStatsRead::GetStatsForClass ( struct FUniqueNetId PlayerUniqueId, struct FString ChosenClass )
{
	static UFunction* pFnGetStatsForClass = NULL;

	if ( ! pFnGetStatsForClass )
		pFnGetStatsForClass = (UFunction*) UObject::GObjObjects()->Data[ 47653 ];

	UForgeOnlineStatsRead_execGetStatsForClass_Parms GetStatsForClass_Parms;
	memcpy ( &GetStatsForClass_Parms.PlayerUniqueId, &PlayerUniqueId, 0x8 );
	memcpy ( &GetStatsForClass_Parms.ChosenClass, &ChosenClass, 0xC );

	this->ProcessEvent ( pFnGetStatsForClass, &GetStatsForClass_Parms, NULL );

	return GetStatsForClass_Parms.ReturnValue;
};

// Function ForgeGame.ForgeOnlineStatsRead.FormatTimeStat
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            StatValue                      ( CPF_Parm )

struct FString UForgeOnlineStatsRead::FormatTimeStat ( int StatValue )
{
	static UFunction* pFnFormatTimeStat = NULL;

	if ( ! pFnFormatTimeStat )
		pFnFormatTimeStat = (UFunction*) UObject::GObjObjects()->Data[ 49944 ];

	UForgeOnlineStatsRead_execFormatTimeStat_Parms FormatTimeStat_Parms;
	FormatTimeStat_Parms.StatValue = StatValue;

	this->ProcessEvent ( pFnFormatTimeStat, &FormatTimeStat_Parms, NULL );

	return FormatTimeStat_Parms.ReturnValue;
};

// Function ForgeGame.ForgeOnlineStatsRead.FormatCountStat
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            StatValue                      ( CPF_Parm )

struct FString UForgeOnlineStatsRead::FormatCountStat ( int StatValue )
{
	static UFunction* pFnFormatCountStat = NULL;

	if ( ! pFnFormatCountStat )
		pFnFormatCountStat = (UFunction*) UObject::GObjObjects()->Data[ 49941 ];

	UForgeOnlineStatsRead_execFormatCountStat_Parms FormatCountStat_Parms;
	FormatCountStat_Parms.StatValue = StatValue;

	this->ProcessEvent ( pFnFormatCountStat, &FormatCountStat_Parms, NULL );

	return FormatCountStat_Parms.ReturnValue;
};

// Function ForgeGame.DVProjectileHook.AddParticleEmitter
// [0x00020102] 
// Parameters infos:
// class APawn*                   Hero                           ( CPF_Parm )

void ADVProjectileHook::AddParticleEmitter ( class APawn* Hero )
{
	static UFunction* pFnAddParticleEmitter = NULL;

	if ( ! pFnAddParticleEmitter )
		pFnAddParticleEmitter = (UFunction*) UObject::GObjObjects()->Data[ 46268 ];

	ADVProjectileHook_execAddParticleEmitter_Parms AddParticleEmitter_Parms;
	AddParticleEmitter_Parms.Hero = Hero;

	this->ProcessEvent ( pFnAddParticleEmitter, &AddParticleEmitter_Parms, NULL );
};

// Function ForgeGame.DVProjectileHook.KillPartcleEmitter
// [0x00020102] 
// Parameters infos:

void ADVProjectileHook::KillPartcleEmitter ( )
{
	static UFunction* pFnKillPartcleEmitter = NULL;

	if ( ! pFnKillPartcleEmitter )
		pFnKillPartcleEmitter = (UFunction*) UObject::GObjObjects()->Data[ 46267 ];

	ADVProjectileHook_execKillPartcleEmitter_Parms KillPartcleEmitter_Parms;

	this->ProcessEvent ( pFnKillPartcleEmitter, &KillPartcleEmitter_Parms, NULL );
};

// Function ForgeGame.DVProjectileHook.UpdateBeamEmitter
// [0x00020102] 
// Parameters infos:
// struct FVector                 EndLocation                    ( CPF_Parm )

void ADVProjectileHook::UpdateBeamEmitter ( struct FVector EndLocation )
{
	static UFunction* pFnUpdateBeamEmitter = NULL;

	if ( ! pFnUpdateBeamEmitter )
		pFnUpdateBeamEmitter = (UFunction*) UObject::GObjObjects()->Data[ 46265 ];

	ADVProjectileHook_execUpdateBeamEmitter_Parms UpdateBeamEmitter_Parms;
	memcpy ( &UpdateBeamEmitter_Parms.EndLocation, &EndLocation, 0xC );

	this->ProcessEvent ( pFnUpdateBeamEmitter, &UpdateBeamEmitter_Parms, NULL );
};

// Function ForgeGame.DVProjectileHook.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVProjectileHook::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 46263 ];

	ADVProjectileHook_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVProjectileHook.Destoryed
// [0x00020002] 
// Parameters infos:

void ADVProjectileHook::Destoryed ( )
{
	static UFunction* pFnDestoryed = NULL;

	if ( ! pFnDestoryed )
		pFnDestoryed = (UFunction*) UObject::GObjObjects()->Data[ 46262 ];

	ADVProjectileHook_execDestoryed_Parms Destoryed_Parms;

	this->ProcessEvent ( pFnDestoryed, &Destoryed_Parms, NULL );
};

// Function ForgeGame.DVProjectileHook.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADVProjectileHook::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 46259 ];

	ADVProjectileHook_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function ForgeGame.DVProjectileHook.ProjectileHoming
// [0x00020100] 
// Parameters infos:

void ADVProjectileHook::ProjectileHoming ( )
{
	static UFunction* pFnProjectileHoming = NULL;

	if ( ! pFnProjectileHoming )
		pFnProjectileHoming = (UFunction*) UObject::GObjObjects()->Data[ 46258 ];

	ADVProjectileHook_execProjectileHoming_Parms ProjectileHoming_Parms;

	this->ProcessEvent ( pFnProjectileHoming, &ProjectileHoming_Parms, NULL );
};

// Function ForgeGame.DVRavagerChainAttachment.Tick
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVRavagerChainAttachment::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 46282 ];

	ADVRavagerChainAttachment_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.DVRavagerChainAttachment.AttachToSocket
// [0x00020102] 
// Parameters infos:
// class ADVPawn*                 DVPawn                         ( CPF_Parm )
// struct FName                   SocketName                     ( CPF_Parm )

void ADVRavagerChainAttachment::AttachToSocket ( class ADVPawn* DVPawn, struct FName SocketName )
{
	static UFunction* pFnAttachToSocket = NULL;

	if ( ! pFnAttachToSocket )
		pFnAttachToSocket = (UFunction*) UObject::GObjObjects()->Data[ 46279 ];

	ADVRavagerChainAttachment_execAttachToSocket_Parms AttachToSocket_Parms;
	AttachToSocket_Parms.DVPawn = DVPawn;
	memcpy ( &AttachToSocket_Parms.SocketName, &SocketName, 0x8 );

	this->ProcessEvent ( pFnAttachToSocket, &AttachToSocket_Parms, NULL );
};

// Function ForgeGame.DVSeqAct_AssignTeam.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDVSeqAct_AssignTeam::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 46291 ];

	UDVSeqAct_AssignTeam_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function ForgeGame.DVSeqAct_ChangeBotHealth.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDVSeqAct_ChangeBotHealth::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 46297 ];

	UDVSeqAct_ChangeBotHealth_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function ForgeGame.DVSeqAct_ChangeBotSkill.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDVSeqAct_ChangeBotSkill::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 46303 ];

	UDVSeqAct_ChangeBotSkill_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function ForgeGame.DVSeqAct_DrawText.Reset
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDVSeqAct_DrawText::eventReset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 46316 ];

	UDVSeqAct_DrawText_eventReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function ForgeGame.DVSeqAct_DrawText.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDVSeqAct_DrawText::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 46311 ];

	UDVSeqAct_DrawText_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function ForgeGame.DVSeqAct_GetTeamNumber.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDVSeqAct_GetTeamNumber::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 46322 ];

	UDVSeqAct_GetTeamNumber_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function ForgeGame.DVSeqAct_HideHUDMessage.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDVSeqAct_HideHUDMessage::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 46325 ];

	UDVSeqAct_HideHUDMessage_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function ForgeGame.DVSeqAct_LockAbility.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDVSeqAct_LockAbility::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 46331 ];

	UDVSeqAct_LockAbility_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function ForgeGame.DVSeqAct_ResetKismet.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDVSeqAct_ResetKismet::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 46335 ];

	UDVSeqAct_ResetKismet_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function ForgeGame.DVSeqAct_SetAbilityCooldowns.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDVSeqAct_SetAbilityCooldowns::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 46343 ];

	UDVSeqAct_SetAbilityCooldowns_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function ForgeGame.DVSeqAct_SetTeamSpawn.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDVSeqAct_SetTeamSpawn::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 46351 ];

	UDVSeqAct_SetTeamSpawn_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function ForgeGame.DVSeqAct_ShowHUDMessage.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDVSeqAct_ShowHUDMessage::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 46358 ];

	UDVSeqAct_ShowHUDMessage_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function ForgeGame.DVSeqAct_TutorialSectionComplete.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDVSeqAct_TutorialSectionComplete::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 46367 ];

	UDVSeqAct_TutorialSectionComplete_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function ForgeGame.DVSeqCond_ComparePlayerClass.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDVSeqCond_ComparePlayerClass::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 46373 ];

	UDVSeqCond_ComparePlayerClass_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function ForgeGame.DVSeqCond_ComparePlayerTeam.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDVSeqCond_ComparePlayerTeam::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 46378 ];

	UDVSeqCond_ComparePlayerTeam_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function ForgeGame.DVSeqEvent_Input.Setup
// [0x00020002] 
// Parameters infos:

void UDVSeqEvent_Input::Setup ( )
{
	static UFunction* pFnSetup = NULL;

	if ( ! pFnSetup )
		pFnSetup = (UFunction*) UObject::GObjObjects()->Data[ 46385 ];

	UDVSeqEvent_Input_execSetup_Parms Setup_Parms;

	this->ProcessEvent ( pFnSetup, &Setup_Parms, NULL );
};

// Function ForgeGame.DVSeqEvent_Input.Toggled
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDVSeqEvent_Input::eventToggled ( )
{
	static UFunction* pFnToggled = NULL;

	if ( ! pFnToggled )
		pFnToggled = (UFunction*) UObject::GObjObjects()->Data[ 46384 ];

	UDVSeqEvent_Input_eventToggled_Parms Toggled_Parms;

	this->ProcessEvent ( pFnToggled, &Toggled_Parms, NULL );
};

// Function ForgeGame.DVSeqVar_HumanPlayer.GetObjectValue
// [0x00020002] 
// Parameters infos:
// class UObject*                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UObject* UDVSeqVar_HumanPlayer::GetObjectValue ( )
{
	static UFunction* pFnGetObjectValue = NULL;

	if ( ! pFnGetObjectValue )
		pFnGetObjectValue = (UFunction*) UObject::GObjObjects()->Data[ 46396 ];

	UDVSeqVar_HumanPlayer_execGetObjectValue_Parms GetObjectValue_Parms;

	this->ProcessEvent ( pFnGetObjectValue, &GetObjectValue_Parms, NULL );

	return GetObjectValue_Parms.ReturnValue;
};

// Function ForgeGame.DVStaticMeshAttachment.GetComponent
// [0x00020102] 
// Parameters infos:
// class UPrimitiveComponent*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class UPrimitiveComponent* ADVStaticMeshAttachment::GetComponent ( )
{
	static UFunction* pFnGetComponent = NULL;

	if ( ! pFnGetComponent )
		pFnGetComponent = (UFunction*) UObject::GObjObjects()->Data[ 46460 ];

	ADVStaticMeshAttachment_execGetComponent_Parms GetComponent_Parms;

	this->ProcessEvent ( pFnGetComponent, &GetComponent_Parms, NULL );

	return GetComponent_Parms.ReturnValue;
};

// Function ForgeGame.DVTeamInfo.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADVTeamInfo::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 46469 ];

	ADVTeamInfo_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineGameSettings.UpdateForgeGameSettings
// [0x00020002] 
// Parameters infos:

void UForgeOnlineGameSettings::UpdateForgeGameSettings ( )
{
	static UFunction* pFnUpdateForgeGameSettings = NULL;

	if ( ! pFnUpdateForgeGameSettings )
		pFnUpdateForgeGameSettings = (UFunction*) UObject::GObjObjects()->Data[ 49907 ];

	UForgeOnlineGameSettings_execUpdateForgeGameSettings_Parms UpdateForgeGameSettings_Parms;

	this->ProcessEvent ( pFnUpdateForgeGameSettings, &UpdateForgeGameSettings_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineGameSettings.UpdateFromURL
// [0x00420002] 
// Parameters infos:
// class AGameInfo*               Game                           ( CPF_Parm )
// struct FString                 URL                            ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UForgeOnlineGameSettings::UpdateFromURL ( class AGameInfo* Game, struct FString* URL )
{
	static UFunction* pFnUpdateFromURL = NULL;

	if ( ! pFnUpdateFromURL )
		pFnUpdateFromURL = (UFunction*) UObject::GObjObjects()->Data[ 49904 ];

	UForgeOnlineGameSettings_execUpdateFromURL_Parms UpdateFromURL_Parms;
	UpdateFromURL_Parms.Game = Game;

	this->ProcessEvent ( pFnUpdateFromURL, &UpdateFromURL_Parms, NULL );

	if ( URL )
		memcpy ( URL, &UpdateFromURL_Parms.URL, 0xC );
};

// Function ForgeGame.ForgeGameInfoAssault.OneTimeMapSetup
// [0x00020002] 
// Parameters infos:

void AForgeGameInfoAssault::OneTimeMapSetup ( )
{
	static UFunction* pFnOneTimeMapSetup = NULL;

	if ( ! pFnOneTimeMapSetup )
		pFnOneTimeMapSetup = (UFunction*) UObject::GObjObjects()->Data[ 46793 ];

	AForgeGameInfoAssault_execOneTimeMapSetup_Parms OneTimeMapSetup_Parms;

	this->ProcessEvent ( pFnOneTimeMapSetup, &OneTimeMapSetup_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoFrontEnd.RestartPlayer
// [0x00020000] 
// Parameters infos:
// class AController*             NewPlayer                      ( CPF_Parm )

void AForgeGameInfoFrontEnd::RestartPlayer ( class AController* NewPlayer )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 46867 ];

	AForgeGameInfoFrontEnd_execRestartPlayer_Parms RestartPlayer_Parms;
	RestartPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoKOTH.ScoreTowers
// [0x00020002] 
// Parameters infos:

void AForgeGameInfoKOTH::ScoreTowers ( )
{
	static UFunction* pFnScoreTowers = NULL;

	if ( ! pFnScoreTowers )
		pFnScoreTowers = (UFunction*) UObject::GObjObjects()->Data[ 46884 ];

	AForgeGameInfoKOTH_execScoreTowers_Parms ScoreTowers_Parms;

	this->ProcessEvent ( pFnScoreTowers, &ScoreTowers_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoKOTH.WinningTeamId
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AForgeGameInfoKOTH::WinningTeamId ( )
{
	static UFunction* pFnWinningTeamId = NULL;

	if ( ! pFnWinningTeamId )
		pFnWinningTeamId = (UFunction*) UObject::GObjObjects()->Data[ 46882 ];

	AForgeGameInfoKOTH_execWinningTeamId_Parms WinningTeamId_Parms;

	this->ProcessEvent ( pFnWinningTeamId, &WinningTeamId_Parms, NULL );

	return WinningTeamId_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfoKOTH.OneTimeMapSetup
// [0x00020002] 
// Parameters infos:

void AForgeGameInfoKOTH::OneTimeMapSetup ( )
{
	static UFunction* pFnOneTimeMapSetup = NULL;

	if ( ! pFnOneTimeMapSetup )
		pFnOneTimeMapSetup = (UFunction*) UObject::GObjObjects()->Data[ 46880 ];

	AForgeGameInfoKOTH_execOneTimeMapSetup_Parms OneTimeMapSetup_Parms;

	this->ProcessEvent ( pFnOneTimeMapSetup, &OneTimeMapSetup_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoKOTH.MatchFinished
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AForgeGameInfoKOTH::MatchFinished ( )
{
	static UFunction* pFnMatchFinished = NULL;

	if ( ! pFnMatchFinished )
		pFnMatchFinished = (UFunction*) UObject::GObjObjects()->Data[ 46877 ];

	AForgeGameInfoKOTH_execMatchFinished_Parms MatchFinished_Parms;

	this->ProcessEvent ( pFnMatchFinished, &MatchFinished_Parms, NULL );

	return MatchFinished_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfoKOTH.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AForgeGameInfoKOTH::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 46876 ];

	AForgeGameInfoKOTH_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoTDM.WinningTeamId
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AForgeGameInfoTDM::WinningTeamId ( )
{
	static UFunction* pFnWinningTeamId = NULL;

	if ( ! pFnWinningTeamId )
		pFnWinningTeamId = (UFunction*) UObject::GObjObjects()->Data[ 46917 ];

	AForgeGameInfoTDM_execWinningTeamId_Parms WinningTeamId_Parms;

	this->ProcessEvent ( pFnWinningTeamId, &WinningTeamId_Parms, NULL );

	return WinningTeamId_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfoTDM.OneTimeMapSetup
// [0x00020002] 
// Parameters infos:

void AForgeGameInfoTDM::OneTimeMapSetup ( )
{
	static UFunction* pFnOneTimeMapSetup = NULL;

	if ( ! pFnOneTimeMapSetup )
		pFnOneTimeMapSetup = (UFunction*) UObject::GObjObjects()->Data[ 46914 ];

	AForgeGameInfoTDM_execOneTimeMapSetup_Parms OneTimeMapSetup_Parms;

	this->ProcessEvent ( pFnOneTimeMapSetup, &OneTimeMapSetup_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoTDM.MatchFinished
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AForgeGameInfoTDM::MatchFinished ( )
{
	static UFunction* pFnMatchFinished = NULL;

	if ( ! pFnMatchFinished )
		pFnMatchFinished = (UFunction*) UObject::GObjObjects()->Data[ 46911 ];

	AForgeGameInfoTDM_execMatchFinished_Parms MatchFinished_Parms;

	this->ProcessEvent ( pFnMatchFinished, &MatchFinished_Parms, NULL );

	return MatchFinished_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGameInfoTDM.ScoreKill
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             Other                          ( CPF_Parm )

void AForgeGameInfoTDM::ScoreKill ( class AController* Killer, class AController* Other )
{
	static UFunction* pFnScoreKill = NULL;

	if ( ! pFnScoreKill )
		pFnScoreKill = (UFunction*) UObject::GObjObjects()->Data[ 46903 ];

	AForgeGameInfoTDM_execScoreKill_Parms ScoreKill_Parms;
	ScoreKill_Parms.Killer = Killer;
	ScoreKill_Parms.Other = Other;

	this->ProcessEvent ( pFnScoreKill, &ScoreKill_Parms, NULL );
};

// Function ForgeGame.ForgeGameInfoTDM.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AForgeGameInfoTDM::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 46902 ];

	AForgeGameInfoTDM_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function ForgeGame.ForgeGFxChatTextInput.SetTextSize
// [0x00020002] 
// Parameters infos:
// float                          NewTextSize                    ( CPF_Parm )

void UForgeGFxChatTextInput::SetTextSize ( float NewTextSize )
{
	static UFunction* pFnSetTextSize = NULL;

	if ( ! pFnSetTextSize )
		pFnSetTextSize = (UFunction*) UObject::GObjObjects()->Data[ 47043 ];

	UForgeGFxChatTextInput_execSetTextSize_Parms SetTextSize_Parms;
	SetTextSize_Parms.NewTextSize = NewTextSize;

	this->ProcessEvent ( pFnSetTextSize, &SetTextSize_Parms, NULL );
};

// Function ForgeGame.ForgeGFxSwappableIconObject.ChangeIconImage
// [0x00020002] 
// Parameters infos:
// struct FString                 NewIconName                    ( CPF_Parm | CPF_NeedCtorLink )
// int                            IconWidth                      ( CPF_Parm )
// int                            IconHeight                     ( CPF_Parm )

void UForgeGFxSwappableIconObject::ChangeIconImage ( struct FString NewIconName, int IconWidth, int IconHeight )
{
	static UFunction* pFnChangeIconImage = NULL;

	if ( ! pFnChangeIconImage )
		pFnChangeIconImage = (UFunction*) UObject::GObjObjects()->Data[ 49839 ];

	UForgeGFxSwappableIconObject_execChangeIconImage_Parms ChangeIconImage_Parms;
	memcpy ( &ChangeIconImage_Parms.NewIconName, &NewIconName, 0xC );
	ChangeIconImage_Parms.IconWidth = IconWidth;
	ChangeIconImage_Parms.IconHeight = IconHeight;

	this->ProcessEvent ( pFnChangeIconImage, &ChangeIconImage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxQuitNagBackground.SetLetterSpacing
// [0x00020002] 
// Parameters infos:
// int                            NewLetterSpacing               ( CPF_Parm )

void UForgeGFxQuitNagBackground::SetLetterSpacing ( int NewLetterSpacing )
{
	static UFunction* pFnSetLetterSpacing = NULL;

	if ( ! pFnSetLetterSpacing )
		pFnSetLetterSpacing = (UFunction*) UObject::GObjObjects()->Data[ 49563 ];

	UForgeGFxQuitNagBackground_execSetLetterSpacing_Parms SetLetterSpacing_Parms;
	SetLetterSpacing_Parms.NewLetterSpacing = NewLetterSpacing;

	this->ProcessEvent ( pFnSetLetterSpacing, &SetLetterSpacing_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndTrainingMenu.OnBotMatchPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndTrainingMenu::OnBotMatchPress ( struct FEventData ev )
{
	static UFunction* pFnOnBotMatchPress = NULL;

	if ( ! pFnOnBotMatchPress )
		pFnOnBotMatchPress = (UFunction*) UObject::GObjObjects()->Data[ 48815 ];

	UForgeGFxFrontEndTrainingMenu_execOnBotMatchPress_Parms OnBotMatchPress_Parms;
	memcpy ( &OnBotMatchPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnBotMatchPress, &OnBotMatchPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndTrainingMenu.OnTutorialPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndTrainingMenu::OnTutorialPress ( struct FEventData ev )
{
	static UFunction* pFnOnTutorialPress = NULL;

	if ( ! pFnOnTutorialPress )
		pFnOnTutorialPress = (UFunction*) UObject::GObjObjects()->Data[ 48813 ];

	UForgeGFxFrontEndTrainingMenu_execOnTutorialPress_Parms OnTutorialPress_Parms;
	memcpy ( &OnTutorialPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnTutorialPress, &OnTutorialPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndTrainingMenu.OnBackPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndTrainingMenu::OnBackPress ( struct FEventData ev )
{
	static UFunction* pFnOnBackPress = NULL;

	if ( ! pFnOnBackPress )
		pFnOnBackPress = (UFunction*) UObject::GObjObjects()->Data[ 48811 ];

	UForgeGFxFrontEndTrainingMenu_execOnBackPress_Parms OnBackPress_Parms;
	memcpy ( &OnBackPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnBackPress, &OnBackPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndTrainingMenu.ConfigSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndTrainingMenu::ConfigSlide ( )
{
	static UFunction* pFnConfigSlide = NULL;

	if ( ! pFnConfigSlide )
		pFnConfigSlide = (UFunction*) UObject::GObjObjects()->Data[ 48810 ];

	UForgeGFxFrontEndTrainingMenu_execConfigSlide_Parms ConfigSlide_Parms;

	this->ProcessEvent ( pFnConfigSlide, &ConfigSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndCredits.Tick
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxFrontEndCredits::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 47955 ];

	UForgeGFxFrontEndCredits_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndCredits.ConfigForRes
// [0x00820002] 
// Parameters infos:
// int                            SizeX                          ( CPF_Parm )
// int                            SizeY                          ( CPF_Parm )

void UForgeGFxFrontEndCredits::ConfigForRes ( int SizeX, int SizeY )
{
	static UFunction* pFnConfigForRes = NULL;

	if ( ! pFnConfigForRes )
		pFnConfigForRes = (UFunction*) UObject::GObjObjects()->Data[ 47950 ];

	UForgeGFxFrontEndCredits_execConfigForRes_Parms ConfigForRes_Parms;
	ConfigForRes_Parms.SizeX = SizeX;
	ConfigForRes_Parms.SizeY = SizeY;

	this->ProcessEvent ( pFnConfigForRes, &ConfigForRes_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndCredits.ShowSlide
// [0x00820002] 
// Parameters infos:

void UForgeGFxFrontEndCredits::ShowSlide ( )
{
	static UFunction* pFnShowSlide = NULL;

	if ( ! pFnShowSlide )
		pFnShowSlide = (UFunction*) UObject::GObjObjects()->Data[ 47948 ];

	UForgeGFxFrontEndCredits_execShowSlide_Parms ShowSlide_Parms;

	this->ProcessEvent ( pFnShowSlide, &ShowSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndCredits.ConfigSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndCredits::ConfigSlide ( )
{
	static UFunction* pFnConfigSlide = NULL;

	if ( ! pFnConfigSlide )
		pFnConfigSlide = (UFunction*) UObject::GObjObjects()->Data[ 47947 ];

	UForgeGFxFrontEndCredits_execConfigSlide_Parms ConfigSlide_Parms;

	this->ProcessEvent ( pFnConfigSlide, &ConfigSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.UpdateStatPoints
// [0x00020002] 
// Parameters infos:
// int                            TheClassId                     ( CPF_Parm )
// class UJsonObject*             TheStatPointDetails            ( CPF_Parm )

void UForgeGFxFrontEndAccountMenu::UpdateStatPoints ( int TheClassId, class UJsonObject* TheStatPointDetails )
{
	static UFunction* pFnUpdateStatPoints = NULL;

	if ( ! pFnUpdateStatPoints )
		pFnUpdateStatPoints = (UFunction*) UObject::GObjObjects()->Data[ 47903 ];

	UForgeGFxFrontEndAccountMenu_execUpdateStatPoints_Parms UpdateStatPoints_Parms;
	UpdateStatPoints_Parms.TheClassId = TheClassId;
	UpdateStatPoints_Parms.TheStatPointDetails = TheStatPointDetails;

	this->ProcessEvent ( pFnUpdateStatPoints, &UpdateStatPoints_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.UpdateAvailableTitles
// [0x00020002] 
// Parameters infos:
// struct FString                 TheAvailableTitles             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::UpdateAvailableTitles ( struct FString TheAvailableTitles )
{
	static UFunction* pFnUpdateAvailableTitles = NULL;

	if ( ! pFnUpdateAvailableTitles )
		pFnUpdateAvailableTitles = (UFunction*) UObject::GObjObjects()->Data[ 47899 ];

	UForgeGFxFrontEndAccountMenu_execUpdateAvailableTitles_Parms UpdateAvailableTitles_Parms;
	memcpy ( &UpdateAvailableTitles_Parms.TheAvailableTitles, &TheAvailableTitles, 0xC );

	this->ProcessEvent ( pFnUpdateAvailableTitles, &UpdateAvailableTitles_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.UpdateSkinOptions
// [0x00020002] 
// Parameters infos:
// int                            TheClassId                     ( CPF_Parm )
// struct FString                 TheSkinOptions                 ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::UpdateSkinOptions ( int TheClassId, struct FString TheSkinOptions )
{
	static UFunction* pFnUpdateSkinOptions = NULL;

	if ( ! pFnUpdateSkinOptions )
		pFnUpdateSkinOptions = (UFunction*) UObject::GObjObjects()->Data[ 47893 ];

	UForgeGFxFrontEndAccountMenu_execUpdateSkinOptions_Parms UpdateSkinOptions_Parms;
	UpdateSkinOptions_Parms.TheClassId = TheClassId;
	memcpy ( &UpdateSkinOptions_Parms.TheSkinOptions, &TheSkinOptions, 0xC );

	this->ProcessEvent ( pFnUpdateSkinOptions, &UpdateSkinOptions_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.UpdateAccountDetails
// [0x00020002] 
// Parameters infos:
// class UJsonObject*             TheNewAccountDetails           ( CPF_Parm )

void UForgeGFxFrontEndAccountMenu::UpdateAccountDetails ( class UJsonObject* TheNewAccountDetails )
{
	static UFunction* pFnUpdateAccountDetails = NULL;

	if ( ! pFnUpdateAccountDetails )
		pFnUpdateAccountDetails = (UFunction*) UObject::GObjObjects()->Data[ 47888 ];

	UForgeGFxFrontEndAccountMenu_execUpdateAccountDetails_Parms UpdateAccountDetails_Parms;
	UpdateAccountDetails_Parms.TheNewAccountDetails = TheNewAccountDetails;

	this->ProcessEvent ( pFnUpdateAccountDetails, &UpdateAccountDetails_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SpendCustomizationPoint
// [0x00020002] 
// Parameters infos:
// int                            PlayerClassId                  ( CPF_Parm )
// int                            FromCategoryId                 ( CPF_Parm )
// int                            ToCategoryId                   ( CPF_Parm )

void UForgeGFxFrontEndAccountMenu::SpendCustomizationPoint ( int PlayerClassId, int FromCategoryId, int ToCategoryId )
{
	static UFunction* pFnSpendCustomizationPoint = NULL;

	if ( ! pFnSpendCustomizationPoint )
		pFnSpendCustomizationPoint = (UFunction*) UObject::GObjObjects()->Data[ 47883 ];

	UForgeGFxFrontEndAccountMenu_execSpendCustomizationPoint_Parms SpendCustomizationPoint_Parms;
	SpendCustomizationPoint_Parms.PlayerClassId = PlayerClassId;
	SpendCustomizationPoint_Parms.FromCategoryId = FromCategoryId;
	SpendCustomizationPoint_Parms.ToCategoryId = ToCategoryId;

	this->ProcessEvent ( pFnSpendCustomizationPoint, &SpendCustomizationPoint_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SpendArmorPoint
// [0x00020002] 
// Parameters infos:
// int                            PlayerClassId                  ( CPF_Parm )
// int                            FromCategoryId                 ( CPF_Parm )
// int                            ToCategoryId                   ( CPF_Parm )

void UForgeGFxFrontEndAccountMenu::SpendArmorPoint ( int PlayerClassId, int FromCategoryId, int ToCategoryId )
{
	static UFunction* pFnSpendArmorPoint = NULL;

	if ( ! pFnSpendArmorPoint )
		pFnSpendArmorPoint = (UFunction*) UObject::GObjObjects()->Data[ 47878 ];

	UForgeGFxFrontEndAccountMenu_execSpendArmorPoint_Parms SpendArmorPoint_Parms;
	SpendArmorPoint_Parms.PlayerClassId = PlayerClassId;
	SpendArmorPoint_Parms.FromCategoryId = FromCategoryId;
	SpendArmorPoint_Parms.ToCategoryId = ToCategoryId;

	this->ProcessEvent ( pFnSpendArmorPoint, &SpendArmorPoint_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.GetUpdatedStatPointsForClass
// [0x00020002] 
// Parameters infos:
// int                            PlayerClassId                  ( CPF_Parm )

void UForgeGFxFrontEndAccountMenu::GetUpdatedStatPointsForClass ( int PlayerClassId )
{
	static UFunction* pFnGetUpdatedStatPointsForClass = NULL;

	if ( ! pFnGetUpdatedStatPointsForClass )
		pFnGetUpdatedStatPointsForClass = (UFunction*) UObject::GObjObjects()->Data[ 47875 ];

	UForgeGFxFrontEndAccountMenu_execGetUpdatedStatPointsForClass_Parms GetUpdatedStatPointsForClass_Parms;
	GetUpdatedStatPointsForClass_Parms.PlayerClassId = PlayerClassId;

	this->ProcessEvent ( pFnGetUpdatedStatPointsForClass, &GetUpdatedStatPointsForClass_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.GetUpdatedStatPoints
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::GetUpdatedStatPoints ( )
{
	static UFunction* pFnGetUpdatedStatPoints = NULL;

	if ( ! pFnGetUpdatedStatPoints )
		pFnGetUpdatedStatPoints = (UFunction*) UObject::GObjObjects()->Data[ 47873 ];

	UForgeGFxFrontEndAccountMenu_execGetUpdatedStatPoints_Parms GetUpdatedStatPoints_Parms;

	this->ProcessEvent ( pFnGetUpdatedStatPoints, &GetUpdatedStatPoints_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SetPlayerTitle
// [0x00020002] 
// Parameters infos:
// struct FString                 NewTitle                       ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::SetPlayerTitle ( struct FString NewTitle )
{
	static UFunction* pFnSetPlayerTitle = NULL;

	if ( ! pFnSetPlayerTitle )
		pFnSetPlayerTitle = (UFunction*) UObject::GObjObjects()->Data[ 47870 ];

	UForgeGFxFrontEndAccountMenu_execSetPlayerTitle_Parms SetPlayerTitle_Parms;
	memcpy ( &SetPlayerTitle_Parms.NewTitle, &NewTitle, 0xC );

	this->ProcessEvent ( pFnSetPlayerTitle, &SetPlayerTitle_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.GetUpdatedPlayerTitles
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::GetUpdatedPlayerTitles ( )
{
	static UFunction* pFnGetUpdatedPlayerTitles = NULL;

	if ( ! pFnGetUpdatedPlayerTitles )
		pFnGetUpdatedPlayerTitles = (UFunction*) UObject::GObjObjects()->Data[ 47868 ];

	UForgeGFxFrontEndAccountMenu_execGetUpdatedPlayerTitles_Parms GetUpdatedPlayerTitles_Parms;

	this->ProcessEvent ( pFnGetUpdatedPlayerTitles, &GetUpdatedPlayerTitles_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SetPlayerSkinForClass
// [0x00020002] 
// Parameters infos:
// unsigned char                  ThePlayerClass                 ( CPF_Parm )
// int                            TheSkinId                      ( CPF_Parm )

void UForgeGFxFrontEndAccountMenu::SetPlayerSkinForClass ( unsigned char ThePlayerClass, int TheSkinId )
{
	static UFunction* pFnSetPlayerSkinForClass = NULL;

	if ( ! pFnSetPlayerSkinForClass )
		pFnSetPlayerSkinForClass = (UFunction*) UObject::GObjObjects()->Data[ 47864 ];

	UForgeGFxFrontEndAccountMenu_execSetPlayerSkinForClass_Parms SetPlayerSkinForClass_Parms;
	SetPlayerSkinForClass_Parms.ThePlayerClass = ThePlayerClass;
	SetPlayerSkinForClass_Parms.TheSkinId = TheSkinId;

	this->ProcessEvent ( pFnSetPlayerSkinForClass, &SetPlayerSkinForClass_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.GetUpdatedPlayerSkinsForClass
// [0x00020002] 
// Parameters infos:
// unsigned char                  ThePlayerClass                 ( CPF_Parm )

void UForgeGFxFrontEndAccountMenu::GetUpdatedPlayerSkinsForClass ( unsigned char ThePlayerClass )
{
	static UFunction* pFnGetUpdatedPlayerSkinsForClass = NULL;

	if ( ! pFnGetUpdatedPlayerSkinsForClass )
		pFnGetUpdatedPlayerSkinsForClass = (UFunction*) UObject::GObjObjects()->Data[ 47861 ];

	UForgeGFxFrontEndAccountMenu_execGetUpdatedPlayerSkinsForClass_Parms GetUpdatedPlayerSkinsForClass_Parms;
	GetUpdatedPlayerSkinsForClass_Parms.ThePlayerClass = ThePlayerClass;

	this->ProcessEvent ( pFnGetUpdatedPlayerSkinsForClass, &GetUpdatedPlayerSkinsForClass_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.GetUpdatedPlayerSkins
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::GetUpdatedPlayerSkins ( )
{
	static UFunction* pFnGetUpdatedPlayerSkins = NULL;

	if ( ! pFnGetUpdatedPlayerSkins )
		pFnGetUpdatedPlayerSkins = (UFunction*) UObject::GObjObjects()->Data[ 47859 ];

	UForgeGFxFrontEndAccountMenu_execGetUpdatedPlayerSkins_Parms GetUpdatedPlayerSkins_Parms;

	this->ProcessEvent ( pFnGetUpdatedPlayerSkins, &GetUpdatedPlayerSkins_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.GetUpdatedAccountDetails
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::GetUpdatedAccountDetails ( )
{
	static UFunction* pFnGetUpdatedAccountDetails = NULL;

	if ( ! pFnGetUpdatedAccountDetails )
		pFnGetUpdatedAccountDetails = (UFunction*) UObject::GObjObjects()->Data[ 47857 ];

	UForgeGFxFrontEndAccountMenu_execGetUpdatedAccountDetails_Parms GetUpdatedAccountDetails_Parms;

	this->ProcessEvent ( pFnGetUpdatedAccountDetails, &GetUpdatedAccountDetails_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.UpdateArmorSubTab
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::UpdateArmorSubTab ( )
{
	static UFunction* pFnUpdateArmorSubTab = NULL;

	if ( ! pFnUpdateArmorSubTab )
		pFnUpdateArmorSubTab = (UFunction*) UObject::GObjObjects()->Data[ 47851 ];

	UForgeGFxFrontEndAccountMenu_execUpdateArmorSubTab_Parms UpdateArmorSubTab_Parms;

	this->ProcessEvent ( pFnUpdateArmorSubTab, &UpdateArmorSubTab_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.UpdateASPSubTab
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::UpdateASPSubTab ( )
{
	static UFunction* pFnUpdateASPSubTab = NULL;

	if ( ! pFnUpdateASPSubTab )
		pFnUpdateASPSubTab = (UFunction*) UObject::GObjObjects()->Data[ 47844 ];

	UForgeGFxFrontEndAccountMenu_execUpdateASPSubTab_Parms UpdateASPSubTab_Parms;

	this->ProcessEvent ( pFnUpdateASPSubTab, &UpdateASPSubTab_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ColorizeArmorDifference
// [0x00024002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Difference                     ( CPF_Parm )
// unsigned long                  IsActive                       ( CPF_OptionalParm | CPF_Parm )

struct FString UForgeGFxFrontEndAccountMenu::ColorizeArmorDifference ( int Difference, unsigned long IsActive )
{
	static UFunction* pFnColorizeArmorDifference = NULL;

	if ( ! pFnColorizeArmorDifference )
		pFnColorizeArmorDifference = (UFunction*) UObject::GObjObjects()->Data[ 47840 ];

	UForgeGFxFrontEndAccountMenu_execColorizeArmorDifference_Parms ColorizeArmorDifference_Parms;
	ColorizeArmorDifference_Parms.Difference = Difference;
	ColorizeArmorDifference_Parms.IsActive = IsActive;

	this->ProcessEvent ( pFnColorizeArmorDifference, &ColorizeArmorDifference_Parms, NULL );

	return ColorizeArmorDifference_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ColorizeArmor
// [0x00024002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Base                           ( CPF_Parm )
// int                            Difference                     ( CPF_Parm )
// unsigned long                  IsActive                       ( CPF_OptionalParm | CPF_Parm )

struct FString UForgeGFxFrontEndAccountMenu::ColorizeArmor ( int Base, int Difference, unsigned long IsActive )
{
	static UFunction* pFnColorizeArmor = NULL;

	if ( ! pFnColorizeArmor )
		pFnColorizeArmor = (UFunction*) UObject::GObjObjects()->Data[ 47835 ];

	UForgeGFxFrontEndAccountMenu_execColorizeArmor_Parms ColorizeArmor_Parms;
	ColorizeArmor_Parms.Base = Base;
	ColorizeArmor_Parms.Difference = Difference;
	ColorizeArmor_Parms.IsActive = IsActive;

	this->ProcessEvent ( pFnColorizeArmor, &ColorizeArmor_Parms, NULL );

	return ColorizeArmor_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.DetailedColorizeSpeed
// [0x00024002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// float                          Value                          ( CPF_Parm )
// unsigned long                  IsActive                       ( CPF_OptionalParm | CPF_Parm )

struct FString UForgeGFxFrontEndAccountMenu::DetailedColorizeSpeed ( float Value, unsigned long IsActive )
{
	static UFunction* pFnDetailedColorizeSpeed = NULL;

	if ( ! pFnDetailedColorizeSpeed )
		pFnDetailedColorizeSpeed = (UFunction*) UObject::GObjObjects()->Data[ 47829 ];

	UForgeGFxFrontEndAccountMenu_execDetailedColorizeSpeed_Parms DetailedColorizeSpeed_Parms;
	DetailedColorizeSpeed_Parms.Value = Value;
	DetailedColorizeSpeed_Parms.IsActive = IsActive;

	this->ProcessEvent ( pFnDetailedColorizeSpeed, &DetailedColorizeSpeed_Parms, NULL );

	return DetailedColorizeSpeed_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.DetailedColorizeInt
// [0x00024002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Value                          ( CPF_Parm )
// unsigned long                  IsActive                       ( CPF_OptionalParm | CPF_Parm )

struct FString UForgeGFxFrontEndAccountMenu::DetailedColorizeInt ( int Value, unsigned long IsActive )
{
	static UFunction* pFnDetailedColorizeInt = NULL;

	if ( ! pFnDetailedColorizeInt )
		pFnDetailedColorizeInt = (UFunction*) UObject::GObjObjects()->Data[ 47825 ];

	UForgeGFxFrontEndAccountMenu_execDetailedColorizeInt_Parms DetailedColorizeInt_Parms;
	DetailedColorizeInt_Parms.Value = Value;
	DetailedColorizeInt_Parms.IsActive = IsActive;

	this->ProcessEvent ( pFnDetailedColorizeInt, &DetailedColorizeInt_Parms, NULL );

	return DetailedColorizeInt_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ColorizeInt
// [0x00024002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Value                          ( CPF_Parm )
// unsigned long                  IsActive                       ( CPF_OptionalParm | CPF_Parm )

struct FString UForgeGFxFrontEndAccountMenu::ColorizeInt ( int Value, unsigned long IsActive )
{
	static UFunction* pFnColorizeInt = NULL;

	if ( ! pFnColorizeInt )
		pFnColorizeInt = (UFunction*) UObject::GObjObjects()->Data[ 47821 ];

	UForgeGFxFrontEndAccountMenu_execColorizeInt_Parms ColorizeInt_Parms;
	ColorizeInt_Parms.Value = Value;
	ColorizeInt_Parms.IsActive = IsActive;

	this->ProcessEvent ( pFnColorizeInt, &ColorizeInt_Parms, NULL );

	return ColorizeInt_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.Tick
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxFrontEndAccountMenu::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 47813 ];

	UForgeGFxFrontEndAccountMenu_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnClassButtonChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnClassButtonChange ( struct FEventData ev )
{
	static UFunction* pFnOnClassButtonChange = NULL;

	if ( ! pFnOnClassButtonChange )
		pFnOnClassButtonChange = (UFunction*) UObject::GObjObjects()->Data[ 47809 ];

	UForgeGFxFrontEndAccountMenu_execOnClassButtonChange_Parms OnClassButtonChange_Parms;
	memcpy ( &OnClassButtonChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnClassButtonChange, &OnClassButtonChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnClassButtonPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnClassButtonPress ( struct FEventData ev )
{
	static UFunction* pFnOnClassButtonPress = NULL;

	if ( ! pFnOnClassButtonPress )
		pFnOnClassButtonPress = (UFunction*) UObject::GObjObjects()->Data[ 47806 ];

	UForgeGFxFrontEndAccountMenu_execOnClassButtonPress_Parms OnClassButtonPress_Parms;
	memcpy ( &OnClassButtonPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnClassButtonPress, &OnClassButtonPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnBackPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnBackPress ( struct FEventData ev )
{
	static UFunction* pFnOnBackPress = NULL;

	if ( ! pFnOnBackPress )
		pFnOnBackPress = (UFunction*) UObject::GObjObjects()->Data[ 47804 ];

	UForgeGFxFrontEndAccountMenu_execOnBackPress_Parms OnBackPress_Parms;
	memcpy ( &OnBackPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnBackPress, &OnBackPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnAbilityFocusPressed
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnAbilityFocusPressed ( struct FEventData ev )
{
	static UFunction* pFnOnAbilityFocusPressed = NULL;

	if ( ! pFnOnAbilityFocusPressed )
		pFnOnAbilityFocusPressed = (UFunction*) UObject::GObjObjects()->Data[ 47791 ];

	UForgeGFxFrontEndAccountMenu_execOnAbilityFocusPressed_Parms OnAbilityFocusPressed_Parms;
	memcpy ( &OnAbilityFocusPressed_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnAbilityFocusPressed, &OnAbilityFocusPressed_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnSkinApplyPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnSkinApplyPress ( struct FEventData ev )
{
	static UFunction* pFnOnSkinApplyPress = NULL;

	if ( ! pFnOnSkinApplyPress )
		pFnOnSkinApplyPress = (UFunction*) UObject::GObjObjects()->Data[ 47786 ];

	UForgeGFxFrontEndAccountMenu_execOnSkinApplyPress_Parms OnSkinApplyPress_Parms;
	memcpy ( &OnSkinApplyPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnSkinApplyPress, &OnSkinApplyPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnSkinNextPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnSkinNextPress ( struct FEventData ev )
{
	static UFunction* pFnOnSkinNextPress = NULL;

	if ( ! pFnOnSkinNextPress )
		pFnOnSkinNextPress = (UFunction*) UObject::GObjObjects()->Data[ 47782 ];

	UForgeGFxFrontEndAccountMenu_execOnSkinNextPress_Parms OnSkinNextPress_Parms;
	memcpy ( &OnSkinNextPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnSkinNextPress, &OnSkinNextPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnSkinPrevPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnSkinPrevPress ( struct FEventData ev )
{
	static UFunction* pFnOnSkinPrevPress = NULL;

	if ( ! pFnOnSkinPrevPress )
		pFnOnSkinPrevPress = (UFunction*) UObject::GObjObjects()->Data[ 47778 ];

	UForgeGFxFrontEndAccountMenu_execOnSkinPrevPress_Parms OnSkinPrevPress_Parms;
	memcpy ( &OnSkinPrevPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnSkinPrevPress, &OnSkinPrevPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnChangeSkinPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnChangeSkinPress ( struct FEventData ev )
{
	static UFunction* pFnOnChangeSkinPress = NULL;

	if ( ! pFnOnChangeSkinPress )
		pFnOnChangeSkinPress = (UFunction*) UObject::GObjObjects()->Data[ 47776 ];

	UForgeGFxFrontEndAccountMenu_execOnChangeSkinPress_Parms OnChangeSkinPress_Parms;
	memcpy ( &OnChangeSkinPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnChangeSkinPress, &OnChangeSkinPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnBuyLevelPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnBuyLevelPress ( struct FEventData ev )
{
	static UFunction* pFnOnBuyLevelPress = NULL;

	if ( ! pFnOnBuyLevelPress )
		pFnOnBuyLevelPress = (UFunction*) UObject::GObjObjects()->Data[ 47772 ];

	UForgeGFxFrontEndAccountMenu_execOnBuyLevelPress_Parms OnBuyLevelPress_Parms;
	memcpy ( &OnBuyLevelPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnBuyLevelPress, &OnBuyLevelPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.HandleScrollDown
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UForgeGFxFrontEndAccountMenu::HandleScrollDown ( )
{
	static UFunction* pFnHandleScrollDown = NULL;

	if ( ! pFnHandleScrollDown )
		pFnHandleScrollDown = (UFunction*) UObject::GObjObjects()->Data[ 47368 ];

	UForgeGFxFrontEndAccountMenu_execHandleScrollDown_Parms HandleScrollDown_Parms;

	this->ProcessEvent ( pFnHandleScrollDown, &HandleScrollDown_Parms, NULL );

	return HandleScrollDown_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.HandleScrollUp
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UForgeGFxFrontEndAccountMenu::HandleScrollUp ( )
{
	static UFunction* pFnHandleScrollUp = NULL;

	if ( ! pFnHandleScrollUp )
		pFnHandleScrollUp = (UFunction*) UObject::GObjObjects()->Data[ 47363 ];

	UForgeGFxFrontEndAccountMenu_execHandleScrollUp_Parms HandleScrollUp_Parms;

	this->ProcessEvent ( pFnHandleScrollUp, &HandleScrollUp_Parms, NULL );

	return HandleScrollUp_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.HandlePasteCommand
// [0x00020000] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::HandlePasteCommand ( )
{
	static UFunction* pFnHandlePasteCommand = NULL;

	if ( ! pFnHandlePasteCommand )
		pFnHandlePasteCommand = (UFunction*) UObject::GObjObjects()->Data[ 47771 ];

	UForgeGFxFrontEndAccountMenu_execHandlePasteCommand_Parms HandlePasteCommand_Parms;

	this->ProcessEvent ( pFnHandlePasteCommand, &HandlePasteCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.HandleCopyCommand
// [0x00020000] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::HandleCopyCommand ( )
{
	static UFunction* pFnHandleCopyCommand = NULL;

	if ( ! pFnHandleCopyCommand )
		pFnHandleCopyCommand = (UFunction*) UObject::GObjObjects()->Data[ 47770 ];

	UForgeGFxFrontEndAccountMenu_execHandleCopyCommand_Parms HandleCopyCommand_Parms;

	this->ProcessEvent ( pFnHandleCopyCommand, &HandleCopyCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.HandleCutCommand
// [0x00020000] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::HandleCutCommand ( )
{
	static UFunction* pFnHandleCutCommand = NULL;

	if ( ! pFnHandleCutCommand )
		pFnHandleCutCommand = (UFunction*) UObject::GObjObjects()->Data[ 47769 ];

	UForgeGFxFrontEndAccountMenu_execHandleCutCommand_Parms HandleCutCommand_Parms;

	this->ProcessEvent ( pFnHandleCutCommand, &HandleCutCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ConfigForRes
// [0x00020002] 
// Parameters infos:
// int                            SizeX                          ( CPF_Parm )
// int                            SizeY                          ( CPF_Parm )

void UForgeGFxFrontEndAccountMenu::ConfigForRes ( int SizeX, int SizeY )
{
	static UFunction* pFnConfigForRes = NULL;

	if ( ! pFnConfigForRes )
		pFnConfigForRes = (UFunction*) UObject::GObjObjects()->Data[ 47766 ];

	UForgeGFxFrontEndAccountMenu_execConfigForRes_Parms ConfigForRes_Parms;
	ConfigForRes_Parms.SizeX = SizeX;
	ConfigForRes_Parms.SizeY = SizeY;

	this->ProcessEvent ( pFnConfigForRes, &ConfigForRes_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnArmorApplyPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnArmorApplyPress ( struct FEventData ev )
{
	static UFunction* pFnOnArmorApplyPress = NULL;

	if ( ! pFnOnArmorApplyPress )
		pFnOnArmorApplyPress = (UFunction*) UObject::GObjObjects()->Data[ 47763 ];

	UForgeGFxFrontEndAccountMenu_execOnArmorApplyPress_Parms OnArmorApplyPress_Parms;
	memcpy ( &OnArmorApplyPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnArmorApplyPress, &OnArmorApplyPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnArmorResetPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnArmorResetPress ( struct FEventData ev )
{
	static UFunction* pFnOnArmorResetPress = NULL;

	if ( ! pFnOnArmorResetPress )
		pFnOnArmorResetPress = (UFunction*) UObject::GObjObjects()->Data[ 47761 ];

	UForgeGFxFrontEndAccountMenu_execOnArmorResetPress_Parms OnArmorResetPress_Parms;
	memcpy ( &OnArmorResetPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnArmorResetPress, &OnArmorResetPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnArmorPlusPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnArmorPlusPress ( struct FEventData ev )
{
	static UFunction* pFnOnArmorPlusPress = NULL;

	if ( ! pFnOnArmorPlusPress )
		pFnOnArmorPlusPress = (UFunction*) UObject::GObjObjects()->Data[ 47758 ];

	UForgeGFxFrontEndAccountMenu_execOnArmorPlusPress_Parms OnArmorPlusPress_Parms;
	memcpy ( &OnArmorPlusPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnArmorPlusPress, &OnArmorPlusPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnArmorMinusPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnArmorMinusPress ( struct FEventData ev )
{
	static UFunction* pFnOnArmorMinusPress = NULL;

	if ( ! pFnOnArmorMinusPress )
		pFnOnArmorMinusPress = (UFunction*) UObject::GObjObjects()->Data[ 47755 ];

	UForgeGFxFrontEndAccountMenu_execOnArmorMinusPress_Parms OnArmorMinusPress_Parms;
	memcpy ( &OnArmorMinusPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnArmorMinusPress, &OnArmorMinusPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnASPApplyPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnASPApplyPress ( struct FEventData ev )
{
	static UFunction* pFnOnASPApplyPress = NULL;

	if ( ! pFnOnASPApplyPress )
		pFnOnASPApplyPress = (UFunction*) UObject::GObjObjects()->Data[ 47752 ];

	UForgeGFxFrontEndAccountMenu_execOnASPApplyPress_Parms OnASPApplyPress_Parms;
	memcpy ( &OnASPApplyPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnASPApplyPress, &OnASPApplyPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnASPResetPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnASPResetPress ( struct FEventData ev )
{
	static UFunction* pFnOnASPResetPress = NULL;

	if ( ! pFnOnASPResetPress )
		pFnOnASPResetPress = (UFunction*) UObject::GObjObjects()->Data[ 47750 ];

	UForgeGFxFrontEndAccountMenu_execOnASPResetPress_Parms OnASPResetPress_Parms;
	memcpy ( &OnASPResetPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnASPResetPress, &OnASPResetPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnASPPlusPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnASPPlusPress ( struct FEventData ev )
{
	static UFunction* pFnOnASPPlusPress = NULL;

	if ( ! pFnOnASPPlusPress )
		pFnOnASPPlusPress = (UFunction*) UObject::GObjObjects()->Data[ 47747 ];

	UForgeGFxFrontEndAccountMenu_execOnASPPlusPress_Parms OnASPPlusPress_Parms;
	memcpy ( &OnASPPlusPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnASPPlusPress, &OnASPPlusPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnASPMinusPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnASPMinusPress ( struct FEventData ev )
{
	static UFunction* pFnOnASPMinusPress = NULL;

	if ( ! pFnOnASPMinusPress )
		pFnOnASPMinusPress = (UFunction*) UObject::GObjObjects()->Data[ 47744 ];

	UForgeGFxFrontEndAccountMenu_execOnASPMinusPress_Parms OnASPMinusPress_Parms;
	memcpy ( &OnASPMinusPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnASPMinusPress, &OnASPMinusPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.GetSpendingCategoryIdFromButtonData
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ButtonData                     ( CPF_Parm | CPF_NeedCtorLink )

int UForgeGFxFrontEndAccountMenu::GetSpendingCategoryIdFromButtonData ( struct FString ButtonData )
{
	static UFunction* pFnGetSpendingCategoryIdFromButtonData = NULL;

	if ( ! pFnGetSpendingCategoryIdFromButtonData )
		pFnGetSpendingCategoryIdFromButtonData = (UFunction*) UObject::GObjObjects()->Data[ 47741 ];

	UForgeGFxFrontEndAccountMenu_execGetSpendingCategoryIdFromButtonData_Parms GetSpendingCategoryIdFromButtonData_Parms;
	memcpy ( &GetSpendingCategoryIdFromButtonData_Parms.ButtonData, &ButtonData, 0xC );

	this->ProcessEvent ( pFnGetSpendingCategoryIdFromButtonData, &GetSpendingCategoryIdFromButtonData_Parms, NULL );

	return GetSpendingCategoryIdFromButtonData_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnEquipmentTabPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnEquipmentTabPress ( struct FEventData ev )
{
	static UFunction* pFnOnEquipmentTabPress = NULL;

	if ( ! pFnOnEquipmentTabPress )
		pFnOnEquipmentTabPress = (UFunction*) UObject::GObjObjects()->Data[ 47739 ];

	UForgeGFxFrontEndAccountMenu_execOnEquipmentTabPress_Parms OnEquipmentTabPress_Parms;
	memcpy ( &OnEquipmentTabPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnEquipmentTabPress, &OnEquipmentTabPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnArmorSubTabPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnArmorSubTabPress ( struct FEventData ev )
{
	static UFunction* pFnOnArmorSubTabPress = NULL;

	if ( ! pFnOnArmorSubTabPress )
		pFnOnArmorSubTabPress = (UFunction*) UObject::GObjObjects()->Data[ 47737 ];

	UForgeGFxFrontEndAccountMenu_execOnArmorSubTabPress_Parms OnArmorSubTabPress_Parms;
	memcpy ( &OnArmorSubTabPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnArmorSubTabPress, &OnArmorSubTabPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnASPSubTabPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnASPSubTabPress ( struct FEventData ev )
{
	static UFunction* pFnOnASPSubTabPress = NULL;

	if ( ! pFnOnASPSubTabPress )
		pFnOnASPSubTabPress = (UFunction*) UObject::GObjObjects()->Data[ 47735 ];

	UForgeGFxFrontEndAccountMenu_execOnASPSubTabPress_Parms OnASPSubTabPress_Parms;
	memcpy ( &OnASPSubTabPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnASPSubTabPress, &OnASPSubTabPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnStatsTabPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnStatsTabPress ( struct FEventData ev )
{
	static UFunction* pFnOnStatsTabPress = NULL;

	if ( ! pFnOnStatsTabPress )
		pFnOnStatsTabPress = (UFunction*) UObject::GObjObjects()->Data[ 47733 ];

	UForgeGFxFrontEndAccountMenu_execOnStatsTabPress_Parms OnStatsTabPress_Parms;
	memcpy ( &OnStatsTabPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnStatsTabPress, &OnStatsTabPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnAbilitiesTabPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnAbilitiesTabPress ( struct FEventData ev )
{
	static UFunction* pFnOnAbilitiesTabPress = NULL;

	if ( ! pFnOnAbilitiesTabPress )
		pFnOnAbilitiesTabPress = (UFunction*) UObject::GObjObjects()->Data[ 47731 ];

	UForgeGFxFrontEndAccountMenu_execOnAbilitiesTabPress_Parms OnAbilitiesTabPress_Parms;
	memcpy ( &OnAbilitiesTabPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnAbilitiesTabPress, &OnAbilitiesTabPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnExperienceTabPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnExperienceTabPress ( struct FEventData ev )
{
	static UFunction* pFnOnExperienceTabPress = NULL;

	if ( ! pFnOnExperienceTabPress )
		pFnOnExperienceTabPress = (UFunction*) UObject::GObjObjects()->Data[ 47729 ];

	UForgeGFxFrontEndAccountMenu_execOnExperienceTabPress_Parms OnExperienceTabPress_Parms;
	memcpy ( &OnExperienceTabPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnExperienceTabPress, &OnExperienceTabPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ShowTip
// [0x00024002] 
// Parameters infos:
// struct FString                 TipName                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  ShowFlash                      ( CPF_OptionalParm | CPF_Parm )

void UForgeGFxFrontEndAccountMenu::ShowTip ( struct FString TipName, unsigned long ShowFlash )
{
	static UFunction* pFnShowTip = NULL;

	if ( ! pFnShowTip )
		pFnShowTip = (UFunction*) UObject::GObjObjects()->Data[ 47726 ];

	UForgeGFxFrontEndAccountMenu_execShowTip_Parms ShowTip_Parms;
	memcpy ( &ShowTip_Parms.TipName, &TipName, 0xC );
	ShowTip_Parms.ShowFlash = ShowFlash;

	this->ProcessEvent ( pFnShowTip, &ShowTip_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ResetTips
// [0x00024002] 
// Parameters infos:
// unsigned long                  ShowFlash                      ( CPF_OptionalParm | CPF_Parm )

void UForgeGFxFrontEndAccountMenu::ResetTips ( unsigned long ShowFlash )
{
	static UFunction* pFnResetTips = NULL;

	if ( ! pFnResetTips )
		pFnResetTips = (UFunction*) UObject::GObjObjects()->Data[ 47724 ];

	UForgeGFxFrontEndAccountMenu_execResetTips_Parms ResetTips_Parms;
	ResetTips_Parms.ShowFlash = ShowFlash;

	this->ProcessEvent ( pFnResetTips, &ResetTips_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.FlashTips
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::FlashTips ( )
{
	static UFunction* pFnFlashTips = NULL;

	if ( ! pFnFlashTips )
		pFnFlashTips = (UFunction*) UObject::GObjObjects()->Data[ 47723 ];

	UForgeGFxFrontEndAccountMenu_execFlashTips_Parms FlashTips_Parms;

	this->ProcessEvent ( pFnFlashTips, &FlashTips_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ShowSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::ShowSlide ( )
{
	static UFunction* pFnShowSlide = NULL;

	if ( ! pFnShowSlide )
		pFnShowSlide = (UFunction*) UObject::GObjObjects()->Data[ 47722 ];

	UForgeGFxFrontEndAccountMenu_execShowSlide_Parms ShowSlide_Parms;

	this->ProcessEvent ( pFnShowSlide, &ShowSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.HideSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::HideSlide ( )
{
	static UFunction* pFnHideSlide = NULL;

	if ( ! pFnHideSlide )
		pFnHideSlide = (UFunction*) UObject::GObjObjects()->Data[ 47721 ];

	UForgeGFxFrontEndAccountMenu_execHideSlide_Parms HideSlide_Parms;

	this->ProcessEvent ( pFnHideSlide, &HideSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.FilterButtonInput
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   ButtonName                     ( CPF_Parm )
// unsigned char                  InputEvent                     ( CPF_Parm )

bool UForgeGFxFrontEndAccountMenu::FilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent )
{
	static UFunction* pFnFilterButtonInput = NULL;

	if ( ! pFnFilterButtonInput )
		pFnFilterButtonInput = (UFunction*) UObject::GObjObjects()->Data[ 47355 ];

	UForgeGFxFrontEndAccountMenu_execFilterButtonInput_Parms FilterButtonInput_Parms;
	FilterButtonInput_Parms.ControllerId = ControllerId;
	memcpy ( &FilterButtonInput_Parms.ButtonName, &ButtonName, 0x8 );
	FilterButtonInput_Parms.InputEvent = InputEvent;

	this->ProcessEvent ( pFnFilterButtonInput, &FilterButtonInput_Parms, NULL );

	return FilterButtonInput_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnPlayerTitleChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnPlayerTitleChange ( struct FEventData ev )
{
	static UFunction* pFnOnPlayerTitleChange = NULL;

	if ( ! pFnOnPlayerTitleChange )
		pFnOnPlayerTitleChange = (UFunction*) UObject::GObjObjects()->Data[ 47714 ];

	UForgeGFxFrontEndAccountMenu_execOnPlayerTitleChange_Parms OnPlayerTitleChange_Parms;
	memcpy ( &OnPlayerTitleChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnPlayerTitleChange, &OnPlayerTitleChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnSlideRightPress
// [0x00020000] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnSlideRightPress ( struct FEventData ev )
{
	static UFunction* pFnOnSlideRightPress = NULL;

	if ( ! pFnOnSlideRightPress )
		pFnOnSlideRightPress = (UFunction*) UObject::GObjObjects()->Data[ 47712 ];

	UForgeGFxFrontEndAccountMenu_execOnSlideRightPress_Parms OnSlideRightPress_Parms;
	memcpy ( &OnSlideRightPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnSlideRightPress, &OnSlideRightPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnSlideLeftPress
// [0x00020000] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::OnSlideLeftPress ( struct FEventData ev )
{
	static UFunction* pFnOnSlideLeftPress = NULL;

	if ( ! pFnOnSlideLeftPress )
		pFnOnSlideLeftPress = (UFunction*) UObject::GObjObjects()->Data[ 47710 ];

	UForgeGFxFrontEndAccountMenu_execOnSlideLeftPress_Parms OnSlideLeftPress_Parms;
	memcpy ( &OnSlideLeftPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnSlideLeftPress, &OnSlideLeftPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ScrollToReward
// [0x00820002] 
// Parameters infos:
// int                            NewLevelNumber                 ( CPF_Parm )

void UForgeGFxFrontEndAccountMenu::ScrollToReward ( int NewLevelNumber )
{
	static UFunction* pFnScrollToReward = NULL;

	if ( ! pFnScrollToReward )
		pFnScrollToReward = (UFunction*) UObject::GObjObjects()->Data[ 47703 ];

	UForgeGFxFrontEndAccountMenu_execScrollToReward_Parms ScrollToReward_Parms;
	ScrollToReward_Parms.NewLevelNumber = NewLevelNumber;

	this->ProcessEvent ( pFnScrollToReward, &ScrollToReward_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SetAvatar
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::SetAvatar ( )
{
	static UFunction* pFnSetAvatar = NULL;

	if ( ! pFnSetAvatar )
		pFnSetAvatar = (UFunction*) UObject::GObjObjects()->Data[ 47702 ];

	UForgeGFxFrontEndAccountMenu_execSetAvatar_Parms SetAvatar_Parms;

	this->ProcessEvent ( pFnSetAvatar, &SetAvatar_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SetPreviewSkin
// [0x00020002] 
// Parameters infos:
// class ADVDummyPreviewController* PreviewController              ( CPF_Parm )

void UForgeGFxFrontEndAccountMenu::SetPreviewSkin ( class ADVDummyPreviewController* PreviewController )
{
	static UFunction* pFnSetPreviewSkin = NULL;

	if ( ! pFnSetPreviewSkin )
		pFnSetPreviewSkin = (UFunction*) UObject::GObjObjects()->Data[ 47698 ];

	UForgeGFxFrontEndAccountMenu_execSetPreviewSkin_Parms SetPreviewSkin_Parms;
	SetPreviewSkin_Parms.PreviewController = PreviewController;

	this->ProcessEvent ( pFnSetPreviewSkin, &SetPreviewSkin_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.UpdateSkins
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::UpdateSkins ( )
{
	static UFunction* pFnUpdateSkins = NULL;

	if ( ! pFnUpdateSkins )
		pFnUpdateSkins = (UFunction*) UObject::GObjObjects()->Data[ 47696 ];

	UForgeGFxFrontEndAccountMenu_execUpdateSkins_Parms UpdateSkins_Parms;

	this->ProcessEvent ( pFnUpdateSkins, &UpdateSkins_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ConfigureSkinPreview
// [0x00020002] 
// Parameters infos:
// struct FString                 ClassName                      ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::ConfigureSkinPreview ( struct FString ClassName )
{
	static UFunction* pFnConfigureSkinPreview = NULL;

	if ( ! pFnConfigureSkinPreview )
		pFnConfigureSkinPreview = (UFunction*) UObject::GObjObjects()->Data[ 47689 ];

	UForgeGFxFrontEndAccountMenu_execConfigureSkinPreview_Parms ConfigureSkinPreview_Parms;
	memcpy ( &ConfigureSkinPreview_Parms.ClassName, &ClassName, 0xC );

	this->ProcessEvent ( pFnConfigureSkinPreview, &ConfigureSkinPreview_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SetPreviewMeshLODLevels
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::SetPreviewMeshLODLevels ( )
{
	static UFunction* pFnSetPreviewMeshLODLevels = NULL;

	if ( ! pFnSetPreviewMeshLODLevels )
		pFnSetPreviewMeshLODLevels = (UFunction*) UObject::GObjObjects()->Data[ 47685 ];

	UForgeGFxFrontEndAccountMenu_execSetPreviewMeshLODLevels_Parms SetPreviewMeshLODLevels_Parms;

	this->ProcessEvent ( pFnSetPreviewMeshLODLevels, &SetPreviewMeshLODLevels_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ConfigureXPRewards
// [0x00820002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::ConfigureXPRewards ( )
{
	static UFunction* pFnConfigureXPRewards = NULL;

	if ( ! pFnConfigureXPRewards )
		pFnConfigureXPRewards = (UFunction*) UObject::GObjObjects()->Data[ 47673 ];

	UForgeGFxFrontEndAccountMenu_execConfigureXPRewards_Parms ConfigureXPRewards_Parms;

	this->ProcessEvent ( pFnConfigureXPRewards, &ConfigureXPRewards_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ConfigureAbilityFocuses
// [0x00020002] 
// Parameters infos:
// struct FString                 ClassName                      ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::ConfigureAbilityFocuses ( struct FString ClassName )
{
	static UFunction* pFnConfigureAbilityFocuses = NULL;

	if ( ! pFnConfigureAbilityFocuses )
		pFnConfigureAbilityFocuses = (UFunction*) UObject::GObjObjects()->Data[ 47662 ];

	UForgeGFxFrontEndAccountMenu_execConfigureAbilityFocuses_Parms ConfigureAbilityFocuses_Parms;
	memcpy ( &ConfigureAbilityFocuses_Parms.ClassName, &ClassName, 0xC );

	this->ProcessEvent ( pFnConfigureAbilityFocuses, &ConfigureAbilityFocuses_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.GetRequiredLevelForAbility
// [0x00024002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 OwningClassName                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  Slot                           ( CPF_Parm )
// unsigned char                  Focus                          ( CPF_OptionalParm | CPF_Parm )

int UForgeGFxFrontEndAccountMenu::GetRequiredLevelForAbility ( struct FString OwningClassName, unsigned char Slot, unsigned char Focus )
{
	static UFunction* pFnGetRequiredLevelForAbility = NULL;

	if ( ! pFnGetRequiredLevelForAbility )
		pFnGetRequiredLevelForAbility = (UFunction*) UObject::GObjObjects()->Data[ 47655 ];

	UForgeGFxFrontEndAccountMenu_execGetRequiredLevelForAbility_Parms GetRequiredLevelForAbility_Parms;
	memcpy ( &GetRequiredLevelForAbility_Parms.OwningClassName, &OwningClassName, 0xC );
	GetRequiredLevelForAbility_Parms.Slot = Slot;
	GetRequiredLevelForAbility_Parms.Focus = Focus;

	this->ProcessEvent ( pFnGetRequiredLevelForAbility, &GetRequiredLevelForAbility_Parms, NULL );

	return GetRequiredLevelForAbility_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SetupStatsForChosenClass
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::SetupStatsForChosenClass ( )
{
	static UFunction* pFnSetupStatsForChosenClass = NULL;

	if ( ! pFnSetupStatsForChosenClass )
		pFnSetupStatsForChosenClass = (UFunction*) UObject::GObjObjects()->Data[ 47651 ];

	UForgeGFxFrontEndAccountMenu_execSetupStatsForChosenClass_Parms SetupStatsForChosenClass_Parms;

	this->ProcessEvent ( pFnSetupStatsForChosenClass, &SetupStatsForChosenClass_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ConfigForClass
// [0x00820002] 
// Parameters infos:
// struct FString                 ClassName                      ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndAccountMenu::ConfigForClass ( struct FString ClassName )
{
	static UFunction* pFnConfigForClass = NULL;

	if ( ! pFnConfigForClass )
		pFnConfigForClass = (UFunction*) UObject::GObjObjects()->Data[ 47644 ];

	UForgeGFxFrontEndAccountMenu_execConfigForClass_Parms ConfigForClass_Parms;
	memcpy ( &ConfigForClass_Parms.ClassName, &ClassName, 0xC );

	this->ProcessEvent ( pFnConfigForClass, &ConfigForClass_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.CreateXPRewardLevelItems
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::CreateXPRewardLevelItems ( )
{
	static UFunction* pFnCreateXPRewardLevelItems = NULL;

	if ( ! pFnCreateXPRewardLevelItems )
		pFnCreateXPRewardLevelItems = (UFunction*) UObject::GObjObjects()->Data[ 47642 ];

	UForgeGFxFrontEndAccountMenu_execCreateXPRewardLevelItems_Parms CreateXPRewardLevelItems_Parms;

	this->ProcessEvent ( pFnCreateXPRewardLevelItems, &CreateXPRewardLevelItems_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ConfigureClassButtonFor
// [0x00820002] 
// Parameters infos:
// struct UForgeGFxFrontEndAccountMenu_FSClassSelectionButton ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 ClassName                      ( CPF_Parm | CPF_NeedCtorLink )

struct UForgeGFxFrontEndAccountMenu_FSClassSelectionButton UForgeGFxFrontEndAccountMenu::ConfigureClassButtonFor ( struct FString ClassName )
{
	static UFunction* pFnConfigureClassButtonFor = NULL;

	if ( ! pFnConfigureClassButtonFor )
		pFnConfigureClassButtonFor = (UFunction*) UObject::GObjObjects()->Data[ 47637 ];

	UForgeGFxFrontEndAccountMenu_execConfigureClassButtonFor_Parms ConfigureClassButtonFor_Parms;
	memcpy ( &ConfigureClassButtonFor_Parms.ClassName, &ClassName, 0xC );

	this->ProcessEvent ( pFnConfigureClassButtonFor, &ConfigureClassButtonFor_Parms, NULL );

	return ConfigureClassButtonFor_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.CreateAbilityFocusItems
// [0x00820002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::CreateAbilityFocusItems ( )
{
	static UFunction* pFnCreateAbilityFocusItems = NULL;

	if ( ! pFnCreateAbilityFocusItems )
		pFnCreateAbilityFocusItems = (UFunction*) UObject::GObjObjects()->Data[ 47633 ];

	UForgeGFxFrontEndAccountMenu_execCreateAbilityFocusItems_Parms CreateAbilityFocusItems_Parms;

	this->ProcessEvent ( pFnCreateAbilityFocusItems, &CreateAbilityFocusItems_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SetupGlobalStats
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::SetupGlobalStats ( )
{
	static UFunction* pFnSetupGlobalStats = NULL;

	if ( ! pFnSetupGlobalStats )
		pFnSetupGlobalStats = (UFunction*) UObject::GObjObjects()->Data[ 47629 ];

	UForgeGFxFrontEndAccountMenu_execSetupGlobalStats_Parms SetupGlobalStats_Parms;

	this->ProcessEvent ( pFnSetupGlobalStats, &SetupGlobalStats_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.RenderTargetY
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UForgeGFxFrontEndAccountMenu::RenderTargetY ( )
{
	static UFunction* pFnRenderTargetY = NULL;

	if ( ! pFnRenderTargetY )
		pFnRenderTargetY = (UFunction*) UObject::GObjObjects()->Data[ 47627 ];

	UForgeGFxFrontEndAccountMenu_execRenderTargetY_Parms RenderTargetY_Parms;

	this->ProcessEvent ( pFnRenderTargetY, &RenderTargetY_Parms, NULL );

	return RenderTargetY_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.RenderTargetX
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UForgeGFxFrontEndAccountMenu::RenderTargetX ( )
{
	static UFunction* pFnRenderTargetX = NULL;

	if ( ! pFnRenderTargetX )
		pFnRenderTargetX = (UFunction*) UObject::GObjObjects()->Data[ 47624 ];

	UForgeGFxFrontEndAccountMenu_execRenderTargetX_Parms RenderTargetX_Parms;

	this->ProcessEvent ( pFnRenderTargetX, &RenderTargetX_Parms, NULL );

	return RenderTargetX_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SetupSkinPreviewRenderTarget
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::SetupSkinPreviewRenderTarget ( )
{
	static UFunction* pFnSetupSkinPreviewRenderTarget = NULL;

	if ( ! pFnSetupSkinPreviewRenderTarget )
		pFnSetupSkinPreviewRenderTarget = (UFunction*) UObject::GObjObjects()->Data[ 47619 ];

	UForgeGFxFrontEndAccountMenu_execSetupSkinPreviewRenderTarget_Parms SetupSkinPreviewRenderTarget_Parms;

	this->ProcessEvent ( pFnSetupSkinPreviewRenderTarget, &SetupSkinPreviewRenderTarget_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ConfigSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndAccountMenu::ConfigSlide ( )
{
	static UFunction* pFnConfigSlide = NULL;

	if ( ! pFnConfigSlide )
		pFnConfigSlide = (UFunction*) UObject::GObjObjects()->Data[ 47616 ];

	UForgeGFxFrontEndAccountMenu_execConfigSlide_Parms ConfigSlide_Parms;

	this->ProcessEvent ( pFnConfigSlide, &ConfigSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.FilterButtonInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   ButtonName                     ( CPF_Parm )
// unsigned char                  InputEvent                     ( CPF_Parm )

bool UForgeGFxFrontEndGroupMenu::eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent )
{
	static UFunction* pFnFilterButtonInput = NULL;

	if ( ! pFnFilterButtonInput )
		pFnFilterButtonInput = (UFunction*) UObject::GObjObjects()->Data[ 47370 ];

	UForgeGFxFrontEndGroupMenu_eventFilterButtonInput_Parms FilterButtonInput_Parms;
	FilterButtonInput_Parms.ControllerId = ControllerId;
	memcpy ( &FilterButtonInput_Parms.ButtonName, &ButtonName, 0x8 );
	FilterButtonInput_Parms.InputEvent = InputEvent;

	this->ProcessEvent ( pFnFilterButtonInput, &FilterButtonInput_Parms, NULL );

	return FilterButtonInput_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.SendMessage
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndGroupMenu::SendMessage ( )
{
	static UFunction* pFnSendMessage = NULL;

	if ( ! pFnSendMessage )
		pFnSendMessage = (UFunction*) UObject::GObjObjects()->Data[ 48170 ];

	UForgeGFxFrontEndGroupMenu_execSendMessage_Parms SendMessage_Parms;

	this->ProcessEvent ( pFnSendMessage, &SendMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnSteamActionPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndGroupMenu::OnSteamActionPress ( struct FEventData ev )
{
	static UFunction* pFnOnSteamActionPress = NULL;

	if ( ! pFnOnSteamActionPress )
		pFnOnSteamActionPress = (UFunction*) UObject::GObjObjects()->Data[ 48164 ];

	UForgeGFxFrontEndGroupMenu_execOnSteamActionPress_Parms OnSteamActionPress_Parms;
	memcpy ( &OnSteamActionPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnSteamActionPress, &OnSteamActionPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnPlayerNamePress
// [0x00820002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndGroupMenu::OnPlayerNamePress ( struct FEventData ev )
{
	static UFunction* pFnOnPlayerNamePress = NULL;

	if ( ! pFnOnPlayerNamePress )
		pFnOnPlayerNamePress = (UFunction*) UObject::GObjObjects()->Data[ 48156 ];

	UForgeGFxFrontEndGroupMenu_execOnPlayerNamePress_Parms OnPlayerNamePress_Parms;
	memcpy ( &OnPlayerNamePress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnPlayerNamePress, &OnPlayerNamePress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnChatInputFocusOut
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndGroupMenu::OnChatInputFocusOut ( struct FEventData ev )
{
	static UFunction* pFnOnChatInputFocusOut = NULL;

	if ( ! pFnOnChatInputFocusOut )
		pFnOnChatInputFocusOut = (UFunction*) UObject::GObjObjects()->Data[ 48154 ];

	UForgeGFxFrontEndGroupMenu_execOnChatInputFocusOut_Parms OnChatInputFocusOut_Parms;
	memcpy ( &OnChatInputFocusOut_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnChatInputFocusOut, &OnChatInputFocusOut_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnChatInputFocusIn
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndGroupMenu::OnChatInputFocusIn ( struct FEventData ev )
{
	static UFunction* pFnOnChatInputFocusIn = NULL;

	if ( ! pFnOnChatInputFocusIn )
		pFnOnChatInputFocusIn = (UFunction*) UObject::GObjObjects()->Data[ 48152 ];

	UForgeGFxFrontEndGroupMenu_execOnChatInputFocusIn_Parms OnChatInputFocusIn_Parms;
	memcpy ( &OnChatInputFocusIn_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnChatInputFocusIn, &OnChatInputFocusIn_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.ChangeReady
// [0x00824002] 
// Parameters infos:
// unsigned long                  NewReady                       ( CPF_OptionalParm | CPF_Parm )

void UForgeGFxFrontEndGroupMenu::ChangeReady ( unsigned long NewReady )
{
	static UFunction* pFnChangeReady = NULL;

	if ( ! pFnChangeReady )
		pFnChangeReady = (UFunction*) UObject::GObjObjects()->Data[ 48148 ];

	UForgeGFxFrontEndGroupMenu_execChangeReady_Parms ChangeReady_Parms;
	ChangeReady_Parms.NewReady = NewReady;

	this->ProcessEvent ( pFnChangeReady, &ChangeReady_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.HandleGameSearchResults
// [0x00020002] 
// Parameters infos:
// TArray< struct FOnlineGameSearchResult > AllSearchResults               ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndGroupMenu::HandleGameSearchResults ( TArray< struct FOnlineGameSearchResult > AllSearchResults )
{
	static UFunction* pFnHandleGameSearchResults = NULL;

	if ( ! pFnHandleGameSearchResults )
		pFnHandleGameSearchResults = (UFunction*) UObject::GObjObjects()->Data[ 48137 ];

	UForgeGFxFrontEndGroupMenu_execHandleGameSearchResults_Parms HandleGameSearchResults_Parms;
	memcpy ( &HandleGameSearchResults_Parms.AllSearchResults, &AllSearchResults, 0xC );

	this->ProcessEvent ( pFnHandleGameSearchResults, &HandleGameSearchResults_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.GroupLaunch
// [0x00820002] 
// Parameters infos:

void UForgeGFxFrontEndGroupMenu::GroupLaunch ( )
{
	static UFunction* pFnGroupLaunch = NULL;

	if ( ! pFnGroupLaunch )
		pFnGroupLaunch = (UFunction*) UObject::GObjObjects()->Data[ 48131 ];

	UForgeGFxFrontEndGroupMenu_execGroupLaunch_Parms GroupLaunch_Parms;

	this->ProcessEvent ( pFnGroupLaunch, &GroupLaunch_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.KickMember
// [0x00820002] 
// Parameters infos:
// struct FUniqueNetId            TargetId                       ( CPF_Parm )

void UForgeGFxFrontEndGroupMenu::KickMember ( struct FUniqueNetId TargetId )
{
	static UFunction* pFnKickMember = NULL;

	if ( ! pFnKickMember )
		pFnKickMember = (UFunction*) UObject::GObjObjects()->Data[ 48124 ];

	UForgeGFxFrontEndGroupMenu_execKickMember_Parms KickMember_Parms;
	memcpy ( &KickMember_Parms.TargetId, &TargetId, 0x8 );

	this->ProcessEvent ( pFnKickMember, &KickMember_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.LeaveGroup
// [0x00820002] 
// Parameters infos:

void UForgeGFxFrontEndGroupMenu::LeaveGroup ( )
{
	static UFunction* pFnLeaveGroup = NULL;

	if ( ! pFnLeaveGroup )
		pFnLeaveGroup = (UFunction*) UObject::GObjObjects()->Data[ 48120 ];

	UForgeGFxFrontEndGroupMenu_execLeaveGroup_Parms LeaveGroup_Parms;

	this->ProcessEvent ( pFnLeaveGroup, &LeaveGroup_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.RefreshAvatars
// [0x00820002] 
// Parameters infos:

void UForgeGFxFrontEndGroupMenu::RefreshAvatars ( )
{
	static UFunction* pFnRefreshAvatars = NULL;

	if ( ! pFnRefreshAvatars )
		pFnRefreshAvatars = (UFunction*) UObject::GObjObjects()->Data[ 48115 ];

	UForgeGFxFrontEndGroupMenu_execRefreshAvatars_Parms RefreshAvatars_Parms;

	this->ProcessEvent ( pFnRefreshAvatars, &RefreshAvatars_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.StoreAvatar
// [0x00820002] 
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Const | CPF_Parm )
// class UTexture2D*              Avatar                         ( CPF_Parm )

void UForgeGFxFrontEndGroupMenu::StoreAvatar ( struct FUniqueNetId PlayerNetId, class UTexture2D* Avatar )
{
	static UFunction* pFnStoreAvatar = NULL;

	if ( ! pFnStoreAvatar )
		pFnStoreAvatar = (UFunction*) UObject::GObjObjects()->Data[ 48111 ];

	UForgeGFxFrontEndGroupMenu_execStoreAvatar_Parms StoreAvatar_Parms;
	memcpy ( &StoreAvatar_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	StoreAvatar_Parms.Avatar = Avatar;

	this->ProcessEvent ( pFnStoreAvatar, &StoreAvatar_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.UpdateSettings
// [0x00020002] 
// Parameters infos:
// TArray< struct FLobbyMetaData > NewLobbySettings               ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndGroupMenu::UpdateSettings ( TArray< struct FLobbyMetaData > NewLobbySettings )
{
	static UFunction* pFnUpdateSettings = NULL;

	if ( ! pFnUpdateSettings )
		pFnUpdateSettings = (UFunction*) UObject::GObjObjects()->Data[ 48104 ];

	UForgeGFxFrontEndGroupMenu_execUpdateSettings_Parms UpdateSettings_Parms;
	memcpy ( &UpdateSettings_Parms.NewLobbySettings, &NewLobbySettings, 0xC );

	this->ProcessEvent ( pFnUpdateSettings, &UpdateSettings_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnGameModeChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndGroupMenu::OnGameModeChange ( struct FEventData ev )
{
	static UFunction* pFnOnGameModeChange = NULL;

	if ( ! pFnOnGameModeChange )
		pFnOnGameModeChange = (UFunction*) UObject::GObjObjects()->Data[ 48098 ];

	UForgeGFxFrontEndGroupMenu_execOnGameModeChange_Parms OnGameModeChange_Parms;
	memcpy ( &OnGameModeChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnGameModeChange, &OnGameModeChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnRegionChange
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndGroupMenu::OnRegionChange ( struct FEventData ev )
{
	static UFunction* pFnOnRegionChange = NULL;

	if ( ! pFnOnRegionChange )
		pFnOnRegionChange = (UFunction*) UObject::GObjObjects()->Data[ 48095 ];

	UForgeGFxFrontEndGroupMenu_execOnRegionChange_Parms OnRegionChange_Parms;
	memcpy ( &OnRegionChange_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnRegionChange, &OnRegionChange_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.EnableQueueButtons
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndGroupMenu::EnableQueueButtons ( )
{
	static UFunction* pFnEnableQueueButtons = NULL;

	if ( ! pFnEnableQueueButtons )
		pFnEnableQueueButtons = (UFunction*) UObject::GObjObjects()->Data[ 48087 ];

	UForgeGFxFrontEndGroupMenu_execEnableQueueButtons_Parms EnableQueueButtons_Parms;

	this->ProcessEvent ( pFnEnableQueueButtons, &EnableQueueButtons_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnInvitePress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndGroupMenu::OnInvitePress ( struct FEventData ev )
{
	static UFunction* pFnOnInvitePress = NULL;

	if ( ! pFnOnInvitePress )
		pFnOnInvitePress = (UFunction*) UObject::GObjObjects()->Data[ 48084 ];

	UForgeGFxFrontEndGroupMenu_execOnInvitePress_Parms OnInvitePress_Parms;
	memcpy ( &OnInvitePress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnInvitePress, &OnInvitePress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnLaunchPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndGroupMenu::OnLaunchPress ( struct FEventData ev )
{
	static UFunction* pFnOnLaunchPress = NULL;

	if ( ! pFnOnLaunchPress )
		pFnOnLaunchPress = (UFunction*) UObject::GObjObjects()->Data[ 48082 ];

	UForgeGFxFrontEndGroupMenu_execOnLaunchPress_Parms OnLaunchPress_Parms;
	memcpy ( &OnLaunchPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnLaunchPress, &OnLaunchPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnReadyPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndGroupMenu::OnReadyPress ( struct FEventData ev )
{
	static UFunction* pFnOnReadyPress = NULL;

	if ( ! pFnOnReadyPress )
		pFnOnReadyPress = (UFunction*) UObject::GObjObjects()->Data[ 48080 ];

	UForgeGFxFrontEndGroupMenu_execOnReadyPress_Parms OnReadyPress_Parms;
	memcpy ( &OnReadyPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnReadyPress, &OnReadyPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnBackPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndGroupMenu::OnBackPress ( struct FEventData ev )
{
	static UFunction* pFnOnBackPress = NULL;

	if ( ! pFnOnBackPress )
		pFnOnBackPress = (UFunction*) UObject::GObjObjects()->Data[ 48078 ];

	UForgeGFxFrontEndGroupMenu_execOnBackPress_Parms OnBackPress_Parms;
	memcpy ( &OnBackPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnBackPress, &OnBackPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.HandleScrollDown
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UForgeGFxFrontEndGroupMenu::HandleScrollDown ( )
{
	static UFunction* pFnHandleScrollDown = NULL;

	if ( ! pFnHandleScrollDown )
		pFnHandleScrollDown = (UFunction*) UObject::GObjObjects()->Data[ 48076 ];

	UForgeGFxFrontEndGroupMenu_execHandleScrollDown_Parms HandleScrollDown_Parms;

	this->ProcessEvent ( pFnHandleScrollDown, &HandleScrollDown_Parms, NULL );

	return HandleScrollDown_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.HandleScrollUp
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UForgeGFxFrontEndGroupMenu::HandleScrollUp ( )
{
	static UFunction* pFnHandleScrollUp = NULL;

	if ( ! pFnHandleScrollUp )
		pFnHandleScrollUp = (UFunction*) UObject::GObjObjects()->Data[ 48074 ];

	UForgeGFxFrontEndGroupMenu_execHandleScrollUp_Parms HandleScrollUp_Parms;

	this->ProcessEvent ( pFnHandleScrollUp, &HandleScrollUp_Parms, NULL );

	return HandleScrollUp_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.HandlePasteCommand
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndGroupMenu::HandlePasteCommand ( )
{
	static UFunction* pFnHandlePasteCommand = NULL;

	if ( ! pFnHandlePasteCommand )
		pFnHandlePasteCommand = (UFunction*) UObject::GObjObjects()->Data[ 48073 ];

	UForgeGFxFrontEndGroupMenu_execHandlePasteCommand_Parms HandlePasteCommand_Parms;

	this->ProcessEvent ( pFnHandlePasteCommand, &HandlePasteCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.HandleCopyCommand
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndGroupMenu::HandleCopyCommand ( )
{
	static UFunction* pFnHandleCopyCommand = NULL;

	if ( ! pFnHandleCopyCommand )
		pFnHandleCopyCommand = (UFunction*) UObject::GObjObjects()->Data[ 48072 ];

	UForgeGFxFrontEndGroupMenu_execHandleCopyCommand_Parms HandleCopyCommand_Parms;

	this->ProcessEvent ( pFnHandleCopyCommand, &HandleCopyCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.HandleCutCommand
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndGroupMenu::HandleCutCommand ( )
{
	static UFunction* pFnHandleCutCommand = NULL;

	if ( ! pFnHandleCutCommand )
		pFnHandleCutCommand = (UFunction*) UObject::GObjObjects()->Data[ 48071 ];

	UForgeGFxFrontEndGroupMenu_execHandleCutCommand_Parms HandleCutCommand_Parms;

	this->ProcessEvent ( pFnHandleCutCommand, &HandleCutCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.DrawChatMessage
// [0x00820002] 
// Parameters infos:
// struct FSGroupChatItem         NewChatItem                    ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndGroupMenu::DrawChatMessage ( struct FSGroupChatItem NewChatItem )
{
	static UFunction* pFnDrawChatMessage = NULL;

	if ( ! pFnDrawChatMessage )
		pFnDrawChatMessage = (UFunction*) UObject::GObjObjects()->Data[ 48062 ];

	UForgeGFxFrontEndGroupMenu_execDrawChatMessage_Parms DrawChatMessage_Parms;
	memcpy ( &DrawChatMessage_Parms.NewChatItem, &NewChatItem, 0x2C );

	this->ProcessEvent ( pFnDrawChatMessage, &DrawChatMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.AddGroupMessage
// [0x00820002] 
// Parameters infos:
// struct FUniqueNetId            SayingId                       ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndGroupMenu::AddGroupMessage ( struct FUniqueNetId SayingId, struct FString Message )
{
	static UFunction* pFnAddGroupMessage = NULL;

	if ( ! pFnAddGroupMessage )
		pFnAddGroupMessage = (UFunction*) UObject::GObjObjects()->Data[ 48058 ];

	UForgeGFxFrontEndGroupMenu_execAddGroupMessage_Parms AddGroupMessage_Parms;
	memcpy ( &AddGroupMessage_Parms.SayingId, &SayingId, 0x8 );
	memcpy ( &AddGroupMessage_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnAddGroupMessage, &AddGroupMessage_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.ChatScrollDown
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndGroupMenu::ChatScrollDown ( )
{
	static UFunction* pFnChatScrollDown = NULL;

	if ( ! pFnChatScrollDown )
		pFnChatScrollDown = (UFunction*) UObject::GObjObjects()->Data[ 48057 ];

	UForgeGFxFrontEndGroupMenu_execChatScrollDown_Parms ChatScrollDown_Parms;

	this->ProcessEvent ( pFnChatScrollDown, &ChatScrollDown_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.ChatScrollUp
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndGroupMenu::ChatScrollUp ( )
{
	static UFunction* pFnChatScrollUp = NULL;

	if ( ! pFnChatScrollUp )
		pFnChatScrollUp = (UFunction*) UObject::GObjObjects()->Data[ 48056 ];

	UForgeGFxFrontEndGroupMenu_execChatScrollUp_Parms ChatScrollUp_Parms;

	this->ProcessEvent ( pFnChatScrollUp, &ChatScrollUp_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.ClearChat
// [0x00820002] 
// Parameters infos:

void UForgeGFxFrontEndGroupMenu::ClearChat ( )
{
	static UFunction* pFnClearChat = NULL;

	if ( ! pFnClearChat )
		pFnClearChat = (UFunction*) UObject::GObjObjects()->Data[ 48053 ];

	UForgeGFxFrontEndGroupMenu_execClearChat_Parms ClearChat_Parms;

	this->ProcessEvent ( pFnClearChat, &ClearChat_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.Tick
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxFrontEndGroupMenu::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 48049 ];

	UForgeGFxFrontEndGroupMenu_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.ConfigForRes
// [0x00820002] 
// Parameters infos:
// int                            SizeX                          ( CPF_Parm )
// int                            SizeY                          ( CPF_Parm )

void UForgeGFxFrontEndGroupMenu::ConfigForRes ( int SizeX, int SizeY )
{
	static UFunction* pFnConfigForRes = NULL;

	if ( ! pFnConfigForRes )
		pFnConfigForRes = (UFunction*) UObject::GObjObjects()->Data[ 48044 ];

	UForgeGFxFrontEndGroupMenu_execConfigForRes_Parms ConfigForRes_Parms;
	ConfigForRes_Parms.SizeX = SizeX;
	ConfigForRes_Parms.SizeY = SizeY;

	this->ProcessEvent ( pFnConfigForRes, &ConfigForRes_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.ShowSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndGroupMenu::ShowSlide ( )
{
	static UFunction* pFnShowSlide = NULL;

	if ( ! pFnShowSlide )
		pFnShowSlide = (UFunction*) UObject::GObjObjects()->Data[ 48043 ];

	UForgeGFxFrontEndGroupMenu_execShowSlide_Parms ShowSlide_Parms;

	this->ProcessEvent ( pFnShowSlide, &ShowSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.HideSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndGroupMenu::HideSlide ( )
{
	static UFunction* pFnHideSlide = NULL;

	if ( ! pFnHideSlide )
		pFnHideSlide = (UFunction*) UObject::GObjObjects()->Data[ 48042 ];

	UForgeGFxFrontEndGroupMenu_execHideSlide_Parms HideSlide_Parms;

	this->ProcessEvent ( pFnHideSlide, &HideSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.UpdateGroup
// [0x00824002] 
// Parameters infos:
// struct FActiveLobbyInfo        TheLobbyData                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            MemberIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Status                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndGroupMenu::UpdateGroup ( struct FActiveLobbyInfo TheLobbyData, int MemberIndex, struct FString Status )
{
	static UFunction* pFnUpdateGroup = NULL;

	if ( ! pFnUpdateGroup )
		pFnUpdateGroup = (UFunction*) UObject::GObjObjects()->Data[ 48027 ];

	UForgeGFxFrontEndGroupMenu_execUpdateGroup_Parms UpdateGroup_Parms;
	memcpy ( &UpdateGroup_Parms.TheLobbyData, &TheLobbyData, 0x20 );
	UpdateGroup_Parms.MemberIndex = MemberIndex;
	memcpy ( &UpdateGroup_Parms.Status, &Status, 0xC );

	this->ProcessEvent ( pFnUpdateGroup, &UpdateGroup_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.NewGroupCreated
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndGroupMenu::NewGroupCreated ( )
{
	static UFunction* pFnNewGroupCreated = NULL;

	if ( ! pFnNewGroupCreated )
		pFnNewGroupCreated = (UFunction*) UObject::GObjObjects()->Data[ 48025 ];

	UForgeGFxFrontEndGroupMenu_execNewGroupCreated_Parms NewGroupCreated_Parms;

	this->ProcessEvent ( pFnNewGroupCreated, &NewGroupCreated_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.ConfigSlide
// [0x00820002] 
// Parameters infos:

void UForgeGFxFrontEndGroupMenu::ConfigSlide ( )
{
	static UFunction* pFnConfigSlide = NULL;

	if ( ! pFnConfigSlide )
		pFnConfigSlide = (UFunction*) UObject::GObjObjects()->Data[ 48022 ];

	UForgeGFxFrontEndGroupMenu_execConfigSlide_Parms ConfigSlide_Parms;

	this->ProcessEvent ( pFnConfigSlide, &ConfigSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndCommunityMenu.OnFriendsPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndCommunityMenu::OnFriendsPress ( struct FEventData ev )
{
	static UFunction* pFnOnFriendsPress = NULL;

	if ( ! pFnOnFriendsPress )
		pFnOnFriendsPress = (UFunction*) UObject::GObjObjects()->Data[ 47937 ];

	UForgeGFxFrontEndCommunityMenu_execOnFriendsPress_Parms OnFriendsPress_Parms;
	memcpy ( &OnFriendsPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnFriendsPress, &OnFriendsPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndCommunityMenu.OnBackPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndCommunityMenu::OnBackPress ( struct FEventData ev )
{
	static UFunction* pFnOnBackPress = NULL;

	if ( ! pFnOnBackPress )
		pFnOnBackPress = (UFunction*) UObject::GObjObjects()->Data[ 47935 ];

	UForgeGFxFrontEndCommunityMenu_execOnBackPress_Parms OnBackPress_Parms;
	memcpy ( &OnBackPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnBackPress, &OnBackPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndCommunityMenu.ConfigSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndCommunityMenu::ConfigSlide ( )
{
	static UFunction* pFnConfigSlide = NULL;

	if ( ! pFnConfigSlide )
		pFnConfigSlide = (UFunction*) UObject::GObjObjects()->Data[ 47934 ];

	UForgeGFxFrontEndCommunityMenu_execConfigSlide_Parms ConfigSlide_Parms;

	this->ProcessEvent ( pFnConfigSlide, &ConfigSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.OnBackPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndJoinPlayerMenu::OnBackPress ( struct FEventData ev )
{
	static UFunction* pFnOnBackPress = NULL;

	if ( ! pFnOnBackPress )
		pFnOnBackPress = (UFunction*) UObject::GObjObjects()->Data[ 48199 ];

	UForgeGFxFrontEndJoinPlayerMenu_execOnBackPress_Parms OnBackPress_Parms;
	memcpy ( &OnBackPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnBackPress, &OnBackPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.OnJoinPlayerPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndJoinPlayerMenu::OnJoinPlayerPress ( struct FEventData ev )
{
	static UFunction* pFnOnJoinPlayerPress = NULL;

	if ( ! pFnOnJoinPlayerPress )
		pFnOnJoinPlayerPress = (UFunction*) UObject::GObjObjects()->Data[ 48197 ];

	UForgeGFxFrontEndJoinPlayerMenu_execOnJoinPlayerPress_Parms OnJoinPlayerPress_Parms;
	memcpy ( &OnJoinPlayerPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnJoinPlayerPress, &OnJoinPlayerPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.OnNameInputFocusOut
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndJoinPlayerMenu::OnNameInputFocusOut ( struct FEventData ev )
{
	static UFunction* pFnOnNameInputFocusOut = NULL;

	if ( ! pFnOnNameInputFocusOut )
		pFnOnNameInputFocusOut = (UFunction*) UObject::GObjObjects()->Data[ 48195 ];

	UForgeGFxFrontEndJoinPlayerMenu_execOnNameInputFocusOut_Parms OnNameInputFocusOut_Parms;
	memcpy ( &OnNameInputFocusOut_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnNameInputFocusOut, &OnNameInputFocusOut_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.OnNameInputFocusIn
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndJoinPlayerMenu::OnNameInputFocusIn ( struct FEventData ev )
{
	static UFunction* pFnOnNameInputFocusIn = NULL;

	if ( ! pFnOnNameInputFocusIn )
		pFnOnNameInputFocusIn = (UFunction*) UObject::GObjObjects()->Data[ 48193 ];

	UForgeGFxFrontEndJoinPlayerMenu_execOnNameInputFocusIn_Parms OnNameInputFocusIn_Parms;
	memcpy ( &OnNameInputFocusIn_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnNameInputFocusIn, &OnNameInputFocusIn_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.HandlePasteCommand
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndJoinPlayerMenu::HandlePasteCommand ( )
{
	static UFunction* pFnHandlePasteCommand = NULL;

	if ( ! pFnHandlePasteCommand )
		pFnHandlePasteCommand = (UFunction*) UObject::GObjObjects()->Data[ 48192 ];

	UForgeGFxFrontEndJoinPlayerMenu_execHandlePasteCommand_Parms HandlePasteCommand_Parms;

	this->ProcessEvent ( pFnHandlePasteCommand, &HandlePasteCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.HandleCopyCommand
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndJoinPlayerMenu::HandleCopyCommand ( )
{
	static UFunction* pFnHandleCopyCommand = NULL;

	if ( ! pFnHandleCopyCommand )
		pFnHandleCopyCommand = (UFunction*) UObject::GObjObjects()->Data[ 48191 ];

	UForgeGFxFrontEndJoinPlayerMenu_execHandleCopyCommand_Parms HandleCopyCommand_Parms;

	this->ProcessEvent ( pFnHandleCopyCommand, &HandleCopyCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.HandleCutCommand
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndJoinPlayerMenu::HandleCutCommand ( )
{
	static UFunction* pFnHandleCutCommand = NULL;

	if ( ! pFnHandleCutCommand )
		pFnHandleCutCommand = (UFunction*) UObject::GObjObjects()->Data[ 48190 ];

	UForgeGFxFrontEndJoinPlayerMenu_execHandleCutCommand_Parms HandleCutCommand_Parms;

	this->ProcessEvent ( pFnHandleCutCommand, &HandleCutCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.EnableJoinPlayerButtons
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndJoinPlayerMenu::EnableJoinPlayerButtons ( )
{
	static UFunction* pFnEnableJoinPlayerButtons = NULL;

	if ( ! pFnEnableJoinPlayerButtons )
		pFnEnableJoinPlayerButtons = (UFunction*) UObject::GObjObjects()->Data[ 48189 ];

	UForgeGFxFrontEndJoinPlayerMenu_execEnableJoinPlayerButtons_Parms EnableJoinPlayerButtons_Parms;

	this->ProcessEvent ( pFnEnableJoinPlayerButtons, &EnableJoinPlayerButtons_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.DisableJoinPlayerButtons
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndJoinPlayerMenu::DisableJoinPlayerButtons ( )
{
	static UFunction* pFnDisableJoinPlayerButtons = NULL;

	if ( ! pFnDisableJoinPlayerButtons )
		pFnDisableJoinPlayerButtons = (UFunction*) UObject::GObjObjects()->Data[ 48188 ];

	UForgeGFxFrontEndJoinPlayerMenu_execDisableJoinPlayerButtons_Parms DisableJoinPlayerButtons_Parms;

	this->ProcessEvent ( pFnDisableJoinPlayerButtons, &DisableJoinPlayerButtons_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.ConfigSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndJoinPlayerMenu::ConfigSlide ( )
{
	static UFunction* pFnConfigSlide = NULL;

	if ( ! pFnConfigSlide )
		pFnConfigSlide = (UFunction*) UObject::GObjObjects()->Data[ 48187 ];

	UForgeGFxFrontEndJoinPlayerMenu_execConfigSlide_Parms ConfigSlide_Parms;

	this->ProcessEvent ( pFnConfigSlide, &ConfigSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.OnJoinPlayerPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndPlayMenu::OnJoinPlayerPress ( struct FEventData ev )
{
	static UFunction* pFnOnJoinPlayerPress = NULL;

	if ( ! pFnOnJoinPlayerPress )
		pFnOnJoinPlayerPress = (UFunction*) UObject::GObjObjects()->Data[ 48296 ];

	UForgeGFxFrontEndPlayMenu_execOnJoinPlayerPress_Parms OnJoinPlayerPress_Parms;
	memcpy ( &OnJoinPlayerPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnJoinPlayerPress, &OnJoinPlayerPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.ShowServerBrowserPopup
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndPlayMenu::ShowServerBrowserPopup ( )
{
	static UFunction* pFnShowServerBrowserPopup = NULL;

	if ( ! pFnShowServerBrowserPopup )
		pFnShowServerBrowserPopup = (UFunction*) UObject::GObjObjects()->Data[ 48295 ];

	UForgeGFxFrontEndPlayMenu_execShowServerBrowserPopup_Parms ShowServerBrowserPopup_Parms;

	this->ProcessEvent ( pFnShowServerBrowserPopup, &ShowServerBrowserPopup_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.HideServerBrowserPopup
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndPlayMenu::HideServerBrowserPopup ( )
{
	static UFunction* pFnHideServerBrowserPopup = NULL;

	if ( ! pFnHideServerBrowserPopup )
		pFnHideServerBrowserPopup = (UFunction*) UObject::GObjObjects()->Data[ 48294 ];

	UForgeGFxFrontEndPlayMenu_execHideServerBrowserPopup_Parms HideServerBrowserPopup_Parms;

	this->ProcessEvent ( pFnHideServerBrowserPopup, &HideServerBrowserPopup_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.OnServerBrowserPopupPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndPlayMenu::OnServerBrowserPopupPress ( struct FEventData ev )
{
	static UFunction* pFnOnServerBrowserPopupPress = NULL;

	if ( ! pFnOnServerBrowserPopupPress )
		pFnOnServerBrowserPopupPress = (UFunction*) UObject::GObjObjects()->Data[ 48292 ];

	UForgeGFxFrontEndPlayMenu_execOnServerBrowserPopupPress_Parms OnServerBrowserPopupPress_Parms;
	memcpy ( &OnServerBrowserPopupPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnServerBrowserPopupPress, &OnServerBrowserPopupPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.OnCreateGroupPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndPlayMenu::OnCreateGroupPress ( struct FEventData ev )
{
	static UFunction* pFnOnCreateGroupPress = NULL;

	if ( ! pFnOnCreateGroupPress )
		pFnOnCreateGroupPress = (UFunction*) UObject::GObjObjects()->Data[ 48290 ];

	UForgeGFxFrontEndPlayMenu_execOnCreateGroupPress_Parms OnCreateGroupPress_Parms;
	memcpy ( &OnCreateGroupPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnCreateGroupPress, &OnCreateGroupPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.OnBrowseServerPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndPlayMenu::OnBrowseServerPress ( struct FEventData ev )
{
	static UFunction* pFnOnBrowseServerPress = NULL;

	if ( ! pFnOnBrowseServerPress )
		pFnOnBrowseServerPress = (UFunction*) UObject::GObjObjects()->Data[ 48288 ];

	UForgeGFxFrontEndPlayMenu_execOnBrowseServerPress_Parms OnBrowseServerPress_Parms;
	memcpy ( &OnBrowseServerPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnBrowseServerPress, &OnBrowseServerPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.OnBackPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndPlayMenu::OnBackPress ( struct FEventData ev )
{
	static UFunction* pFnOnBackPress = NULL;

	if ( ! pFnOnBackPress )
		pFnOnBackPress = (UFunction*) UObject::GObjObjects()->Data[ 48286 ];

	UForgeGFxFrontEndPlayMenu_execOnBackPress_Parms OnBackPress_Parms;
	memcpy ( &OnBackPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnBackPress, &OnBackPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.SlideInSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndPlayMenu::SlideInSlide ( )
{
	static UFunction* pFnSlideInSlide = NULL;

	if ( ! pFnSlideInSlide )
		pFnSlideInSlide = (UFunction*) UObject::GObjObjects()->Data[ 48285 ];

	UForgeGFxFrontEndPlayMenu_execSlideInSlide_Parms SlideInSlide_Parms;

	this->ProcessEvent ( pFnSlideInSlide, &SlideInSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.ShowSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndPlayMenu::ShowSlide ( )
{
	static UFunction* pFnShowSlide = NULL;

	if ( ! pFnShowSlide )
		pFnShowSlide = (UFunction*) UObject::GObjObjects()->Data[ 48284 ];

	UForgeGFxFrontEndPlayMenu_execShowSlide_Parms ShowSlide_Parms;

	this->ProcessEvent ( pFnShowSlide, &ShowSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.ConfigSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndPlayMenu::ConfigSlide ( )
{
	static UFunction* pFnConfigSlide = NULL;

	if ( ! pFnConfigSlide )
		pFnConfigSlide = (UFunction*) UObject::GObjObjects()->Data[ 48283 ];

	UForgeGFxFrontEndPlayMenu_execConfigSlide_Parms ConfigSlide_Parms;

	this->ProcessEvent ( pFnConfigSlide, &ConfigSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnQuitNagPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndMainMenu::OnQuitNagPress ( struct FEventData ev )
{
	static UFunction* pFnOnQuitNagPress = NULL;

	if ( ! pFnOnQuitNagPress )
		pFnOnQuitNagPress = (UFunction*) UObject::GObjObjects()->Data[ 48268 ];

	UForgeGFxFrontEndMainMenu_execOnQuitNagPress_Parms OnQuitNagPress_Parms;
	memcpy ( &OnQuitNagPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnQuitNagPress, &OnQuitNagPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnExitPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndMainMenu::OnExitPress ( struct FEventData ev )
{
	static UFunction* pFnOnExitPress = NULL;

	if ( ! pFnOnExitPress )
		pFnOnExitPress = (UFunction*) UObject::GObjObjects()->Data[ 48266 ];

	UForgeGFxFrontEndMainMenu_execOnExitPress_Parms OnExitPress_Parms;
	memcpy ( &OnExitPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnExitPress, &OnExitPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnCreditsPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndMainMenu::OnCreditsPress ( struct FEventData ev )
{
	static UFunction* pFnOnCreditsPress = NULL;

	if ( ! pFnOnCreditsPress )
		pFnOnCreditsPress = (UFunction*) UObject::GObjObjects()->Data[ 48264 ];

	UForgeGFxFrontEndMainMenu_execOnCreditsPress_Parms OnCreditsPress_Parms;
	memcpy ( &OnCreditsPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnCreditsPress, &OnCreditsPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnSettingsPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndMainMenu::OnSettingsPress ( struct FEventData ev )
{
	static UFunction* pFnOnSettingsPress = NULL;

	if ( ! pFnOnSettingsPress )
		pFnOnSettingsPress = (UFunction*) UObject::GObjObjects()->Data[ 48262 ];

	UForgeGFxFrontEndMainMenu_execOnSettingsPress_Parms OnSettingsPress_Parms;
	memcpy ( &OnSettingsPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnSettingsPress, &OnSettingsPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnEnterCodeCancelPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndMainMenu::OnEnterCodeCancelPress ( struct FEventData ev )
{
	static UFunction* pFnOnEnterCodeCancelPress = NULL;

	if ( ! pFnOnEnterCodeCancelPress )
		pFnOnEnterCodeCancelPress = (UFunction*) UObject::GObjObjects()->Data[ 48260 ];

	UForgeGFxFrontEndMainMenu_execOnEnterCodeCancelPress_Parms OnEnterCodeCancelPress_Parms;
	memcpy ( &OnEnterCodeCancelPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnEnterCodeCancelPress, &OnEnterCodeCancelPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnEnterCodeSendPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndMainMenu::OnEnterCodeSendPress ( struct FEventData ev )
{
	static UFunction* pFnOnEnterCodeSendPress = NULL;

	if ( ! pFnOnEnterCodeSendPress )
		pFnOnEnterCodeSendPress = (UFunction*) UObject::GObjObjects()->Data[ 48258 ];

	UForgeGFxFrontEndMainMenu_execOnEnterCodeSendPress_Parms OnEnterCodeSendPress_Parms;
	memcpy ( &OnEnterCodeSendPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnEnterCodeSendPress, &OnEnterCodeSendPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnEnterCodePress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndMainMenu::OnEnterCodePress ( struct FEventData ev )
{
	static UFunction* pFnOnEnterCodePress = NULL;

	if ( ! pFnOnEnterCodePress )
		pFnOnEnterCodePress = (UFunction*) UObject::GObjObjects()->Data[ 48256 ];

	UForgeGFxFrontEndMainMenu_execOnEnterCodePress_Parms OnEnterCodePress_Parms;
	memcpy ( &OnEnterCodePress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnEnterCodePress, &OnEnterCodePress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnAccountPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndMainMenu::OnAccountPress ( struct FEventData ev )
{
	static UFunction* pFnOnAccountPress = NULL;

	if ( ! pFnOnAccountPress )
		pFnOnAccountPress = (UFunction*) UObject::GObjObjects()->Data[ 48254 ];

	UForgeGFxFrontEndMainMenu_execOnAccountPress_Parms OnAccountPress_Parms;
	memcpy ( &OnAccountPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnAccountPress, &OnAccountPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnCommunityPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndMainMenu::OnCommunityPress ( struct FEventData ev )
{
	static UFunction* pFnOnCommunityPress = NULL;

	if ( ! pFnOnCommunityPress )
		pFnOnCommunityPress = (UFunction*) UObject::GObjObjects()->Data[ 48252 ];

	UForgeGFxFrontEndMainMenu_execOnCommunityPress_Parms OnCommunityPress_Parms;
	memcpy ( &OnCommunityPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnCommunityPress, &OnCommunityPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnPlayPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndMainMenu::OnPlayPress ( struct FEventData ev )
{
	static UFunction* pFnOnPlayPress = NULL;

	if ( ! pFnOnPlayPress )
		pFnOnPlayPress = (UFunction*) UObject::GObjObjects()->Data[ 48250 ];

	UForgeGFxFrontEndMainMenu_execOnPlayPress_Parms OnPlayPress_Parms;
	memcpy ( &OnPlayPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnPlayPress, &OnPlayPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnQuickPlayPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndMainMenu::OnQuickPlayPress ( struct FEventData ev )
{
	static UFunction* pFnOnQuickPlayPress = NULL;

	if ( ! pFnOnQuickPlayPress )
		pFnOnQuickPlayPress = (UFunction*) UObject::GObjObjects()->Data[ 48248 ];

	UForgeGFxFrontEndMainMenu_execOnQuickPlayPress_Parms OnQuickPlayPress_Parms;
	memcpy ( &OnQuickPlayPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnQuickPlayPress, &OnQuickPlayPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnTrainingPress
// [0x00020002] 
// Parameters infos:
// struct FEventData              ev                             ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxFrontEndMainMenu::OnTrainingPress ( struct FEventData ev )
{
	static UFunction* pFnOnTrainingPress = NULL;

	if ( ! pFnOnTrainingPress )
		pFnOnTrainingPress = (UFunction*) UObject::GObjObjects()->Data[ 48246 ];

	UForgeGFxFrontEndMainMenu_execOnTrainingPress_Parms OnTrainingPress_Parms;
	memcpy ( &OnTrainingPress_Parms.ev, &ev, 0x28 );

	this->ProcessEvent ( pFnOnTrainingPress, &OnTrainingPress_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.ApplySteamCloudSettings
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndMainMenu::ApplySteamCloudSettings ( )
{
	static UFunction* pFnApplySteamCloudSettings = NULL;

	if ( ! pFnApplySteamCloudSettings )
		pFnApplySteamCloudSettings = (UFunction*) UObject::GObjObjects()->Data[ 48244 ];

	UForgeGFxFrontEndMainMenu_execApplySteamCloudSettings_Parms ApplySteamCloudSettings_Parms;

	this->ProcessEvent ( pFnApplySteamCloudSettings, &ApplySteamCloudSettings_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.ConfigForRes
// [0x00020000] 
// Parameters infos:
// int                            SizeX                          ( CPF_Parm )
// int                            SizeY                          ( CPF_Parm )

void UForgeGFxFrontEndMainMenu::ConfigForRes ( int SizeX, int SizeY )
{
	static UFunction* pFnConfigForRes = NULL;

	if ( ! pFnConfigForRes )
		pFnConfigForRes = (UFunction*) UObject::GObjObjects()->Data[ 48241 ];

	UForgeGFxFrontEndMainMenu_execConfigForRes_Parms ConfigForRes_Parms;
	ConfigForRes_Parms.SizeX = SizeX;
	ConfigForRes_Parms.SizeY = SizeY;

	this->ProcessEvent ( pFnConfigForRes, &ConfigForRes_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.HandleSkip
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UForgeGFxFrontEndMainMenu::HandleSkip ( )
{
	static UFunction* pFnHandleSkip = NULL;

	if ( ! pFnHandleSkip )
		pFnHandleSkip = (UFunction*) UObject::GObjObjects()->Data[ 47352 ];

	UForgeGFxFrontEndMainMenu_execHandleSkip_Parms HandleSkip_Parms;

	this->ProcessEvent ( pFnHandleSkip, &HandleSkip_Parms, NULL );

	return HandleSkip_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.HandleSteamLobbyJoinRequest
// [0x00820002] 
// Parameters infos:

void UForgeGFxFrontEndMainMenu::HandleSteamLobbyJoinRequest ( )
{
	static UFunction* pFnHandleSteamLobbyJoinRequest = NULL;

	if ( ! pFnHandleSteamLobbyJoinRequest )
		pFnHandleSteamLobbyJoinRequest = (UFunction*) UObject::GObjObjects()->Data[ 48237 ];

	UForgeGFxFrontEndMainMenu_execHandleSteamLobbyJoinRequest_Parms HandleSteamLobbyJoinRequest_Parms;

	this->ProcessEvent ( pFnHandleSteamLobbyJoinRequest, &HandleSteamLobbyJoinRequest_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.CanAcceptSteamLobbyJoinRequest
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UForgeGFxFrontEndMainMenu::CanAcceptSteamLobbyJoinRequest ( )
{
	static UFunction* pFnCanAcceptSteamLobbyJoinRequest = NULL;

	if ( ! pFnCanAcceptSteamLobbyJoinRequest )
		pFnCanAcceptSteamLobbyJoinRequest = (UFunction*) UObject::GObjObjects()->Data[ 48234 ];

	UForgeGFxFrontEndMainMenu_execCanAcceptSteamLobbyJoinRequest_Parms CanAcceptSteamLobbyJoinRequest_Parms;

	this->ProcessEvent ( pFnCanAcceptSteamLobbyJoinRequest, &CanAcceptSteamLobbyJoinRequest_Parms, NULL );

	return CanAcceptSteamLobbyJoinRequest_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.SlideInSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndMainMenu::SlideInSlide ( )
{
	static UFunction* pFnSlideInSlide = NULL;

	if ( ! pFnSlideInSlide )
		pFnSlideInSlide = (UFunction*) UObject::GObjObjects()->Data[ 48233 ];

	UForgeGFxFrontEndMainMenu_execSlideInSlide_Parms SlideInSlide_Parms;

	this->ProcessEvent ( pFnSlideInSlide, &SlideInSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.ShowSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndMainMenu::ShowSlide ( )
{
	static UFunction* pFnShowSlide = NULL;

	if ( ! pFnShowSlide )
		pFnShowSlide = (UFunction*) UObject::GObjObjects()->Data[ 48232 ];

	UForgeGFxFrontEndMainMenu_execShowSlide_Parms ShowSlide_Parms;

	this->ProcessEvent ( pFnShowSlide, &ShowSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UForgeGFxFrontEndMainMenu::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 48230 ];

	UForgeGFxFrontEndMainMenu_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.HandlePasteCommand
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndMainMenu::HandlePasteCommand ( )
{
	static UFunction* pFnHandlePasteCommand = NULL;

	if ( ! pFnHandlePasteCommand )
		pFnHandlePasteCommand = (UFunction*) UObject::GObjObjects()->Data[ 48229 ];

	UForgeGFxFrontEndMainMenu_execHandlePasteCommand_Parms HandlePasteCommand_Parms;

	this->ProcessEvent ( pFnHandlePasteCommand, &HandlePasteCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.HandleCopyCommand
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndMainMenu::HandleCopyCommand ( )
{
	static UFunction* pFnHandleCopyCommand = NULL;

	if ( ! pFnHandleCopyCommand )
		pFnHandleCopyCommand = (UFunction*) UObject::GObjObjects()->Data[ 48228 ];

	UForgeGFxFrontEndMainMenu_execHandleCopyCommand_Parms HandleCopyCommand_Parms;

	this->ProcessEvent ( pFnHandleCopyCommand, &HandleCopyCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.HandleCutCommand
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndMainMenu::HandleCutCommand ( )
{
	static UFunction* pFnHandleCutCommand = NULL;

	if ( ! pFnHandleCutCommand )
		pFnHandleCutCommand = (UFunction*) UObject::GObjObjects()->Data[ 48227 ];

	UForgeGFxFrontEndMainMenu_execHandleCutCommand_Parms HandleCutCommand_Parms;

	this->ProcessEvent ( pFnHandleCutCommand, &HandleCutCommand_Parms, NULL );
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.ConfigSlide
// [0x00020002] 
// Parameters infos:

void UForgeGFxFrontEndMainMenu::ConfigSlide ( )
{
	static UFunction* pFnConfigSlide = NULL;

	if ( ! pFnConfigSlide )
		pFnConfigSlide = (UFunction*) UObject::GObjObjects()->Data[ 48226 ];

	UForgeGFxFrontEndMainMenu_execConfigSlide_Parms ConfigSlide_Parms;

	this->ProcessEvent ( pFnConfigSlide, &ConfigSlide_Parms, NULL );
};

// Function ForgeGame.ForgeGFxObjectSelectable.ReplaceSelected
// [0x00020002] 
// Parameters infos:
// struct FString                 NewText                        ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxObjectSelectable::ReplaceSelected ( struct FString NewText )
{
	static UFunction* pFnReplaceSelected = NULL;

	if ( ! pFnReplaceSelected )
		pFnReplaceSelected = (UFunction*) UObject::GObjObjects()->Data[ 49560 ];

	UForgeGFxObjectSelectable_execReplaceSelected_Parms ReplaceSelected_Parms;
	memcpy ( &ReplaceSelected_Parms.NewText, &NewText, 0xC );

	this->ProcessEvent ( pFnReplaceSelected, &ReplaceSelected_Parms, NULL );
};

// Function ForgeGame.ForgeGFxObjectSelectable.SetSelection
// [0x00020002] 
// Parameters infos:
// int                            StartIndex                     ( CPF_Parm )
// int                            FinishIndex                    ( CPF_Parm )

void UForgeGFxObjectSelectable::SetSelection ( int StartIndex, int FinishIndex )
{
	static UFunction* pFnSetSelection = NULL;

	if ( ! pFnSetSelection )
		pFnSetSelection = (UFunction*) UObject::GObjObjects()->Data[ 49557 ];

	UForgeGFxObjectSelectable_execSetSelection_Parms SetSelection_Parms;
	SetSelection_Parms.StartIndex = StartIndex;
	SetSelection_Parms.FinishIndex = FinishIndex;

	this->ProcessEvent ( pFnSetSelection, &SetSelection_Parms, NULL );
};

// Function ForgeGame.ForgeGFxManualScrollBar.SetScrollProperties
// [0x00020002] 
// Parameters infos:
// int                            PageSize                       ( CPF_Parm )
// int                            MinPosition                    ( CPF_Parm )
// int                            MaxPosition                    ( CPF_Parm )
// int                            PageScrollSize                 ( CPF_Parm )

void UForgeGFxManualScrollBar::SetScrollProperties ( int PageSize, int MinPosition, int MaxPosition, int PageScrollSize )
{
	static UFunction* pFnSetScrollProperties = NULL;

	if ( ! pFnSetScrollProperties )
		pFnSetScrollProperties = (UFunction*) UObject::GObjObjects()->Data[ 49551 ];

	UForgeGFxManualScrollBar_execSetScrollProperties_Parms SetScrollProperties_Parms;
	SetScrollProperties_Parms.PageSize = PageSize;
	SetScrollProperties_Parms.MinPosition = MinPosition;
	SetScrollProperties_Parms.MaxPosition = MaxPosition;
	SetScrollProperties_Parms.PageScrollSize = PageScrollSize;

	this->ProcessEvent ( pFnSetScrollProperties, &SetScrollProperties_Parms, NULL );
};

// Function ForgeGame.ForgeGFxSettingsDropDown.RemoveAllListItems
// [0x00020002] 
// Parameters infos:

void UForgeGFxSettingsDropDown::RemoveAllListItems ( )
{
	static UFunction* pFnRemoveAllListItems = NULL;

	if ( ! pFnRemoveAllListItems )
		pFnRemoveAllListItems = (UFunction*) UObject::GObjObjects()->Data[ 49837 ];

	UForgeGFxSettingsDropDown_execRemoveAllListItems_Parms RemoveAllListItems_Parms;

	this->ProcessEvent ( pFnRemoveAllListItems, &RemoveAllListItems_Parms, NULL );
};

// Function ForgeGame.ForgeGFxSettingsDropDown.AddListItem
// [0x00020002] 
// Parameters infos:
// struct FString                 NewItemLabel                   ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxSettingsDropDown::AddListItem ( struct FString NewItemLabel )
{
	static UFunction* pFnAddListItem = NULL;

	if ( ! pFnAddListItem )
		pFnAddListItem = (UFunction*) UObject::GObjObjects()->Data[ 49835 ];

	UForgeGFxSettingsDropDown_execAddListItem_Parms AddListItem_Parms;
	memcpy ( &AddListItem_Parms.NewItemLabel, &NewItemLabel, 0xC );

	this->ProcessEvent ( pFnAddListItem, &AddListItem_Parms, NULL );
};

// Function ForgeGame.ForgeGFxSettingsBindsScrollingList.ReValidateData
// [0x00020002] 
// Parameters infos:

void UForgeGFxSettingsBindsScrollingList::ReValidateData ( )
{
	static UFunction* pFnReValidateData = NULL;

	if ( ! pFnReValidateData )
		pFnReValidateData = (UFunction*) UObject::GObjObjects()->Data[ 49833 ];

	UForgeGFxSettingsBindsScrollingList_execReValidateData_Parms ReValidateData_Parms;

	this->ProcessEvent ( pFnReValidateData, &ReValidateData_Parms, NULL );
};

// Function ForgeGame.ForgeGFxSettingsBindsScrollingList.UpdateBindsListItemReset
// [0x00020002] 
// Parameters infos:
// int                            BindIndex                      ( CPF_Parm )
// struct FString                 NewResetBindLabel              ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxSettingsBindsScrollingList::UpdateBindsListItemReset ( int BindIndex, struct FString NewResetBindLabel )
{
	static UFunction* pFnUpdateBindsListItemReset = NULL;

	if ( ! pFnUpdateBindsListItemReset )
		pFnUpdateBindsListItemReset = (UFunction*) UObject::GObjObjects()->Data[ 49830 ];

	UForgeGFxSettingsBindsScrollingList_execUpdateBindsListItemReset_Parms UpdateBindsListItemReset_Parms;
	UpdateBindsListItemReset_Parms.BindIndex = BindIndex;
	memcpy ( &UpdateBindsListItemReset_Parms.NewResetBindLabel, &NewResetBindLabel, 0xC );

	this->ProcessEvent ( pFnUpdateBindsListItemReset, &UpdateBindsListItemReset_Parms, NULL );
};

// Function ForgeGame.ForgeGFxSettingsBindsScrollingList.UpdateBindsListItemController
// [0x00020002] 
// Parameters infos:
// int                            BindIndex                      ( CPF_Parm )
// struct FString                 NewControllerBindLabel         ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxSettingsBindsScrollingList::UpdateBindsListItemController ( int BindIndex, struct FString NewControllerBindLabel )
{
	static UFunction* pFnUpdateBindsListItemController = NULL;

	if ( ! pFnUpdateBindsListItemController )
		pFnUpdateBindsListItemController = (UFunction*) UObject::GObjObjects()->Data[ 49827 ];

	UForgeGFxSettingsBindsScrollingList_execUpdateBindsListItemController_Parms UpdateBindsListItemController_Parms;
	UpdateBindsListItemController_Parms.BindIndex = BindIndex;
	memcpy ( &UpdateBindsListItemController_Parms.NewControllerBindLabel, &NewControllerBindLabel, 0xC );

	this->ProcessEvent ( pFnUpdateBindsListItemController, &UpdateBindsListItemController_Parms, NULL );
};

// Function ForgeGame.ForgeGFxSettingsBindsScrollingList.UpdateBindsListItemSecondary
// [0x00020002] 
// Parameters infos:
// int                            BindIndex                      ( CPF_Parm )
// struct FString                 NewSecondaryBindLabel          ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxSettingsBindsScrollingList::UpdateBindsListItemSecondary ( int BindIndex, struct FString NewSecondaryBindLabel )
{
	static UFunction* pFnUpdateBindsListItemSecondary = NULL;

	if ( ! pFnUpdateBindsListItemSecondary )
		pFnUpdateBindsListItemSecondary = (UFunction*) UObject::GObjObjects()->Data[ 49824 ];

	UForgeGFxSettingsBindsScrollingList_execUpdateBindsListItemSecondary_Parms UpdateBindsListItemSecondary_Parms;
	UpdateBindsListItemSecondary_Parms.BindIndex = BindIndex;
	memcpy ( &UpdateBindsListItemSecondary_Parms.NewSecondaryBindLabel, &NewSecondaryBindLabel, 0xC );

	this->ProcessEvent ( pFnUpdateBindsListItemSecondary, &UpdateBindsListItemSecondary_Parms, NULL );
};

// Function ForgeGame.ForgeGFxSettingsBindsScrollingList.UpdateBindsListItemPrimary
// [0x00020002] 
// Parameters infos:
// int                            BindIndex                      ( CPF_Parm )
// struct FString                 NewPrimaryBindLabel            ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxSettingsBindsScrollingList::UpdateBindsListItemPrimary ( int BindIndex, struct FString NewPrimaryBindLabel )
{
	static UFunction* pFnUpdateBindsListItemPrimary = NULL;

	if ( ! pFnUpdateBindsListItemPrimary )
		pFnUpdateBindsListItemPrimary = (UFunction*) UObject::GObjObjects()->Data[ 49821 ];

	UForgeGFxSettingsBindsScrollingList_execUpdateBindsListItemPrimary_Parms UpdateBindsListItemPrimary_Parms;
	UpdateBindsListItemPrimary_Parms.BindIndex = BindIndex;
	memcpy ( &UpdateBindsListItemPrimary_Parms.NewPrimaryBindLabel, &NewPrimaryBindLabel, 0xC );

	this->ProcessEvent ( pFnUpdateBindsListItemPrimary, &UpdateBindsListItemPrimary_Parms, NULL );
};

// Function ForgeGame.ForgeGFxSettingsBindsScrollingList.AddBindsListCat
// [0x00020002] 
// Parameters infos:
// int                            BindIndex                      ( CPF_Parm )
// struct FString                 ActionLabel                    ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxSettingsBindsScrollingList::AddBindsListCat ( int BindIndex, struct FString ActionLabel )
{
	static UFunction* pFnAddBindsListCat = NULL;

	if ( ! pFnAddBindsListCat )
		pFnAddBindsListCat = (UFunction*) UObject::GObjObjects()->Data[ 49818 ];

	UForgeGFxSettingsBindsScrollingList_execAddBindsListCat_Parms AddBindsListCat_Parms;
	AddBindsListCat_Parms.BindIndex = BindIndex;
	memcpy ( &AddBindsListCat_Parms.ActionLabel, &ActionLabel, 0xC );

	this->ProcessEvent ( pFnAddBindsListCat, &AddBindsListCat_Parms, NULL );
};

// Function ForgeGame.ForgeGFxSettingsBindsScrollingList.AddBindsListItem
// [0x00020002] 
// Parameters infos:
// int                            BindIndex                      ( CPF_Parm )
// struct FString                 ActionLabel                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 PrimaryBindLabel               ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SecondaryBindLabel             ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ControllerBindLabel            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ResetBindLabel                 ( CPF_Parm | CPF_NeedCtorLink )

void UForgeGFxSettingsBindsScrollingList::AddBindsListItem ( int BindIndex, struct FString ActionLabel, struct FString PrimaryBindLabel, struct FString SecondaryBindLabel, struct FString ControllerBindLabel, struct FString ResetBindLabel )
{
	static UFunction* pFnAddBindsListItem = NULL;

	if ( ! pFnAddBindsListItem )
		pFnAddBindsListItem = (UFunction*) UObject::GObjObjects()->Data[ 49811 ];

	UForgeGFxSettingsBindsScrollingList_execAddBindsListItem_Parms AddBindsListItem_Parms;
	AddBindsListItem_Parms.BindIndex = BindIndex;
	memcpy ( &AddBindsListItem_Parms.ActionLabel, &ActionLabel, 0xC );
	memcpy ( &AddBindsListItem_Parms.PrimaryBindLabel, &PrimaryBindLabel, 0xC );
	memcpy ( &AddBindsListItem_Parms.SecondaryBindLabel, &SecondaryBindLabel, 0xC );
	memcpy ( &AddBindsListItem_Parms.ControllerBindLabel, &ControllerBindLabel, 0xC );
	memcpy ( &AddBindsListItem_Parms.ResetBindLabel, &ResetBindLabel, 0xC );

	this->ProcessEvent ( pFnAddBindsListItem, &AddBindsListItem_Parms, NULL );
};

// Function ForgeGame.ForgeGFxSettingsBindsScrollingList.GetRendererAt
// [0x00020002] 
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )
// int                            Offset                         ( CPF_Parm )

class UGFxObject* UForgeGFxSettingsBindsScrollingList::GetRendererAt ( int Index, int Offset )
{
	static UFunction* pFnGetRendererAt = NULL;

	if ( ! pFnGetRendererAt )
		pFnGetRendererAt = (UFunction*) UObject::GObjObjects()->Data[ 48533 ];

	UForgeGFxSettingsBindsScrollingList_execGetRendererAt_Parms GetRendererAt_Parms;
	GetRendererAt_Parms.Index = Index;
	GetRendererAt_Parms.Offset = Offset;

	this->ProcessEvent ( pFnGetRendererAt, &GetRendererAt_Parms, NULL );

	return GetRendererAt_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxGroupMembersScrollingList.ReValidateData
// [0x00020002] 
// Parameters infos:

void UForgeGFxGroupMembersScrollingList::ReValidateData ( )
{
	static UFunction* pFnReValidateData = NULL;

	if ( ! pFnReValidateData )
		pFnReValidateData = (UFunction*) UObject::GObjObjects()->Data[ 48832 ];

	UForgeGFxGroupMembersScrollingList_execReValidateData_Parms ReValidateData_Parms;

	this->ProcessEvent ( pFnReValidateData, &ReValidateData_Parms, NULL );
};

// Function ForgeGame.ForgeGFxGroupMembersScrollingList.RemoveAllGroupMembers
// [0x00020002] 
// Parameters infos:

void UForgeGFxGroupMembersScrollingList::RemoveAllGroupMembers ( )
{
	static UFunction* pFnRemoveAllGroupMembers = NULL;

	if ( ! pFnRemoveAllGroupMembers )
		pFnRemoveAllGroupMembers = (UFunction*) UObject::GObjObjects()->Data[ 48831 ];

	UForgeGFxGroupMembersScrollingList_execRemoveAllGroupMembers_Parms RemoveAllGroupMembers_Parms;

	this->ProcessEvent ( pFnRemoveAllGroupMembers, &RemoveAllGroupMembers_Parms, NULL );
};

// Function ForgeGame.ForgeGFxGroupMembersScrollingList.AddGroupMembersListItem
// [0x00020002] 
// Parameters infos:
// int                            PlayerID                       ( CPF_Parm )
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  ShowPendingInvite              ( CPF_Parm )
// unsigned long                  ShowReady                      ( CPF_Parm )
// unsigned long                  ShowGroupLeader                ( CPF_Parm )

void UForgeGFxGroupMembersScrollingList::AddGroupMembersListItem ( int PlayerID, struct FString PlayerName, unsigned long ShowPendingInvite, unsigned long ShowReady, unsigned long ShowGroupLeader )
{
	static UFunction* pFnAddGroupMembersListItem = NULL;

	if ( ! pFnAddGroupMembersListItem )
		pFnAddGroupMembersListItem = (UFunction*) UObject::GObjObjects()->Data[ 48825 ];

	UForgeGFxGroupMembersScrollingList_execAddGroupMembersListItem_Parms AddGroupMembersListItem_Parms;
	AddGroupMembersListItem_Parms.PlayerID = PlayerID;
	memcpy ( &AddGroupMembersListItem_Parms.PlayerName, &PlayerName, 0xC );
	AddGroupMembersListItem_Parms.ShowPendingInvite = ShowPendingInvite;
	AddGroupMembersListItem_Parms.ShowReady = ShowReady;
	AddGroupMembersListItem_Parms.ShowGroupLeader = ShowGroupLeader;

	this->ProcessEvent ( pFnAddGroupMembersListItem, &AddGroupMembersListItem_Parms, NULL );
};

// Function ForgeGame.ForgeGFxGroupMembersScrollingList.GetRendererAt
// [0x00020002] 
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )
// int                            Offset                         ( CPF_Parm )

class UGFxObject* UForgeGFxGroupMembersScrollingList::GetRendererAt ( int Index, int Offset )
{
	static UFunction* pFnGetRendererAt = NULL;

	if ( ! pFnGetRendererAt )
		pFnGetRendererAt = (UFunction*) UObject::GObjObjects()->Data[ 48821 ];

	UForgeGFxGroupMembersScrollingList_execGetRendererAt_Parms GetRendererAt_Parms;
	GetRendererAt_Parms.Index = Index;
	GetRendererAt_Parms.Offset = Offset;

	this->ProcessEvent ( pFnGetRendererAt, &GetRendererAt_Parms, NULL );

	return GetRendererAt_Parms.ReturnValue;
};

// Function ForgeGame.ForgeGFxLoadingScreen.ConfigForRes
// [0x00020000] 
// Parameters infos:
// int                            SizeX                          ( CPF_Parm )
// int                            SizeY                          ( CPF_Parm )

void UForgeGFxLoadingScreen::ConfigForRes ( int SizeX, int SizeY )
{
	static UFunction* pFnConfigForRes = NULL;

	if ( ! pFnConfigForRes )
		pFnConfigForRes = (UFunction*) UObject::GObjObjects()->Data[ 49546 ];

	UForgeGFxLoadingScreen_execConfigForRes_Parms ConfigForRes_Parms;
	ConfigForRes_Parms.SizeX = SizeX;
	ConfigForRes_Parms.SizeY = SizeY;

	this->ProcessEvent ( pFnConfigForRes, &ConfigForRes_Parms, NULL );
};

// Function ForgeGame.ForgeGFxLoadingScreen.ConfigLoadingScreen
// [0x00020002] 
// Parameters infos:

void UForgeGFxLoadingScreen::ConfigLoadingScreen ( )
{
	static UFunction* pFnConfigLoadingScreen = NULL;

	if ( ! pFnConfigLoadingScreen )
		pFnConfigLoadingScreen = (UFunction*) UObject::GObjObjects()->Data[ 49543 ];

	UForgeGFxLoadingScreen_execConfigLoadingScreen_Parms ConfigLoadingScreen_Parms;

	this->ProcessEvent ( pFnConfigLoadingScreen, &ConfigLoadingScreen_Parms, NULL );
};

// Function ForgeGame.ForgeGFxLoadingScreen.Start
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  StartPaused                    ( CPF_OptionalParm | CPF_Parm )

bool UForgeGFxLoadingScreen::Start ( unsigned long StartPaused )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 49540 ];

	UForgeGFxLoadingScreen_execStart_Parms Start_Parms;
	Start_Parms.StartPaused = StartPaused;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	return Start_Parms.ReturnValue;
};

// Function ForgeGame.ForgeLocalization.GetNumberAsRank
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Ranking                        ( CPF_Parm )

struct FString UForgeLocalization::GetNumberAsRank ( int Ranking )
{
	static UFunction* pFnGetNumberAsRank = NULL;

	if ( ! pFnGetNumberAsRank )
		pFnGetNumberAsRank = (UFunction*) UObject::GObjObjects()->Data[ 49799 ];

	UForgeLocalization_execGetNumberAsRank_Parms GetNumberAsRank_Parms;
	GetNumberAsRank_Parms.Ranking = Ranking;

	this->ProcessEvent ( pFnGetNumberAsRank, &GetNumberAsRank_Parms, NULL );

	return GetNumberAsRank_Parms.ReturnValue;
};

// Function ForgeGame.ForgeOnlineGameSearch.AddToGameTagFilter
// [0x00020002] 
// Parameters infos:
// struct FString                 GameTag                        ( CPF_Parm | CPF_NeedCtorLink )

void UForgeOnlineGameSearch::AddToGameTagFilter ( struct FString GameTag )
{
	static UFunction* pFnAddToGameTagFilter = NULL;

	if ( ! pFnAddToGameTagFilter )
		pFnAddToGameTagFilter = (UFunction*) UObject::GObjObjects()->Data[ 49897 ];

	UForgeOnlineGameSearch_execAddToGameTagFilter_Parms AddToGameTagFilter_Parms;
	memcpy ( &AddToGameTagFilter_Parms.GameTag, &GameTag, 0xC );

	this->ProcessEvent ( pFnAddToGameTagFilter, &AddToGameTagFilter_Parms, NULL );
};

// Function ForgeGame.ForgeOnlineLeaderboardsRead.OnReadComplete
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UForgeOnlineLeaderboardsRead::eventOnReadComplete ( )
{
	static UFunction* pFnOnReadComplete = NULL;

	if ( ! pFnOnReadComplete )
		pFnOnReadComplete = (UFunction*) UObject::GObjObjects()->Data[ 49913 ];

	UForgeOnlineLeaderboardsRead_eventOnReadComplete_Parms OnReadComplete_Parms;

	this->ProcessEvent ( pFnOnReadComplete, &OnReadComplete_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif