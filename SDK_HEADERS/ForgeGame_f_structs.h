/*
#############################################################################################
# Forge War (1.0.9953.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: ForgeGame_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function ForgeGame.DVGameViewportClient.GetSystemTextureGroupSetting
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UDVGameViewportClient_execGetSystemTextureGroupSetting_Parms
{
	unsigned char                                      TextureGroup;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                OutMinLODSize;                                    		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                OutMaxLODSize;                                    		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                OutLODBias;                                       		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FName                                       OutMinMagFilter;                                  		// 0x0010 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FName                                       OutMipFilter;                                     		// 0x0018 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned char                                      OutMipGenSettings;                                		// 0x0020 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function ForgeGame.DVGameViewportClient.GetSystemFloatSetting
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UDVGameViewportClient_execGetSystemFloatSetting_Parms
{
	struct FString                                     SystemSettingName;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              OutVal;                                           		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVGameViewportClient.GetSystemIntSetting
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UDVGameViewportClient_execGetSystemIntSetting_Parms
{
	struct FString                                     SystemSettingName;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                OutVal;                                           		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVGameViewportClient.GetSystemBoolSetting
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UDVGameViewportClient_execGetSystemBoolSetting_Parms
{
	struct FString                                     SystemSettingName;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      OutVal;                                           		// 0x000C (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVGameViewportClient.GetAvailableResolutions
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UDVGameViewportClient_execGetAvailableResolutions_Parms
{
	TArray< struct FVector >                           out_AvailableResolutions;                         		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function ForgeGame.DVPawnBase.OnSetPawnBlockingChannels
// [0x00020002] 
struct ADVPawnBase_execOnSetPawnBlockingChannels_Parms
{
	class UDVSeqAct_SetPawnBlockingChannels*           SeqAct;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerControllerBase.GetTerminalIPAddress
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct ADVPlayerControllerBase_execGetTerminalIPAddress_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.DVPlayerControllerBase.SetHasPlayedIntro
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct ADVPlayerControllerBase_execSetHasPlayedIntro_Parms
{
	unsigned long                                      NewHasPlayedIntro : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVPlayerControllerBase.GetHasPlayedIntro
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct ADVPlayerControllerBase_execGetHasPlayedIntro_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPlayerControllerBase.SetUserId
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct ADVPlayerControllerBase_execSetUserId_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.DVPlayerControllerBase.GetUserId
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct ADVPlayerControllerBase_execGetUserId_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.DVPlayerControllerBase.SetSessionId
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct ADVPlayerControllerBase_execSetSessionId_Parms
{
	struct FString                                     SessionId;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.DVPlayerControllerBase.GetSessionID
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct ADVPlayerControllerBase_execGetSessionID_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGameInfoBase.GetAuthenticatedServerSessionKey
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct AForgeGameInfoBase_execGetAuthenticatedServerSessionKey_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGameInfoBase.GetAuthenticatedServerId
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct AForgeGameInfoBase_execGetAuthenticatedServerId_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGameInfoBase.DoesMapExist
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct AForgeGameInfoBase_execDoesMapExist_Parms
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeDB.ConvertSteamRegionIdToGameTagFilterText
// [0x00022002] 
struct UForgeDB_execConvertSteamRegionIdToGameTagFilterText_Parms
{
	int                                                SteamRegionId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeDB.ConvertSteamRegionIdToForgeRegionId
// [0x00022002] 
struct UForgeDB_execConvertSteamRegionIdToForgeRegionId_Parms
{
	int                                                SteamRegionId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeDB.ConvertForgeRegionIdToSteamRegionId
// [0x00022002] 
struct UForgeDB_execConvertForgeRegionIdToSteamRegionId_Parms
{
	int                                                ForgeRegionId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeDB.GetAbilitySlotOrderProfileSettingsIndex
// [0x00026002] 
struct UForgeDB_execGetAbilitySlotOrderProfileSettingsIndex_Parms
{
	unsigned char                                      PlayerClass;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                SlotIndex;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeDB.GetAbilityFocusProfileSettingsIndex
// [0x00022002] 
struct UForgeDB_execGetAbilityFocusProfileSettingsIndex_Parms
{
	unsigned char                                      PlayerClass;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeDB.GetEnglishKeyName
// [0x00022002] 
struct UForgeDB_execGetEnglishKeyName_Parms
{
	struct FName                                       OldKeyName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  NewKeyName;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeDB.GetKeyForFunction
// [0x00022002] 
struct UForgeDB_execGetKeyForFunction_Parms
{
	struct FString                                     BoundCommand;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FName                                       ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UPlayerInput*                             ThePlayerInput;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned long                                   BindFound : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeDB.GetOrderMappedAbilityIndex
// [0x00026002] 
struct UForgeDB_execGetOrderMappedAbilityIndex_Parms
{
	int                                                DefaultAbilityIndex;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ChosenClass;                                      		// 0x0004 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   FinalChosenClass;                                 		// 0x000C (0x0001) [0x0000000000000000]              
	// class ADVPlayerController*                      TheDVPC;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             CurSettingIndex;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  CurSettingValue;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeDB.MouseIsOverElement
// [0x00822002] 
struct UForgeDB_execMouseIsOverElement_Parms
{
	class UGFxObject*                                  TheElement;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector2D                                MouseFlashPosition;                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FASValue                                 HitResult;                                        		// 0x0010 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FASValue >                       HitParams;                                        		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeDB.GetMouseFlashPosition
// [0x00822002] 
struct UForgeDB_execGetMouseFlashPosition_Parms
{
	struct FVector2D                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector2D                                MouseScreenPosition;                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                MouseFlashPosition;                               		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                ViewportSize;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	// int                                             TotalVisiblePixels;                               		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeDB.GetSkinNameFromEnum
// [0x00022002] 
struct UForgeDB_execGetSkinNameFromEnum_Parms
{
	unsigned char                                      TheSkinEnum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeDB.GetSkinEnumFromId
// [0x00022002] 
struct UForgeDB_execGetSkinEnumFromId_Parms
{
	int                                                SkinId;                                           		// 0x0000 (0x0004) [0x0000000000000880]              ( CPF_Parm | CPF_CoerceParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   TheSkinEnum;                                      		// 0x0005 (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.ForgeDB.GetAbilitySlotTextureForClass
// [0x00022002] 
struct UForgeDB_execGetAbilitySlotTextureForClass_Parms
{
	unsigned char                                      TheClass;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AbilitySlot;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTexture*                                    ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UObject*                                  FoundTexture;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeDB.GetAbilitySlotNameForClass
// [0x00022002] 
struct UForgeDB_execGetAbilitySlotNameForClass_Parms
{
	unsigned char                                      TheClass;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AbilitySlot;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeDB.GetAbilitySlotNameForAbility
// [0x00022002] 
struct UForgeDB_execGetAbilitySlotNameForAbility_Parms
{
	class ADVAbility*                                  InputAbility;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeDB.UsesMana
// [0x00022002] 
struct UForgeDB_execUsesMana_Parms
{
	unsigned char                                      TheClass;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeDB.GetClassClassFromEnum
// [0x00022002] 
struct UForgeDB_execGetClassClassFromEnum_Parms
{
	unsigned char                                      ThePlayerClass;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeDB.GetClassStringFromEnum
// [0x00022002] 
struct UForgeDB_execGetClassStringFromEnum_Parms
{
	unsigned char                                      ThePlayerClass;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeDB.GetClassEnumFromString
// [0x00022002] 
struct UForgeDB_execGetClassEnumFromString_Parms
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeDB.GetAbilityArchetype
// [0x00026002] 
struct UForgeDB_execGetAbilityArchetype_Parms
{
	unsigned char                                      OwningClass;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Slot;                                             		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Focus;                                            		// 0x0002 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class ADVAbility*                                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeDB.GetPawnArchetypeForClass
// [0x00022002] 
struct UForgeDB_execGetPawnArchetypeForClass_Parms
{
	unsigned char                                      TheClass;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class ADVPawnHero*                                 ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeDB.GetMapId
// [0x00022002] 
struct UForgeDB_execGetMapId_Parms
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             MapIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeDB.GetGameTypeId
// [0x00022002] 
struct UForgeDB_execGetGameTypeId_Parms
{
	struct FString                                     GameType;                                         		// 0x0000 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             GameTypeIndex;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeDB.GetSteamId
// [0x00022002] 
struct UForgeDB_execGetSteamId_Parms
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             Y;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             Z;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVBuffCalculator.ResetForRoundStart
// [0x00020002] 
struct UDVBuffCalculator_execResetForRoundStart_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVBuffCalculator.ResetForDeath
// [0x00020002] 
struct UDVBuffCalculator_execResetForDeath_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVBuffCalculator.RemoveExpired
// [0x00020002] 
struct UDVBuffCalculator_execRemoveExpired_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVBuffCalculator.CalculateFinalCaps
// [0x00480002] 
struct UDVBuffCalculator_execCalculateFinalCaps_Parms
{
	unsigned char                                      StatName;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              PreviousValue;                                    		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function ForgeGame.DVBuffCalculator.CalculatePreLockCaps
// [0x00480002] 
struct UDVBuffCalculator_execCalculatePreLockCaps_Parms
{
	unsigned char                                      StatName;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              PreviousValue;                                    		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function ForgeGame.DVBuffCalculator.CalculateMaxChanges
// [0x00080002] 
struct UDVBuffCalculator_execCalculateMaxChanges_Parms
{
	unsigned char                                      TheStat;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              EffectiveValue;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BaseValue;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Counter;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVBuffCalculator.CalculateAssignedChanges
// [0x00C80002] 
struct UDVBuffCalculator_execCalculateAssignedChanges_Parms
{
	unsigned char                                      TheStat;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              PreviousValue;                                    		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FProtectionFromAbility                   PFA;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVBuffCalculator.CalculateAddedChanges
// [0x00880002] 
struct UDVBuffCalculator_execCalculateAddedChanges_Parms
{
	unsigned char                                      TheStat;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           TotalModification;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             IndexFound;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FProtectionFromAbility                   PFA;                                              		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVBuffCalculator.CalculateMultipliedChanges
// [0x00880002] 
struct UDVBuffCalculator_execCalculateMultipliedChanges_Parms
{
	unsigned char                                      TheStat;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              BaseValue;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           TotalModification;                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             IndexFound;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FProtectionFromAbility                   PFA;                                              		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVBuffCalculator.CalculateStat
// [0x00024002] 
struct UDVBuffCalculator_execCalculateStat_Parms
{
	unsigned char                                      TheStat;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              BaseValue;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           EffectiveValue;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVBuffCalculator.AddBuff
// [0x00820002] 
struct UDVBuffCalculator_execAddBuff_Parms
{
	class UDVBuff*                                     NewBuff;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FSStatChange                             CurStatChange;                                    		// 0x0004 (0x0018) [0x0000000000000000]              
};

// Function ForgeGame.DVBuffCalculator.AddToStatChanges
// [0x00020002] 
struct UDVBuffCalculator_execAddToStatChanges_Parms
{
	struct FSStatChange                                NewStatChange;                                    		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVBuffCalculator.Destroyed
// [0x00020002] 
struct UDVBuffCalculator_execDestroyed_Parms
{
};

// Function ForgeGame.DVAbility.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbility_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbility.GetDescriptionNumbers
// [0x00022002] 
struct ADVAbility_execGetDescriptionNumbers_Parms
{
	class ADVAbility*                                  AbilityArchetype;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      TheClass;                                         		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     StaticFriendlyColor;                              		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     StaticEnemyColor;                                 		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0020 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  OutputString;                                     		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.DVAbility.GetFullDescription
// [0x00022002] 
struct ADVAbility_execGetFullDescription_Parms
{
	class ADVAbility*                                  AbilityArchetype;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      TheClass;                                         		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  AbilityLocalizationPath;                          		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  OutputString;                                     		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  StaticFriendlyColor;                              		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  StaticEnemyColor;                                 		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.DVAbility.KillPartcleEmitter
// [0x00020102] 
struct ADVAbility_execKillPartcleEmitter_Parms
{
};

// Function ForgeGame.DVAbility.AddParticleEmitter
// [0x00020102] 
struct ADVAbility_execAddParticleEmitter_Parms
{
	class APawn*                                       Hero;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbility.MakeAttack
// [0x00020002] 
struct ADVAbility_execMakeAttack_Parms
{
	class UDVAttack*                                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UDVAttack*                                NewAttack;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbility.SpawnAttack
// [0x00020002] 
struct ADVAbility_execSpawnAttack_Parms
{
	class UDVAttack*                                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UDVAttack*                                NewAttack;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbility.HotTick
// [0x00040003] ( FUNC_Final )
struct ADVAbility_execHotTick_Parms
{
	// class UDVHealthOverTime*                        Hot;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbility.SendHot
// [0x00020002] 
struct ADVAbility_execSendHot_Parms
{
	class ADVPawn*                                     HotTarget;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UDVHealthOverTime*                        Hot;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbility.Reset
// [0x00020002] 
struct ADVAbility_execReset_Parms
{
	// class UDVHealthOverTime*                        Hot;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbility.UnRegisterWithAllDefendingPawns
// [0x00020002] 
struct ADVAbility_execUnRegisterWithAllDefendingPawns_Parms
{
};

// Function ForgeGame.DVAbility.UnRegisterWithDefendingPawn
// [0x00020002] 
struct ADVAbility_execUnRegisterWithDefendingPawn_Parms
{
	class ADVPawn*                                     Modifier;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbility.RegisterWithDefendingPawn
// [0x00020002] 
struct ADVAbility_execRegisterWithDefendingPawn_Parms
{
	class ADVPawn*                                     Modifier;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbility.ModifyDefense
// [0x00420000] 
struct ADVAbility_execModifyDefense_Parms
{
	TArray< struct FSDamage >                          DamageTaken;                                      		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ProtectionDone;                                   		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDVAttack*                                   IncomingAttack;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADVPawn*                                     Defender;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbility.UnRegisterWithAllAttackingPawns
// [0x00020002] 
struct ADVAbility_execUnRegisterWithAllAttackingPawns_Parms
{
};

// Function ForgeGame.DVAbility.UnRegisterWithAttackingPawn
// [0x00020002] 
struct ADVAbility_execUnRegisterWithAttackingPawn_Parms
{
	class ADVPawn*                                     Modifier;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbility.RegisterWithAttackingPawn
// [0x00020002] 
struct ADVAbility_execRegisterWithAttackingPawn_Parms
{
	class ADVPawn*                                     Modifier;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbility.ModifyAttack
// [0x00020000] 
struct ADVAbility_execModifyAttack_Parms
{
	class UDVAttack*                                   OutGoingAttack;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbility.IsStillInLOS
// [0x00880002] 
struct ADVAbility_execIsStillInLOS_Parms
{
	class ADVPawn*                                     TargetActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   CurActor;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// class ADVPawn*                                  InstigatorDVPawn;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbility.GoOnCooldown
// [0x00020002] 
struct ADVAbility_execGoOnCooldown_Parms
{
	unsigned long                                      UseResource : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVAbility.Interrupt
// [0x00020002] 
struct ADVAbility_execInterrupt_Parms
{
	unsigned long                                      SelfInterrupt : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVAbility.LogStartCast
// [0x00040003] ( FUNC_Final )
struct ADVAbility_execLogStartCast_Parms
{
	// class UDVLogEntry*                              LogEntry;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbility.FireAbility
// [0x00080000] 
struct ADVAbility_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbility.PerformAbility
// [0x00080002] 
struct ADVAbility_execPerformAbility_Parms
{
};

// Function ForgeGame.DVAbility.Activate
// [0x00024103] ( FUNC_Final )
struct ADVAbility_execActivate_Parms
{
	class ADVPawn*                                     RepTargetPawn;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      RepUsingAimAssist : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVAbility.ReadyToActivate
// [0x00020102] 
struct ADVAbility_execReadyToActivate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVAbility.IsAbilityReady
// [0x00020102] 
struct ADVAbility_execIsAbilityReady_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVAbility.Tick
// [0x00020102] 
struct ADVAbility_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbility.SetAbilitiesIndex
// [0x00020002] 
struct ADVAbility_execSetAbilitiesIndex_Parms
{
	int                                                NewAbilitiesIndex;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbility.PlayFailureEffect
// [0x00020102] 
struct ADVAbility_execPlayFailureEffect_Parms
{
	// class UParticleSystemComponent*                 FailEmitter;                                      		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function ForgeGame.DVAbility.PlayHitEffect
// [0x00020102] 
struct ADVAbility_execPlayHitEffect_Parms
{
	class ADVPawn*                                     RepHitPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UParticleSystemComponent*                 HitEmitter;                                       		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function ForgeGame.DVAbility.PlayFireEffect
// [0x00020102] 
struct ADVAbility_execPlayFireEffect_Parms
{
	class ADVPawn*                                     RepHitPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UParticleSystemComponent*                 FireEmitter;                                      		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function ForgeGame.DVAbility.PlayAnim
// [0x00020102] 
struct ADVAbility_execPlayAnim_Parms
{
};

// Function ForgeGame.DVAbility.PlayCastEffect
// [0x00020102] 
struct ADVAbility_execPlayCastEffect_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UParticleSystemComponent*                 CastingEmitter;                                   		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class ADVSkeletalMeshAttachment*                DVSkeletalMeshAttachment;                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbility.GetAbilityDescription
// [0x00020002] 
struct ADVAbility_execGetAbilityDescription_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.DVAbility.GetAbilityName
// [0x00020002] 
struct ADVAbility_execGetAbilityName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.DVAbility.GetAbilityLocalizationPath
// [0x00026002] 
struct ADVAbility_execGetAbilityLocalizationPath_Parms
{
	unsigned char                                      TheOwningClass;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     TheAbilityName;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      TheFocus;                                         		// 0x0010 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  LocalizationPath;                                 		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.DVAbility.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVAbility_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawn.BaseChange
// [0x00820822] ( FUNC_Event )
struct ADVPawn_eventBaseChange_Parms
{
	// struct FVector                                  TempVect;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function ForgeGame.DVPawn.TossPawn
// [0x00020000] 
struct ADVPawn_execTossPawn_Parms
{
	struct FVector                                     Knockback;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawn.PlayFootStepSound
// [0x00820902] ( FUNC_Event )
struct ADVPawn_eventPlayFootStepSound_Parms
{
	int                                                FootDown;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FName                                    SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FRotator                                 SocketRotation;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  SocketLocation;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x003C (0x001C) [0x0000000000000000]              
	// class UDVPhysicalMaterialProperties*            PhysicalMaterialProperties;                       		// 0x0058 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x005C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0060 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawn.AddVelocity
// [0x00024002] 
struct ADVPawn_execAddVelocity_Parms
{
	struct FVector                                     NewVelocity;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x001C (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.DVPawn.RemoveDisoriented
// [0x00024002] 
struct ADVPawn_execRemoveDisoriented_Parms
{
	int                                                Decrease;                                         		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.DVPawn.AddDisoriented
// [0x00024002] 
struct ADVPawn_execAddDisoriented_Parms
{
	int                                                Increase;                                         		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.DVPawn.TakeFallingDamage
// [0x00020002] 
struct ADVPawn_execTakeFallingDamage_Parms
{
	// float                                           EffectiveSpeed;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           TotalDamageDone;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           AdjustedMaxFallSpeed;                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawn.GiveBuff
// [0x00020002] 
struct ADVPawn_execGiveBuff_Parms
{
	class UDVBuff*                                     GivenBuff;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawn.ArmorDiminish
// [0x00022002] 
struct ADVPawn_execArmorDiminish_Parms
{
	int                                                ArmorValue;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Scale;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPawn.GetArmorForType
// [0x00020002] 
struct ADVPawn_execGetArmorForType_Parms
{
	class UClass*                                      Type;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      BaseArmor : 1;                                    		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPawn.ReduceDamage
// [0x00820002] 
struct ADVPawn_execReduceDamage_Parms
{
	struct FSDamage                                    NewDamage;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           FinalDamage;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           DamageWithAddedArmor;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           ProtectionDone;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           PreArmorDamage;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           UsedArmor;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           BaseArmor;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           BaseArmorDamage;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FProtectionFromAbility                   CurPFA;                                           		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVPawn.StartRagdoll
// [0x00020102] 
struct ADVPawn_execStartRagdoll_Parms
{
};

// Function ForgeGame.DVPawn.StopRagdoll
// [0x00020102] 
struct ADVPawn_execStopRagdoll_Parms
{
};

// Function ForgeGame.DVPawn.SetRagdollAnimation
// [0x00020102] 
struct ADVPawn_execSetRagdollAnimation_Parms
{
};

// Function ForgeGame.DVPawn.PlayDying
// [0x00020102] 
struct ADVPawn_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawn.Died
// [0x00020002] 
struct ADVPawn_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADVPlayerController*                      PC;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  ReportString;                                     		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	// unsigned char                                   FriendlyCount;                                    		// 0x002C (0x0001) [0x0000000000000000]              
	// unsigned char                                   EnemyCount;                                       		// 0x002D (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.DVPawn.NotifyHealthChange
// [0x00020002] 
struct ADVPawn_execNotifyHealthChange_Parms
{
	class ADVPlayerController*                         Attacker;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              HealthChange;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawn.SimulatedPhysicsBlendOut
// [0x00020102] 
struct ADVPawn_execSimulatedPhysicsBlendOut_Parms
{
};

// Function ForgeGame.DVPawn.SimulatingPhysics
// [0x00020102] 
struct ADVPawn_execSimulatingPhysics_Parms
{
};

// Function ForgeGame.DVPawn.SimulatingPhysicsBlendIn
// [0x00020102] 
struct ADVPawn_execSimulatingPhysicsBlendIn_Parms
{
};

// Function ForgeGame.DVPawn.BlendInPhysics
// [0x00020102] 
struct ADVPawn_execBlendInPhysics_Parms
{
};

// Function ForgeGame.DVPawn.PlayHitReaction
// [0x00020102] 
struct ADVPawn_execPlayHitReaction_Parms
{
	struct FVector                                     AttackImpulse;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawn.ClientTargetHit
// [0x01020142] 
struct ADVPawn_execClientTargetHit_Parms
{
	class ADVPawn*                                     EnemyHit;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      IsHeal : 1;                                       		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ExactlyTargetted : 1;                             		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawn.AttackMisses
// [0x00424002] 
struct ADVPawn_execAttackMisses_Parms
{
	class UDVAttack*                                   Attack;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDVLogEntry*                                 LogEntry;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPawn.CheckSmokeMiss
// [0x00820102] 
struct ADVPawn_execCheckSmokeMiss_Parms
{
	struct FVector                                     AttackOrigin;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// class ADVSmokeCloud*                            TouchingCurCloud;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ADVSmokeCloud*                            TraceCurCloud;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	// unsigned long                                   OriginInSmoke : 1;                                		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   TargetInSmoke : 1;                                		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.DVPawn.CapHealing
// [0x00C20002] 
struct ADVPawn_execCapHealing_Parms
{
	float                                              TotalDamageDone;                                  		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// float                                           TotalHealLastSecond;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FSHealRecord                             CurHeal;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVPawn.NotifyKismetOfAttackResult
// [0x00020002] 
struct ADVPawn_execNotifyKismetOfAttackResult_Parms
{
	class ADVPawn*                                     TheAttacker;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADVPawn*                                     TheTarget;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      TheResult;                                        		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class USequence*                                GameSeq;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                AllSeqEvents;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// class UDVSeqEvent_AttackResult*                 CurAttackResultEvent;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	// unsigned char                                   AttackerFaction;                                  		// 0x0024 (0x0001) [0x0000000000000000]              
	// unsigned char                                   TargetFaction;                                    		// 0x0025 (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.DVPawn.TakeAttack
// [0x00C20002] 
struct ADVPawn_execTakeAttack_Parms
{
	class UDVAttack*                                   Attack;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             ProtectionDone;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             StackCount;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< struct FSDamage >                       DamageTaken;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UDVAttack*                                MirrorAttack;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// class UDVLogEntry*                              LogEntry;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FSAssistingPlayer                        NewAssist;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// float                                           TotalDamageDone;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	// class ADVPawnHeroAssassin*                      Assassin;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawn.TakeEnvironmentalDamage
// [0x00024002] 
struct ADVPawn_execTakeEnvironmentalDamage_Parms
{
	float                                              TotalDamageDone;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      CreditLastHitBy : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.DVPawn.Suicide
// [0x00020002] 
struct ADVPawn_execSuicide_Parms
{
};

// Function ForgeGame.DVPawn.TakeDamage
// [0x00024800] ( FUNC_Event )
struct ADVPawn_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.DVPawn.DoRegens
// [0x00080102] 
struct ADVPawn_execDoRegens_Parms
{
};

// Function ForgeGame.DVPawn.Tick
// [0x00020902] ( FUNC_Event )
struct ADVPawn_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           CalcResult;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Temp;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawn.DoJump
// [0x00020002] 
struct ADVPawn_execDoJump_Parms
{
	unsigned long                                      bUpdating : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPawn.PossessedBy
// [0x00020002] 
struct ADVPawn_execPossessedBy_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ADVPlayerController*                      PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawn.MatchStarting
// [0x00020002] 
struct ADVPawn_execMatchStarting_Parms
{
};

// Function ForgeGame.DVPawn.IsPawnReady
// [0x00020102] 
struct ADVPawn_execIsPawnReady_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPawn.StopsProjectile
// [0x00020102] 
struct ADVPawn_execStopsProjectile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADVPawn*                                  OtherPawn;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawn.InitiateStats
// [0x00020102] 
struct ADVPawn_execInitiateStats_Parms
{
};

// Function ForgeGame.DVPawn.ShouldDisplayOnHud
// [0x00020102] 
struct ADVPawn_execShouldDisplayOnHud_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPawn.PostBeginPlay
// [0x00020102] 
struct ADVPawn_execPostBeginPlay_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawn.RemoveResource
// [0x00020002] 
struct ADVPawn_execRemoveResource_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   NewResourcePercentage;                            		// 0x0004 (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.DVPawn.ResetCollision
// [0x00020002] 
struct ADVPawn_execResetCollision_Parms
{
};

// Function ForgeGame.DVPawn.StuckOnPawn
// [0x00020802] ( FUNC_Event )
struct ADVPawn_eventStuckOnPawn_Parms
{
	class APawn*                                       OtherPawn;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawn.EncroachedBy
// [0x00020802] ( FUNC_Event )
struct ADVPawn_eventEncroachedBy_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawn.PlayGetMedal
// [0x00020002] 
struct ADVPawn_execPlayGetMedal_Parms
{
};

// Function ForgeGame.DVPawn.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct ADVPawn_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function ForgeGame.DVPawn.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVPawn_eventDestroyed_Parms
{
};

// Function ForgeGame.DVPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVPawn_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPlayerController*                      PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPhysicalMaterialProperties.InstanceInteraction
// [0x00826103] ( FUNC_Final )
struct UDVPhysicalMaterialProperties_execInstanceInteraction_Parms
{
	struct FSGenericInteraction                        GenericInteraction;                               		// 0x0000 (0x0050) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FVector                                     Location;                                         		// 0x0050 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      UseOverrideRotation : 1;                          		// 0x005C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    OverrideRotation;                                 		// 0x0060 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USkeletalMeshComponent*                      SkeletalMeshToAttachTo;                           		// 0x006C (0x0004) [0x0000000004000090]              ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
	TArray< struct FName >                             AttachmentSocketNames;                            		// 0x0070 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      SkipIfDedicatedServer : 1;                        		// 0x007C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class AWorldInfo*                               WorldInfo;                                        		// 0x0080 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MaterialInstanceTimeVarying;                      		// 0x0084 (0x0004) [0x0000000000000000]              
	// class UMaterialInterface*                       DecalMaterial;                                    		// 0x0088 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x008C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0098 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SocketLocation;                                   		// 0x00A4 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Actor;                                            		// 0x00B0 (0x0004) [0x0000000000000000]              
	// float                                           DecalWidth;                                       		// 0x00B4 (0x0004) [0x0000000000000000]              
	// float                                           DecalHeight;                                      		// 0x00B8 (0x0004) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x00BC (0x0004) [0x0000000000000000]              
	// float                                           ClosestDistance;                                  		// 0x00C0 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 SocketRotation;                                   		// 0x00C4 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x00D0 (0x0004) [0x0000000000000000]              
	// struct FName                                    ClosestSocketName;                                		// 0x00D4 (0x0008) [0x0000000000000000]              
	// TArray< struct FName >                          ActualAttachmentSocketNames;                      		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.DVAbilitySpirtualFervor.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilitySpirtualFervor_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilitySpirtualFervor.Reset
// [0x00020002] 
struct ADVAbilitySpirtualFervor_execReset_Parms
{
};

// Function ForgeGame.DVAbilitySpirtualFervor.ClientRemoveAllStacks
// [0x010201C2] 
struct ADVAbilitySpirtualFervor_execClientRemoveAllStacks_Parms
{
	class ADVPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilitySpirtualFervor.ClientRemoveStack
// [0x010201C2] 
struct ADVAbilitySpirtualFervor_execClientRemoveStack_Parms
{
	class ADVPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilitySpirtualFervor.ClientAddStack
// [0x010201C2] 
struct ADVAbilitySpirtualFervor_execClientAddStack_Parms
{
	class ADVPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilitySpirtualFervor.RemoveAllStacks
// [0x00020002] 
struct ADVAbilitySpirtualFervor_execRemoveAllStacks_Parms
{
	class ADVPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             StacksRemoved;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilitySpirtualFervor.RemoveStack
// [0x00020002] 
struct ADVAbilitySpirtualFervor_execRemoveStack_Parms
{
	class ADVPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilitySpirtualFervor.UpdateStacks
// [0x00020002] 
struct ADVAbilitySpirtualFervor_execUpdateStacks_Parms
{
};

// Function ForgeGame.DVAbilitySpirtualFervor.UpdateBeamEmitter
// [0x00020102] 
struct ADVAbilitySpirtualFervor_execUpdateBeamEmitter_Parms
{
	struct FVector                                     EndLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilitySpirtualFervor.Tick
// [0x00820102] 
struct ADVAbilitySpirtualFervor_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FFervorStack                             NewFervorStack;                                   		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             StacksOnPawn;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             FristFound;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilitySpirtualFervor.StopAbility
// [0x00020002] 
struct ADVAbilitySpirtualFervor_execStopAbility_Parms
{
};

// Function ForgeGame.DVAbilitySpirtualFervor.Interrupt
// [0x00020002] 
struct ADVAbilitySpirtualFervor_execInterrupt_Parms
{
	unsigned long                                      SelfInterrupt : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVAbilitySpirtualFervor.FireAbility
// [0x00080002] 
struct ADVAbilitySpirtualFervor_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilitySpirtualFervor.PerformAbility
// [0x00080002] 
struct ADVAbilitySpirtualFervor_execPerformAbility_Parms
{
	// class ADVPawnHeroShaman*                        Shaman;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilitySpirtualFervor.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVAbilitySpirtualFervor_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAttachment.ForceMipLevels
// [0x00020100] 
struct ADVAttachment_execForceMipLevels_Parms
{
};

// Function ForgeGame.DVAttachment.ToggleHidden
// [0x00020102] 
struct ADVAttachment_execToggleHidden_Parms
{
	unsigned long                                      ShouldHide : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UPrimitiveComponent*                      PrimitiveComponent;                               		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function ForgeGame.DVAttachment.NotifyOwnerDied
// [0x00020102] 
struct ADVAttachment_execNotifyOwnerDied_Parms
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAttachment.PlayDetermined
// [0x00020100] 
struct ADVAttachment_execPlayDetermined_Parms
{
	unsigned long                                      Determined : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVAttachment.SetStealth
// [0x00020100] 
struct ADVAttachment_execSetStealth_Parms
{
	unsigned long                                      IsStealthed : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      IsCamouflaged : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVAttachment.AttachToSocketOnSkeletalMeshComponent
// [0x00020102] 
struct ADVAttachment_execAttachToSocketOnSkeletalMeshComponent_Parms
{
	class USkeletalMeshComponent*                      BaseSkeletalMeshComponent;                        		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UPrimitiveComponent*                      PrimitiveComponent;                               		// 0x000C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class ADVPawn*                                  DVPawn;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAttachment.AttachToSocket
// [0x00020102] 
struct ADVAttachment_execAttachToSocket_Parms
{
	class ADVPawn*                                     DVPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UPrimitiveComponent*                      PrimitiveComponent;                               		// 0x000C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function ForgeGame.DVAttachment.GetComponent
// [0x00020100] 
struct ADVAttachment_execGetComponent_Parms
{
	class UPrimitiveComponent*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function ForgeGame.DVAttachment.PostBeginPlay
// [0x00020102] 
struct ADVAttachment_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVAbilityMoltenCage.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityMoltenCage_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityMoltenCage.HitsActor
// [0x00020002] 
struct ADVAbilityMoltenCage_execHitsActor_Parms
{
	class ADVPawn*                                     HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Other;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawn*                                  OtherPawn;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityMoltenCage.FireAbility
// [0x00080002] 
struct ADVAbilityMoltenCage_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityMoltenCage.ProjectileHit
// [0x00020002] 
struct ADVAbilityMoltenCage_execProjectileHit_Parms
{
	class ADVPawn*                                     HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ADVProjectile*                               Projectile;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityProjectile.ProjectileHit
// [0x00020002] 
struct ADVAbilityProjectile_execProjectileHit_Parms
{
	class ADVPawn*                                     HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ADVProjectile*                               Projectile;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           AttackDamage;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityProjectile.SpawnProjectile
// [0x00820002] 
struct ADVAbilityProjectile_execSpawnProjectile_Parms
{
	class ADVProjectile*                               ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SocketLocation;                                   		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRotator;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	// class ADVProjectile*                            ProjectileToSpawn;                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityProjectile.FireAbility
// [0x00080002] 
struct ADVAbilityProjectile_execFireAbility_Parms
{
	// class ADVProjectile*                            Projectile;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityProjectile.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVAbilityProjectile_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGameInfo.UpdateGameSettings
// [0x00020002] 
struct AForgeGameInfo_execUpdateGameSettings_Parms
{
	// class UForgeOnlineGameSettings*                 GameSettings;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.CanSpectate
// [0x00020002] 
struct AForgeGameInfo_execCanSpectate_Parms
{
	class APlayerController*                           Viewer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      ViewTarget;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGameInfo.AddDefaultInventory
// [0x00020802] ( FUNC_Event )
struct AForgeGameInfo_eventAddDefaultInventory_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGameInfo.EndMatch
// [0x00820002] 
struct AForgeGameInfo_execEndMatch_Parms
{
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   TheWinningPlayers;                                		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< int >                                   TheLosingPlayers;                                 		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             MedalCounter;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ADVPlayerReplicationInfo*                 CurPRI;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// unsigned long                                   IsAWinner : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FUniqueNetId                             ZeroId;                                           		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.WinningTeamId
// [0x00020002] 
struct AForgeGameInfo_execWinningTeamId_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGameInfo.MatchFinished
// [0x00020002] 
struct AForgeGameInfo_execMatchFinished_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGameInfo.ClearScores
// [0x00020002] 
struct AForgeGameInfo_execClearScores_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.RotateMap
// [0x00024002] 
struct AForgeGameInfo_execRotateMap_Parms
{
	unsigned long                                      ForceOpen : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             MapCounter;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             GameModeCounter;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned char                                   RotationIndex;                                    		// 0x0010 (0x0001) [0x0000000000000000]              
	// unsigned char                                   RandomIndex;                                      		// 0x0011 (0x0001) [0x0000000000000000]              
	// struct FString                                  GameModeString;                                   		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UDVLogEntry*                              CurLogEntry;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.ResetForNextGame
// [0x00020002] 
struct AForgeGameInfo_execResetForNextGame_Parms
{
};

// Function ForgeGame.ForgeGameInfo.StatsCount
// [0x00020002] 
struct AForgeGameInfo_execStatsCount_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGameInfo.ResetTowerActivation
// [0x00020002] 
struct AForgeGameInfo_execResetTowerActivation_Parms
{
};

// Function ForgeGame.ForgeGameInfo.CheckTowerActivation
// [0x00020002] 
struct AForgeGameInfo_execCheckTowerActivation_Parms
{
	// class ADVTower*                                 CurTower;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< class ADVTower* >                       PickTowers;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGameInfo.AutoBalanceTeams
// [0x00020002] 
struct AForgeGameInfo_execAutoBalanceTeams_Parms
{
	// float                                           CurrentTime;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             LowestScore;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      PlayerToSwap;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned char                                   TeamToSwapTo;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
	// unsigned long                                   ShouldGetCredit : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeGameInfo.TellAllOnTeam
// [0x00022002] 
struct AForgeGameInfo_execTellAllOnTeam_Parms
{
	unsigned char                                      TeamIndex;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     TheMessage;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ADVPlayerController*                      CurController;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.TellAllClients
// [0x00022002] 
struct AForgeGameInfo_execTellAllClients_Parms
{
	struct FString                                     TheMessage;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ADVPlayerController*                      CurController;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.NotifyKilled
// [0x00020002] 
struct AForgeGameInfo_execNotifyKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Killed;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPlayerController*                      C;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             KillingAbilityIndex;                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.OneTimeMapSetup
// [0x00020002] 
struct AForgeGameInfo_execOneTimeMapSetup_Parms
{
	// class ADVPlayerStartOptional*                   CurOptPlayerStart;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APlayerStart*                             CurPlayerStart;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   HaveEnabled : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeGameInfo.SetPlayerDefaults
// [0x00020002] 
struct AForgeGameInfo_execSetPlayerDefaults_Parms
{
	class APawn*                                       PlayerPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawn*                                  DVPawn;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             AbilityCounter;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             NumberOfAbilities;                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class ADVPlayerReplicationInfo*                 PRI;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.InstantRespawn
// [0x00020002] 
struct AForgeGameInfo_execInstantRespawn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGameInfo.ScoreKill
// [0x00020002] 
struct AForgeGameInfo_execScoreKill_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Other;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             IndexFound;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      KillerPC;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      OtherPC;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.GetJoinedPlayers
// [0x00020002] 
struct AForgeGameInfo_execGetJoinedPlayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             FoundPlayers;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.Killed
// [0x00020002] 
struct AForgeGameInfo_execKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPlayerReplicationInfo*                 KillerPRI;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ADVPlayerReplicationInfo*                 KilledPRI;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.ChangeTeam
// [0x00020002] 
struct AForgeGameInfo_execChangeTeam_Parms
{
	class AController*                                 Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                N;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bNewTeam : 1;                                     		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATeamInfo*                                TeamInfo;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned char                                   OldTeamNum;                                       		// 0x0014 (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.SmallestTeamIndex
// [0x00020002] 
struct AForgeGameInfo_execSmallestTeamIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Team0Size;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Team1Size;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.StartBots
// [0x00020000] 
struct AForgeGameInfo_execStartBots_Parms
{
};

// Function ForgeGame.ForgeGameInfo.StartHumans
// [0x00020002] 
struct AForgeGameInfo_execStartHumans_Parms
{
	// class APlayerController*                        P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVPawn*                                  CurPawn;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADVAbility*                               CurAbility;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.SpawnDefaultPawnFor
// [0x00820002] 
struct AForgeGameInfo_execSpawnDefaultPawnFor_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            StartSpot;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 StartRotation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  StartLocation;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
	// class ADVPlayerReplicationInfo*                 DVPlayerReplicationInfo;                          		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ADVPawnHero*                              TheHeroArchetype;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ADVPawnHero*                              TheHeroPawn;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      TheDVPC;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.RatePlayerStart
// [0x00020002] 
struct AForgeGameInfo_execRatePlayerStart_Parms
{
	class APlayerStart*                                P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Team;                                             		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Player;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Rating;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ADVPawnHero*                              CurExisting;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.ChoosePlayerStart
// [0x00024002] 
struct AForgeGameInfo_execChoosePlayerStart_Parms
{
	class AController*                                 Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InTeam;                                           		// 0x0004 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerStart*                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerStart*                             P;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           BestRating;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           NewRating;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned char                                   Team;                                             		// 0x0018 (0x0001) [0x0000000000000000]              
	// TArray< class APlayerStart* >                   BestStarts;                                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGameInfo.GetDeathTimerLength
// [0x00020002] 
struct AForgeGameInfo_execGetDeathTimerLength_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGameInfo.ClearKickTimerForPRI
// [0x00020002] 
struct AForgeGameInfo_execClearKickTimerForPRI_Parms
{
	class ADVPlayerReplicationInfo*                    ThePRI;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGameInfo.PostLogin
// [0x00020802] ( FUNC_Event )
struct AForgeGameInfo_eventPostLogin_Parms
{
	class APlayerController*                           NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGameInfo.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct AForgeGameInfo_eventPostBeginPlay_Parms
{
	// class ADVTeamInfo*                              TeamInfo;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.Tick
// [0x00020802] ( FUNC_Event )
struct AForgeGameInfo_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGameInfo.UpdateServer
// [0x00020002] 
struct AForgeGameInfo_execUpdateServer_Parms
{
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfo.InitGameReplicationInfo
// [0x00020002] 
struct AForgeGameInfo_execInitGameReplicationInfo_Parms
{
};

// Function ForgeGame.ForgeGameInfo.RegisterServer
// [0x00020002] 
struct AForgeGameInfo_execRegisterServer_Parms
{
};

// Function ForgeGame.DVPlayerController.SendPromotionalCode
// [0x00020002] 
struct ADVPlayerController_execSendPromotionalCode_Parms
{
	struct FString                                     ThePromoCode;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.TutorialFinished
// [0x00020002] 
struct ADVPlayerController_execTutorialFinished_Parms
{
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.TurnOffSpeaking
// [0x00020002] 
struct ADVPlayerController_execTurnOffSpeaking_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.ToggleSpeaking
// [0x00020202] ( FUNC_Exec )
struct ADVPlayerController_execToggleSpeaking_Parms
{
	unsigned long                                      bNowOn : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ULocalPlayer*                             LP;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.ClearOnlineDelegates
// [0x00020802] ( FUNC_Event )
struct ADVPlayerController_eventClearOnlineDelegates_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.AddOnlineDelegates
// [0x00020002] 
struct ADVPlayerController_execAddOnlineDelegates_Parms
{
	unsigned long                                      bRegisterVoice : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.PlayNormalMusic
// [0x00020102] 
struct ADVPlayerController_execPlayNormalMusic_Parms
{
};

// Function ForgeGame.DVPlayerController.PlayFinalMusic
// [0x00020102] 
struct ADVPlayerController_execPlayFinalMusic_Parms
{
};

// Function ForgeGame.DVPlayerController.FadeMusic
// [0x00020102] 
struct ADVPlayerController_execFadeMusic_Parms
{
	float                                              FadeTime;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.IsLookInputIgnored
// [0x00020802] ( FUNC_Event )
struct ADVPlayerController_eventIsLookInputIgnored_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPlayerController.ServerChangeTeam
// [0x002200C2] 
struct ADVPlayerController_execServerChangeTeam_Parms
{
	int                                                N;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.ServerUpdateCamera
// [0x00220042] 
struct ADVPlayerController_execServerUpdateCamera_Parms
{
	struct FVector                                     CamLoc;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                CamPitchAndYaw;                                   		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.DebugLocalMessage
// [0x00024202] ( FUNC_Exec )
struct ADVPlayerController_execDebugLocalMessage_Parms
{
	struct FString                                     TheMessage;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              NewDisplayPeriod;                                 		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.DVPlayerController.SetAbilityCooldowns
// [0x00024002] 
struct ADVPlayerController_execSetAbilityCooldowns_Parms
{
	unsigned long                                      AbilityCooldowns : 1;                             		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.DVPlayerController.GiveMedal
// [0x01020142] 
struct ADVPlayerController_execGiveMedal_Parms
{
	unsigned char                                      MedalType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      MedalLevel;                                       		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                MedalXP;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                RequiredPoints;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.ServerGiveMedal
// [0x00020002] 
struct ADVPlayerController_execServerGiveMedal_Parms
{
	unsigned char                                      MedalType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      MedalLevel;                                       		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                MedalXP;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                RequiredPoints;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// class UJsonObject*                              TheMedalData;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.TutorialMode
// [0x00020202] ( FUNC_Exec )
struct ADVPlayerController_execTutorialMode_Parms
{
};

// Function ForgeGame.DVPlayerController.GetAllTowers
// [0x00020002] 
struct ADVPlayerController_execGetAllTowers_Parms
{
	TArray< class ADVTower* >                          ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// TArray< class ADVTower* >                       ReturnArray;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ADVTower*                                 CurTower;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.ServerThrowFlag
// [0x002200C2] 
struct ADVPlayerController_execServerThrowFlag_Parms
{
};

// Function ForgeGame.DVPlayerController.ThrowFlag
// [0x00020202] ( FUNC_Exec )
struct ADVPlayerController_execThrowFlag_Parms
{
};

// Function ForgeGame.DVPlayerController.TeamTalk
// [0x00020202] ( FUNC_Exec )
struct ADVPlayerController_execTeamTalk_Parms
{
};

// Function ForgeGame.DVPlayerController.Talk
// [0x00020202] ( FUNC_Exec )
struct ADVPlayerController_execTalk_Parms
{
};

// Function ForgeGame.DVPlayerController.TeamMessage
// [0x010249C2] ( FUNC_Event )
struct ADVPlayerController_eventTeamMessage_Parms
{
	class APlayerReplicationInfo*                      ThePRI;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     S;                                                		// 0x0004 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	struct FName                                       Type;                                             		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              MsgLifeTime;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             Counter;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.YourAbilityFailed
// [0x01020142] 
struct ADVPlayerController_execYourAbilityFailed_Parms
{
	class ADVAbility*                                  BlockedAbility;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADVPawn*                                     MissedPawn;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReasonFailed;                                     		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.BlockWorked
// [0x01020142] 
struct ADVPlayerController_execBlockWorked_Parms
{
	class ADVAbility*                                  BlockedAbility;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.ClientAttackedFrom
// [0x01020142] 
struct ADVPlayerController_execClientAttackedFrom_Parms
{
	struct FVector                                     WorldLocation;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.RemoveHelpRequest
// [0x00020002] 
struct ADVPlayerController_execRemoveHelpRequest_Parms
{
};

// Function ForgeGame.DVPlayerController.ServerRequestHelp
// [0x00220042] 
struct ADVPlayerController_execServerRequestHelp_Parms
{
};

// Function ForgeGame.DVPlayerController.RequestHelp
// [0x00020202] ( FUNC_Exec )
struct ADVPlayerController_execRequestHelp_Parms
{
};

// Function ForgeGame.DVPlayerController.AddAssist
// [0x00020002] 
struct ADVPlayerController_execAddAssist_Parms
{
	struct FSAssistingPlayer                           NewAssist;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.AbilityHit
// [0x01024142] 
struct ADVPlayerController_execAbilityHit_Parms
{
	class ADVPawn*                                     TheHitPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      IsFriendly : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.DVPlayerController.ClientNotifyKilled
// [0x01020142] 
struct ADVPlayerController_execClientNotifyKilled_Parms
{
	unsigned char                                      KillerClass;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class ADVPlayerReplicationInfo*                    KillerPRI;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                KillingAbilityIndex;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADVPlayerReplicationInfo*                    KilledPRI;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      KilledClass;                                      		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  KillerClassName;                                  		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.DVPlayerController.NotifyKilledWithAbility
// [0x00020002] 
struct ADVPlayerController_execNotifyKilledWithAbility_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Killed;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      damageTyp;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                KillingAbilityIndex;                              		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   TheKillerClass;                                   		// 0x0014 (0x0001) [0x0000000000000000]              
	// class ADVPlayerReplicationInfo*                 TheKillerPRI;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ADVPlayerReplicationInfo*                 TheKilledPRI;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.NotifyPawnHealthChange
// [0x01020142] 
struct ADVPlayerController_execNotifyPawnHealthChange_Parms
{
	class ADVPawn*                                     TheReceivingPawn;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ChangeAmount;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.ShowMessage
// [0x01020142] 
struct ADVPlayerController_execShowMessage_Parms
{
	struct FString                                     TheMessage;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.DVPlayerController.ResetSteamCloud
// [0x00020202] ( FUNC_Exec )
struct ADVPlayerController_execResetSteamCloud_Parms
{
};

// Function ForgeGame.DVPlayerController.ChooseClass
// [0x00020202] ( FUNC_Exec )
struct ADVPlayerController_execChooseClass_Parms
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// unsigned char                                   TheChosenClass;                                   		// 0x000C (0x0001) [0x0000000000000000]              
	// class USequence*                                GameSeq;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                AllSeqEvents;                                     		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.ServerSuicideRegardless
// [0x002200C2] 
struct ADVPlayerController_execServerSuicideRegardless_Parms
{
};

// Function ForgeGame.DVPlayerController.AcknowledgePossession
// [0x00020002] 
struct ADVPlayerController_execAcknowledgePossession_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.PerformUseAbility
// [0x00020102] 
struct ADVPlayerController_execPerformUseAbility_Parms
{
	unsigned char                                      AbilityNumber;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class ADVPawn*                                     RepTargetPawn;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      RepUsingAimAssist : 1;                            		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ADVAbility*                               CurAbility;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.ServerUseAbility
// [0x002400C3] ( FUNC_Final )
struct ADVPlayerController_execServerUseAbility_Parms
{
	unsigned char                                      AbilityNumber;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class ADVPawn*                                     RepTargetPawn;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      RepUsingAimAssist : 1;                            		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.MappedUseAbility
// [0x00020102] 
struct ADVPlayerController_execMappedUseAbility_Parms
{
	unsigned char                                      FinalInteralIndex;                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.UseAbility
// [0x00020202] ( FUNC_Exec )
struct ADVPlayerController_execUseAbility_Parms
{
	unsigned char                                      AbilityNumber;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             CurSettingIndex;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FString                                  CurSettingValue;                                  		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned char                                   Counter;                                          		// 0x0014 (0x0001) [0x0000000000000000]              
	// unsigned char                                   FinalInteralIndex;                                		// 0x0015 (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.QueueSpell
// [0x00020002] 
struct ADVPlayerController_execQueueSpell_Parms
{
	unsigned char                                      AbilityNumber;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.PlayerTick
// [0x00020002] 
struct ADVPlayerController_execPlayerTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           TheAssistPeriod;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.KickForAFK
// [0x002200C2] 
struct ADVPlayerController_execKickForAFK_Parms
{
};

// Function ForgeGame.DVPlayerController.PerformBlock
// [0x00020102] 
struct ADVPlayerController_execPerformBlock_Parms
{
	unsigned long                                      StartBlock : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.ServerBlock
// [0x002200C2] 
struct ADVPlayerController_execServerBlock_Parms
{
	unsigned long                                      StartBlock : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.bLock
// [0x00020202] ( FUNC_Exec )
struct ADVPlayerController_execbLock_Parms
{
	unsigned long                                      StartBlock : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.PerformStopCast
// [0x00020102] 
struct ADVPlayerController_execPerformStopCast_Parms
{
};

// Function ForgeGame.DVPlayerController.ServerStopCast
// [0x002200C2] 
struct ADVPlayerController_execServerStopCast_Parms
{
};

// Function ForgeGame.DVPlayerController.StopCast
// [0x00020202] ( FUNC_Exec )
struct ADVPlayerController_execStopCast_Parms
{
};

// Function ForgeGame.DVPlayerController.PerformUnstuck
// [0x00020102] 
struct ADVPlayerController_execPerformUnstuck_Parms
{
};

// Function ForgeGame.DVPlayerController.ServerUnstuck
// [0x002200C2] 
struct ADVPlayerController_execServerUnstuck_Parms
{
};

// Function ForgeGame.DVPlayerController.UnStuck
// [0x00020202] ( FUNC_Exec )
struct ADVPlayerController_execUnStuck_Parms
{
};

// Function ForgeGame.DVPlayerController.PerformSprint
// [0x00020102] 
struct ADVPlayerController_execPerformSprint_Parms
{
	unsigned long                                      StartSprint : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.ServerSprint
// [0x002200C2] 
struct ADVPlayerController_execServerSprint_Parms
{
	unsigned long                                      StartSprint : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.Sprint
// [0x00020202] ( FUNC_Exec )
struct ADVPlayerController_execSprint_Parms
{
	unsigned long                                      StartSprint : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.AskForPawn
// [0x002200C2] 
struct ADVPlayerController_execAskForPawn_Parms
{
};

// Function ForgeGame.DVPlayerController.OnReceivedNativeInputKey
// [0x00024002] 
struct ADVPlayerController_execOnReceivedNativeInputKey_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      EventType;                                        		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              AmountDepressed;                                  		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bGamepad : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// TArray< struct FName >                          WantToSpawnKeys;                                  		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.OnReceivedNativeInputAxis
// [0x00024002] 
struct ADVPlayerController_execOnReceivedNativeInputAxis_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Delta;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bGamepad : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPlayerController.IncrementNotAFKTime
// [0x00020002] 
struct ADVPlayerController_execIncrementNotAFKTime_Parms
{
};

// Function ForgeGame.DVPlayerController.InitInputSystem
// [0x00020802] ( FUNC_Event )
struct ADVPlayerController_eventInitInputSystem_Parms
{
};

// Function ForgeGame.DVPlayerController.SetupAbilitiesInstigator
// [0x00020002] 
struct ADVPlayerController_execSetupAbilitiesInstigator_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.Possess
// [0x00020802] ( FUNC_Event )
struct ADVPlayerController_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.UpdateAccountDetails
// [0x00020002] 
struct ADVPlayerController_execUpdateAccountDetails_Parms
{
	class UJsonObject*                                 TheNewAccountDetails;                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             InnerCounter;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UJsonObject*                              TheClassInfo;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned char                                   CurPlayerClass;                                   		// 0x0010 (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.SetScreenName
// [0x00020002] 
struct ADVPlayerController_execSetScreenName_Parms
{
	// struct FString                                  ChosenName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.DVPlayerController.SetName
// [0x00020202] ( FUNC_Exec )
struct ADVPlayerController_execSetName_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
};

// Function ForgeGame.DVPlayerController.RequestInvitePlayerName
// [0x00020002] 
struct ADVPlayerController_execRequestInvitePlayerName_Parms
{
	struct FString                                     SearchTerm;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     GroupID;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  SanitizedSearch;                                  		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  CurChar;                                          		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.RequestJoinPlayer
// [0x00020002] 
struct ADVPlayerController_execRequestJoinPlayer_Parms
{
	struct FString                                     SearchTerm;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  SanitizedSearch;                                  		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  CurChar;                                          		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.RequestQuickMatch
// [0x00020002] 
struct ADVPlayerController_execRequestQuickMatch_Parms
{
	struct FString                                     DesiredGameType;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.InitPlayerReplicationInfo
// [0x00020002] 
struct ADVPlayerController_execInitPlayerReplicationInfo_Parms
{
};

// Function ForgeGame.DVPlayerController.UpdateStatPoints
// [0x00020002] 
struct ADVPlayerController_execUpdateStatPoints_Parms
{
	int                                                TheClassId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UJsonObject*                                 TheStatPointDetails;                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.GetUpdatedStatPointsForClass
// [0x00020002] 
struct ADVPlayerController_execGetUpdatedStatPointsForClass_Parms
{
	int                                                PlayerClassId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.SetupAccountDetails
// [0x00020002] 
struct ADVPlayerController_execSetupAccountDetails_Parms
{
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.ClientTravel
// [0x010249C2] ( FUNC_Event )
struct ADVPlayerController_eventClientTravel_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      TravelType;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSeamless : 1;                                    		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FGuid                                       MapPackageGuid;                                   		// 0x0014 (0x0010) [0x0000000000100090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FString                                  MapName;                                          		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.DVPlayerController.ClientWasKicked
// [0x010249C2] ( FUNC_Event )
struct ADVPlayerController_eventClientWasKicked_Parms
{
	struct FString                                     KickReason;                                       		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.DVPlayerController.AttemptPlayerAuth
// [0x00020102] 
struct ADVPlayerController_execAttemptPlayerAuth_Parms
{
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.ServerSetSkinChoices
// [0x002200C2] 
struct ADVPlayerController_execServerSetSkinChoices_Parms
{
	unsigned char                                      ClassSkinChoices[ 0x5 ];                          		// 0x0000 (0x0005) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.ServerAuthDetails
// [0x002200C2] 
struct ADVPlayerController_execServerAuthDetails_Parms
{
	struct FString                                     UserId;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     SessionId;                                        		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ScreenName;                                       		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	// unsigned long                                   IsDuplicate : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ADVPlayerReplicationInfo*                 CurOtherPRI;                                      		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.ServerSetFocusChoices
// [0x002200C2] 
struct ADVPlayerController_execServerSetFocusChoices_Parms
{
	struct FSAbilityFocusChoices                       ClassAbiltyFocuses[ 0x5 ];                        		// 0x0000 (0x0028) [0x0000000000000080]              ( CPF_Parm )
	// int                                             ClassCounter;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             AbilityCounter;                                   		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.ClientSendFocusChoices
// [0x00820102] 
struct ADVPlayerController_execClientSendFocusChoices_Parms
{
	// struct FSAbilityFocusChoices                    FocusChoices[ 0x5 ];                              		// 0x0000 (0x0028) [0x0000000000000000]              
	// int                                             ClassCounter;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             AbilityCounter;                                   		// 0x002C (0x0004) [0x0000000000000000]              
	// unsigned char                                   CurClass;                                         		// 0x0030 (0x0001) [0x0000000000000000]              
	// int                                             FocusProfileIndex;                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FString                                  CurFocusChoice;                                   		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.DVPlayerController.ClientSendSkinChoices
// [0x00020102] 
struct ADVPlayerController_execClientSendSkinChoices_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   CurClass;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	// unsigned char                                   SkinChoices[ 0x5 ];                               		// 0x0005 (0x0005) [0x0000000000000000]              
	// unsigned char                                   CurChoice;                                        		// 0x000A (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.ClientAuthResponse
// [0x00020002] 
struct ADVPlayerController_execClientAuthResponse_Parms
{
	// struct FString                                  ChosenName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.DVPlayerController.ClientAuthRequired
// [0x010201C2] 
struct ADVPlayerController_execClientAuthRequired_Parms
{
};

// Function ForgeGame.DVPlayerController.CallDVGCloudAuth
// [0x00020102] 
struct ADVPlayerController_execCallDVGCloudAuth_Parms
{
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerController.ApplySteamCloudInputSettings
// [0x00020002] 
struct ADVPlayerController_execApplySteamCloudInputSettings_Parms
{
	// struct FString                                  TheReadValue;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.DVPlayerController.ApplySteamCloudSettings
// [0x00020102] 
struct ADVPlayerController_execApplySteamCloudSettings_Parms
{
	// struct FString                                  TheReadValue;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.DVPlayerController.GetCloudSettings
// [0x00020102] 
struct ADVPlayerController_execGetCloudSettings_Parms
{
};

// Function ForgeGame.DVPlayerController.InitUserSettings
// [0x00020102] 
struct ADVPlayerController_execInitUserSettings_Parms
{
};

// Function ForgeGame.DVPlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADVPlayerController_eventPostBeginPlay_Parms
{
};

// Function ForgeGame.DVPlayerController.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVPlayerController_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.FOV
// [0x00020202] ( FUNC_Exec )
struct ADVPlayerController_execFOV_Parms
{
	float                                              F;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerController.Pause
// [0x00020200] ( FUNC_Exec )
struct ADVPlayerController_execPause_Parms
{
};

// Function ForgeGame.DVPlayerController.Destroyed
// [0x00020802] ( FUNC_Event )
struct ADVPlayerController_eventDestroyed_Parms
{
	// class ADVGameReplicationInfo*                   DVGameReplicationInfo;                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVHUD.GetLocalPlayerOwnerIndex
// [0x00020002] 
struct ADVHUD_execGetLocalPlayerOwnerIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVHUD.NotifyBindPostProcessEffects
// [0x00020002] 
struct ADVHUD_execNotifyBindPostProcessEffects_Parms
{
	// class UUberPostProcessEffect*                   TheUberPP;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVHUD.ChatScrollDown
// [0x00020202] ( FUNC_Exec )
struct ADVHUD_execChatScrollDown_Parms
{
};

// Function ForgeGame.DVHUD.ChatScrollUp
// [0x00020202] ( FUNC_Exec )
struct ADVHUD_execChatScrollUp_Parms
{
};

// Function ForgeGame.DVHUD.Message
// [0x00024002] 
struct ADVHUD_execMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     msg;                                              		// 0x0004 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	struct FName                                       MsgType;                                          		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Lifetime;                                         		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.DVHUD.ShowScores
// [0x00020202] ( FUNC_Exec )
struct ADVHUD_execShowScores_Parms
{
};

// Function ForgeGame.DVHUD.ToggleCursorMode
// [0x00024202] ( FUNC_Exec )
struct ADVHUD_execToggleCursorMode_Parms
{
	unsigned long                                      ShowCursorMode : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.DVHUD.HideKillCam
// [0x00020002] 
struct ADVHUD_execHideKillCam_Parms
{
};

// Function ForgeGame.DVHUD.ShowKillCam
// [0x00024002] 
struct ADVHUD_execShowKillCam_Parms
{
	struct FString                                     KillerClassName;                                  		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class ADVPlayerReplicationInfo*                    KillerPRI;                                        		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                KillingAbilityIndex;                              		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.DVHUD.ToggleScoreBoard
// [0x00024202] ( FUNC_Exec )
struct ADVHUD_execToggleScoreBoard_Parms
{
	unsigned long                                      ShowScoreBoard : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.DVHUD.ToggleTeamSelectionMenu
// [0x00020202] ( FUNC_Exec )
struct ADVHUD_execToggleTeamSelectionMenu_Parms
{
};

// Function ForgeGame.DVHUD.ToggleClassSelectionMenu
// [0x00020202] ( FUNC_Exec )
struct ADVHUD_execToggleClassSelectionMenu_Parms
{
};

// Function ForgeGame.DVHUD.SlideInit
// [0x00020002] 
struct ADVHUD_execSlideInit_Parms
{
	class UGFxObject*                                  NewSlideMC;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     NewSlideName;                                     		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.DVHUD.ToggleEscapeMenu
// [0x00020202] ( FUNC_Exec )
struct ADVHUD_execToggleEscapeMenu_Parms
{
};

// Function ForgeGame.DVHUD.ResolutionChanged
// [0x00020002] 
struct ADVHUD_execResolutionChanged_Parms
{
};

// Function ForgeGame.DVHUD.ToggleHUD
// [0x00020202] ( FUNC_Exec )
struct ADVHUD_execToggleHUD_Parms
{
};

// Function ForgeGame.DVHUD.PostRender
// [0x00020802] ( FUNC_Event )
struct ADVHUD_eventPostRender_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVHUD.Destroyed
// [0x00020802] ( FUNC_Event )
struct ADVHUD_eventDestroyed_Parms
{
};

// Function ForgeGame.DVHUD.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct ADVHUD_eventPostBeginPlay_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSettings.UpdateAccountDetails
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execUpdateAccountDetails_Parms
{
	class UJsonObject*                                 TheNewAccountDetails;                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             InnerCounter;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UJsonObject*                              TheClassInfo;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.GetCommandForSteamCloudIndex
// [0x00422002] 
struct UForgeGFxFrontEndSettings_execGetCommandForSteamCloudIndex_Parms
{
	int                                                TheIndex;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BindType;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.GetSteamCloudIndexForCommand
// [0x00022002] 
struct UForgeGFxFrontEndSettings_execGetSteamCloudIndexForCommand_Parms
{
	struct FString                                     TheCommand;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.GetBindsForCommand
// [0x00422002] 
struct UForgeGFxFrontEndSettings_execGetBindsForCommand_Parms
{
	struct FString                                     TheCommand;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                PrimaryBind;                                      		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                SecondaryBind;                                    		// 0x0010 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ControllerBind;                                   		// 0x0014 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// int                                             Counter;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UPlayerInput*                             ThePlayerInput;                                   		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.SetAllBindsFromSteamCloud
// [0x00022002] 
struct UForgeGFxFrontEndSettings_execSetAllBindsFromSteamCloud_Parms
{
	// struct FString                                  CurrentSettingString;                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  CurrentCommand;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             CurrentBindType;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             ExistingCounter;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             CurrentPrimaryBind;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             CurrentSecondaryBind;                             		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             CurrentControllerBind;                            		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FName                                    ExistingKey;                                      		// 0x0030 (0x0008) [0x0000000000000000]              
	// class UPlayerInput*                             ThePlayerInput;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.SaveAllBindsToSteamCloud
// [0x00022002] 
struct UForgeGFxFrontEndSettings_execSaveAllBindsToSteamCloud_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             BindPrimarySteamCloudIndex;                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PrimaryBindKey;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             SecondaryBindKey;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             ControllerBindKey;                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.BindKey
// [0x00022002] 
struct UForgeGFxFrontEndSettings_execBindKey_Parms
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     NewCommand;                                       		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FName                                       ExistingKey;                                      		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UPlayerInput*                             ThePlayerInput;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// unsigned long                                   FoundBind : 1;                                    		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   BindingController : 1;                            		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeGFxFrontEndSettings.FilterButtonInput
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Counter;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned long                                   ValidButton : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    ExistingKey;                                      		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnResetBindPress
// [0x00020000] 
struct UForgeGFxFrontEndSettings_execOnResetBindPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnControllerBindPress
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnControllerBindPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             CommaLoc;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             TheBindIndex;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnSecondaryBindPress
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnSecondaryBindPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             CommaLoc;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             TheBindIndex;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnPrimaryBindPress
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnPrimaryBindPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             CommaLoc;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             TheBindIndex;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnAbilityReOrderPress
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnAbilityReOrderPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             ChosenSlot;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             ChosenAbilitySlot;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             SwappingAbilitySlot;                              		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             CurAbilityOrder;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             CurSettingIndex;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	// unsigned char                                   CurClassEnum;                                     		// 0x0044 (0x0001) [0x0000000000000000]              
	// struct FString                                  CurSettingValue;                                  		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnClassRightPress
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnClassRightPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnClassLeftPress
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnClassLeftPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.GetBloodAlpha
// [0x00022002] 
struct UForgeGFxFrontEndSettings_execGetBloodAlpha_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnLolzChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnLolzChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnQueueLengthChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnQueueLengthChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// float                                           TheValue;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnFovChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnFovChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// float                                           TheValue;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnCameraShakeDefenseChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnCameraShakeDefenseChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnCameraShakeAttackChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnCameraShakeAttackChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnColorblindModeChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnColorblindModeChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class AWorldInfo*                               TheWI;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ADVFlag*                                  CurFlag;                                          		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnDamageSizeChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnDamageSizeChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnChatSizeChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnChatSizeChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnResourceArcChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnResourceArcChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnCooldownSlidersChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnCooldownSlidersChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnTutorialModeChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnTutorialModeChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnBloodMapChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnBloodMapChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// float                                           TheValue;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnInvertTurnChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnInvertTurnChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UPlayerInput*                             ThePlayerInput;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnInvertMouseChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnInvertMouseChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UPlayerInput*                             ThePlayerInput;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnMouseSmoothingChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnMouseSmoothingChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UPlayerInput*                             ThePlayerInput;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnMouseSensitivityChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnMouseSensitivityChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UPlayerInput*                             ThePlayerInput;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           TheValue;                                         		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.SetVolume
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execSetVolume_Parms
{
	struct FName                                       SoundClassName;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewVolume;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnVoiceAllowedChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnVoiceAllowedChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class APlayerController*                        MyPC;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnMenuVolumeChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnMenuVolumeChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnMusicVolumeChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnMusicVolumeChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnAmbientVolumeChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnAmbientVolumeChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnEventsVolumeChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnEventsVolumeChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnCombatVolumeChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnCombatVolumeChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnMasterVolumeChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnMasterVolumeChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnIndieChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnIndieChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnGammaChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnGammaChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.ShowAbilityReorderMouseover
// [0x00820002] 
struct UForgeGFxFrontEndSettings_execShowAbilityReorderMouseover_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             SettingCounter;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             CurSettingIndex;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             CurAbilityOrder;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0010 (0x002C) [0x0000000000000000]              
	// struct FVector2D                                MousePosition;                                    		// 0x003C (0x0008) [0x0000000000000000]              
	// unsigned char                                   CurClassEnum;                                     		// 0x0044 (0x0001) [0x0000000000000000]              
	// struct FString                                  CurSettingValue;                                  		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  LocalizationPath;                                 		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.Tick
// [0x00820002] 
struct UForgeGFxFrontEndSettings_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0004 (0x002C) [0x0000000000000000]              
	// float                                           CurrentTime;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           SlideDistance;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           SlideAlpha;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           AbilityButtonSpacing;                             		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnResetPress
// [0x00020000] 
struct UForgeGFxFrontEndSettings_execOnResetPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnApplyPress
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnApplyPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UEngine*                                  TheEngine;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	// unsigned long                                   ConfigStale : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           NewValue;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// unsigned char                                   CurrentBoolValue;                                 		// 0x0034 (0x0001) [0x0000000000000000]              
	// float                                           CurrentFloatValue;                                		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnSubTabPress
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnSubTabPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnGameTabPress
// [0x00820002] 
struct UForgeGFxFrontEndSettings_execOnGameTabPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FASDisplayInfo                           DI;                                               		// 0x0028 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnInputTabPress
// [0x00820002] 
struct UForgeGFxFrontEndSettings_execOnInputTabPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FASDisplayInfo                           DI;                                               		// 0x0028 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnAudioTabPress
// [0x00820002] 
struct UForgeGFxFrontEndSettings_execOnAudioTabPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FASDisplayInfo                           DI;                                               		// 0x0028 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnGraphicsTabPress
// [0x00820002] 
struct UForgeGFxFrontEndSettings_execOnGraphicsTabPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FASDisplayInfo                           DI;                                               		// 0x0028 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.SetResolutionToIndex
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execSetResolutionToIndex_Parms
{
	int                                                NewResolutionIndex;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewDisplayModeIndex;                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  ResolutionString;                                 		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnConfirmNoPress
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnConfirmNoPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnConfirmYesPress
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnConfirmYesPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnBackPress
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnBackPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.HandleScrollDown
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execHandleScrollDown_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.HandleScrollUp
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execHandleScrollUp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.HandlePasteCommand
// [0x00020000] 
struct UForgeGFxFrontEndSettings_execHandlePasteCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSettings.HandleCopyCommand
// [0x00020000] 
struct UForgeGFxFrontEndSettings_execHandleCopyCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSettings.HandleCutCommand
// [0x00020000] 
struct UForgeGFxFrontEndSettings_execHandleCutCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSettings.ConfigForRes
// [0x00820002] 
struct UForgeGFxFrontEndSettings_execConfigForRes_Parms
{
	int                                                SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             TotalVisiblePixels;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x000C (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.SetGraphicsCaches
// [0x00820002] 
struct UForgeGFxFrontEndSettings_execSetGraphicsCaches_Parms
{
	// class UEngine*                                  TheEngine;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector2D                                ResVector;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             ExistingCounter;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< struct FVector >                        OSAvailableResolutions;                           		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   AlreadyExists : 1;                                		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  CurResString;                                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.ApplySteamCloudSettings
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execApplySteamCloudSettings_Parms
{
	// struct FString                                  CurrentSettingString;                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UPlayerInput*                             ThePlayerInput;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.ShowSlide
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execShowSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSettings.HideSlide
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execHideSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSettings.UpdateBindRow
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execUpdateBindRow_Parms
{
	int                                                RowIndex;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  CurBindPrimary;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  CurBindSecondary;                                 		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  CurBindController;                                		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.IsControllerButton
// [0x00022002] 
struct UForgeGFxFrontEndSettings_execIsControllerButton_Parms
{
	struct FName                                       ButtonName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEndSettings.ConfigForClass
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execConfigForClass_Parms
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             CurSettingIndex;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned char                                   CurClassEnum;                                     		// 0x0014 (0x0001) [0x0000000000000000]              
	// int                                             AbilityOrders[ 0x8 ];                             		// 0x0018 (0x0020) [0x0000000000000000]              
	// struct FString                                  CurSettingValue;                                  		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FName                                    FoundBindName;                                    		// 0x0044 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnClassButtonChange
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnClassButtonChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// class AWorldInfo*                               TheWI;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.OnClassButtonPress
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execOnClassButtonPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.CreateAbilityClassSelectButtons
// [0x00820002] 
struct UForgeGFxFrontEndSettings_execCreateAbilityClassSelectButtons_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0004 (0x002C) [0x0000000000000000]              
	// unsigned char                                   CurClassEnum;                                     		// 0x0030 (0x0001) [0x0000000000000000]              
	// class AWorldInfo*                               TheWI;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.SetGraphicsTabPresets
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execSetGraphicsTabPresets_Parms
{
	// class UEngine*                                  TheEngine;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   CurrentBoolValue;                                 		// 0x0004 (0x0001) [0x0000000000000000]              
	// float                                           CurrentFloatValue;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.ConfigBindDetails
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execConfigBindDetails_Parms
{
	// unsigned long                                   PrimaryFound : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   SecondaryFound : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   ControllerFound : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Counter;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             BindingsCounter;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UPlayerInput*                             ThePlayerInput;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.SetSliderValues
// [0x00020002] 
struct UForgeGFxFrontEndSettings_execSetSliderValues_Parms
{
	// class UPlayerInput*                             ThePlayerInput;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSettings.ConfigSlide
// [0x00820002] 
struct UForgeGFxFrontEndSettings_execConfigSlide_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  CurBindName;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FSScrollingListLineDetails               CurScrollingListLine;                             		// 0x0010 (0x001C) [0x0000000000000000]              
	// class UPlayerInput*                             ThePlayerInput;                                   		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSlide.FilterButtonInput
// [0x00020000] 
struct UForgeGFxFrontEndSlide_execFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEndSlide.ConsoleCommand
// [0x00024002] 
struct UForgeGFxFrontEndSlide_execConsoleCommand_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWriteToLog : 1;                                  		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.ForgeGFxFrontEndSlide.HandleScrollDown
// [0x00020002] 
struct UForgeGFxFrontEndSlide_execHandleScrollDown_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEndSlide.HandleScrollUp
// [0x00020002] 
struct UForgeGFxFrontEndSlide_execHandleScrollUp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEndSlide.DoPasteText
// [0x00020002] 
struct UForgeGFxFrontEndSlide_execDoPasteText_Parms
{
	class UForgeGFxObjectSelectable*                   TheTextField;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             StartIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             FinishIndex;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FString                                  TheOldText;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  TheNewText;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndSlide.HandlePasteCommand
// [0x00020000] 
struct UForgeGFxFrontEndSlide_execHandlePasteCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSlide.DoCopyText
// [0x00020002] 
struct UForgeGFxFrontEndSlide_execDoCopyText_Parms
{
	class UForgeGFxObjectSelectable*                   TheTextField;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             StartIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             FinishIndex;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSlide.HandleCopyCommand
// [0x00020000] 
struct UForgeGFxFrontEndSlide_execHandleCopyCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSlide.DoCutText
// [0x00020002] 
struct UForgeGFxFrontEndSlide_execDoCutText_Parms
{
	class UForgeGFxObjectSelectable*                   TheTextField;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             StartIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             FinishIndex;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSlide.HandleCutCommand
// [0x00020000] 
struct UForgeGFxFrontEndSlide_execHandleCutCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSlide.Tick
// [0x00020000] 
struct UForgeGFxFrontEndSlide_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxFrontEndSlide.ConfigSlide
// [0x00020000] 
struct UForgeGFxFrontEndSlide_execConfigSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSlide.SlideInSlide
// [0x00020002] 
struct UForgeGFxFrontEndSlide_execSlideInSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSlide.ShowSlide
// [0x00020002] 
struct UForgeGFxFrontEndSlide_execShowSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSlide.SlideOutSlide
// [0x00020002] 
struct UForgeGFxFrontEndSlide_execSlideOutSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSlide.HideSlide
// [0x00020002] 
struct UForgeGFxFrontEndSlide_execHideSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSlide.SlideLoaded
// [0x00020002] 
struct UForgeGFxFrontEndSlide_execSlideLoaded_Parms
{
	class UGFxObject*                                  NewSlideMC;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerReplicationInfo.UsedAbility
// [0x00020102] 
struct ADVPlayerReplicationInfo_execUsedAbility_Parms
{
	unsigned long                                      TriggersGCD : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVPlayerReplicationInfo.UpdateScore
// [0x00020002] 
struct ADVPlayerReplicationInfo_execUpdateScore_Parms
{
	// int                                             TotalScore;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Additional;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.Tick
// [0x00820102] 
struct ADVPlayerReplicationInfo_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             CurLongestLife;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      DVPC;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   IsInMuteList : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVPlayerReplicationInfo_eventDestroyed_Parms
{
	// class ADVPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.GetSteamAvatar
// [0x00020102] 
struct ADVPlayerReplicationInfo_execGetSteamAvatar_Parms
{
};

// Function ForgeGame.DVPlayerReplicationInfo.RegisterPlayerWithSession
// [0x00020102] 
struct ADVPlayerReplicationInfo_execRegisterPlayerWithSession_Parms
{
	// class ADVPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADVPlayerReplicationInfo_eventPostBeginPlay_Parms
{
	// class ADVPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.InitAbilities
// [0x00020002] 
struct ADVPlayerReplicationInfo_execInitAbilities_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVAbility*                               AbilityArchetype;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.ServerSetDesiredClass
// [0x002200C2] 
struct ADVPlayerReplicationInfo_execServerSetDesiredClass_Parms
{
	unsigned char                                      NewDesiredClass;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerReplicationInfo.CopyProperties
// [0x00820002] 
struct ADVPlayerReplicationInfo_execCopyProperties_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPlayerReplicationInfo*                 TheDVPRI;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             ZeroId;                                           		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.ScoreDefense
// [0x00020002] 
struct ADVPlayerReplicationInfo_execScoreDefense_Parms
{
};

// Function ForgeGame.DVPlayerReplicationInfo.ScoreCapture
// [0x00020002] 
struct ADVPlayerReplicationInfo_execScoreCapture_Parms
{
	int                                                ExtraPoints;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerReplicationInfo.ScoreAssist
// [0x00820002] 
struct ADVPlayerReplicationInfo_execScoreAssist_Parms
{
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.ScoreKill
// [0x00820002] 
struct ADVPlayerReplicationInfo_execScoreKill_Parms
{
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.ScoreDamageTaken
// [0x00820002] 
struct ADVPlayerReplicationInfo_execScoreDamageTaken_Parms
{
	float                                              AddedDamageTaken;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.ScoreProtectionDone
// [0x00820002] 
struct ADVPlayerReplicationInfo_execScoreProtectionDone_Parms
{
	int                                                AddedProtection;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.ScoreHealingDone
// [0x00820002] 
struct ADVPlayerReplicationInfo_execScoreHealingDone_Parms
{
	int                                                AddedHealing;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.ScoreDamageDone
// [0x00820002] 
struct ADVPlayerReplicationInfo_execScoreDamageDone_Parms
{
	int                                                AddedDamage;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.FinalizeStats
// [0x00820002] 
struct ADVPlayerReplicationInfo_execFinalizeStats_Parms
{
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.ResetAllStats
// [0x00020002] 
struct ADVPlayerReplicationInfo_execResetAllStats_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.IncrementDeaths
// [0x00824002] 
struct ADVPlayerReplicationInfo_execIncrementDeaths_Parms
{
	int                                                Amt;                                              		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.StatsRecordingValid
// [0x00020002] 
struct ADVPlayerReplicationInfo_execStatsRecordingValid_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPlayerReplicationInfo.ResetStatsForDeath
// [0x00020002] 
struct ADVPlayerReplicationInfo_execResetStatsForDeath_Parms
{
};

// Function ForgeGame.DVPlayerReplicationInfo.SetSkinForClass
// [0x00020102] 
struct ADVPlayerReplicationInfo_execSetSkinForClass_Parms
{
	unsigned char                                      PlayerClass;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Skin;                                             		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerReplicationInfo.SetDesiredClass
// [0x00020102] 
struct ADVPlayerReplicationInfo_execSetDesiredClass_Parms
{
	unsigned char                                      NewDesiredClass;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerReplicationInfo.KickForUnAuth
// [0x00020002] 
struct ADVPlayerReplicationInfo_execKickForUnAuth_Parms
{
};

// Function ForgeGame.DVPlayerReplicationInfo.WriteUpdatedSteamStats
// [0x00020002] 
struct ADVPlayerReplicationInfo_execWriteUpdatedSteamStats_Parms
{
};

// Function ForgeGame.DVPlayerReplicationInfo.UpdateStatsForEndSpec
// [0x00020002] 
struct ADVPlayerReplicationInfo_execUpdateStatsForEndSpec_Parms
{
};

// Function ForgeGame.DVPlayerReplicationInfo.UpdateStatsForEndLoss
// [0x00020002] 
struct ADVPlayerReplicationInfo_execUpdateStatsForEndLoss_Parms
{
};

// Function ForgeGame.DVPlayerReplicationInfo.UpdateStatsForEndWin
// [0x00020002] 
struct ADVPlayerReplicationInfo_execUpdateStatsForEndWin_Parms
{
};

// Function ForgeGame.DVPlayerReplicationInfo.ClearPendingSteamStats
// [0x00020002] 
struct ADVPlayerReplicationInfo_execClearPendingSteamStats_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.UpdateStoredSteamStats
// [0x00020002] 
struct ADVPlayerReplicationInfo_execUpdateStoredSteamStats_Parms
{
};

// Function ForgeGame.DVPlayerReplicationInfo.UpdateCalculatedSkillValues
// [0x00020002] 
struct ADVPlayerReplicationInfo_execUpdateCalculatedSkillValues_Parms
{
	// float                                           KADR;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           DDDTR;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           EFFOT;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           DNGOT;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           CEFFOT;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.SetStoredStatIfGreater
// [0x00020002] 
struct ADVPlayerReplicationInfo_execSetStoredStatIfGreater_Parms
{
	unsigned char                                      TheStat;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewAmount;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             StatValue;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.SetStoredStat
// [0x00020002] 
struct ADVPlayerReplicationInfo_execSetStoredStat_Parms
{
	unsigned char                                      TheStat;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewAmount;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPlayerReplicationInfo.GetStoredStat
// [0x00020002] 
struct ADVPlayerReplicationInfo_execGetStoredStat_Parms
{
	unsigned char                                      TheStat;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             StatValue;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.IncrementStoredStat
// [0x00024002] 
struct ADVPlayerReplicationInfo_execIncrementStoredStat_Parms
{
	unsigned char                                      TheStat;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                IncrementAmount;                                  		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             StatValue;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPlayerReplicationInfo.ReadSteamStatsComplete
// [0x00020002] 
struct ADVPlayerReplicationInfo_execReadSteamStatsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVPlayerReplicationInfo.GetSteamStats
// [0x00820002] 
struct ADVPlayerReplicationInfo_execGetSteamStats_Parms
{
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< struct FUniqueNetId >                   CheckIds;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVDamageType.StringVersion
// [0x00022002] 
struct UDVDamageType_execStringVersion_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.DVAttack.Destroyed
// [0x00020002] 
struct UDVAttack_execDestroyed_Parms
{
};

// Function ForgeGame.DVAttack.Release
// [0x00020002] 
struct UDVAttack_execRelease_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAttack.AddBuff
// [0x00020002] 
struct UDVAttack_execAddBuff_Parms
{
	class UDVBuff*                                     Buff;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAttack.AddHot
// [0x00020002] 
struct UDVAttack_execAddHot_Parms
{
	class UDVHealthOverTime*                           Hot;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAttack.SetKnockdown
// [0x00020002] 
struct UDVAttack_execSetKnockdown_Parms
{
	float                                              NewKnockdown;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAttack.SetKnockback
// [0x00020002] 
struct UDVAttack_execSetKnockback_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Distance;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAttack.AddDamage
// [0x00820002] 
struct UDVAttack_execAddDamage_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      Type;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FSDamage                                 NewDamage;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           FervorDamage;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ADVAbilitySpirtualFervor*                 CurFervor;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAttack.SetDontCauseHitReaction
// [0x00020002] 
struct UDVAttack_execSetDontCauseHitReaction_Parms
{
	unsigned long                                      NewDontCauseHitReaction : 1;                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVAttack.SetMirrored
// [0x00020002] 
struct UDVAttack_execSetMirrored_Parms
{
	unsigned long                                      NewMirrored : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVAttack.SetFriendly
// [0x00020002] 
struct UDVAttack_execSetFriendly_Parms
{
	unsigned long                                      NewFriendly : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVAttack.SetHotTick
// [0x00020002] 
struct UDVAttack_execSetHotTick_Parms
{
	unsigned long                                      NewHotTick : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVAttack.SetBlockImmune
// [0x00020002] 
struct UDVAttack_execSetBlockImmune_Parms
{
	unsigned long                                      NewBlockImmune : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVAttack.SetInstigatorController
// [0x00020002] 
struct UDVAttack_execSetInstigatorController_Parms
{
	class AController*                                 NewInstigator;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAttack.SetAbility
// [0x00020002] 
struct UDVAttack_execSetAbility_Parms
{
	class ADVAbility*                                  NewAbility;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAttack.SetOrigin
// [0x00020002] 
struct UDVAttack_execSetOrigin_Parms
{
	struct FVector                                     NewOrigin;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeOnlineProfileSettings.DownAbilityReordering
// [0x00020002] 
struct UForgeOnlineProfileSettings_execDownAbilityReordering_Parms
{
};

// Function ForgeGame.ForgeOnlineProfileSettings.UpAbilityReordering
// [0x00020002] 
struct UForgeOnlineProfileSettings_execUpAbilityReordering_Parms
{
	// int                                             ClassCounter;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             AbilityCounter;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             MappingCounter;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             CurPrimaryOverride;                               		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             CurSecondaryOverride;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             CurControllerOverride;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             DefaultPrimaryKeys[ 0x9 ];                        		// 0x0018 (0x0024) [0x0000000000000000]              
	// int                                             DefaultSecondaryKeys[ 0x9 ];                      		// 0x003C (0x0024) [0x0000000000000000]              
	// int                                             DefaultControllerKeys[ 0x9 ];                     		// 0x0060 (0x0024) [0x0000000000000000]              
	// TArray< int >                                   AbilityMappings;                                  		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   FoundMapping : 1;                                 		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  CurrentSettingString;                             		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeOnlineProfileSettings.AddMissingDefaultSettings
// [0x00020002] 
struct UForgeOnlineProfileSettings_execAddMissingDefaultSettings_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             ExistingCounter;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   FoundValue : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeOnlineProfileSettings.SanityChecks
// [0x00020002] 
struct UForgeOnlineProfileSettings_execSanityChecks_Parms
{
};

// Function ForgeGame.ForgeOnlineProfileSettings.MigrateRevision
// [0x00020802] ( FUNC_Event )
struct UForgeOnlineProfileSettings_eventMigrateRevision_Parms
{
	int                                                OldVersionNumber;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPawnHero.UnPossessed
// [0x00020002] 
struct ADVPawnHero_execUnPossessed_Parms
{
};

// Function ForgeGame.DVPawnHero.Died
// [0x00020002] 
struct ADVPawnHero_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPawnHero.PlayWallJump
// [0x00020102] 
struct ADVPawnHero_execPlayWallJump_Parms
{
};

// Function ForgeGame.DVPawnHero.DoJump
// [0x00820002] 
struct ADVPawnHero_execDoJump_Parms
{
	unsigned long                                      bUpdating : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  Velocity2D;                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x002C (0x000C) [0x0000000000000000]              
	// float                                           DotProduct;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnHero.TossPawn
// [0x00020002] 
struct ADVPawnHero_execTossPawn_Parms
{
	struct FVector                                     Knockback;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawnHero.RemoveBlockResource
// [0x00020102] 
struct ADVPawnHero_execRemoveBlockResource_Parms
{
};

// Function ForgeGame.DVPawnHero.AttackMisses
// [0x00424002] 
struct ADVPawnHero_execAttackMisses_Parms
{
	class UDVAttack*                                   Attack;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDVLogEntry*                                 LogEntry;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UDVAttack*                                BlockingDamageAttack;                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnHero.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVPawnHero_eventDestroyed_Parms
{
};

// Function ForgeGame.DVPawnHero.PlayDying
// [0x00020102] 
struct ADVPawnHero_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawnHero.Tick
// [0x00020102] 
struct ADVPawnHero_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPlayerController*                      PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnHero.CanCapObjective
// [0x00020002] 
struct ADVPawnHero_execCanCapObjective_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPawnHero.InitiateStats
// [0x00020102] 
struct ADVPawnHero_execInitiateStats_Parms
{
};

// Function ForgeGame.DVPawnHero.PostBeginPlay
// [0x00020102] 
struct ADVPawnHero_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVPawnHero.PlaySpawnProtection
// [0x00020102] 
struct ADVPawnHero_execPlaySpawnProtection_Parms
{
};

// Function ForgeGame.DVPawnHero.IsPawnReady
// [0x00020102] 
struct ADVPawnHero_execIsPawnReady_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPawnHero.PlayBlocked
// [0x00020102] 
struct ADVPawnHero_execPlayBlocked_Parms
{
};

// Function ForgeGame.DVPawnHero.PlayBlockingIdle
// [0x00020102] 
struct ADVPawnHero_execPlayBlockingIdle_Parms
{
};

// Function ForgeGame.DVPawnHero.PlayBlocking
// [0x00020102] 
struct ADVPawnHero_execPlayBlocking_Parms
{
};

// Function ForgeGame.DVPawnHero.PlayDetermined
// [0x00020102] 
struct ADVPawnHero_execPlayDetermined_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceConstant*                CurMaterial;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnHero.SetSkin
// [0x00020102] 
struct ADVPawnHero_execSetSkin_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             SkinIndex;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned char                                   ChosenSkin;                                       		// 0x0008 (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnHero.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVPawnHero_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawnMortal.Landed
// [0x00020802] ( FUNC_Event )
struct ADVPawnMortal_eventLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawnMortal.Bump
// [0x00020802] ( FUNC_Event )
struct ADVPawnMortal_eventBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawnMortal.TossPawn
// [0x00820002] 
struct ADVPawnMortal_execTossPawn_Parms
{
	struct FVector                                     Knockback;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  TossVelocity;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Destintion;                                       		// 0x0018 (0x000C) [0x0000000000000000]              
	// int                                             KnockbackDistance;                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnMortal.PlayDying
// [0x00020102] 
struct ADVPawnMortal_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawnMortal.PlayHitReaction
// [0x00020102] 
struct ADVPawnMortal_execPlayHitReaction_Parms
{
	struct FVector                                     AttackImpulse;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FName                                    CurrentAnim;                                      		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnMortal.TakeAttack
// [0x00420002] 
struct ADVPawnMortal_execTakeAttack_Parms
{
	class UDVAttack*                                   Attack;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function ForgeGame.DVPawnMortal.Tick
// [0x00020902] ( FUNC_Event )
struct ADVPawnMortal_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   tempbool : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.DVPawnMortal.PostBeginPlay
// [0x00020102] 
struct ADVPawnMortal_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVPawnMortal.SetPostProcess
// [0x00020102] 
struct ADVPawnMortal_execSetPostProcess_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             Player;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnMortal.PlayBlinded
// [0x00020102] 
struct ADVPawnMortal_execPlayBlinded_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             Player;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Scalar;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnMortal.PlayShadowShift
// [0x00020102] 
struct ADVPawnMortal_execPlayShadowShift_Parms
{
};

// Function ForgeGame.DVPawnMortal.SetShadowShift
// [0x00020102] 
struct ADVPawnMortal_execSetShadowShift_Parms
{
	// class ADVPawn*                                  LocalPawn;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnMortal.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVPawnMortal_eventDestroyed_Parms
{
};

// Function ForgeGame.DVPawnMortal.PlayPinned
// [0x00020102] 
struct ADVPawnMortal_execPlayPinned_Parms
{
	// struct FName                                    CurrentAnim;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnMortal.PlayStunned
// [0x00020102] 
struct ADVPawnMortal_execPlayStunned_Parms
{
	// struct FName                                    CurrentAnim;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnMortal.PlayGetUp
// [0x00020102] 
struct ADVPawnMortal_execPlayGetUp_Parms
{
};

// Function ForgeGame.DVPawnMortal.PlayIdleGround
// [0x00020102] 
struct ADVPawnMortal_execPlayIdleGround_Parms
{
};

// Function ForgeGame.DVPawnMortal.PlayKnockdown
// [0x00020102] 
struct ADVPawnMortal_execPlayKnockdown_Parms
{
};

// Function ForgeGame.DVPawnMortal.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVPawnMortal_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPlayerController*                      PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnHeroAssassin.AttackedSomeone
// [0x00020002] 
struct ADVPawnHeroAssassin_execAttackedSomeone_Parms
{
};

// Function ForgeGame.DVPawnHeroAssassin.PlayFootStepSound
// [0x00020902] ( FUNC_Event )
struct ADVPawnHeroAssassin_eventPlayFootStepSound_Parms
{
	int                                                FootDown;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawnHeroAssassin.CanCapObjective
// [0x00020002] 
struct ADVPawnHeroAssassin_execCanCapObjective_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPawnHeroAssassin.ShouldDisplayOnHud
// [0x00020102] 
struct ADVPawnHeroAssassin_execShouldDisplayOnHud_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPawnHeroAssassin.TakeAttack
// [0x00420002] 
struct ADVPawnHeroAssassin_execTakeAttack_Parms
{
	class UDVAttack*                                   Attack;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function ForgeGame.DVPawnHeroAssassin.Tick
// [0x00020102] 
struct ADVPawnHeroAssassin_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawnHeroAssassin.PlayBlinded
// [0x00020102] 
struct ADVPawnHeroAssassin_execPlayBlinded_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             Player;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Scalar;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnHeroAssassin.SetPostProcess
// [0x00020102] 
struct ADVPawnHeroAssassin_execSetPostProcess_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             Player;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnHeroAssassin.SetStealth
// [0x00820102] 
struct ADVPawnHeroAssassin_execSetStealth_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct ADVPawn_FSAttachment                     CurAttachment;                                    		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnHeroAssassin.SetSkin
// [0x00020102] 
struct ADVPawnHeroAssassin_execSetSkin_Parms
{
};

// Function ForgeGame.DVPawnHeroAssassin.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVPawnHeroAssassin_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVLogEntry.Destroyed
// [0x00020002] 
struct UDVLogEntry_execDestroyed_Parms
{
};

// Function ForgeGame.DVLogEntry.Report
// [0x00820002] 
struct UDVLogEntry_execReport_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  ReportString;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FSDamage                                 CurDamage;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	// class UDVBuff*                                  CurBuff;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FSStatChange                             CurStat;                                          		// 0x0024 (0x0018) [0x0000000000000000]              
};

// Function ForgeGame.DVLogEntry.LogMiss
// [0x00020002] 
struct UDVLogEntry_execLogMiss_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityPuncture.Reset
// [0x00020002] 
struct ADVAbilityPuncture_execReset_Parms
{
};

// Function ForgeGame.DVAbilityPuncture.HotTick
// [0x00840003] ( FUNC_Final )
struct ADVAbilityPuncture_execHotTick_Parms
{
	// struct FPunctureStack                           Stack;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityPuncture.SendHot
// [0x00020000] 
struct ADVAbilityPuncture_execSendHot_Parms
{
	class ADVPawn*                                     HotTarget;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityPuncture.ClientRemoveAllStacks
// [0x010201C2] 
struct ADVAbilityPuncture_execClientRemoveAllStacks_Parms
{
	class ADVPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityPuncture.ClientRemoveStack
// [0x010201C2] 
struct ADVAbilityPuncture_execClientRemoveStack_Parms
{
	class ADVPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityPuncture.ClientAddStack
// [0x010201C2] 
struct ADVAbilityPuncture_execClientAddStack_Parms
{
	class ADVPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityPuncture.StackCountForPawn
// [0x00020002] 
struct ADVAbilityPuncture_execStackCountForPawn_Parms
{
	class ADVPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             StackCounter;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityPuncture.RemoveAllStacks
// [0x00020002] 
struct ADVAbilityPuncture_execRemoveAllStacks_Parms
{
	class ADVPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             StacksRemoved;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityPuncture.RemoveStack
// [0x00020002] 
struct ADVAbilityPuncture_execRemoveStack_Parms
{
	class ADVPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityPuncture.UpdateStacks
// [0x00020002] 
struct ADVAbilityPuncture_execUpdateStacks_Parms
{
};

// Function ForgeGame.DVAbilityPuncture.FireAbility
// [0x00880002] 
struct ADVAbilityPuncture_execFireAbility_Parms
{
	// struct FPunctureStack                           NewPunctureStack;                                 		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityHitscan.FireAbility
// [0x00080002] 
struct ADVAbilityHitscan_execFireAbility_Parms
{
	// float                                           AttackDamage;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityHitscan.PostBeginPlay
// [0x00020102] 
struct ADVAbilityHitscan_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVAbilityHitscan.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVAbilityHitscan_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawnHeroPathfinder.TakeAttack
// [0x00420002] 
struct ADVPawnHeroPathfinder_execTakeAttack_Parms
{
	class UDVAttack*                                   Attack;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function ForgeGame.DVPawnHeroPathfinder.CanCapObjective
// [0x00020002] 
struct ADVPawnHeroPathfinder_execCanCapObjective_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPawnHeroPathfinder.ShouldDisplayOnHud
// [0x00020102] 
struct ADVPawnHeroPathfinder_execShouldDisplayOnHud_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPawnHeroPathfinder.SetCamouflaged
// [0x00820102] 
struct ADVPawnHeroPathfinder_execSetCamouflaged_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct ADVPawn_FSAttachment                     CurAttachment;                                    		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnHeroPathfinder.SetPostProcess
// [0x00020102] 
struct ADVPawnHeroPathfinder_execSetPostProcess_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             Player;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVPawnHeroPathfinder.SetSkin
// [0x00020102] 
struct ADVPawnHeroPathfinder_execSetSkin_Parms
{
};

// Function ForgeGame.DVPawnHeroPathfinder.Tick
// [0x00020102] 
struct ADVPawnHeroPathfinder_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawnHeroPathfinder.PostBeginPlay
// [0x00020102] 
struct ADVPawnHeroPathfinder_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVPawnHeroPathfinder.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVPawnHeroPathfinder_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGameInfoTraining.AutoBalanceTeams
// [0x00020002] 
struct AForgeGameInfoTraining_execAutoBalanceTeams_Parms
{
};

// Function ForgeGame.ForgeGameInfoTraining.StartBots
// [0x00020002] 
struct AForgeGameInfoTraining_execStartBots_Parms
{
	// class ADVDummyController*                       P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoTraining.SpawnDefaultPawnFor
// [0x00020002] 
struct AForgeGameInfoTraining_execSpawnDefaultPawnFor_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            StartSpot;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGameInfoTraining.SetupKismet
// [0x00020002] 
struct AForgeGameInfoTraining_execSetupKismet_Parms
{
	// class USequence*                                GameSeq;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                AllSeqEvents;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoTraining.ChangeTeam
// [0x00020002] 
struct AForgeGameInfoTraining_execChangeTeam_Parms
{
	class AController*                                 Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                N;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bNewTeam : 1;                                     		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGameInfoTraining.CheckTowerActivation
// [0x00020000] 
struct AForgeGameInfoTraining_execCheckTowerActivation_Parms
{
};

// Function ForgeGame.ForgeGameInfoTraining.OneTimeMapSetup
// [0x00020002] 
struct AForgeGameInfoTraining_execOneTimeMapSetup_Parms
{
	// class ADVTower*                                 CurTower;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoTraining.HandleSeamlessTravelPlayer
// [0x00420802] ( FUNC_Event )
struct AForgeGameInfoTraining_eventHandleSeamlessTravelPlayer_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function ForgeGame.ForgeGameInfoTraining.PostSeamlessTravel
// [0x00020802] ( FUNC_Event )
struct AForgeGameInfoTraining_eventPostSeamlessTravel_Parms
{
};

// Function ForgeGame.ForgeGameInfoTraining.PostLogin
// [0x00020802] ( FUNC_Event )
struct AForgeGameInfoTraining_eventPostLogin_Parms
{
	class APlayerController*                           NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGameInfoTraining.GetDeathTimerLength
// [0x00020002] 
struct AForgeGameInfoTraining_execGetDeathTimerLength_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGameInfoCTF.WinningTeamId
// [0x00020002] 
struct AForgeGameInfoCTF_execWinningTeamId_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGameInfoCTF.ScoreKill
// [0x00020002] 
struct AForgeGameInfoCTF_execScoreKill_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Other;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVTeamInfo*                              KillerTeam;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoCTF.FlagCaptured
// [0x00020002] 
struct AForgeGameInfoCTF_execFlagCaptured_Parms
{
	class ADVFlag*                                     TheFlag;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVTower*                                 CurTower;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             ExtraPoints;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoCTF.OneTimeMapSetup
// [0x00020002] 
struct AForgeGameInfoCTF_execOneTimeMapSetup_Parms
{
	// class ADVFlagStand*                             CurFlagStand;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoCTF.MatchFinished
// [0x00020002] 
struct AForgeGameInfoCTF_execMatchFinished_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoCTF.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct AForgeGameInfoCTF_eventPostBeginPlay_Parms
{
};

// Function ForgeGame.DVSmokeCloud.Tick
// [0x00020102] 
struct ADVSmokeCloud_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVSmokeCloud.PostBeginPlay
// [0x00020102] 
struct ADVSmokeCloud_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVFlag.Throw
// [0x00820002] 
struct ADVFlag_execThrow_Parms
{
	// struct FVector                                  ViewPointLocation;                                		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ThrowStart;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  SuggestedTossVelocity;                            		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewPointRotation;                                		// 0x0054 (0x000C) [0x0000000000000000]              
};

// Function ForgeGame.DVFlag.Captured
// [0x00020002] 
struct ADVFlag_execCaptured_Parms
{
};

// Function ForgeGame.DVFlag.ReturnFlag
// [0x00020102] 
struct ADVFlag_execReturnFlag_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVFlag.DropFlag
// [0x00020102] 
struct ADVFlag_execDropFlag_Parms
{
};

// Function ForgeGame.DVFlag.SetupColorblindMode
// [0x00020102] 
struct ADVFlag_execSetupColorblindMode_Parms
{
};

// Function ForgeGame.DVFlag.Tick
// [0x00820102] 
struct ADVFlag_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   NewTeamConfigValue;                               		// 0x0004 (0x0001) [0x0000000000000000]              
	// struct FVector                                  MyLocation;                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           DistanceToFlag;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVFlag.RemoveAttachment
// [0x00820102] 
struct ADVFlag_execRemoveAttachment_Parms
{
	// struct FRotator                                 NoRotation;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function ForgeGame.DVFlag.AttachToCarryingHero
// [0x00020102] 
struct ADVFlag_execAttachToCarryingHero_Parms
{
};

// Function ForgeGame.DVFlag.Touch
// [0x00020802] ( FUNC_Event )
struct ADVFlag_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVFlag.SetOwnerStats
// [0x00020002] 
struct ADVFlag_execSetOwnerStats_Parms
{
};

// Function ForgeGame.DVFlag.PostBeginPlay
// [0x00020102] 
struct ADVFlag_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVFlag.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVFlag_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityStealth.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityStealth_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityStealth.LeaveStealth
// [0x00020002] 
struct ADVAbilityStealth_execLeaveStealth_Parms
{
};

// Function ForgeGame.DVAbilityStealth.FireAbility
// [0x00080002] 
struct ADVAbilityStealth_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityStealth.ReadyToActivate
// [0x00020102] 
struct ADVAbilityStealth_execReadyToActivate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVAbilityCamouflage.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityCamouflage_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityCamouflage.LeaveCamo
// [0x00020002] 
struct ADVAbilityCamouflage_execLeaveCamo_Parms
{
};

// Function ForgeGame.DVAbilityCamouflage.ModifyDefense
// [0x00420002] 
struct ADVAbilityCamouflage_execModifyDefense_Parms
{
	TArray< struct FSDamage >                          DamageTaken;                                      		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ProtectionDone;                                   		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDVAttack*                                   IncomingAttack;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADVPawn*                                     Defender;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityCamouflage.SwapWithPawn
// [0x00820002] 
struct ADVAbilityCamouflage_execSwapWithPawn_Parms
{
	class ADVPawn*                                     SwapTarget;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  TempLocation;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityCamouflage.FireAbility
// [0x00080002] 
struct ADVAbilityCamouflage_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityCamouflage.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVAbilityCamouflage_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawnHeroPyromancer.Landed
// [0x00020902] ( FUNC_Event )
struct ADVPawnHeroPyromancer_eventLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawnHeroWarden.Died
// [0x00020002] 
struct ADVPawnHeroWarden_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPawnHeroWarden.DoJump
// [0x00020002] 
struct ADVPawnHeroWarden_execDoJump_Parms
{
	unsigned long                                      bUpdating : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVPawnHeroWarden.Tick
// [0x00020102] 
struct ADVPawnHeroWarden_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawnHeroWarden.ReplicatedEvent
// [0x00020102] 
struct ADVPawnHeroWarden_execReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityToggleAOE.PerTickEffect
// [0x00024000] 
struct ADVAbilityToggleAOE_execPerTickEffect_Parms
{
	class ADVPawn*                                     CurPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      SecondRun : 1;                                    		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.DVAbilityToggleAOE.Tick
// [0x00020102] 
struct ADVAbilityToggleAOE_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityToggle.Reset
// [0x00020002] 
struct ADVAbilityToggle_execReset_Parms
{
};

// Function ForgeGame.DVAbilityToggle.PlayCastEffect
// [0x00020102] 
struct ADVAbilityToggle_execPlayCastEffect_Parms
{
};

// Function ForgeGame.DVPawnHeroRavager.UpdateFocusAnimSetsTimer
// [0x00020102] 
struct ADVPawnHeroRavager_execUpdateFocusAnimSetsTimer_Parms
{
};

// Function ForgeGame.DVPawnHeroRavager.UpdateFocusAnimSets
// [0x00020102] 
struct ADVPawnHeroRavager_execUpdateFocusAnimSets_Parms
{
};

// Function ForgeGame.DVPawnHeroRavager.SetCurrentFocus
// [0x00020102] 
struct ADVPawnHeroRavager_execSetCurrentFocus_Parms
{
	unsigned char                                      NewFocus;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawnHeroRavager.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVPawnHeroRavager_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVPawnHeroRavager.PostBeginPlay
// [0x00020102] 
struct ADVPawnHeroRavager_execPostBeginPlay_Parms
{
};

// Function ForgeGame.ForgeGFxHUD.ShowTutorialMisc
// [0x00024002] 
struct UForgeGFxHUD_execShowTutorialMisc_Parms
{
	struct FString                                     MiscItem;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class AActor*                                      TheSubject;                                       		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FString                                  NewTitle;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  FullDescription;                                  		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           CurrentTime;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	// unsigned long                                   ShowMessage : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    FoundBindName;                                    		// 0x0030 (0x0008) [0x0000000000000000]              
	// class ADVPawnHero*                              TheHero;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.ShowTutorialAbility
// [0x00020002] 
struct UForgeGFxHUD_execShowTutorialAbility_Parms
{
	int                                                AbilityIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  CurAbilityName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  FullAbilityDescription;                           		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  AbilityLocalizationPath;                          		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ADVAbility*                               CurAbilityArchetype;                              		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FName                                    FoundBindName;                                    		// 0x002C (0x0008) [0x0000000000000000]              
	// unsigned char                                   TheChosenFocus;                                   		// 0x0034 (0x0001) [0x0000000000000000]              
	// struct FString                                  CurFocusName;                                     		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxHUD.SetupTipsWindow
// [0x00824002] 
struct UForgeGFxHUD_execSetupTipsWindow_Parms
{
	struct FString                                     NewTitle;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     NewDescription;                                   		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      IsAbilityHint : 1;                                		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       KeyName;                                          		// 0x001C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0024 (0x002C) [0x0000000000000000]              
	// float                                           YPos;                                             		// 0x0050 (0x0004) [0x0000000000000000]              
	// float                                           IconSize;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           AbilityNudge;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.UpdateTips
// [0x00020002] 
struct UForgeGFxHUD_execUpdateTips_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           CurrentTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.UpdateHelp
// [0x00820002] 
struct UForgeGFxHUD_execUpdateHelp_Parms
{
	// struct FName                                    FoundBindName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           IconSize;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x000C (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.UpdateTutorial
// [0x00020002] 
struct UForgeGFxHUD_execUpdateTutorial_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   ShowingTip : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeGFxHUD.DisplayKeyDetails
// [0x00020002] 
struct UForgeGFxHUD_execDisplayKeyDetails_Parms
{
	class UGFxObject*                                  KeyNameTF;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  KeyBackgroundMC;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       TheKey;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxHUD.UpdateVoiceNotifications
// [0x00020002] 
struct UForgeGFxHUD_execUpdateVoiceNotifications_Parms
{
	class ADVGameReplicationInfo*                      TheGRI;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPlayerController*                      DVPC;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             LP;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< class ADVPlayerReplicationInfo* >       TalkingPRIs;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           CurrentTime;                                      		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.UpdateCrosshair
// [0x00020002] 
struct UForgeGFxHUD_execUpdateCrosshair_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           CurrentTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.AttackHitEnemy
// [0x00020002] 
struct UForgeGFxHUD_execAttackHitEnemy_Parms
{
	class ADVPawn*                                     EnemyHit;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      IsHeal : 1;                                       		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ExactlyTargetted : 1;                             		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             Counter;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.PulseCrosshair
// [0x00024002] 
struct UForgeGFxHUD_execPulseCrosshair_Parms
{
	class ADVPawn*                                     TheHitPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      IsFriendly : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.ShowPawnCasting
// [0x00020002] 
struct UForgeGFxHUD_execShowPawnCasting_Parms
{
	class ADVPawnHero*                                 CastingPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADVAbility*                                  TheAbility;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.AddPawnHealthChange
// [0x00824002] 
struct UForgeGFxHUD_execAddPawnHealthChange_Parms
{
	class ADVPawn*                                     TheReceivingPawn;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageAmount;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     MissText;                                         		// 0x0008 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             CombatTextCounter;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             OldestCounter;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           CurTime;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           OldestTime;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// unsigned long                                   FoundSlot : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UGFxObject*                               ChosenNumberContainerMC;                          		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0030 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.RegisterHeroPawn
// [0x00020002] 
struct UForgeGFxHUD_execRegisterHeroPawn_Parms
{
	class ADVPawn*                                     NewPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.DeRegisterPRI
// [0x00020002] 
struct UForgeGFxHUD_execDeRegisterPRI_Parms
{
	class ADVPlayerReplicationInfo*                    OldPRI;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.RegisterPRI
// [0x00820002] 
struct UForgeGFxHUD_execRegisterPRI_Parms
{
	class ADVPlayerReplicationInfo*                    NewPRI;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             ChosenIndex;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FSCombatIcons                            NewCombatStruct;                                  		// 0x000C (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxHUD.ConfigForRes
// [0x00820002] 
struct UForgeGFxHUD_execConfigForRes_Parms
{
	int                                                SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0008 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.HideWorldMessage
// [0x00020002] 
struct UForgeGFxHUD_execHideWorldMessage_Parms
{
	class UDVSeqAct_DrawText*                          TheOwningKismetNode;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.ShowWorldMessage
// [0x00824002] 
struct UForgeGFxHUD_execShowWorldMessage_Parms
{
	struct FString                                     NewMessage;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class AActor*                                      NewTarget;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UDVSeqAct_DrawText*                          NewOwningKismetNode;                              		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewDuration;                                      		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NewFontSize;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             Counter;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             ChosenIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FSWorldMessage                           TheNewWorldMessage;                               		// 0x0024 (0x001C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.UpdateWorldMessages
// [0x00820002] 
struct UForgeGFxHUD_execUpdateWorldMessages_Parms
{
	float                                              CurrentWorldTime;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  CameraLocation;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CameraRotation;                                   		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           TargetDistance;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           MessageDrawScale;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  CanvasLocation;                                   		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TestDirection;                                    		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0040 (0x002C) [0x0000000000000000]              
	// class ADVPlayerController*                      PC;                                               		// 0x006C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.UpdateHeroCastBar
// [0x00820002] 
struct UForgeGFxHUD_execUpdateHeroCastBar_Parms
{
	int                                                HeroIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0004 (0x002C) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FString                                  AbilityName;                                      		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             AbilitySlot;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               AbilityIconMC;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	// class ADVPawnHero*                              BlockingHero;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.UpdateWorldIcons
// [0x00820002] 
struct UForgeGFxHUD_execUpdateWorldIcons_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             HitscanRange;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             AbilityCounter;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  WorldLocation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// float                                           IconsScale;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  CanvasLocation;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	// float                                           DestX;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           DestY;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0030 (0x002C) [0x0000000000000000]              
	// struct FString                                  HeroNameString;                                   		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  HeroHealthString;                                 		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  HeroStacksString;                                 		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  HeroTitleString;                                  		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             PawnHealthPercent;                                		// 0x008C (0x0004) [0x0000000000000000]              
	// unsigned long                                   CanBeSeen : 1;                                    		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   IsSameTeam : 1;                                   		// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   ShouldShowTitle : 1;                              		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   CanSee : 1;                                       		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
	// class ADVPlayerController*                      PC;                                               		// 0x00A0 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.DrawObjectAtWorldLocation
// [0x00824002] 
struct UForgeGFxHUD_execDrawObjectAtWorldLocation_Parms
{
	class UGFxObject*                                  TheObject;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     TheWorldLocation;                                 		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewScale;                                         		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  CanvasLocation;                                   		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           DestX;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           DestY;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0028 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.UpdateFlagHints
// [0x00820002] 
struct UForgeGFxHUD_execUpdateFlagHints_Parms
{
	// class ADVPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVTeamInfo*                              MyTeam;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADVTeamInfo*                              EnemyTeam;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  CameraLocation;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TestDirection;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CameraRotation;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
	// unsigned long                                   IsPlayer : 1;                                     		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   EarlyOutFriendly : 1;                             		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   EarlyOutEnemy : 1;                                		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ADVGameReplicationInfo*                   TheGRI;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           FlagDistance;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           NewScale;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.UpdateFlagStandIcon
// [0x00820002] 
struct UForgeGFxHUD_execUpdateFlagStandIcon_Parms
{
	// class ADVPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVTeamInfo*                              MyTeam;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  CameraLocation;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TestDirection;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CameraRotation;                                   		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.PlayAward
// [0x00020002] 
struct UForgeGFxHUD_execPlayAward_Parms
{
	// struct FString                                  AwardTypeName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxHUD.UpdateAwardQueue
// [0x00820002] 
struct UForgeGFxHUD_execUpdateAwardQueue_Parms
{
	// float                                           CurTime;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FSHUDAward                               CurAward;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
	// unsigned long                                   HaveRemoved : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeGFxHUD.OnQueueAchievement
// [0x00820002] 
struct UForgeGFxHUD_execOnQueueAchievement_Parms
{
	unsigned char                                      AchievementType;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      AchievementLevel;                                 		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementXP;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementRequiredPoints;                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FSHUDAward                               NewAwardStruct;                                   		// 0x000C (0x0010) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.OnQueueAward
// [0x00820002] 
struct UForgeGFxHUD_execOnQueueAward_Parms
{
	unsigned char                                      MedalType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      MedalLevel;                                       		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                MedalXP;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MedalRequiredPoints;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FSHUDAward                               NewAwardStruct;                                   		// 0x000C (0x0010) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.HideKismetMessage
// [0x00020002] 
struct UForgeGFxHUD_execHideKismetMessage_Parms
{
};

// Function ForgeGame.ForgeGFxHUD.PlayKismetMessage
// [0x00820002] 
struct UForgeGFxHUD_execPlayKismetMessage_Parms
{
	struct FString                                     TheMessage;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              TheDuration;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0010 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.PlayMessage
// [0x00820002] 
struct UForgeGFxHUD_execPlayMessage_Parms
{
	// struct FASDisplayInfo                           DI;                                               		// 0x0000 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.UpdateMessageQueue
// [0x00820002] 
struct UForgeGFxHUD_execUpdateMessageQueue_Parms
{
	// struct FSHUDMessage                             CurMessage;                                       		// 0x0000 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   HaveRemoved : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeGFxHUD.OnQueueMessage
// [0x00824002] 
struct UForgeGFxHUD_execOnQueueMessage_Parms
{
	struct FString                                     NewMessage;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              NewDisplayPeriod;                                 		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FSHUDMessage                             NewMessageStruct;                                 		// 0x0010 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxHUD.DoTerminate
// [0x00020002] 
struct UForgeGFxHUD_execDoTerminate_Parms
{
};

// Function ForgeGame.ForgeGFxHUD.OnQueueTerminateMessage
// [0x00020002] 
struct UForgeGFxHUD_execOnQueueTerminateMessage_Parms
{
	struct FString                                     NewMessage;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxHUD.UpdateArcs
// [0x00820002] 
struct UForgeGFxHUD_execUpdateArcs_Parms
{
	// float                                           CurrentTime;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           FadedAlpha;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0008 (0x002C) [0x0000000000000000]              
	// class ADVPlayerController*                      ThePC;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.UpdateDVTowerBars
// [0x00820002] 
struct UForgeGFxHUD_execUpdateDVTowerBars_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0008 (0x002C) [0x0000000000000000]              
	// float                                           FriendlyOwnership;                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           EnemyOwnership;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
	// TArray< class ADVTower* >                       NewTowers;                                        		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxHUD.UpdateDMTeamInfo
// [0x00020002] 
struct UForgeGFxHUD_execUpdateDMTeamInfo_Parms
{
	// class ADVPlayerController*                      ThePC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVGameReplicationInfo*                   TheGRI;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADVTeamInfo*                              MyTeam;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADVTeamInfo*                              EnemyTeam;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.UpdateCTFTeamInfo
// [0x00020002] 
struct UForgeGFxHUD_execUpdateCTFTeamInfo_Parms
{
	// class ADVPlayerController*                      ThePC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVGameReplicationInfo*                   TheGRI;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADVTeamInfo*                              MyTeam;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADVTeamInfo*                              EnemyTeam;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.UpdateBlood
// [0x00020002] 
struct UForgeGFxHUD_execUpdateBlood_Parms
{
	// class ADVPlayerController*                      ThePC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.HideCalloutArrows
// [0x00020002] 
struct UForgeGFxHUD_execHideCalloutArrows_Parms
{
};

// Function ForgeGame.ForgeGFxHUD.OffScreen
// [0x00820002] 
struct UForgeGFxHUD_execOffScreen_Parms
{
	struct FVector                                     WorldLocation;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  ScreenLocation;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.UpdateCalloutArrows
// [0x00820002] 
struct UForgeGFxHUD_execUpdateCalloutArrows_Parms
{
	class ADVPlayerController*                         MyDVPC;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADVPawnHero*                                 MyPawn;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  TestDirection;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  CameraLocation;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CameraRotation;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
	// float                                           DotUp;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           DotLeft;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	// class ADVPawnHero*                              CurHero;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.HideDamageArrows
// [0x00020002] 
struct UForgeGFxHUD_execHideDamageArrows_Parms
{
};

// Function ForgeGame.ForgeGFxHUD.UpdateDamageArrows
// [0x00820002] 
struct UForgeGFxHUD_execUpdateDamageArrows_Parms
{
	class ADVPlayerController*                         MyDVPC;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           CurrentTime;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           DotUp;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           DotLeft;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  TestDirection;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CameraLocation;                                   		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CameraRotation;                                   		// 0x002C (0x000C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.AttackedFrom
// [0x00820002] 
struct UForgeGFxHUD_execAttackedFrom_Parms
{
	struct FVector                                     WorldLocation;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FSAttackLocation                         NewAttackLocation;                                		// 0x000C (0x0010) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.MyAbilityBlocked
// [0x00020002] 
struct UForgeGFxHUD_execMyAbilityBlocked_Parms
{
	class ADVAbility*                                  BlockedAbility;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADVPawn*                                     MissedPawn;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReasonFailed;                                     		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  MissedText;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxHUD.BlockWorked
// [0x00820002] 
struct UForgeGFxHUD_execBlockWorked_Parms
{
	class ADVAbility*                                  BlockedAbility;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FSBlockedAbility                         NewBlockedAbility;                                		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x000C (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.HideBlockFlash
// [0x00020002] 
struct UForgeGFxHUD_execHideBlockFlash_Parms
{
};

// Function ForgeGame.ForgeGFxHUD.ShowBlockFlash
// [0x00020002] 
struct UForgeGFxHUD_execShowBlockFlash_Parms
{
};

// Function ForgeGame.ForgeGFxHUD.UpdateBlockFlash
// [0x00820002] 
struct UForgeGFxHUD_execUpdateBlockFlash_Parms
{
	class ADVPlayerController*                         MyPC;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           CurrentTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ShuffleRatio;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x000C (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.UpdateKillMessages
// [0x00820002] 
struct UForgeGFxHUD_execUpdateKillMessages_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             InnerCounter;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           CurrentTime;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           DesiredHeight;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0014 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.SetKillPlayerName
// [0x00020002] 
struct UForgeGFxHUD_execSetKillPlayerName_Parms
{
	class UGFxObject*                                  PlayerNameTF;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADVPlayerReplicationInfo*                    ThePRI;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   MyTeamNum;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	// struct FString                                  TheNameString;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxHUD.AddKillMessage
// [0x00820002] 
struct UForgeGFxHUD_execAddKillMessage_Parms
{
	struct FString                                     KillerClass;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class ADVPlayerReplicationInfo*                    KillerPRI;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                KillingAbilityIndex;                              		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADVPlayerReplicationInfo*                    KilledPRI;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     KilledClass;                                      		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// unsigned long                                   FoundMessageToUse : 1;                            		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Counter;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             NumExistingMessages;                              		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             ChosenQueueCounter;                               		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           OldestMessageTime;                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0038 (0x002C) [0x0000000000000000]              
	// struct FString                                  KillCause;                                        		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxHUD.PlayCooldownFlash
// [0x00020002] 
struct UForgeGFxHUD_execPlayCooldownFlash_Parms
{
	// struct FString                                  CurAbilityName;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxHUD.UpdateCooldownFlashQueue
// [0x00820002] 
struct UForgeGFxHUD_execUpdateCooldownFlashQueue_Parms
{
	// struct FSAbilityCooldownOff                     CurCooldownFlash;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned long                                   HaveRemoved : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeGFxHUD.OnQueueCooldownFlash
// [0x00820002] 
struct UForgeGFxHUD_execOnQueueCooldownFlash_Parms
{
	int                                                AbilityIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FSAbilityCooldownOff                     TheAbilityCooldownFlash;                          		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.UpdateAbilityCooldown
// [0x00824002] 
struct UForgeGFxHUD_execUpdateAbilityCooldown_Parms
{
	struct FSAbilityIcon                               TheAbility;                                       		// 0x0000 (0x0040) [0x0000000000000080]              ( CPF_Parm )
	float                                              CooldownLength;                                   		// 0x0040 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              CooldownRatio;                                    		// 0x0044 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      FromGCD : 1;                                      		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x004C (0x002C) [0x0000000000000000]              
	// class ADVPlayerController*                      ThePC;                                            		// 0x0078 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.GetShortVersionOfKey
// [0x00022002] 
struct UForgeGFxHUD_execGetShortVersionOfKey_Parms
{
	struct FString                                     KeyName;                                          		// 0x0000 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  LocalizedName;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxHUD.GetCommaFormat
// [0x00022002] 
struct UForgeGFxHUD_execGetCommaFormat_Parms
{
	int                                                Value;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  OutputString;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  CurChar;                                          		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.GetTimerShortFormat
// [0x00022002] 
struct UForgeGFxHUD_execGetTimerShortFormat_Parms
{
	float                                              TimeSeconds;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Places;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  SecondsString;                                    		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.GetTimerFormat
// [0x00022002] 
struct UForgeGFxHUD_execGetTimerFormat_Parms
{
	float                                              TimeSeconds;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Places;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  SecondsString;                                    		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxHUD.GetClockFormat
// [0x00026002] 
struct UForgeGFxHUD_execGetClockFormat_Parms
{
	float                                              TimeSeconds;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      HideZeroes : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  OutputString;                                     		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Minutes;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             Hours;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// unsigned long                                   HoursHidden : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeGFxHUD.CheckColorblind
// [0x00020002] 
struct UForgeGFxHUD_execCheckColorblind_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.Tick
// [0x00820002] 
struct UForgeGFxHUD_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0004 (0x002C) [0x0000000000000000]              
	// class ADVPlayerController*                      ThePC;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             TrueAbilityIndex;                                 		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           GCDAmount;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           CurrentTime;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	// class ADVGameReplicationInfo*                   TheGRI;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	// struct FName                                    FoundBindName;                                    		// 0x0048 (0x0008) [0x0000000000000000]              
	// struct FString                                  CurAbilityName;                                   		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	// unsigned long                                   HasChosenTeam : 1;                                		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeGFxHUD.SetupAbilityIcons
// [0x00820002] 
struct UForgeGFxHUD_execSetupAbilityIcons_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             CurAbilitySlot;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             IconXPos;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             IconYPos;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  CurAbilityName;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASDisplayInfo                           DI;                                               		// 0x001C (0x002C) [0x0000000000000000]              
	// class ADVPlayerController*                      ThePC;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// class ADVAbility*                               CurAbilityArchetype;                              		// 0x004C (0x0004) [0x0000000000000000]              
	// TArray< int >                                   IconXPosCache;                                    		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxHUD.SetupResourceBars
// [0x00020002] 
struct UForgeGFxHUD_execSetupResourceBars_Parms
{
};

// Function ForgeGame.ForgeGFxHUD.SetupHUDForClass
// [0x00020002] 
struct UForgeGFxHUD_execSetupHUDForClass_Parms
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxHUD.ApplySteamCloudSettings
// [0x00020002] 
struct UForgeGFxHUD_execApplySteamCloudSettings_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             CurSettingIndex;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FString                                  CurSettingValue;                                  		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxHUD.ConfigAbilityIcons
// [0x00820002] 
struct UForgeGFxHUD_execConfigAbilityIcons_Parms
{
	// int                                             SpellIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0004 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxHUD.ConfigHUD
// [0x00820002] 
struct UForgeGFxHUD_execConfigHUD_Parms
{
	// class AWorldInfo*                               TheWorldInfo;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   CurPRI;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               NewKillMessage;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0010 (0x002C) [0x0000000000000000]              
	// struct FName                                    FoundBindName;                                    		// 0x003C (0x0008) [0x0000000000000000]              
	// float                                           TotalHeight;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	// struct FString                                  CurText;                                          		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxHUD.Start
// [0x00024002] 
struct UForgeGFxHUD_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVSkeletalMeshAttachment.ToggleHidden
// [0x00020102] 
struct ADVSkeletalMeshAttachment_execToggleHidden_Parms
{
	unsigned long                                      ShouldHide : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVSkeletalMeshAttachment.ForceMipLevels
// [0x00020102] 
struct ADVSkeletalMeshAttachment_execForceMipLevels_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVSkeletalMeshAttachment.NotifyOwnerDied
// [0x00820102] 
struct ADVSkeletalMeshAttachment_execNotifyOwnerDied_Parms
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  SocketLocation;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRotation;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function ForgeGame.DVSkeletalMeshAttachment.PostInitAnimTree
// [0x00020102] 
struct ADVSkeletalMeshAttachment_execPostInitAnimTree_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function ForgeGame.DVSkeletalMeshAttachment.Destroyed
// [0x00020102] 
struct ADVSkeletalMeshAttachment_execDestroyed_Parms
{
};

// Function ForgeGame.DVSkeletalMeshAttachment.GetComponent
// [0x00020102] 
struct ADVSkeletalMeshAttachment_execGetComponent_Parms
{
	class UPrimitiveComponent*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function ForgeGame.DVSkeletalMeshAttachment.PostBeginPlay
// [0x00020102] 
struct ADVSkeletalMeshAttachment_execPostBeginPlay_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVMeshAttachment.PlayDetermined
// [0x00020102] 
struct ADVMeshAttachment_execPlayDetermined_Parms
{
	unsigned long                                      Determined : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceConstant*                CurMaterial;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVMeshAttachment.SetStealth
// [0x00020102] 
struct ADVMeshAttachment_execSetStealth_Parms
{
	unsigned long                                      IsStealthed : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      IsCamouflaged : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVMeshAttachment.PostBeginPlay
// [0x00020102] 
struct ADVMeshAttachment_execPostBeginPlay_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityStrike.PlayAnim
// [0x00020102] 
struct ADVAbilityStrike_execPlayAnim_Parms
{
};

// Function ForgeGame.DVAbilityPanterasKiss.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityPanterasKiss_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityPanterasKiss.Reset
// [0x00020002] 
struct ADVAbilityPanterasKiss_execReset_Parms
{
};

// Function ForgeGame.DVAbilityPanterasKiss.DamageTick
// [0x00020002] 
struct ADVAbilityPanterasKiss_execDamageTick_Parms
{
};

// Function ForgeGame.DVAbilityPanterasKiss.ModifyDefense
// [0x00420002] 
struct ADVAbilityPanterasKiss_execModifyDefense_Parms
{
	TArray< struct FSDamage >                          DamageTaken;                                      		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ProtectionDone;                                   		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDVAttack*                                   IncomingAttack;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADVPawn*                                     Defender;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityPanterasKiss.FireAbility
// [0x00080002] 
struct ADVAbilityPanterasKiss_execFireAbility_Parms
{
	// class ADVPawnHeroAssassin*                      Assassin;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NumberOfStacks;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityPanterasKiss.PostBeginPlay
// [0x00020102] 
struct ADVAbilityPanterasKiss_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVAbilityShadowShift.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityShadowShift_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityShadowShift.FireAbility
// [0x00080002] 
struct ADVAbilityShadowShift_execFireAbility_Parms
{
	// class ADVPawn*                                  CurPawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityDisorientingStrike.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityDisorientingStrike_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityDisorientingStrike.ModifyAttack
// [0x00020002] 
struct ADVAbilityDisorientingStrike_execModifyAttack_Parms
{
	class UDVAttack*                                   OutGoingAttack;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityDisorientingStrike.FireAbility
// [0x00080002] 
struct ADVAbilityDisorientingStrike_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityDisorientingStrike.PostBeginPlay
// [0x00020102] 
struct ADVAbilityDisorientingStrike_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVAbilityDisorientingStrike.PlayFireEffect
// [0x00020102] 
struct ADVAbilityDisorientingStrike_execPlayFireEffect_Parms
{
	class ADVPawn*                                     HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityDisorientingStrike.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVAbilityDisorientingStrike_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityShadowLeap.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityShadowLeap_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityShadowLeap.ModifyAttack
// [0x00020002] 
struct ADVAbilityShadowLeap_execModifyAttack_Parms
{
	class UDVAttack*                                   OutGoingAttack;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityShadowLeap.PerformAbility
// [0x00880002] 
struct ADVAbilityShadowLeap_execPerformAbility_Parms
{
	// struct FRotator                                 NewRotation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLocation;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	// class AActor*                                   CurActor;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityShadowLeap.ReadyToActivate
// [0x00020102] 
struct ADVAbilityShadowLeap_execReadyToActivate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVAbilityShadowLeap.PlayHitEffect
// [0x00020102] 
struct ADVAbilityShadowLeap_execPlayHitEffect_Parms
{
	class ADVPawn*                                     HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityShadowLeap.PostBeginPlay
// [0x00020102] 
struct ADVAbilityShadowLeap_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVAbilityShadowLeap.PlayFireEffect
// [0x00020102] 
struct ADVAbilityShadowLeap_execPlayFireEffect_Parms
{
	class ADVPawn*                                     HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityShadowLeap.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVAbilityShadowLeap_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilitySmokeCloud.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilitySmokeCloud_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilitySmokeCloud.Reset
// [0x00020002] 
struct ADVAbilitySmokeCloud_execReset_Parms
{
};

// Function ForgeGame.DVAbilitySmokeCloud.FireAbility
// [0x00880002] 
struct ADVAbilitySmokeCloud_execFireAbility_Parms
{
	// class ADVPawnHeroAssassin*                      Assassin;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  CloudLocation;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilitySmokeCloud.PostBeginPlay
// [0x00020102] 
struct ADVAbilitySmokeCloud_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVAbilitySmokeCloud.ReadyToActivate
// [0x00020102] 
struct ADVAbilitySmokeCloud_execReadyToActivate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVProjectile.Explode
// [0x00820102] 
struct ADVProjectile_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  TraceHitLocation;                                 		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceHitNormal;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0048 (0x001C) [0x0000000000000000]              
	// class UDVPhysicalMaterialProperties*            DVPhysicalMaterialProperties;                     		// 0x0064 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0068 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x006C (0x0004) [0x0000000000000000]              
	// struct FRotator                                 ImpactRotation;                                   		// 0x0070 (0x000C) [0x0000000000000000]              
	// class ADVPawn*                                  DVPawn;                                           		// 0x007C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVProjectile.Landed
// [0x00020902] ( FUNC_Event )
struct ADVProjectile_eventLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVProjectile.ProjectileMisses
// [0x00020102] 
struct ADVProjectile_execProjectileMisses_Parms
{
	class ADVPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADVPawnHero*                              Hero;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVProjectile.ProcessTouch
// [0x00020102] 
struct ADVProjectile_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawn*                                  Pawn;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	// class ADVAbilityProjectile*                     Ability;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVProjectile.StopsProjectile
// [0x00020102] 
struct ADVProjectile_execStopsProjectile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVProjectile.ProjectileHoming
// [0x00020102] 
struct ADVProjectile_execProjectileHoming_Parms
{
};

// Function ForgeGame.DVProjectile.Tick
// [0x00020102] 
struct ADVProjectile_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVProjectile.PostBeginPlay
// [0x00020102] 
struct ADVProjectile_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVAbilityPoisonedArrow.Tick
// [0x00820102] 
struct ADVAbilityPoisonedArrow_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FAffectedPawn                            CurAffectedPawn;                                  		// 0x0004 (0x0014) [0x0000000000000000]              
	// int                                             DistanceMoved;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// class UDVAttack*                                MoveAttack;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityPoisonedArrow.ProjectileHit
// [0x00820002] 
struct ADVAbilityPoisonedArrow_execProjectileHit_Parms
{
	class ADVPawn*                                     HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ADVProjectile*                               Projectile;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FAffectedPawn                            NewAffectedPawn;                                  		// 0x0020 (0x0014) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityVolley.ProjectileHit
// [0x00020002] 
struct ADVAbilityVolley_execProjectileHit_Parms
{
	class ADVPawn*                                     HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ADVProjectile*                               Projectile;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityVolley.FireAbility
// [0x00080002] 
struct ADVAbilityVolley_execFireAbility_Parms
{
	// class ADVProjectile*                            Projectile;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVPawn*                                  CurPawn;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityTrap.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityTrap_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityTrap.ActivateTrap
// [0x00020002] 
struct ADVAbilityTrap_execActivateTrap_Parms
{
	struct FVector                                     TrapLocation;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ADVPawnHero*                                 OtherHero;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityTrap.Reset
// [0x00020002] 
struct ADVAbilityTrap_execReset_Parms
{
};

// Function ForgeGame.DVAbilityTrap.FireAbility
// [0x00080002] 
struct ADVAbilityTrap_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityTrap.PlayFireEffect
// [0x00020102] 
struct ADVAbilityTrap_execPlayFireEffect_Parms
{
	class ADVPawn*                                     HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityTrap.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVAbilityTrap_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVTrap.Landed
// [0x00020902] ( FUNC_Event )
struct ADVTrap_eventLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVTrap.Tick
// [0x00020102] 
struct ADVTrap_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawnHero*                              OtherHero;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVTrap.SetStealth
// [0x00020102] 
struct ADVTrap_execSetStealth_Parms
{
	// class APawn*                                    LocalPawn;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVTrap.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct ADVTrap_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function ForgeGame.DVTrap.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADVTrap_eventPostBeginPlay_Parms
{
};

// Function ForgeGame.DVTrap.PlayDrop
// [0x00020102] 
struct ADVTrap_execPlayDrop_Parms
{
};

// Function ForgeGame.DVTrap.PlayTigger
// [0x00020102] 
struct ADVTrap_execPlayTigger_Parms
{
};

// Function ForgeGame.DVTrap.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVTrap_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityCaltrips.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityCaltrips_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityCaltrips.ActivateTrap
// [0x00020002] 
struct ADVAbilityCaltrips_execActivateTrap_Parms
{
	struct FVector                                     TrapLocation;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ADVPawnHero*                                 OtherHero;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityBlindingArrow.ProjectileHit
// [0x00020002] 
struct ADVAbilityBlindingArrow_execProjectileHit_Parms
{
	class ADVPawn*                                     HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ADVProjectile*                               Projectile;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           DistanceTraveled;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityExplosiveTrap.ActivateTrap
// [0x00020002] 
struct ADVAbilityExplosiveTrap_execActivateTrap_Parms
{
	struct FVector                                     TrapLocation;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ADVPawnHero*                                 OtherHero;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityCurseOfFlame.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityCurseOfFlame_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityCurseOfFlame.GetDescriptionNumbers
// [0x00022002] 
struct ADVAbilityCurseOfFlame_execGetDescriptionNumbers_Parms
{
	class ADVAbility*                                  AbilityArchetype;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      TheClass;                                         		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     StaticFriendlyColor;                              		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     StaticEnemyColor;                                 		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0020 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  OutputString;                                     		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ADVAbilityCurseOfFlame*                   CurseOfFlame;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityCurseOfFlame.Detonate
// [0x00020002] 
struct ADVAbilityCurseOfFlame_execDetonate_Parms
{
	// class ADVPawn*                                  CurPawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityCurseOfFlame.FireAbility
// [0x00080002] 
struct ADVAbilityCurseOfFlame_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityFlameBurst.FireAbility
// [0x00080002] 
struct ADVAbilityFlameBurst_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityFlameBurst.PlayFireEffect
// [0x00020102] 
struct ADVAbilityFlameBurst_execPlayFireEffect_Parms
{
	class ADVPawn*                                     RepHitPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawn*                                  CurPawn;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UParticleSystemComponent*                 HitEmitter;                                       		// 0x0008 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function ForgeGame.DVAbilityFlameBurst.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVAbilityFlameBurst_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityMoltenArmor.ModifyDefense
// [0x00420002] 
struct ADVAbilityMoltenArmor_execModifyDefense_Parms
{
	TArray< struct FSDamage >                          DamageTaken;                                      		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ProtectionDone;                                   		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDVAttack*                                   IncomingAttack;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADVPawn*                                     Defender;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityMoltenArmor.StopAbility
// [0x00020002] 
struct ADVAbilityMoltenArmor_execStopAbility_Parms
{
};

// Function ForgeGame.DVAbilityMoltenArmor.FireAbility
// [0x00080002] 
struct ADVAbilityMoltenArmor_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityMoltenArmor.PlayFireEffect
// [0x00020102] 
struct ADVAbilityMoltenArmor_execPlayFireEffect_Parms
{
	class ADVPawn*                                     RepHitPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawn*                                  CurPawn;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UParticleSystemComponent*                 HitEmitter;                                       		// 0x0008 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function ForgeGame.DVAbilityMoltenArmor.PlayFinishedCast
// [0x00020102] 
struct ADVAbilityMoltenArmor_execPlayFinishedCast_Parms
{
	// class UParticleSystemComponent*                 CastingEmitter;                                   		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function ForgeGame.DVAbilityMoltenArmor.PlayCastEffect
// [0x00020102] 
struct ADVAbilityMoltenArmor_execPlayCastEffect_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVSkeletalMeshAttachment*                DVSkeletalMeshAttachment;                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityMoltenArmor.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVAbilityMoltenArmor_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityWallOfFlame.Reset
// [0x00020002] 
struct ADVAbilityWallOfFlame_execReset_Parms
{
};

// Function ForgeGame.DVAbilityWallOfFlame.FireAbility
// [0x00880002] 
struct ADVAbilityWallOfFlame_execFireAbility_Parms
{
	// struct FVector                                  WallLocation;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 WallRotation;                                     		// 0x0024 (0x000C) [0x0000000000000000]              
	// class AActor*                                   CurActor;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVWallOfFlame_C.SetParticleSystemForAlignment
// [0x00024102] 
struct ADVWallOfFlame_C_execSetParticleSystemForAlignment_Parms
{
	unsigned long                                      ForceUpdate : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// unsigned long                                   IsOnSameTeam : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.DVWallOfFlame_C.Tick
// [0x00820102] 
struct ADVWallOfFlame_C_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawn*                                  CurPawn;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FPawnTime                                NewPawnTime;                                      		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.DVWallOfFlame_C.PostBeginPlay
// [0x00020102] 
struct ADVWallOfFlame_C_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVWallOfFlame_C.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVWallOfFlame_C_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityFireStorm.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityFireStorm_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityFireStorm.Tick
// [0x00020102] 
struct ADVAbilityFireStorm_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawn*                                  CurPawn;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityFireStorm.StopAbility
// [0x00080002] 
struct ADVAbilityFireStorm_execStopAbility_Parms
{
};

// Function ForgeGame.DVAbilityFireStorm.FireAbility
// [0x00080002] 
struct ADVAbilityFireStorm_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityFireStorm.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVAbilityFireStorm_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilitySpiritualBalance.FireAbility
// [0x00080002] 
struct ADVAbilitySpiritualBalance_execFireAbility_Parms
{
	// float                                           AttackDamage;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilitySpiritualBalance.PlayHitEffect
// [0x00020102] 
struct ADVAbilitySpiritualBalance_execPlayHitEffect_Parms
{
	class ADVPawn*                                     HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UParticleSystemComponent*                 HitEmitter;                                       		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function ForgeGame.DVAbilitySpiritualBond.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilitySpiritualBond_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilitySpiritualBond.UpdateBeamEmitter
// [0x00020102] 
struct ADVAbilitySpiritualBond_execUpdateBeamEmitter_Parms
{
	struct FVector                                     EndLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilitySpiritualBond.Tick
// [0x00020102] 
struct ADVAbilitySpiritualBond_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilitySpiritualBond.Deactivate
// [0x00020002] 
struct ADVAbilitySpiritualBond_execDeactivate_Parms
{
};

// Function ForgeGame.DVAbilitySpiritualBond.FireAbility
// [0x00080002] 
struct ADVAbilitySpiritualBond_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilitySpiritualBond.PostBeginPlay
// [0x00020102] 
struct ADVAbilitySpiritualBond_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVAbilitySpiritualBurden.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilitySpiritualBurden_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilitySpiritualBurden.Reset
// [0x00020002] 
struct ADVAbilitySpiritualBurden_execReset_Parms
{
};

// Function ForgeGame.DVAbilitySpiritualBurden.Tick
// [0x00020102] 
struct ADVAbilitySpiritualBurden_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilitySpiritualBurden.StopAbility
// [0x00020002] 
struct ADVAbilitySpiritualBurden_execStopAbility_Parms
{
};

// Function ForgeGame.DVAbilitySpiritualBurden.FireAbility
// [0x00080002] 
struct ADVAbilitySpiritualBurden_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilitySpiritualBurden.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVAbilitySpiritualBurden_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityBlessedAura.FireAbility
// [0x00080002] 
struct ADVAbilityBlessedAura_execFireAbility_Parms
{
	// class ADVPawn*                                  CurPawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityBlessedAura.PlayFireEffect
// [0x00020102] 
struct ADVAbilityBlessedAura_execPlayFireEffect_Parms
{
	class ADVPawn*                                     HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawn*                                  CurPawn;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UParticleSystemComponent*                 HitEmitter;                                       		// 0x0008 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UParticleSystemComponent*                 FireEmitter;                                      		// 0x000C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function ForgeGame.DVAbilityBlessedAura.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVAbilityBlessedAura_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityHeal.FireAbility
// [0x00080002] 
struct ADVAbilityHeal_execFireAbility_Parms
{
	// int                                             NumberOfStacks;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVPawnHeroShaman*                        Shaman;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilitySelf.FireAbility
// [0x00080002] 
struct ADVAbilitySelf_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityDomeOfProtection.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityDomeOfProtection_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityDomeOfProtection.Reset
// [0x00020002] 
struct ADVAbilityDomeOfProtection_execReset_Parms
{
};

// Function ForgeGame.DVAbilityDomeOfProtection.DomeKilled
// [0x00020002] 
struct ADVAbilityDomeOfProtection_execDomeKilled_Parms
{
	// class ADVPawn*                                  CurPawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityDomeOfProtection.ModifyDefense
// [0x00420002] 
struct ADVAbilityDomeOfProtection_execModifyDefense_Parms
{
	TArray< struct FSDamage >                          DamageTaken;                                      		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ProtectionDone;                                   		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDVAttack*                                   IncomingAttack;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADVPawn*                                     Defender;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           InDamage;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           OutDamage;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityDomeOfProtection.FireAbility
// [0x00880002] 
struct ADVAbilityDomeOfProtection_execFireAbility_Parms
{
	// struct FVector                                  SpawnLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function ForgeGame.DVDomeOfProtection_C.Destroyed
// [0x00020802] ( FUNC_Event )
struct ADVDomeOfProtection_C_eventDestroyed_Parms
{
};

// Function ForgeGame.DVDomeOfProtection_C.UnTouch
// [0x00020802] ( FUNC_Event )
struct ADVDomeOfProtection_C_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawnHero*                              Hero;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVDomeOfProtection_C.Touch
// [0x00020802] ( FUNC_Event )
struct ADVDomeOfProtection_C_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawnHero*                              Hero;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVDomeOfProtection_C.SetParticleSystemForAlignment
// [0x00024102] 
struct ADVDomeOfProtection_C_execSetParticleSystemForAlignment_Parms
{
	unsigned long                                      ForceUpdate : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// unsigned long                                   IsOnSameTeam : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.DVDomeOfProtection_C.Tick
// [0x00020102] 
struct ADVDomeOfProtection_C_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVDomeOfProtection_C.PostBeginPlay
// [0x00020102] 
struct ADVDomeOfProtection_C_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVDomeOfProtection_C.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVDomeOfProtection_C_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilitySelfAOE.FireAbility
// [0x00080002] 
struct ADVAbilitySelfAOE_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilitySelfAOE.PlayFireEffect
// [0x00020102] 
struct ADVAbilitySelfAOE_execPlayFireEffect_Parms
{
	class ADVPawn*                                     RepHitPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawn*                                  CurPawn;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UParticleSystemComponent*                 HitEmitter;                                       		// 0x0008 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function ForgeGame.DVAbilitySelfAOE.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVAbilitySelfAOE_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityVengeance.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityVengeance_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityVengeance.Reset
// [0x00020002] 
struct ADVAbilityVengeance_execReset_Parms
{
};

// Function ForgeGame.DVAbilityVengeance.Tick
// [0x00020102] 
struct ADVAbilityVengeance_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityVengeance.FireAbility
// [0x00080002] 
struct ADVAbilityVengeance_execFireAbility_Parms
{
	// class ADVPawn*                                  CurPawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityShockwave.FireAbility
// [0x00080002] 
struct ADVAbilityShockwave_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityChargingLeap.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityChargingLeap_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityChargingLeap.HitTarget
// [0x00020002] 
struct ADVAbilityChargingLeap_execHitTarget_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityChargingLeap.Tick
// [0x00020102] 
struct ADVAbilityChargingLeap_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityChargingLeap.PerformAbility
// [0x00080002] 
struct ADVAbilityChargingLeap_execPerformAbility_Parms
{
};

// Function ForgeGame.DVAbilityChargingLeap.PostBeginPlay
// [0x00020102] 
struct ADVAbilityChargingLeap_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVAbilityChargingLeap.ReplicatedEvent
// [0x00020102] 
struct ADVAbilityChargingLeap_execReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityShieldStorm.TriggerTouch
// [0x00020002] 
struct ADVAbilityShieldStorm_execTriggerTouch_Parms
{
	class ADVPawn*                                     OtherPawn;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityShieldStorm.Tick
// [0x00820102] 
struct ADVAbilityShieldStorm_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  AverageRotation;                                  		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityShieldStorm.Deactivate
// [0x00020002] 
struct ADVAbilityShieldStorm_execDeactivate_Parms
{
};

// Function ForgeGame.DVAbilityShieldStorm.PerformAbility
// [0x00080002] 
struct ADVAbilityShieldStorm_execPerformAbility_Parms
{
};

// Function ForgeGame.DVTriggerShieldStorm.Tick
// [0x00020102] 
struct ADVTriggerShieldStorm_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawn*                                  CurPawn;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityRaiseMorale.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityRaiseMorale_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityRaiseMorale.PerTickEffect
// [0x00824002] 
struct ADVAbilityRaiseMorale_execPerTickEffect_Parms
{
	class ADVPawn*                                     CurPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      SecondRun : 1;                                    		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FSStatChange                             ReplacementStat;                                  		// 0x0010 (0x0018) [0x0000000000000000]              
	// class ADVAbilityRaiseMorale*                    OtherRaiseMorale;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityRaiseMorale.FireAbility
// [0x00080002] 
struct ADVAbilityRaiseMorale_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityStandGround.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityStandGround_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityStandGround.ModifyDefense
// [0x00420002] 
struct ADVAbilityStandGround_execModifyDefense_Parms
{
	TArray< struct FSDamage >                          DamageTaken;                                      		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ProtectionDone;                                   		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDVAttack*                                   IncomingAttack;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADVPawn*                                     Defender;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityStandGround.Interrupt
// [0x00020002] 
struct ADVAbilityStandGround_execInterrupt_Parms
{
	unsigned long                                      SelfInterrupt : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVAbilityStandGround.FireAbility
// [0x00080002] 
struct ADVAbilityStandGround_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityStandGround.PerformAbility
// [0x00080002] 
struct ADVAbilityStandGround_execPerformAbility_Parms
{
};

// Function ForgeGame.DVAbilityProtectAllies.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityProtectAllies_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityProtectAllies.PerTickEffect
// [0x00824002] 
struct ADVAbilityProtectAllies_execPerTickEffect_Parms
{
	class ADVPawn*                                     CurPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      SecondRun : 1;                                    		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FSStatChange                             ReplacementStat;                                  		// 0x0010 (0x0018) [0x0000000000000000]              
	// class ADVAbilityProtectAllies*                  OtherProtectAllies;                               		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityProtectAllies.FireAbility
// [0x00080002] 
struct ADVAbilityProtectAllies_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityRavagerAttack.FireAbility
// [0x00080002] 
struct ADVAbilityRavagerAttack_execFireAbility_Parms
{
	// unsigned long                                   HitSomeone : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.DVAbilityRavagerAttack.PlayFireEffect
// [0x00020102] 
struct ADVAbilityRavagerAttack_execPlayFireEffect_Parms
{
	class ADVPawn*                                     RepHitPawnFire;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawn*                                  CurPawn;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UParticleSystemComponent*                 HitEmitter;                                       		// 0x0008 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function ForgeGame.DVAbilityRavagerAttack.PostBeginPlay
// [0x00020102] 
struct ADVAbilityRavagerAttack_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVAbilityRavagerAttack.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVAbilityRavagerAttack_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityRavagerFocus.FireAbility
// [0x00080002] 
struct ADVAbilityRavagerFocus_execFireAbility_Parms
{
	// class ADVPawnHeroRavager*                       Ravager;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityHook.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVAbilityHook_eventDestroyed_Parms
{
};

// Function ForgeGame.DVAbilityHook.PullPawn
// [0x00020102] 
struct ADVAbilityHook_execPullPawn_Parms
{
};

// Function ForgeGame.DVAbilityHook.Tick
// [0x00020102] 
struct ADVAbilityHook_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityHook.HookEnded
// [0x00020002] 
struct ADVAbilityHook_execHookEnded_Parms
{
};

// Function ForgeGame.DVAbilityHook.ProjectileHit
// [0x00020002] 
struct ADVAbilityHook_execProjectileHit_Parms
{
	class ADVPawn*                                     HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ADVProjectile*                               Projectile;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             PullDistance;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           PullTime;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityHook.FireAbility
// [0x00080002] 
struct ADVAbilityHook_execFireAbility_Parms
{
	// class ADVProjectile*                            Projectile;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityGrapple.HookEnded
// [0x00020002] 
struct ADVAbilityGrapple_execHookEnded_Parms
{
};

// Function ForgeGame.DVAbilityGrapple.PullPawn
// [0x00020102] 
struct ADVAbilityGrapple_execPullPawn_Parms
{
};

// Function ForgeGame.DVAbilityGrapple.ProjectileHit
// [0x00020002] 
struct ADVAbilityGrapple_execProjectileHit_Parms
{
	class ADVPawn*                                     HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ADVProjectile*                               Projectile;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             PullDistance;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           PullTime;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityChainSlap.FireAbility
// [0x00880002] 
struct ADVAbilityChainSlap_execFireAbility_Parms
{
	// class ADVPawn*                                  CurPawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0028 (0x000C) [0x0000000000000000]              
	// int                                             Distance;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityChainSlap.PlayFireEffect
// [0x00820102] 
struct ADVAbilityChainSlap_execPlayFireEffect_Parms
{
	class ADVPawn*                                     RepHitPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawn*                                  CurPawn;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityChainSlap.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVAbilityChainSlap_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityLift.Tick
// [0x00020102] 
struct ADVAbilityLift_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityLift.StopAbility
// [0x00020002] 
struct ADVAbilityLift_execStopAbility_Parms
{
};

// Function ForgeGame.DVAbilityLift.FireAbility
// [0x00080002] 
struct ADVAbilityLift_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityGravityOfWill.Tick
// [0x00020102] 
struct ADVAbilityGravityOfWill_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAbilityGravityOfWill.Interrupt
// [0x00020002] 
struct ADVAbilityGravityOfWill_execInterrupt_Parms
{
	unsigned long                                      SelfInterrupt : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVAbilityGravityOfWill.Reset
// [0x00020002] 
struct ADVAbilityGravityOfWill_execReset_Parms
{
};

// Function ForgeGame.DVAbilityGravityOfWill.StopPull
// [0x00020002] 
struct ADVAbilityGravityOfWill_execStopPull_Parms
{
};

// Function ForgeGame.DVAbilityGravityOfWill.FireAbility
// [0x00080002] 
struct ADVAbilityGravityOfWill_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityGravityOfWill.PerformAbility
// [0x00080002] 
struct ADVAbilityGravityOfWill_execPerformAbility_Parms
{
};

// Function ForgeGame.DVAbilityPainOfAllegiance.TickDamage
// [0x00020002] 
struct ADVAbilityPainOfAllegiance_execTickDamage_Parms
{
	// class ADVPawn*                                  CurPawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NearbyAllies;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityPainOfAllegiance.FireAbility
// [0x00080002] 
struct ADVAbilityPainOfAllegiance_execFireAbility_Parms
{
};

// Function ForgeGame.DVAbilityUnstuck.FireAbility
// [0x00080002] 
struct ADVAbilityUnstuck_execFireAbility_Parms
{
	// class ANavigationPoint*                         SpawnPoint;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.GenerateKickData
// [0x00422002] 
struct UForgeOnlineSubsystemDelegates_execGenerateKickData_Parms
{
	TArray< unsigned char >                            OutData;                                          		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FUniqueNetId                                KickedUniqueNetId;                                		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  Data;                                             		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  UniqueNetIdAsString;                              		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.GenerateJoinServerData
// [0x00422002] 
struct UForgeOnlineSubsystemDelegates_execGenerateJoinServerData_Parms
{
	TArray< unsigned char >                            OutData;                                          		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     ServerURL;                                        		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  Data;                                             		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.GetBestServerFromResults
// [0x00026002] 
struct UForgeOnlineSubsystemDelegates_execGetBestServerFromResults_Parms
{
	TArray< struct FOnlineGameSearchResult >           AllSearchResults;                                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                SizeOfGroup;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DesiredSkill;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Counter;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             BestIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             BestScore;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             CurScore;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             WillBePlayers;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	// class UForgeOnlineGameSettings*                 CurGameSettings;                                  		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.FindOnlineGameCanceled
// [0x00022000] 
struct UForgeOnlineSubsystemDelegates_execFindOnlineGameCanceled_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.FindOnlineGameComplete
// [0x00022002] 
struct UForgeOnlineSubsystemDelegates_execFindOnlineGameComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ADVPlayerController*                      TheDVPC;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UForgeGFxFrontEndGroupMenu*               TheGroupMenu;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// class UForgeGFxFrontEndQuickMatchMenu*          TheQuickMatchMenu;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UOnlineGameSearch*                        TheGameSearch;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.FindOnlineGames
// [0x00026002] 
struct UForgeOnlineSubsystemDelegates_execFindOnlineGames_Parms
{
	unsigned long                                      IsLanQuery : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Environment;                                      		// 0x0004 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                SteamRegionId;                                    		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     GameModeQueue;                                    		// 0x0014 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ForgeVersion;                                     		// 0x0020 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AWorldInfo*                               WorldInfo;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PlayerController;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemSteamworks*               OnlineSubsystemSteamworks;                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// class UForgeOnlineGameSearch*                   ForgeOnlineGameSearch;                            		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.HandleSteamGameSearchEvents
// [0x00022002] 
struct UForgeOnlineSubsystemDelegates_execHandleSteamGameSearchEvents_Parms
{
	// class AWorldInfo*                               WorldInfo;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PlayerController;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.LobbyMemberStatusUpdate
// [0x00422002] 
struct UForgeOnlineSubsystemDelegates_execLobbyMemberStatusUpdate_Parms
{
	TArray< struct FActiveLobbyInfo >                  LobbyList;                                        		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                LobbyIndex;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MemberIndex;                                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InstigatorIndex;                                  		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Status;                                           		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class AWorldInfo*                               TheWI;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.LobbyMemberSettingsUpdate
// [0x00422002] 
struct UForgeOnlineSubsystemDelegates_execLobbyMemberSettingsUpdate_Parms
{
	TArray< struct FActiveLobbyInfo >                  LobbyList;                                        		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                LobbyIndex;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MemberIndex;                                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AWorldInfo*                               TheWI;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.LobbySettingsUpdate
// [0x00422002] 
struct UForgeOnlineSubsystemDelegates_execLobbySettingsUpdate_Parms
{
	TArray< struct FActiveLobbyInfo >                  LobbyList;                                        		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                LobbyIndex;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AWorldInfo*                               TheWI;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.LobbyReceiveBinaryData
// [0x00C22002] 
struct UForgeOnlineSubsystemDelegates_execLobbyReceiveBinaryData_Parms
{
	TArray< struct FActiveLobbyInfo >                  LobbyList;                                        		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                LobbyIndex;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MemberIndex;                                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< unsigned char >                            Data;                                             		// 0x0014 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// class AWorldInfo*                               TheWI;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FString                                  Header;                                           		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  ServerURL;                                        		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  UniqueNetIdAsString;                              		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x0050 (0x0004) [0x0000000000000000]              
	// class ADVHUDFrontEnd*                           DVHUDFrontEnd;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerUniqueNetId;                                		// 0x0058 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.LobbyReceiveMessage
// [0x00422002] 
struct UForgeOnlineSubsystemDelegates_execLobbyReceiveMessage_Parms
{
	TArray< struct FActiveLobbyInfo >                  LobbyList;                                        		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                LobbyIndex;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MemberIndex;                                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Type;                                             		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0020 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class AWorldInfo*                               TheWI;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.JoinLobbyComplete
// [0x00422002] 
struct UForgeOnlineSubsystemDelegates_execJoinLobbyComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	TArray< struct FActiveLobbyInfo >                  LobbyList;                                        		// 0x0004 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                LobbyIndex;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                LobbyUID;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Error;                                            		// 0x001C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class AWorldInfo*                               TheWI;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.LobbyInvite
// [0x00022002] 
struct UForgeOnlineSubsystemDelegates_execLobbyInvite_Parms
{
	struct FUniqueNetId                                LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                FriendId;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAccepted : 1;                                    		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class AWorldInfo*                               TheWI;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.HandleSteamLobbyEvents
// [0x00022002] 
struct UForgeOnlineSubsystemDelegates_execHandleSteamLobbyEvents_Parms
{
	// class AWorldInfo*                               TheWI;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.CreateLobbyCompleted
// [0x00022002] 
struct UForgeOnlineSubsystemDelegates_execCreateLobbyCompleted_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FUniqueNetId                                LobbyId;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Error;                                            		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class AWorldInfo*                               TheWI;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.CreateLobby
// [0x00822002] 
struct UForgeOnlineSubsystemDelegates_execCreateLobby_Parms
{
	// class AWorldInfo*                               TheWI;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< struct FLobbyMetaData >                 InitialSettings;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FLobbyMetaData                           CurMetaData;                                      		// 0x0018 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.SetSkinChoiceForClass
// [0x00022002] 
struct UForgeOnlineSubsystemDelegates_execSetSkinChoiceForClass_Parms
{
	unsigned char                                      ChosenClass;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      TheChosenSkin;                                    		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.GetSkinChoiceForClass
// [0x00422002] 
struct UForgeOnlineSubsystemDelegates_execGetSkinChoiceForClass_Parms
{
	unsigned char                                      ChosenClass;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      TheChosenSkin;                                    		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  ReturnCloudSetting;                               		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   GetWasSuccessful : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.CloudWriteComplete
// [0x00022000] 
struct UForgeOnlineSubsystemDelegates_execCloudWriteComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.WriteCloudSettings
// [0x00022002] 
struct UForgeOnlineSubsystemDelegates_execWriteCloudSettings_Parms
{
	// class AWorldInfo*                               TheWI;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.ReadCloudSettingsComplete
// [0x00022002] 
struct UForgeOnlineSubsystemDelegates_execReadCloudSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class AWorldInfo*                               TheWI;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.ReadCloudSettings
// [0x00022002] 
struct UForgeOnlineSubsystemDelegates_execReadCloudSettings_Parms
{
	// class AWorldInfo*                               TheWI;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.SetCloudSetting
// [0x00022002] 
struct UForgeOnlineSubsystemDelegates_execSetCloudSetting_Parms
{
	int                                                SettingId;                                        		// 0x0000 (0x0004) [0x0000000000000880]              ( CPF_Parm | CPF_CoerceParm )
	struct FString                                     NewValue;                                         		// 0x0004 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AWorldInfo*                               TheWI;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned long                                   CouldWrite : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.GetCloudSetting
// [0x00422002] 
struct UForgeOnlineSubsystemDelegates_execGetCloudSetting_Parms
{
	int                                                SettingId;                                        		// 0x0000 (0x0004) [0x0000000000000880]              ( CPF_Parm | CPF_CoerceParm )
	struct FString                                     TheSettingValue;                                  		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AWorldInfo*                               TheWI;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned long                                   CouldRead : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.FlushSteamStatsComplete
// [0x00022002] 
struct UForgeOnlineSubsystemDelegates_execFlushSteamStatsComplete_Parms
{
	struct FName                                       SessionNameThing;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.WriteUpdatedSteamStats
// [0x00022002] 
struct UForgeOnlineSubsystemDelegates_execWriteUpdatedSteamStats_Parms
{
	class ADVPlayerController*                         TheDVPC;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                TheUniqueId;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UForgeOnlineStatsRead*                       TheStatsReader;                                   		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UForgeOnlineStatsWrite*                      TheStatsWriter;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             CurValue;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	// unsigned char                                   CurStatIndex;                                     		// 0x0020 (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.OnReadOnlineAvatarComplete
// [0x00022002] 
struct UForgeOnlineSubsystemDelegates_execOnReadOnlineAvatarComplete_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UTexture2D*                                  Avatar;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// class AWorldInfo*                               TheWI;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineSubsystemDelegates.GetAvatarForUniqueId
// [0x00022002] 
struct UForgeOnlineSubsystemDelegates_execGetAvatarForUniqueId_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             AvatarSize;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AWorldInfo*                               TheWI;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalDVPC;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityResetCD.FireAbility
// [0x00080002] 
struct ADVAbilityResetCD_execFireAbility_Parms
{
	// class ADVPlayerReplicationInfo*                 PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAbilityShrine.FireAbility
// [0x00080002] 
struct ADVAbilityShrine_execFireAbility_Parms
{
};

// Function ForgeGame.DVDummyController.OnToggleCinematicMode
// [0x00020000] 
struct ADVDummyController_execOnToggleCinematicMode_Parms
{
	class USeqAct_ToggleCinematicMode*                 Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVDummyController.OnToggleInput
// [0x00020000] 
struct ADVDummyController_execOnToggleInput_Parms
{
	class USeqAct_ToggleInput*                         inAction;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVDummyController.IncomingAbility
// [0x00020000] 
struct ADVDummyController_execIncomingAbility_Parms
{
	class ADVAbility*                                  Ability;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVDummyController.Possess
// [0x00020802] ( FUNC_Event )
struct ADVDummyController_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVDummyController.PostBeginPlay
// [0x00020002] 
struct ADVDummyController_execPostBeginPlay_Parms
{
};

// Function ForgeGame.ForgeTaunts.IsSubUserType
// [0x00022002] 
struct UForgeTaunts_execIsSubUserType_Parms
{
	unsigned char                                      ParentType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ChildType;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeTaunts.TauntApplies
// [0x00022002] 
struct UForgeTaunts_execTauntApplies_Parms
{
	struct FSChatTaunt                                 TheTaunt;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      TheSituation;                                     		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      UserType;                                         		// 0x0011 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      TargetType;                                       		// 0x0012 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVAIController.DoTaunt
// [0x00820002] 
struct ADVAIController_execDoTaunt_Parms
{
	unsigned char                                      TargetClass;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      context;                                          		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   ValidIndexes;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FSChatTaunt                              ChosenTaunt;                                      		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned char                                   MyPawnType;                                       		// 0x0024 (0x0001) [0x0000000000000000]              
	// unsigned char                                   TargetPawnType;                                   		// 0x0025 (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.DVAIController.PawnDied
// [0x00020002] 
struct ADVAIController_execPawnDied_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAIController.Flee
// [0x00020002] 
struct ADVAIController_execFlee_Parms
{
	// class ADVPathNodeFlee*                          CurNode;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAIController.FindShrine
// [0x00020002] 
struct ADVAIController_execFindShrine_Parms
{
	class ADVShrine*                                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADVShrine*                                CurShrine;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADVShrine*                                BestShrine;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Temp;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             BestDis;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAIController.PathToTarget
// [0x00020002] 
struct ADVAIController_execPathToTarget_Parms
{
};

// Function ForgeGame.DVAIController.AIMovement
// [0x00020002] 
struct ADVAIController_execAIMovement_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAIController.UnStuck
// [0x00020002] 
struct ADVAIController_execUnStuck_Parms
{
};

// Function ForgeGame.DVAIController.CheckForStuck
// [0x00020002] 
struct ADVAIController_execCheckForStuck_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAIController.Tick
// [0x00020002] 
struct ADVAIController_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPlayerController*                      CurPC;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAIController.PerformBlock
// [0x00020102] 
struct ADVAIController_execPerformBlock_Parms
{
	unsigned long                                      StartBlock : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVAIController.UnBlock
// [0x00020002] 
struct ADVAIController_execUnBlock_Parms
{
};

// Function ForgeGame.DVAIController.bLock
// [0x00020002] 
struct ADVAIController_execbLock_Parms
{
};

// Function ForgeGame.DVAIController.IncomingAbility
// [0x00020002] 
struct ADVAIController_execIncomingAbility_Parms
{
	class ADVAbility*                                  Ability;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAIController.UseAbility
// [0x00024002] 
struct ADVAIController_execUseAbility_Parms
{
	unsigned char                                      AbilityNumber;                                    		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADVAbility*                               CurAbility;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAIController.ChooseAbility
// [0x00020002] 
struct ADVAIController_execChooseAbility_Parms
{
};

// Function ForgeGame.DVAIController.Possess
// [0x00020802] ( FUNC_Event )
struct ADVAIController_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVAIController.PostBeginPlay
// [0x00020002] 
struct ADVAIController_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVPathNodeFlee.PostBeginPlay
// [0x00020002] 
struct ADVPathNodeFlee_execPostBeginPlay_Parms
{
	// class AForgeGameInfoBotMatch*                   ForgeGameInfo;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVShrine.Tick
// [0x00020802] ( FUNC_Event )
struct ADVShrine_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawnHero*                              CurPawn;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADVPawnHero*                              LowestPawn;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// class ADVAIController*                          AIC;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVShrine.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADVShrine_eventDestroyed_Parms
{
};

// Function ForgeGame.DVShrine.PostBeginPlay
// [0x00020102] 
struct ADVShrine_execPostBeginPlay_Parms
{
	// class AForgeGameInfoBotMatch*                   ForgeGameInfo;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVShrine.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVShrine_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAIControllerAssassin.AIMovement
// [0x00020002] 
struct ADVAIControllerAssassin_execAIMovement_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVShrine*                                CurShrine;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAIControllerAssassin.UnStuck
// [0x00020002] 
struct ADVAIControllerAssassin_execUnStuck_Parms
{
};

// Function ForgeGame.DVAIControllerAssassin.ChooseAbility
// [0x00020002] 
struct ADVAIControllerAssassin_execChooseAbility_Parms
{
};

// Function ForgeGame.DVAIControllerAssassin.Possess
// [0x00020802] ( FUNC_Event )
struct ADVAIControllerAssassin_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVAIControllerPathfinder.AIMovement
// [0x00020002] 
struct ADVAIControllerPathfinder_execAIMovement_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAIControllerPathfinder.Tick
// [0x00020002] 
struct ADVAIControllerPathfinder_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAIControllerPathfinder.ChooseAbility
// [0x00020002] 
struct ADVAIControllerPathfinder_execChooseAbility_Parms
{
};

// Function ForgeGame.DVAIControllerPathfinder.Possess
// [0x00020802] ( FUNC_Event )
struct ADVAIControllerPathfinder_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVAIControllerPyromancer.ChooseAbility
// [0x00820002] 
struct ADVAIControllerPyromancer_execChooseAbility_Parms
{
	// struct FRotator                                 TempRotator;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function ForgeGame.DVAIControllerPyromancer.Possess
// [0x00020802] ( FUNC_Event )
struct ADVAIControllerPyromancer_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVAIControllerShaman.Tick
// [0x00020002] 
struct ADVAIControllerShaman_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVAIControllerShaman.ChooseAbility
// [0x00020002] 
struct ADVAIControllerShaman_execChooseAbility_Parms
{
};

// Function ForgeGame.DVAIControllerShaman.Possess
// [0x00020802] ( FUNC_Event )
struct ADVAIControllerShaman_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVAIControllerWarden.UnStuck
// [0x00020002] 
struct ADVAIControllerWarden_execUnStuck_Parms
{
};

// Function ForgeGame.DVAIControllerWarden.ChooseAbility
// [0x00020002] 
struct ADVAIControllerWarden_execChooseAbility_Parms
{
};

// Function ForgeGame.DVAIControllerWarden.Possess
// [0x00020802] ( FUNC_Event )
struct ADVAIControllerWarden_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVAnimNotify_AttachmentVisibility.Notify
// [0x00020802] ( FUNC_Event )
struct UDVAnimNotify_AttachmentVisibility_eventNotify_Parms
{
	class AActor*                                      Owner;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UAnimNodeSequence*                           AnimSeqInstigator;                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawn*                                  DVPawn;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAnimNotify_Ragdoll.NotifyEnd
// [0x00020802] ( FUNC_Event )
struct UDVAnimNotify_Ragdoll_eventNotifyEnd_Parms
{
	class AActor*                                      Owner;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UAnimNodeSequence*                           AnimSeqInstigator;                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawnHero*                              DVPawnHero;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVAnimNotify_Ragdoll.Notify
// [0x00020802] ( FUNC_Event )
struct UDVAnimNotify_Ragdoll_eventNotify_Parms
{
	class AActor*                                      Owner;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UAnimNodeSequence*                           AnimSeqInstigator;                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPawnHero*                              DVPawnHero;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVArenaBlock.PostBeginPlay
// [0x00020102] 
struct ADVArenaBlock_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVCamera.TracePawn
// [0x00C20002] 
struct ADVCamera_execTracePawn_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     TraceEnd;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     TraceStart;                                       		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      UsingAssist;                                      		// 0x0030 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              DeltaTime;                                        		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0038 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADVPawn*                                  CurPawn;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	// class AActor*                                   CurActor;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	// class ADVPawn*                                  OwningPawn;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	// class ADVPawn*                                  BestPawn;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	// struct FVector                                  RotationVector;                                   		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  MeleeConeStartPoint;                              		// 0x0058 (0x000C) [0x0000000000000000]              
	// float                                           DotTest;                                          		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           BestDot;                                          		// 0x0068 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVCamera.UpdateViewTarget
// [0x00C20002] 
struct ADVCamera_execUpdateViewTarget_Parms
{
	struct FTViewTarget                                OutVT;                                            		// 0x0000 (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              DeltaTime;                                        		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  HitLocation;                                      		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PawnOffSet;                                       		// 0x0054 (0x000C) [0x0000000000000000]              
	// float                                           SpeedRatio;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	// float                                           InterpSpeed;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           TargetLerp;                                       		// 0x0068 (0x0004) [0x0000000000000000]              
	// float                                           TargetFOV;                                        		// 0x006C (0x0004) [0x0000000000000000]              
	// unsigned char                                   UsingAssist;                                      		// 0x0070 (0x0001) [0x0000000000000000]              
	// class ADVPawn*                                  CurPawn;                                          		// 0x0074 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      DVPC;                                             		// 0x0078 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVDummyBlockingController.PerformBlock
// [0x00020102] 
struct ADVDummyBlockingController_execPerformBlock_Parms
{
	unsigned long                                      StartBlock : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVDummyBlockingController.UnBlock
// [0x00020002] 
struct ADVDummyBlockingController_execUnBlock_Parms
{
};

// Function ForgeGame.DVDummyBlockingController.bLock
// [0x00020002] 
struct ADVDummyBlockingController_execbLock_Parms
{
};

// Function ForgeGame.DVDummyBlockingController.IncomingAbility
// [0x00020002] 
struct ADVDummyBlockingController_execIncomingAbility_Parms
{
	class ADVAbility*                                  Ability;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVDummyBlockingController.Possess
// [0x00020802] ( FUNC_Event )
struct ADVDummyBlockingController_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.DVFlagStand.Deactivate
// [0x00020002] 
struct ADVFlagStand_execDeactivate_Parms
{
};

// Function ForgeGame.DVFlagStand.Activate
// [0x00020002] 
struct ADVFlagStand_execActivate_Parms
{
};

// Function ForgeGame.DVFlagStand.Touch
// [0x00020802] ( FUNC_Event )
struct ADVFlagStand_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVFlagStand.SpawnTheFlag
// [0x00020002] 
struct ADVFlagStand_execSpawnTheFlag_Parms
{
};

// Function ForgeGame.DVFlagStand.PostBeginPlay
// [0x00020102] 
struct ADVFlagStand_execPostBeginPlay_Parms
{
};

// Function ForgeGame.DVGameReplicationInfo.DestroyPRIs
// [0x00020002] 
struct ADVGameReplicationInfo_execDestroyPRIs_Parms
{
};

// Function ForgeGame.DVGameReplicationInfo.PlayFinalMusic
// [0x00020102] 
struct ADVGameReplicationInfo_execPlayFinalMusic_Parms
{
	// class ADVPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVGameReplicationInfo.Tick
// [0x00020902] ( FUNC_Event )
struct ADVGameReplicationInfo_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVGameReplicationInfo.Timer
// [0x00020902] ( FUNC_Event )
struct ADVGameReplicationInfo_eventTimer_Parms
{
};

// Function ForgeGame.DVGameReplicationInfo.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADVGameReplicationInfo_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVGameViewportClientExtend.DrawLoadingScreen
// [0x00020002] 
struct UDVGameViewportClientExtend_execDrawLoadingScreen_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  Message;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           XL;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVGameViewportClientExtend.DrawTransition
// [0x00020002] 
struct UDVGameViewportClientExtend_execDrawTransition_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVGameViewportClientExtend.NotifyConnectionError
// [0x00024002] 
struct UDVGameViewportClientExtend_execNotifyConnectionError_Parms
{
	unsigned char                                      MessageType;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x0004 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	// class AWorldInfo*                               TheWorldInfo;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      CurPC;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVHUDFrontEnd.GetLocalPlayerOwnerIndex
// [0x00020002] 
struct ADVHUDFrontEnd_execGetLocalPlayerOwnerIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVHUDFrontEnd.ResolutionChanged
// [0x00020002] 
struct ADVHUDFrontEnd_execResolutionChanged_Parms
{
};

// Function ForgeGame.DVHUDFrontEnd.PostRender
// [0x00020802] ( FUNC_Event )
struct ADVHUDFrontEnd_eventPostRender_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVHUDFrontEnd.PostBeginPlay
// [0x00820802] ( FUNC_Event )
struct ADVHUDFrontEnd_eventPostBeginPlay_Parms
{
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             CurrentLobbyId;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxKillCam.Hide
// [0x00020002] 
struct UForgeGFxKillCam_execHide_Parms
{
};

// Function ForgeGame.ForgeGFxKillCam.ConfigureForKiller
// [0x00020002] 
struct UForgeGFxKillCam_execConfigureForKiller_Parms
{
	struct FString                                     KillerClassName;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class ADVPlayerReplicationInfo*                    KillerPRI;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                KillingAbilityIndex;                              		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AWorldInfo*                               TheWorldInfo;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  KillCause;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  KillerLevel;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ADVPawnHero*                              CurPawn;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxKillCam.Tick
// [0x00020002] 
struct UForgeGFxKillCam_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxKillCam.ConfigKillCam
// [0x00020002] 
struct UForgeGFxKillCam_execConfigKillCam_Parms
{
};

// Function ForgeGame.ForgeGFxKillCam.Start
// [0x00024002] 
struct UForgeGFxKillCam_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxAbilitiesMenu.SetVisibility
// [0x00020002] 
struct UForgeGFxAbilitiesMenu_execSetVisibility_Parms
{
	unsigned long                                      NewVisiblity : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxAbilitiesMenu.UpdateAbilitiesForClass
// [0x00020002] 
struct UForgeGFxAbilitiesMenu_execUpdateAbilitiesForClass_Parms
{
	unsigned char                                      ClassEnum;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FString                                  AbilityName;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  AbilityLocalizationPath;                          		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ADVAbility*                               CurrentAbilityArchetype;                          		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxAbilitiesMenu.UpdateAbilityBindText
// [0x00020002] 
struct UForgeGFxAbilitiesMenu_execUpdateAbilityBindText_Parms
{
	int                                                AbilityIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             BindingsCounter;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UPlayerInput*                             ThePlayerInput;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   FoundBind : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeGFxAbilitiesMenu.Tick
// [0x00020002] 
struct UForgeGFxAbilitiesMenu_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   NowDesiredClass;                                  		// 0x0004 (0x0001) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxAbilitiesMenu.ConfigAbilitiesMenu
// [0x00020002] 
struct UForgeGFxAbilitiesMenu_execConfigAbilitiesMenu_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxAbilitiesMenu.Start
// [0x00024002] 
struct UForgeGFxAbilitiesMenu_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxManager.SwapFromTo
// [0x00020000] 
struct UForgeGFxManager_execSwapFromTo_Parms
{
	struct FString                                     OldSlideName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     NewSlideName;                                     		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxScoreBoard.ConfigForRes
// [0x00820002] 
struct UForgeGFxScoreBoard_execConfigForRes_Parms
{
	int                                                SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             UsablePixels;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x000C (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxScoreBoard.Tick
// [0x00820002] 
struct UForgeGFxScoreBoard_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPlayerReplicationInfo*                 ThePRI;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADVGameReplicationInfo*                   TheGRI;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             RankCount;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Used;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             TotalXP;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             RoundEndXP;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// TArray< struct FName >                          Level4Medals;                                     		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FName >                          Level3Medals;                                     		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FName >                          Level2Medals;                                     		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FName >                          Level1Medals;                                     		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FName                                    CurMedalType;                                     		// 0x0050 (0x0008) [0x0000000000000000]              
	// struct FString                                  AwardTypeName;                                    		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASDisplayInfo                           DI;                                               		// 0x0064 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxScoreBoard.SetVisibility
// [0x00020002] 
struct UForgeGFxScoreBoard_execSetVisibility_Parms
{
	unsigned long                                      NewVisiblity : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxScoreBoard.PlayerSummaryInit
// [0x00024002] 
struct UForgeGFxScoreBoard_execPlayerSummaryInit_Parms
{
	class UGFxObject*                                  NewPlayerSummaryMC;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      NewForScoreboard : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.ForgeGFxScoreBoard.ConfigScoreBoard
// [0x00020002] 
struct UForgeGFxScoreBoard_execConfigScoreBoard_Parms
{
	// class ADVGameReplicationInfo*                   TheGRI;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxScoreBoard.Start
// [0x00024002] 
struct UForgeGFxScoreBoard_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxScoresSlide.OnAddFriendSelect
// [0x00020002] 
struct UForgeGFxScoresSlide_execOnAddFriendSelect_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ADVPlayerReplicationInfo*                 TargetPRI;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             LP;                                               		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxScoresSlide.OnViewProfileSelect
// [0x00020002] 
struct UForgeGFxScoresSlide_execOnViewProfileSelect_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ADVPlayerReplicationInfo*                 TargetPRI;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             LP;                                               		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxScoresSlide.OnPlayerMuteChange
// [0x00020002] 
struct UForgeGFxScoresSlide_execOnPlayerMuteChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ADVPlayerReplicationInfo*                 TargetPRI;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             LP;                                               		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxScoresSlide.MoveSteamDropDownToMouse
// [0x00820002] 
struct UForgeGFxScoresSlide_execMoveSteamDropDownToMouse_Parms
{
	// struct FVector2D                                MouseScreenPosition;                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                ViewportSize;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             TotalVisiblePixels;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0014 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxScoresSlide.GetPRIFromData
// [0x00420002] 
struct UForgeGFxScoresSlide_execGetPRIFromData_Parms
{
	struct FString                                     DataString;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class ADVPlayerReplicationInfo*                    TargetPRI;                                        		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// int                                             TeamIndex;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             PlayerLineIndex;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxScoresSlide.OnPlayerClicked
// [0x00820002] 
struct UForgeGFxScoresSlide_execOnPlayerClicked_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ADVPlayerReplicationInfo*                 TargetPRI;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             NullUniqueId;                                     		// 0x0030 (0x0008) [0x0000000000000000]              
	// class ULocalPlayer*                             LP;                                               		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxScoresSlide.OnTeamSelected
// [0x00020000] 
struct UForgeGFxScoresSlide_execOnTeamSelected_Parms
{
};

// Function ForgeGame.ForgeGFxScoresSlide.CheckSwapToTeam
// [0x00020002] 
struct UForgeGFxScoresSlide_execCheckSwapToTeam_Parms
{
	unsigned char                                      NewTeamNum;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AGameReplicationInfo*                     TheGRI;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             TeamExtra;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxScoresSlide.OnDevotedPress
// [0x00020002] 
struct UForgeGFxScoresSlide_execOnDevotedPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxScoresSlide.OnZealousPress
// [0x00020002] 
struct UForgeGFxScoresSlide_execOnZealousPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxScoresSlide.UpdateGenericTeamInfo
// [0x00020002] 
struct UForgeGFxScoresSlide_execUpdateGenericTeamInfo_Parms
{
	class UClass*                                      TheGameMode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPlayerController*                      ThePC;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADVGameReplicationInfo*                   TheGRI;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADVTeamInfo*                              MyTeam;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// class ADVTeamInfo*                              EnemyTeam;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxScoresSlide.UpdateCTFTeamInfo
// [0x00020002] 
struct UForgeGFxScoresSlide_execUpdateCTFTeamInfo_Parms
{
	// class ADVPlayerController*                      ThePC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVGameReplicationInfo*                   TheGRI;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADVTeamInfo*                              MyTeam;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADVTeamInfo*                              EnemyTeam;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxScoresSlide.SortPRIsByScore
// [0x00020002] 
struct UForgeGFxScoresSlide_execSortPRIsByScore_Parms
{
	class APlayerReplicationInfo*                      PRI1;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      PRI2;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxScoresSlide.SetBackgroundColor
// [0x00020002] 
struct UForgeGFxScoresSlide_execSetBackgroundColor_Parms
{
	class UGFxObject*                                  TheLineBackground;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      LineTeam;                                         		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlayerTeam;                                       		// 0x0005 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxScoresSlide.Tick
// [0x00020002] 
struct UForgeGFxScoresSlide_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter0;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Counter1;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// class ADVGameReplicationInfo*                   TheGRI;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< class APlayerReplicationInfo* >         AllPRIs;                                          		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned char                                   RoundNumber;                                      		// 0x0020 (0x0001) [0x0000000000000000]              
	// unsigned char                                   MyTeamNumber;                                     		// 0x0021 (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxScoresSlide.SteamDropDownInit
// [0x00020002] 
struct UForgeGFxScoresSlide_execSteamDropDownInit_Parms
{
	class UGFxObject*                                  NewSteamDropDownMC;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxScoresSlide.TeamSummaryInit
// [0x00020002] 
struct UForgeGFxScoresSlide_execTeamSummaryInit_Parms
{
	class UGFxObject*                                  NewTeamSummaryMC;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxScoresSlide.UpdatePlayerLine
// [0x00820002] 
struct UForgeGFxScoresSlide_execUpdatePlayerLine_Parms
{
	struct FSPlayerLineElement                         ThePlayerLine;                                    		// 0x0000 (0x0040) [0x0000000000000080]              ( CPF_Parm )
	class ADVPlayerReplicationInfo*                    UpdatePRI;                                        		// 0x0040 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             Used;                                             		// 0x0048 (0x0004) [0x0000000000000000]              
	// struct FName                                    CurMedalType;                                     		// 0x004C (0x0008) [0x0000000000000000]              
	// TArray< struct FName >                          Level4Medals;                                     		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FName >                          Level3Medals;                                     		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FName >                          Level2Medals;                                     		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FName >                          Level1Medals;                                     		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  BuildString;                                      		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FUniqueNetId                             NullUniqueId;                                     		// 0x0090 (0x0008) [0x0000000000000000]              
	// class ULocalPlayer*                             LP;                                               		// 0x0098 (0x0004) [0x0000000000000000]              
	// class ADVGameReplicationInfo*                   TheGRI;                                           		// 0x009C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxScoresSlide.ClearPlayerLine
// [0x00020002] 
struct UForgeGFxScoresSlide_execClearPlayerLine_Parms
{
	struct FSPlayerLineElement                         ThePlayerLine;                                    		// 0x0000 (0x0040) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxScoresSlide.ConfigPlayerSummaryForTeam
// [0x00820002] 
struct UForgeGFxScoresSlide_execConfigPlayerSummaryForTeam_Parms
{
	struct FString                                     CurTeamName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FSTeamElements                              ReturnValue;                                      		// 0x000C (0x0404) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FSTeamElements                           CurTeamDetails;                                   		// 0x0410 (0x0404) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0814 (0x0004) [0x0000000000000000]              
	// int                                             Counter2;                                         		// 0x0818 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               PlayersContainer;                                 		// 0x081C (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               CurPlayerLine;                                    		// 0x0820 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0824 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxScoresSlide.ShowMessage
// [0x00020000] 
struct UForgeGFxScoresSlide_execShowMessage_Parms
{
	struct FString                                     TheMessageText;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxScoresSlide.SetVisibility
// [0x00020002] 
struct UForgeGFxScoresSlide_execSetVisibility_Parms
{
	unsigned long                                      NewVisiblity : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxScoresSlide.PlayerSummaryInit
// [0x00024002] 
struct UForgeGFxScoresSlide_execPlayerSummaryInit_Parms
{
	class UGFxObject*                                  NewPlayerSummaryMC;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      NewForScoreboard : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.ForgeGFxTeamSelect.OnTeamSelected
// [0x00020002] 
struct UForgeGFxTeamSelect_execOnTeamSelected_Parms
{
};

// Function ForgeGame.ForgeGFxTeamSelect.FilterButtonInput
// [0x00020802] ( FUNC_Event )
struct UForgeGFxTeamSelect_eventFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxTeamSelect.OnRandomButtonPress
// [0x00020002] 
struct UForgeGFxTeamSelect_execOnRandomButtonPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class AGameReplicationInfo*                     TheGRI;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// class AWorldInfo*                               TheWI;                                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxTeamSelect.OnSpectateButtonPress
// [0x00020002] 
struct UForgeGFxTeamSelect_execOnSpectateButtonPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxTeamSelect.ConfigForRes
// [0x00820002] 
struct UForgeGFxTeamSelect_execConfigForRes_Parms
{
	int                                                SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             UsablePixels;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x000C (0x002C) [0x0000000000000000]              
	// float                                           ScoresScaleX;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           ScoresScaleY;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           ScoresWidth;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxTeamSelect.Tick
// [0x00020002] 
struct UForgeGFxTeamSelect_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AGameReplicationInfo*                     TheGRI;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             SlotsLeft;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxTeamSelect.ShowMessage
// [0x00020002] 
struct UForgeGFxTeamSelect_execShowMessage_Parms
{
	struct FString                                     TheMessageText;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxTeamSelect.ConfigTeamSelect
// [0x00820002] 
struct UForgeGFxTeamSelect_execConfigTeamSelect_Parms
{
	// struct FASDisplayInfo                           DI;                                               		// 0x0000 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxTeamSelect.Start
// [0x00024002] 
struct UForgeGFxTeamSelect_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxClassSelect.FilterButtonInput
// [0x00020802] ( FUNC_Event )
struct UForgeGFxClassSelect_eventFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxClassSelect.SelectAbility
// [0x00020002] 
struct UForgeGFxClassSelect_execSelectAbility_Parms
{
	int                                                AbilitySlot;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             CurSettingIndex;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             FinalAbilityOrder;                                		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  CurSettingValue;                                  		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ADVAbility*                               TheAbilityArchetype;                              		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  AbilityLocalizationPath;                          		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned char                                   TheChosenFocus;                                   		// 0x002C (0x0001) [0x0000000000000000]              
	// struct FString                                  CurFocusName;                                     		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxClassSelect.OnClassButtonChange
// [0x00020002] 
struct UForgeGFxClassSelect_execOnClassButtonChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxClassSelect.OnClassButtonPress
// [0x00020002] 
struct UForgeGFxClassSelect_execOnClassButtonPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxClassSelect.OnAbilityButtonPress
// [0x00020002] 
struct UForgeGFxClassSelect_execOnAbilityButtonPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxClassSelect.OnSelectButtonPress
// [0x00020002] 
struct UForgeGFxClassSelect_execOnSelectButtonPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxClassSelect.OnCancelButtonPress
// [0x00020002] 
struct UForgeGFxClassSelect_execOnCancelButtonPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxClassSelect.OnSlideRightPress
// [0x00020002] 
struct UForgeGFxClassSelect_execOnSlideRightPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxClassSelect.OnSlideLeftPress
// [0x00020002] 
struct UForgeGFxClassSelect_execOnSlideLeftPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxClassSelect.ConfigForRes
// [0x00820002] 
struct UForgeGFxClassSelect_execConfigForRes_Parms
{
	int                                                SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0008 (0x002C) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             TotalVisiblePixels;                               		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxClassSelect.Tick
// [0x00820002] 
struct UForgeGFxClassSelect_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   CurPRI;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x000C (0x002C) [0x0000000000000000]              
	// float                                           SlideDistance;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           NewXPosition;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           SlideAlpha;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	// class AGameReplicationInfo*                     TheGRI;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxClassSelect.ConfigureAbility
// [0x00020002] 
struct UForgeGFxClassSelect_execConfigureAbility_Parms
{
	int                                                AbilityNumber;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             CurSettingIndex;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             FinalAbilityOrder;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FString                                  CurSettingValue;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxClassSelect.ApplySteamCloudSettings
// [0x00020002] 
struct UForgeGFxClassSelect_execApplySteamCloudSettings_Parms
{
};

// Function ForgeGame.ForgeGFxClassSelect.ConfigForClass
// [0x00020002] 
struct UForgeGFxClassSelect_execConfigForClass_Parms
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxClassSelect.ConfigureClassButtonFor
// [0x00820002] 
struct UForgeGFxClassSelect_execConfigureClassButtonFor_Parms
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct UForgeGFxClassSelect_FSClassSelectionButton ReturnValue;                                      		// 0x000C (0x0020) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct UForgeGFxClassSelect_FSClassSelectionButton CurClassButton;                                   		// 0x002C (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASDisplayInfo                           DI;                                               		// 0x004C (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxClassSelect.ConfigClassSelect
// [0x00020002] 
struct UForgeGFxClassSelect_execConfigClassSelect_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxClassSelect.Start
// [0x00024002] 
struct UForgeGFxClassSelect_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxEscapeMenu.FilterButtonInput
// [0x00020802] ( FUNC_Event )
struct UForgeGFxEscapeMenu_eventFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxEscapeMenu.OnQuitNagPress
// [0x00020002] 
struct UForgeGFxEscapeMenu_execOnQuitNagPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxEscapeMenu.OnConfirmYesPress
// [0x00020002] 
struct UForgeGFxEscapeMenu_execOnConfirmYesPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxEscapeMenu.OnConfirmNoPress
// [0x00020002] 
struct UForgeGFxEscapeMenu_execOnConfirmNoPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxEscapeMenu.OnExitGamePress
// [0x00020002] 
struct UForgeGFxEscapeMenu_execOnExitGamePress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxEscapeMenu.OnExitMenuPress
// [0x00020002] 
struct UForgeGFxEscapeMenu_execOnExitMenuPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxEscapeMenu.OnSettingsPress
// [0x00020002] 
struct UForgeGFxEscapeMenu_execOnSettingsPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxEscapeMenu.OnChangeClassPress
// [0x00020002] 
struct UForgeGFxEscapeMenu_execOnChangeClassPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxEscapeMenu.OnChangeTeamPress
// [0x00020002] 
struct UForgeGFxEscapeMenu_execOnChangeTeamPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxEscapeMenu.SlideInit
// [0x00020002] 
struct UForgeGFxEscapeMenu_execSlideInit_Parms
{
	class UGFxObject*                                  NewSlideMC;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     NewSlideName;                                     		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxEscapeMenu.ToggleEscapeMenuEnabled
// [0x00020002] 
struct UForgeGFxEscapeMenu_execToggleEscapeMenuEnabled_Parms
{
	unsigned long                                      ShouldBeEnabled : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxEscapeMenu.SwapFromTo
// [0x00020002] 
struct UForgeGFxEscapeMenu_execSwapFromTo_Parms
{
	struct FString                                     OldSlideName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     NewSlideName;                                     		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxEscapeMenu.Tick
// [0x00820002] 
struct UForgeGFxEscapeMenu_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           CurrentTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           MoveAlpha;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x000C (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxEscapeMenu.ConfigForRes
// [0x00020002] 
struct UForgeGFxEscapeMenu_execConfigForRes_Parms
{
	int                                                SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxEscapeMenu.ConfigEscapeMenu
// [0x00820002] 
struct UForgeGFxEscapeMenu_execConfigEscapeMenu_Parms
{
	// struct FASDisplayInfo                           DI;                                               		// 0x0000 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxEscapeMenu.Start
// [0x00024002] 
struct UForgeGFxEscapeMenu_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxChat.DrawChatMessage
// [0x00820002] 
struct UForgeGFxChat_execDrawChatMessage_Parms
{
	struct FSChatItem                                  NewChatItem;                                      		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ADVPlayerReplicationInfo*                 MyPRI;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FString                                  TheChatString;                                    		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  TheMessageString;                                 		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASDisplayInfo                           DI;                                               		// 0x0044 (0x002C) [0x0000000000000000]              
	// float                                           CurMessageHeight;                                 		// 0x0070 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxChat.ReDrawAllChatMessages
// [0x00020002] 
struct UForgeGFxChat_execReDrawAllChatMessages_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxChat.AddSayMessage
// [0x00820002] 
struct UForgeGFxChat_execAddSayMessage_Parms
{
	class APlayerReplicationInfo*                      SayingPRI;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FName                                       MessageType;                                      		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FSChatItem                               NewChatItem;                                      		// 0x0018 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxChat.FilterButtonInput
// [0x00020802] ( FUNC_Event )
struct UForgeGFxChat_eventFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FName                                    FoundBindName;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxChat.StopChatting
// [0x00020002] 
struct UForgeGFxChat_execStopChatting_Parms
{
};

// Function ForgeGame.ForgeGFxChat.SendMessage
// [0x00020002] 
struct UForgeGFxChat_execSendMessage_Parms
{
	// struct FString                                  TheMessage;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxChat.StartChatting
// [0x00024002] 
struct UForgeGFxChat_execStartChatting_Parms
{
	unsigned long                                      WantsTeamChat : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.ForgeGFxChat.ChatScrollDown
// [0x00020002] 
struct UForgeGFxChat_execChatScrollDown_Parms
{
};

// Function ForgeGame.ForgeGFxChat.ChatScrollUp
// [0x00020002] 
struct UForgeGFxChat_execChatScrollUp_Parms
{
};

// Function ForgeGame.ForgeGFxChat.ClearChat
// [0x00020002] 
struct UForgeGFxChat_execClearChat_Parms
{
};

// Function ForgeGame.ForgeGFxChat.HideChat
// [0x00020002] 
struct UForgeGFxChat_execHideChat_Parms
{
};

// Function ForgeGame.ForgeGFxChat.ShowChat
// [0x00020002] 
struct UForgeGFxChat_execShowChat_Parms
{
};

// Function ForgeGame.ForgeGFxChat.ConfigForRes
// [0x00820002] 
struct UForgeGFxChat_execConfigForRes_Parms
{
	int                                                SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0008 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxChat.Tick
// [0x00820002] 
struct UForgeGFxChat_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0004 (0x002C) [0x0000000000000000]              
	// float                                           MovementAmount;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           ChatWidth;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           DesiredBottom;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           ExtraChatInputSize;                               		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxChat.ConfigChat
// [0x00020002] 
struct UForgeGFxChat_execConfigChat_Parms
{
};

// Function ForgeGame.ForgeGFxChat.Start
// [0x00024002] 
struct UForgeGFxChat_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEnd.ConnectTo
// [0x00020002] 
struct UForgeGFxFrontEnd_execConnectTo_Parms
{
	struct FOnlineGameSearchResult                     TheMatchedServer;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPlayerController*                      TheDVPC;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  ServerURL;                                        		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   Success : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeGFxFrontEnd.FilterButtonInput
// [0x00020802] ( FUNC_Event )
struct UForgeGFxFrontEnd_eventFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEnd.ConfigForRes
// [0x00020002] 
struct UForgeGFxFrontEnd_execConfigForRes_Parms
{
	int                                                SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxFrontEnd.ShowInvite
// [0x00820002] 
struct UForgeGFxFrontEnd_execShowInvite_Parms
{
	struct FUniqueNetId                                GroupID;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     LeaderName;                                       		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FASDisplayInfo                           DI;                                               		// 0x0014 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEnd.ShowNotification
// [0x00820002] 
struct UForgeGFxFrontEnd_execShowNotification_Parms
{
	struct FString                                     TheMessage;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FASDisplayInfo                           DI;                                               		// 0x000C (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEnd.SetTerminateMessage
// [0x00820002] 
struct UForgeGFxFrontEnd_execSetTerminateMessage_Parms
{
	struct FString                                     TheMessage;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FASDisplayInfo                           DI;                                               		// 0x000C (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEnd.SetGeneralMessage
// [0x00820002] 
struct UForgeGFxFrontEnd_execSetGeneralMessage_Parms
{
	struct FString                                     TheMessage;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FASDisplayInfo                           DI;                                               		// 0x000C (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEnd.SetKickMessage
// [0x00022002] 
struct UForgeGFxFrontEnd_execSetKickMessage_Parms
{
	struct FString                                     NewKickMessage;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEnd.EnableJoinPlayerButtons
// [0x00020002] 
struct UForgeGFxFrontEnd_execEnableJoinPlayerButtons_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEnd.DisableJoinPlayerButtons
// [0x00020002] 
struct UForgeGFxFrontEnd_execDisableJoinPlayerButtons_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEnd.EnableQueueButtons
// [0x00020002] 
struct UForgeGFxFrontEnd_execEnableQueueButtons_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEnd.DisableQueueButtons
// [0x00020002] 
struct UForgeGFxFrontEnd_execDisableQueueButtons_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEnd.SetMenuFailMessage
// [0x00020002] 
struct UForgeGFxFrontEnd_execSetMenuFailMessage_Parms
{
	struct FString                                     NewMenuFailMessage;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEnd.JoinLobby
// [0x00020002] 
struct UForgeGFxFrontEnd_execJoinLobby_Parms
{
	struct FUniqueNetId                                GroupID;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FActiveLobbyInfo >                  LobbyList;                                        		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEnd.DeclineInvite
// [0x00820002] 
struct UForgeGFxFrontEnd_execDeclineInvite_Parms
{
	struct FUniqueNetId                                GroupID;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEnd.AcceptInvite
// [0x00820002] 
struct UForgeGFxFrontEnd_execAcceptInvite_Parms
{
	struct FUniqueNetId                                GroupID;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEnd.OnInviteDeclinePress
// [0x00020002] 
struct UForgeGFxFrontEnd_execOnInviteDeclinePress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEnd.OnInviteAcceptPress
// [0x00020002] 
struct UForgeGFxFrontEnd_execOnInviteAcceptPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEnd.Tick
// [0x00820002] 
struct UForgeGFxFrontEnd_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           CurrentTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           NewYPos;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0010 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEnd.GetSlideByName
// [0x00020002] 
struct UForgeGFxFrontEnd_execGetSlideByName_Parms
{
	struct FString                                     SlideName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UForgeGFxFrontEndSlide*                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEnd.SwapFromTo
// [0x00020002] 
struct UForgeGFxFrontEnd_execSwapFromTo_Parms
{
	struct FString                                     OldSlideName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     NewSlideName;                                     		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UForgeGFxFrontEndSlide*                   TheOldSlide;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UForgeGFxFrontEndSlide*                   TheNewSlide;                                      		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEnd.SlideInit
// [0x00020002] 
struct UForgeGFxFrontEnd_execSlideInit_Parms
{
	class UGFxObject*                                  NewSlideMC;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     NewSlideName;                                     		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEnd.ConfigFrontEnd
// [0x00020002] 
struct UForgeGFxFrontEnd_execConfigFrontEnd_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEnd.Start
// [0x00024002] 
struct UForgeGFxFrontEnd_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.DVNetworkLink.HandleAuthSteamPlayerResponse
// [0x00020002] 
struct ADVNetworkLink_execHandleAuthSteamPlayerResponse_Parms
{
	struct FString                                     ResponseString;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UJsonObject*                              ResponseJSON;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// class UJsonObject*                              GameTypesJSON;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVNetworkLink.HandleMessage
// [0x00020002] 
struct ADVNetworkLink_execHandleMessage_Parms
{
	class UJsonObject*                                 TheMessage;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVNetworkLink.HandleMessages
// [0x00020002] 
struct ADVNetworkLink_execHandleMessages_Parms
{
	struct FString                                     MessagesJSON;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UJsonObject*                              AllMessages;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVNetworkLink.ReceivedText
// [0x00020802] ( FUNC_Event )
struct ADVNetworkLink_eventReceivedText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FString                                  TextContent;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UJsonObject*                              TheResponse;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      LocalPC;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVNetworkLink.GetContentFromHTTP
// [0x00020002] 
struct ADVNetworkLink_execGetContentFromHTTP_Parms
{
	struct FString                                     PacketText;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.DVNetworkLink.Opened
// [0x00020802] ( FUNC_Event )
struct ADVNetworkLink_eventOpened_Parms
{
	// class ADVPlayerController*                      LocalPC;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  CommandArgs;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  PlayerIds;                                        		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class APlayerReplicationInfo*                   CurPRI;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVNetworkLink.GetPlayerStats
// [0x00020002] 
struct ADVNetworkLink_execGetPlayerStats_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// class UJsonObject*                              StatsObject;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVNetworkLink.URLEncode
// [0x00022002] 
struct ADVNetworkLink_execURLEncode_Parms
{
	struct FString                                     URLString;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  OutputString;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  CurChar;                                          		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVNetworkLink.ResolveFailed
// [0x00020802] ( FUNC_Event )
struct ADVNetworkLink_eventResolveFailed_Parms
{
};

// Function ForgeGame.DVNetworkLink.Resolved
// [0x00020802] ( FUNC_Event )
struct ADVNetworkLink_eventResolved_Parms
{
	struct FIpAddr                                     Addr;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVNetworkLink.ConnectFailed
// [0x00020002] 
struct ADVNetworkLink_execConnectFailed_Parms
{
};

// Function ForgeGame.DVNetworkLink.InitNetworkLink
// [0x00020002] 
struct ADVNetworkLink_execInitNetworkLink_Parms
{
	unsigned char                                      NewQueryType;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.ConnectTo
// [0x00820002] 
struct UForgeGFxFrontEndQuickMatchMenu_execConnectTo_Parms
{
	struct FOnlineGameSearchResult                     TheMatchedServer;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FOnlineGameSearchResult                  ZeroSearchResult;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.HandleGameSearchResults
// [0x00020002] 
struct UForgeGFxFrontEndQuickMatchMenu_execHandleGameSearchResults_Parms
{
	TArray< struct FOnlineGameSearchResult >           AllSearchResults;                                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             BestServerIndex;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.SearchForServer
// [0x00020002] 
struct UForgeGFxFrontEndQuickMatchMenu_execSearchForServer_Parms
{
	struct FString                                     GameModeQueue;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FString                                  Environment;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             SteamRegionId;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.OnAssaultPress
// [0x00020002] 
struct UForgeGFxFrontEndQuickMatchMenu_execOnAssaultPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.OnArenaPress
// [0x00020002] 
struct UForgeGFxFrontEndQuickMatchMenu_execOnArenaPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.OnKOTHPress
// [0x00020002] 
struct UForgeGFxFrontEndQuickMatchMenu_execOnKOTHPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.OnCTFPress
// [0x00020002] 
struct UForgeGFxFrontEndQuickMatchMenu_execOnCTFPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.OnTDMPress
// [0x00020002] 
struct UForgeGFxFrontEndQuickMatchMenu_execOnTDMPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.OnRandomPress
// [0x00020002] 
struct UForgeGFxFrontEndQuickMatchMenu_execOnRandomPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.OnRegionChange
// [0x00020002] 
struct UForgeGFxFrontEndQuickMatchMenu_execOnRegionChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.OnBackPress
// [0x00020002] 
struct UForgeGFxFrontEndQuickMatchMenu_execOnBackPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.Tick
// [0x00020002] 
struct UForgeGFxFrontEndQuickMatchMenu_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           CurrentTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.EnableQueueButtons
// [0x00020002] 
struct UForgeGFxFrontEndQuickMatchMenu_execEnableQueueButtons_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.DisableQueueButtons
// [0x00020002] 
struct UForgeGFxFrontEndQuickMatchMenu_execDisableQueueButtons_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndQuickMatchMenu.ConfigSlide
// [0x00020002] 
struct UForgeGFxFrontEndQuickMatchMenu_execConfigSlide_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSlideBar.Tick
// [0x00820002] 
struct UForgeGFxFrontEndSlideBar_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           CurrentTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           NewXLocation;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           NewAlpha;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0010 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSlideBar.FixDisappearing
// [0x00820002] 
struct UForgeGFxFrontEndSlideBar_execFixDisappearing_Parms
{
	// struct FASDisplayInfo                           DI;                                               		// 0x0000 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndSlideBar.SlideInSlide
// [0x00020002] 
struct UForgeGFxFrontEndSlideBar_execSlideInSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSlideBar.ShowSlide
// [0x00020002] 
struct UForgeGFxFrontEndSlideBar_execShowSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSlideBar.SlideOutSlide
// [0x00020002] 
struct UForgeGFxFrontEndSlideBar_execSlideOutSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndSlideBar.HideSlide
// [0x00020002] 
struct UForgeGFxFrontEndSlideBar_execHideSlide_Parms
{
};

// Function ForgeGame.DVParticleEffectManager.HandleParticleModuleEventSendToGame
// [0x00420802] ( FUNC_Event )
struct ADVParticleEffectManager_eventHandleParticleModuleEventSendToGame_Parms
{
	class UParticleModuleEventSendToGame*              InEvent;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     InCollideDirection;                               		// 0x0004 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FVector                                     InHitLocation;                                    		// 0x0010 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FVector                                     InHitNormal;                                      		// 0x001C (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FName                                       InBoneName;                                       		// 0x0028 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function ForgeGame.DVParticleModuleSpawnDecalGameEvent.DoEvent
// [0x00C20802] ( FUNC_Event )
struct UDVParticleModuleSpawnDecalGameEvent_eventDoEvent_Parms
{
	struct FVector                                     InCollideDirection;                               		// 0x0000 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FVector                                     InHitLocation;                                    		// 0x000C (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FVector                                     InHitNormal;                                      		// 0x0018 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FName                                       InBoneName;                                       		// 0x0024 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	// class AWorldInfo*                               WorldInfo;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MaterialInstanceTimeVarying;                      		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           ChanceMax;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           Chance;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           DecalWidth;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           DecalHeight;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           ProjectionHeight;                                 		// 0x004C (0x0004) [0x0000000000000000]              
	// class UMaterialInterface*                       DecalMaterial;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0060 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Actor;                                            		// 0x006C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVParticleSystemAttachment.AttachToSocketOnSkeletalMeshComponent
// [0x00020102] 
struct ADVParticleSystemAttachment_execAttachToSocketOnSkeletalMeshComponent_Parms
{
	class USkeletalMeshComponent*                      BaseSkeletalMeshComponent;                        		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UPrimitiveComponent*                      PrimitiveComponent;                               		// 0x000C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function ForgeGame.DVParticleSystemAttachment.AttachToSocket
// [0x00020102] 
struct ADVParticleSystemAttachment_execAttachToSocket_Parms
{
	class ADVPawn*                                     DVPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UPrimitiveComponent*                      PrimitiveComponent;                               		// 0x000C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function ForgeGame.DVParticleSystemAttachment.GetComponent
// [0x00020102] 
struct ADVParticleSystemAttachment_execGetComponent_Parms
{
	class UPrimitiveComponent*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function ForgeGame.ForgeGameInfoArena.CheckTowerActivation
// [0x00020002] 
struct AForgeGameInfoArena_execCheckTowerActivation_Parms
{
	// class ADVTower*                                 CurTower;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< class ADVTower* >                       PickTowers;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGameInfoArena.SpawnDefaultPawnFor
// [0x00020002] 
struct AForgeGameInfoArena_execSpawnDefaultPawnFor_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            StartSpot;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADVPlayerReplicationInfo*                 PRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoArena.WinningTeamId
// [0x00020002] 
struct AForgeGameInfoArena_execWinningTeamId_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned char                                   Team0Alive;                                       		// 0x0008 (0x0001) [0x0000000000000000]              
	// unsigned char                                   Team1Alive;                                       		// 0x0009 (0x0001) [0x0000000000000000]              
	// class ADVPlayerReplicationInfo*                 CurDVPRI;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Team0LongestLife;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Team1LongestLife;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoArena.OneTimeMapSetup
// [0x00020002] 
struct AForgeGameInfoArena_execOneTimeMapSetup_Parms
{
	// class ADVFlagStand*                             CurFlagStand;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVTower*                                 CurTower;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoArena.MatchFinished
// [0x00020002] 
struct AForgeGameInfoArena_execMatchFinished_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Team0Lives;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Team1Lives;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Team0Players;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Team1Players;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ADVPlayerReplicationInfo*                 CurDVPRI;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoArena.ScoreKill
// [0x00020002] 
struct AForgeGameInfoArena_execScoreKill_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Other;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVTower.Deactivate
// [0x00020002] 
struct ADVTower_execDeactivate_Parms
{
};

// Function ForgeGame.DVTower.Activate
// [0x00020002] 
struct ADVTower_execActivate_Parms
{
};

// Function ForgeGame.DVTower.ResetForNewRound
// [0x00020002] 
struct ADVTower_execResetForNewRound_Parms
{
};

// Function ForgeGame.DVTower.SetOwningTeam
// [0x00020002] 
struct ADVTower_execSetOwningTeam_Parms
{
};

// Function ForgeGame.DVTower.Tick
// [0x00020002] 
struct ADVTower_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Team0ValidCappers;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Team1ValidCappers;                                		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  HUDMessage;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.DVTower.GiveTuggersCredit
// [0x00020002] 
struct ADVTower_execGiveTuggersCredit_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Team0ValidCappers;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Team1ValidCappers;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   CreditTeam0 : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   CreditTeam1 : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.DVTower.CheckTuggerValidity
// [0x00020002] 
struct ADVTower_execCheckTuggerValidity_Parms
{
	// class ADVPawnHero*                              CurTugger;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVTower.UnTouch
// [0x00020802] ( FUNC_Event )
struct ADVTower_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVTower.Touch
// [0x00020902] ( FUNC_Event )
struct ADVTower_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVTower.PostBeginPlay
// [0x00020102] 
struct ADVTower_execPostBeginPlay_Parms
{
};

// Function ForgeGame.ForgeOnlineStatsRead.GetGlobalStats
// [0x00020002] 
struct UForgeOnlineStatsRead_execGetGlobalStats_Parms
{
	struct FUniqueNetId                                PlayerUniqueId;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ColumnId;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  OutputString;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             CurValue;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineStatsRead.GetStatsForClass
// [0x00020002] 
struct UForgeOnlineStatsRead_execGetStatsForClass_Parms
{
	struct FUniqueNetId                                PlayerUniqueId;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ChosenClass;                                      		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  OutputString;                                     		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             CurValue;                                         		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineStatsRead.FormatTimeStat
// [0x00022002] 
struct UForgeOnlineStatsRead_execFormatTimeStat_Parms
{
	int                                                StatValue;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeOnlineStatsRead.FormatCountStat
// [0x00022002] 
struct UForgeOnlineStatsRead_execFormatCountStat_Parms
{
	int                                                StatValue;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.DVProjectileHook.AddParticleEmitter
// [0x00020102] 
struct ADVProjectileHook_execAddParticleEmitter_Parms
{
	class APawn*                                       Hero;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVProjectileHook.KillPartcleEmitter
// [0x00020102] 
struct ADVProjectileHook_execKillPartcleEmitter_Parms
{
};

// Function ForgeGame.DVProjectileHook.UpdateBeamEmitter
// [0x00020102] 
struct ADVProjectileHook_execUpdateBeamEmitter_Parms
{
	struct FVector                                     EndLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVProjectileHook.Tick
// [0x00020102] 
struct ADVProjectileHook_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVProjectileHook.Destoryed
// [0x00020002] 
struct ADVProjectileHook_execDestoryed_Parms
{
};

// Function ForgeGame.DVProjectileHook.Explode
// [0x00020102] 
struct ADVProjectileHook_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVProjectileHook.ProjectileHoming
// [0x00020100] 
struct ADVProjectileHook_execProjectileHoming_Parms
{
};

// Function ForgeGame.DVRavagerChainAttachment.Tick
// [0x00820102] 
struct ADVRavagerChainAttachment_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  EndSocketLocation;                                		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function ForgeGame.DVRavagerChainAttachment.AttachToSocket
// [0x00020102] 
struct ADVRavagerChainAttachment_execAttachToSocket_Parms
{
	class ADVPawn*                                     DVPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.DVSeqAct_AssignTeam.Activated
// [0x00020802] ( FUNC_Event )
struct UDVSeqAct_AssignTeam_eventActivated_Parms
{
};

// Function ForgeGame.DVSeqAct_ChangeBotHealth.Activated
// [0x00020802] ( FUNC_Event )
struct UDVSeqAct_ChangeBotHealth_eventActivated_Parms
{
};

// Function ForgeGame.DVSeqAct_ChangeBotSkill.Activated
// [0x00020802] ( FUNC_Event )
struct UDVSeqAct_ChangeBotSkill_eventActivated_Parms
{
};

// Function ForgeGame.DVSeqAct_DrawText.Reset
// [0x00020802] ( FUNC_Event )
struct UDVSeqAct_DrawText_eventReset_Parms
{
	// class ADVPlayerController*                      ThePC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVSeqAct_DrawText.Activated
// [0x00020802] ( FUNC_Event )
struct UDVSeqAct_DrawText_eventActivated_Parms
{
	// class ADVPlayerController*                      ThePC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  FinalMessage;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             DefaultAbilityIndex;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             MappedAbilityIndex;                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVSeqAct_GetTeamNumber.Activated
// [0x00020802] ( FUNC_Event )
struct UDVSeqAct_GetTeamNumber_eventActivated_Parms
{
};

// Function ForgeGame.DVSeqAct_HideHUDMessage.Activated
// [0x00020802] ( FUNC_Event )
struct UDVSeqAct_HideHUDMessage_eventActivated_Parms
{
	// class ADVPlayerController*                      ThePC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVSeqAct_LockAbility.Activated
// [0x00020802] ( FUNC_Event )
struct UDVSeqAct_LockAbility_eventActivated_Parms
{
	// class ADVPlayerController*                      ThePC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVSeqAct_ResetKismet.Activated
// [0x00020802] ( FUNC_Event )
struct UDVSeqAct_ResetKismet_eventActivated_Parms
{
	// class USequence*                                GameSeq;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                AllSeqObjects;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVSeqAct_SetAbilityCooldowns.Activated
// [0x00020802] ( FUNC_Event )
struct UDVSeqAct_SetAbilityCooldowns_eventActivated_Parms
{
	// class ADVPlayerController*                      ThePC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVSeqAct_SetTeamSpawn.Activated
// [0x00020802] ( FUNC_Event )
struct UDVSeqAct_SetTeamSpawn_eventActivated_Parms
{
	// class APlayerStart*                             CurSpawnPoint;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVSeqAct_ShowHUDMessage.Activated
// [0x00020802] ( FUNC_Event )
struct UDVSeqAct_ShowHUDMessage_eventActivated_Parms
{
	// class ADVPlayerController*                      ThePC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  FinalMessage;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             DefaultAbilityIndex;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             MappedAbilityIndex;                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVSeqAct_TutorialSectionComplete.Activated
// [0x00020802] ( FUNC_Event )
struct UDVSeqAct_TutorialSectionComplete_eventActivated_Parms
{
	// struct FString                                  OldSectionsComplete;                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ADVPlayerController*                      ThePC;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVSeqCond_ComparePlayerClass.Activated
// [0x00020802] ( FUNC_Event )
struct UDVSeqCond_ComparePlayerClass_eventActivated_Parms
{
	// class ADVPlayerController*                      ThePC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVSeqCond_ComparePlayerTeam.Activated
// [0x00020802] ( FUNC_Event )
struct UDVSeqCond_ComparePlayerTeam_eventActivated_Parms
{
};

// Function ForgeGame.DVSeqEvent_Input.Setup
// [0x00020002] 
struct UDVSeqEvent_Input_execSetup_Parms
{
	// class ADVPlayerController*                      CurController;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UPlayerInput*                             ThePlayerInput;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   IsValid : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             CurSettingIndex;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             TheReBoundIndex;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  CurSettingValue;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.DVSeqEvent_Input.Toggled
// [0x00020802] ( FUNC_Event )
struct UDVSeqEvent_Input_eventToggled_Parms
{
};

// Function ForgeGame.DVSeqVar_HumanPlayer.GetObjectValue
// [0x00020002] 
struct UDVSeqVar_HumanPlayer_execGetObjectValue_Parms
{
	class UObject*                                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADVPlayerController*                      C;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.DVStaticMeshAttachment.GetComponent
// [0x00020102] 
struct ADVStaticMeshAttachment_execGetComponent_Parms
{
	class UPrimitiveComponent*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function ForgeGame.DVTeamInfo.Tick
// [0x00020102] 
struct ADVTeamInfo_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             NewSize;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineGameSettings.UpdateForgeGameSettings
// [0x00020002] 
struct UForgeOnlineGameSettings_execUpdateForgeGameSettings_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             GlobalAveragedCalculatedSkill;                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AWorldInfo*                               WorldInfo;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeOnlineGameSettings.UpdateFromURL
// [0x00420002] 
struct UForgeOnlineGameSettings_execUpdateFromURL_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class AGameInfo*                                   Game;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGameInfoAssault.OneTimeMapSetup
// [0x00020002] 
struct AForgeGameInfoAssault_execOneTimeMapSetup_Parms
{
	// class ADVFlagStand*                             CurFlagStand;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVTower*                                 CurTower;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoFrontEnd.RestartPlayer
// [0x00020000] 
struct AForgeGameInfoFrontEnd_execRestartPlayer_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGameInfoKOTH.ScoreTowers
// [0x00020002] 
struct AForgeGameInfoKOTH_execScoreTowers_Parms
{
	// class ADVTower*                                 CurTower;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoKOTH.WinningTeamId
// [0x00020002] 
struct AForgeGameInfoKOTH_execWinningTeamId_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGameInfoKOTH.OneTimeMapSetup
// [0x00020002] 
struct AForgeGameInfoKOTH_execOneTimeMapSetup_Parms
{
	// class ADVFlagStand*                             CurFlagStand;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoKOTH.MatchFinished
// [0x00020002] 
struct AForgeGameInfoKOTH_execMatchFinished_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoKOTH.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct AForgeGameInfoKOTH_eventPostBeginPlay_Parms
{
};

// Function ForgeGame.ForgeGameInfoTDM.WinningTeamId
// [0x00020002] 
struct AForgeGameInfoTDM_execWinningTeamId_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGameInfoTDM.OneTimeMapSetup
// [0x00020002] 
struct AForgeGameInfoTDM_execOneTimeMapSetup_Parms
{
	// class ADVFlagStand*                             CurFlagStand;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVTower*                                 CurTower;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoTDM.MatchFinished
// [0x00020002] 
struct AForgeGameInfoTDM_execMatchFinished_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGameInfoTDM.ScoreKill
// [0x00020002] 
struct AForgeGameInfoTDM_execScoreKill_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Other;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGameInfoTDM.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct AForgeGameInfoTDM_eventPostBeginPlay_Parms
{
};

// Function ForgeGame.ForgeGFxChatTextInput.SetTextSize
// [0x00020002] 
struct UForgeGFxChatTextInput_execSetTextSize_Parms
{
	float                                              NewTextSize;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxSwappableIconObject.ChangeIconImage
// [0x00020002] 
struct UForgeGFxSwappableIconObject_execChangeIconImage_Parms
{
	struct FString                                     NewIconName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                IconWidth;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                IconHeight;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxQuitNagBackground.SetLetterSpacing
// [0x00020002] 
struct UForgeGFxQuitNagBackground_execSetLetterSpacing_Parms
{
	int                                                NewLetterSpacing;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxFrontEndTrainingMenu.OnBotMatchPress
// [0x00020002] 
struct UForgeGFxFrontEndTrainingMenu_execOnBotMatchPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndTrainingMenu.OnTutorialPress
// [0x00020002] 
struct UForgeGFxFrontEndTrainingMenu_execOnTutorialPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndTrainingMenu.OnBackPress
// [0x00020002] 
struct UForgeGFxFrontEndTrainingMenu_execOnBackPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndTrainingMenu.ConfigSlide
// [0x00020002] 
struct UForgeGFxFrontEndTrainingMenu_execConfigSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndCredits.Tick
// [0x00820002] 
struct UForgeGFxFrontEndCredits_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0004 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndCredits.ConfigForRes
// [0x00820002] 
struct UForgeGFxFrontEndCredits_execConfigForRes_Parms
{
	int                                                SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             TotalVisiblePixels;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x000C (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndCredits.ShowSlide
// [0x00820002] 
struct UForgeGFxFrontEndCredits_execShowSlide_Parms
{
	// struct FASDisplayInfo                           DI;                                               		// 0x0000 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndCredits.ConfigSlide
// [0x00020002] 
struct UForgeGFxFrontEndCredits_execConfigSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.UpdateStatPoints
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execUpdateStatPoints_Parms
{
	int                                                TheClassId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UJsonObject*                                 TheStatPointDetails;                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.UpdateAvailableTitles
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execUpdateAvailableTitles_Parms
{
	struct FString                                     TheAvailableTitles;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UJsonObject*                              TitlesJSON;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.UpdateSkinOptions
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execUpdateSkinOptions_Parms
{
	int                                                TheClassId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     TheSkinOptions;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UJsonObject*                              SkinsJSON;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned char                                   CurSkinOption;                                    		// 0x0018 (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.UpdateAccountDetails
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execUpdateAccountDetails_Parms
{
	class UJsonObject*                                 TheNewAccountDetails;                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             InnerCounter;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UJsonObject*                              TheClassInfo;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SpendCustomizationPoint
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execSpendCustomizationPoint_Parms
{
	int                                                PlayerClassId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                FromCategoryId;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ToCategoryId;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SpendArmorPoint
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execSpendArmorPoint_Parms
{
	int                                                PlayerClassId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                FromCategoryId;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ToCategoryId;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.GetUpdatedStatPointsForClass
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execGetUpdatedStatPointsForClass_Parms
{
	int                                                PlayerClassId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.GetUpdatedStatPoints
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execGetUpdatedStatPoints_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SetPlayerTitle
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execSetPlayerTitle_Parms
{
	struct FString                                     NewTitle;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.GetUpdatedPlayerTitles
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execGetUpdatedPlayerTitles_Parms
{
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SetPlayerSkinForClass
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execSetPlayerSkinForClass_Parms
{
	unsigned char                                      ThePlayerClass;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TheSkinId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.GetUpdatedPlayerSkinsForClass
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execGetUpdatedPlayerSkinsForClass_Parms
{
	unsigned char                                      ThePlayerClass;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.GetUpdatedPlayerSkins
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execGetUpdatedPlayerSkins_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.GetUpdatedAccountDetails
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execGetUpdatedAccountDetails_Parms
{
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.UpdateArmorSubTab
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execUpdateArmorSubTab_Parms
{
	// unsigned char                                   ChosenClassEnum;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PendingChange;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   CurIsActive : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  CurBuildingText;                                  		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.UpdateASPSubTab
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execUpdateASPSubTab_Parms
{
	// unsigned char                                   ChosenClassEnum;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PendingChange;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           PendingChangeFloat;                               		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   CurIsActive : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  CurBuildingText;                                  		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ColorizeArmorDifference
// [0x00024002] 
struct UForgeGFxFrontEndAccountMenu_execColorizeArmorDifference_Parms
{
	int                                                Difference;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      IsActive : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ColorizeArmor
// [0x00024002] 
struct UForgeGFxFrontEndAccountMenu_execColorizeArmor_Parms
{
	int                                                Base;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Difference;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      IsActive : 1;                                     		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.DetailedColorizeSpeed
// [0x00024002] 
struct UForgeGFxFrontEndAccountMenu_execDetailedColorizeSpeed_Parms
{
	float                                              Value;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      IsActive : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.DetailedColorizeInt
// [0x00024002] 
struct UForgeGFxFrontEndAccountMenu_execDetailedColorizeInt_Parms
{
	int                                                Value;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      IsActive : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ColorizeInt
// [0x00024002] 
struct UForgeGFxFrontEndAccountMenu_execColorizeInt_Parms
{
	int                                                Value;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      IsActive : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.Tick
// [0x00820002] 
struct UForgeGFxFrontEndAccountMenu_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0004 (0x002C) [0x0000000000000000]              
	// float                                           CurrentTime;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           MouseX;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           MouseY;                                           		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ViewLocation;                                     		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLocation;                                   		// 0x0048 (0x000C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnClassButtonChange
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnClassButtonChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnClassButtonPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnClassButtonPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnBackPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnBackPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnAbilityFocusPressed
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnAbilityFocusPressed_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxClikWidget*                           Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             AbilityFocusLineIndex;                            		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             AbilityFocusIndex;                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             ProfileAbilityFocusStartSettingId;                		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             ProfileAbilityFocusActualSettingId;               		// 0x003C (0x0004) [0x0000000000000000]              
	// struct FString                                  ButtonData;                                       		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FString >                        ButtonDataTokens;                                 		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnSkinApplyPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnSkinApplyPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// unsigned char                                   ChosenClassEnum;                                  		// 0x0028 (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnSkinNextPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnSkinNextPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// unsigned char                                   ChosenClassEnum;                                  		// 0x0028 (0x0001) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnSkinPrevPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnSkinPrevPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// unsigned char                                   ChosenClassEnum;                                  		// 0x0028 (0x0001) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnChangeSkinPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnChangeSkinPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnBuyLevelPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnBuyLevelPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ADVNetworkLink*                           DVNetLink;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.HandleScrollDown
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execHandleScrollDown_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.HandleScrollUp
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execHandleScrollUp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.HandlePasteCommand
// [0x00020000] 
struct UForgeGFxFrontEndAccountMenu_execHandlePasteCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.HandleCopyCommand
// [0x00020000] 
struct UForgeGFxFrontEndAccountMenu_execHandleCopyCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.HandleCutCommand
// [0x00020000] 
struct UForgeGFxFrontEndAccountMenu_execHandleCutCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ConfigForRes
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execConfigForRes_Parms
{
	int                                                SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnArmorApplyPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnArmorApplyPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// unsigned char                                   ChosenClassEnum;                                  		// 0x0028 (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnArmorResetPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnArmorResetPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnArmorPlusPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnArmorPlusPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnArmorMinusPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnArmorMinusPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnASPApplyPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnASPApplyPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// unsigned char                                   ChosenClassEnum;                                  		// 0x0028 (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnASPResetPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnASPResetPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnASPPlusPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnASPPlusPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnASPMinusPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnASPMinusPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.GetSpendingCategoryIdFromButtonData
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execGetSpendingCategoryIdFromButtonData_Parms
{
	struct FString                                     ButtonData;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnEquipmentTabPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnEquipmentTabPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnArmorSubTabPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnArmorSubTabPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnASPSubTabPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnASPSubTabPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnStatsTabPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnStatsTabPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnAbilitiesTabPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnAbilitiesTabPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnExperienceTabPress
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnExperienceTabPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ShowTip
// [0x00024002] 
struct UForgeGFxFrontEndAccountMenu_execShowTip_Parms
{
	struct FString                                     TipName;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ShowFlash : 1;                                    		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ResetTips
// [0x00024002] 
struct UForgeGFxFrontEndAccountMenu_execResetTips_Parms
{
	unsigned long                                      ShowFlash : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.FlashTips
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execFlashTips_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ShowSlide
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execShowSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.HideSlide
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execHideSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.FilterButtonInput
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           MouseX;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           MouseY;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnPlayerTitleChange
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execOnPlayerTitleChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnSlideRightPress
// [0x00020000] 
struct UForgeGFxFrontEndAccountMenu_execOnSlideRightPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.OnSlideLeftPress
// [0x00020000] 
struct UForgeGFxFrontEndAccountMenu_execOnSlideLeftPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ScrollToReward
// [0x00820002] 
struct UForgeGFxFrontEndAccountMenu_execScrollToReward_Parms
{
	int                                                NewLevelNumber;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Counter;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             InnerCounter;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             UsedAbilityRewards;                               		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             UsedThinRewards;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0014 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SetAvatar
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execSetAvatar_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SetPreviewSkin
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execSetPreviewSkin_Parms
{
	class ADVDummyPreviewController*                   PreviewController;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADVPlayerReplicationInfo*                 ThePRI;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned char                                   SkinClass;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.UpdateSkins
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execUpdateSkins_Parms
{
	// unsigned char                                   ChosenClassEnum;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ConfigureSkinPreview
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execConfigureSkinPreview_Parms
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class AWorldInfo*                               TheWI;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// class ADVDummyPreviewController*                CurPreviewController;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned char                                   ChosenClassEnum;                                  		// 0x0014 (0x0001) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned char                                   CloudChosenSkin;                                  		// 0x001C (0x0001) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SetPreviewMeshLODLevels
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execSetPreviewMeshLODLevels_Parms
{
	// class AWorldInfo*                               TheWI;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVDummyPreviewController*                CurPreviewController;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ConfigureXPRewards
// [0x00820002] 
struct UForgeGFxFrontEndAccountMenu_execConfigureXPRewards_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             InnerCounter;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             UsedAbilityRewards;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             UsedThinRewards;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             YDistance;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             ClassLevel;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0018 (0x002C) [0x0000000000000000]              
	// unsigned char                                   CurPlayerClassEnum;                               		// 0x0044 (0x0001) [0x0000000000000000]              
	// class ADVAbility*                               CurAbilityArchetype;                              		// 0x0048 (0x0004) [0x0000000000000000]              
	// struct FString                                  CurFocusName;                                     		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  CurFocusDescription;                              		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ConfigureAbilityFocuses
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execConfigureAbilityFocuses_Parms
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// unsigned char                                   CurPlayerClassEnum;                               		// 0x000C (0x0001) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             InnerCounter;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             ProfileAbilityFocusSettingId;                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             SelectedAbilityFocusIndex;                        		// 0x001C (0x0004) [0x0000000000000000]              
	// class ADVAbility*                               CurAbilityArchetype;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ADVAbility*                               CurAbilityArchetype_Focus;                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// unsigned char                                   AbilityFocusEnum;                                 		// 0x0028 (0x0001) [0x0000000000000000]              
	// struct FString                                  SelectedAbilityFocusIndexStr;                     		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.GetRequiredLevelForAbility
// [0x00024002] 
struct UForgeGFxFrontEndAccountMenu_execGetRequiredLevelForAbility_Parms
{
	struct FString                                     OwningClassName;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      Slot;                                             		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Focus;                                            		// 0x000D (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             ClassCounter;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             LevelCounter;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SetupStatsForChosenClass
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execSetupStatsForChosenClass_Parms
{
	// class ADVPlayerReplicationInfo*                 TheDVPRI;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ConfigForClass
// [0x00820002] 
struct UForgeGFxFrontEndAccountMenu_execConfigForClass_Parms
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           BarScale;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0014 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.CreateXPRewardLevelItems
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execCreateXPRewardLevelItems_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ConfigureClassButtonFor
// [0x00820002] 
struct UForgeGFxFrontEndAccountMenu_execConfigureClassButtonFor_Parms
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct UForgeGFxFrontEndAccountMenu_FSClassSelectionButton ReturnValue;                                      		// 0x000C (0x0028) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct UForgeGFxFrontEndAccountMenu_FSClassSelectionButton CurClassButton;                                   		// 0x0034 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASDisplayInfo                           DI;                                               		// 0x005C (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.CreateAbilityFocusItems
// [0x00820002] 
struct UForgeGFxFrontEndAccountMenu_execCreateAbilityFocusItems_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             InnerCounter;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0008 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SetupGlobalStats
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execSetupGlobalStats_Parms
{
	// class ADVPlayerReplicationInfo*                 TheDVPRI;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.RenderTargetY
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execRenderTargetY_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.RenderTargetX
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execRenderTargetX_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             TotalVisiblePixels;                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.SetupSkinPreviewRenderTarget
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execSetupSkinPreviewRenderTarget_Parms
{
	// class ASceneCapture2DActor*                     SceneCapture2DActor;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USceneCapture2DComponent*                 SceneCapture2DComponent;                          		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class AWorldInfo*                               WorldInfo;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UTextureRenderTarget2D*                   TextureRenderTarget2D;                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndAccountMenu.ConfigSlide
// [0x00020002] 
struct UForgeGFxFrontEndAccountMenu_execConfigSlide_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               CurContainer;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.FilterButtonInput
// [0x00020802] ( FUNC_Event )
struct UForgeGFxFrontEndGroupMenu_eventFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.SendMessage
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execSendMessage_Parms
{
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnSteamActionPress
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execOnSteamActionPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             ActionIndex;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             LP;                                               		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnPlayerNamePress
// [0x00820002] 
struct UForgeGFxFrontEndGroupMenu_execOnPlayerNamePress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxObject*                               Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             MemberIndex;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0030 (0x002C) [0x0000000000000000]              
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             LP;                                               		// 0x0060 (0x0004) [0x0000000000000000]              
	// struct FVector2D                                MousePosition;                                    		// 0x0064 (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnChatInputFocusOut
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execOnChatInputFocusOut_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnChatInputFocusIn
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execOnChatInputFocusIn_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.ChangeReady
// [0x00824002] 
struct UForgeGFxFrontEndGroupMenu_execChangeReady_Parms
{
	unsigned long                                      NewReady : 1;                                     		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.HandleGameSearchResults
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execHandleGameSearchResults_Parms
{
	TArray< struct FOnlineGameSearchResult >           AllSearchResults;                                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             BestServerIndex;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PlayerController;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< unsigned char >                         Data;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  BestServerURL;                                    		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.GroupLaunch
// [0x00820002] 
struct UForgeGFxFrontEndGroupMenu_execGroupLaunch_Parms
{
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  Environment;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             SteamRegionId;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.KickMember
// [0x00820002] 
struct UForgeGFxFrontEndGroupMenu_execKickMember_Parms
{
	struct FUniqueNetId                                TargetId;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PlayerController;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< unsigned char >                         Data;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.LeaveGroup
// [0x00820002] 
struct UForgeGFxFrontEndGroupMenu_execLeaveGroup_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.RefreshAvatars
// [0x00820002] 
struct UForgeGFxFrontEndGroupMenu_execRefreshAvatars_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             AvatarCounter;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             MyId;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// unsigned long                                   AvatarFound : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.StoreAvatar
// [0x00820002] 
struct UForgeGFxFrontEndGroupMenu_execStoreAvatar_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UTexture2D*                                  Avatar;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FSPlayerAvatar                           NewAvatar;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.UpdateSettings
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execUpdateSettings_Parms
{
	TArray< struct FLobbyMetaData >                    NewLobbySettings;                                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             Counter;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             GameModeId;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             OptionCounter;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             EnabledIndex;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnGameModeChange
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execOnGameModeChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             ChosenMenuIndex;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             MenuCounter;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnRegionChange
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execOnRegionChange_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.EnableQueueButtons
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execEnableQueueButtons_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             EnabledRows;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PendingChosenIndex;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             PendingGameQueueId;                               		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             CurGameModeId;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned long                                   BroadcastGameMode : 1;                            		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnInvitePress
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execOnInvitePress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ADVPlayerController*                      TheDVPC;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnLaunchPress
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execOnLaunchPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnReadyPress
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execOnReadyPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.OnBackPress
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execOnBackPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.HandleScrollDown
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execHandleScrollDown_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.HandleScrollUp
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execHandleScrollUp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.HandlePasteCommand
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execHandlePasteCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.HandleCopyCommand
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execHandleCopyCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.HandleCutCommand
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execHandleCutCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.DrawChatMessage
// [0x00820002] 
struct UForgeGFxFrontEndGroupMenu_execDrawChatMessage_Parms
{
	struct FSGroupChatItem                             NewChatItem;                                      		// 0x0000 (0x002C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ADVPlayerReplicationInfo*                 MyPRI;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FString                                  TheChatString;                                    		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  TheMessageString;                                 		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASDisplayInfo                           DI;                                               		// 0x0048 (0x002C) [0x0000000000000000]              
	// float                                           CurMessageHeight;                                 		// 0x0074 (0x0004) [0x0000000000000000]              
	// float                                           ChatScrollMinimum;                                		// 0x0078 (0x0004) [0x0000000000000000]              
	// float                                           ChatScrollPos;                                    		// 0x007C (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.AddGroupMessage
// [0x00820002] 
struct UForgeGFxFrontEndGroupMenu_execAddGroupMessage_Parms
{
	struct FUniqueNetId                                SayingId;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FSGroupChatItem                          NewChatItem;                                      		// 0x0014 (0x002C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.ChatScrollDown
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execChatScrollDown_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.ChatScrollUp
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execChatScrollUp_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.ClearChat
// [0x00820002] 
struct UForgeGFxFrontEndGroupMenu_execClearChat_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0004 (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.Tick
// [0x00820002] 
struct UForgeGFxFrontEndGroupMenu_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0004 (0x002C) [0x0000000000000000]              
	// float                                           DesiredBottom;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.ConfigForRes
// [0x00820002] 
struct UForgeGFxFrontEndGroupMenu_execConfigForRes_Parms
{
	int                                                SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             TotalVisiblePixels;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x000C (0x002C) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.ShowSlide
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execShowSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.HideSlide
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execHideSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.UpdateGroup
// [0x00824002] 
struct UForgeGFxFrontEndGroupMenu_execUpdateGroup_Parms
{
	struct FActiveLobbyInfo                            TheLobbyData;                                     		// 0x0000 (0x0020) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                MemberIndex;                                      		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Status;                                           		// 0x0024 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	// int                                             MemberCounter;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             MemberDataCounter;                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             AvatarCounter;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             FinalMemberCounter;                               		// 0x003C (0x0004) [0x0000000000000000]              
	// unsigned long                                   CurMemberReady : 1;                               		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   CurMemberLeader : 1;                              		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   HaveAvatar : 1;                                   		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   SomebodyNotReady : 1;                             		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UOnlineSubsystemSteamworks*               SteamSubsystem;                                   		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             LobbyAdminId;                                     		// 0x0054 (0x0008) [0x0000000000000000]              
	// struct FString                                  LobbyAdminName;                                   		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.NewGroupCreated
// [0x00020002] 
struct UForgeGFxFrontEndGroupMenu_execNewGroupCreated_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndGroupMenu.ConfigSlide
// [0x00820002] 
struct UForgeGFxFrontEndGroupMenu_execConfigSlide_Parms
{
	// int                                             Counter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FSGroupGameMode                          CurGameMode;                                      		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndCommunityMenu.OnFriendsPress
// [0x00020002] 
struct UForgeGFxFrontEndCommunityMenu_execOnFriendsPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ADVPlayerController*                      TheDVPC;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndCommunityMenu.OnBackPress
// [0x00020002] 
struct UForgeGFxFrontEndCommunityMenu_execOnBackPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndCommunityMenu.ConfigSlide
// [0x00020002] 
struct UForgeGFxFrontEndCommunityMenu_execConfigSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.OnBackPress
// [0x00020002] 
struct UForgeGFxFrontEndJoinPlayerMenu_execOnBackPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.OnJoinPlayerPress
// [0x00020002] 
struct UForgeGFxFrontEndJoinPlayerMenu_execOnJoinPlayerPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.OnNameInputFocusOut
// [0x00020002] 
struct UForgeGFxFrontEndJoinPlayerMenu_execOnNameInputFocusOut_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.OnNameInputFocusIn
// [0x00020002] 
struct UForgeGFxFrontEndJoinPlayerMenu_execOnNameInputFocusIn_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.HandlePasteCommand
// [0x00020002] 
struct UForgeGFxFrontEndJoinPlayerMenu_execHandlePasteCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.HandleCopyCommand
// [0x00020002] 
struct UForgeGFxFrontEndJoinPlayerMenu_execHandleCopyCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.HandleCutCommand
// [0x00020002] 
struct UForgeGFxFrontEndJoinPlayerMenu_execHandleCutCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.EnableJoinPlayerButtons
// [0x00020002] 
struct UForgeGFxFrontEndJoinPlayerMenu_execEnableJoinPlayerButtons_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.DisableJoinPlayerButtons
// [0x00020002] 
struct UForgeGFxFrontEndJoinPlayerMenu_execDisableJoinPlayerButtons_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndJoinPlayerMenu.ConfigSlide
// [0x00020002] 
struct UForgeGFxFrontEndJoinPlayerMenu_execConfigSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.OnJoinPlayerPress
// [0x00020002] 
struct UForgeGFxFrontEndPlayMenu_execOnJoinPlayerPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.ShowServerBrowserPopup
// [0x00020002] 
struct UForgeGFxFrontEndPlayMenu_execShowServerBrowserPopup_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.HideServerBrowserPopup
// [0x00020002] 
struct UForgeGFxFrontEndPlayMenu_execHideServerBrowserPopup_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.OnServerBrowserPopupPress
// [0x00020002] 
struct UForgeGFxFrontEndPlayMenu_execOnServerBrowserPopupPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.OnCreateGroupPress
// [0x00020002] 
struct UForgeGFxFrontEndPlayMenu_execOnCreateGroupPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.OnBrowseServerPress
// [0x00020002] 
struct UForgeGFxFrontEndPlayMenu_execOnBrowseServerPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.OnBackPress
// [0x00020002] 
struct UForgeGFxFrontEndPlayMenu_execOnBackPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.SlideInSlide
// [0x00020002] 
struct UForgeGFxFrontEndPlayMenu_execSlideInSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.ShowSlide
// [0x00020002] 
struct UForgeGFxFrontEndPlayMenu_execShowSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndPlayMenu.ConfigSlide
// [0x00020002] 
struct UForgeGFxFrontEndPlayMenu_execConfigSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnQuitNagPress
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execOnQuitNagPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnExitPress
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execOnExitPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnCreditsPress
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execOnCreditsPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnSettingsPress
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execOnSettingsPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnEnterCodeCancelPress
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execOnEnterCodeCancelPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnEnterCodeSendPress
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execOnEnterCodeSendPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnEnterCodePress
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execOnEnterCodePress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnAccountPress
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execOnAccountPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnCommunityPress
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execOnCommunityPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnPlayPress
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execOnPlayPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnQuickPlayPress
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execOnQuickPlayPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.OnTrainingPress
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execOnTrainingPress_Parms
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.ApplySteamCloudSettings
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execApplySteamCloudSettings_Parms
{
	// struct FString                                  TutorialCompletedString;                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.ConfigForRes
// [0x00020000] 
struct UForgeGFxFrontEndMainMenu_execConfigForRes_Parms
{
	int                                                SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.HandleSkip
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execHandleSkip_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.HandleSteamLobbyJoinRequest
// [0x00820002] 
struct UForgeGFxFrontEndMainMenu_execHandleSteamLobbyJoinRequest_Parms
{
	// class UOnlineSubsystemSteamworks*               OnlineSubsystemSteamworks;                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             NullUniqueNetId;                                  		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.CanAcceptSteamLobbyJoinRequest
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execCanAcceptSteamLobbyJoinRequest_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UForgeGFxFrontEnd*                        ForgeGFxFrontEnd;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.SlideInSlide
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execSlideInSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.ShowSlide
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execShowSlide_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.Tick
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.HandlePasteCommand
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execHandlePasteCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.HandleCopyCommand
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execHandleCopyCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.HandleCutCommand
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execHandleCutCommand_Parms
{
};

// Function ForgeGame.ForgeGFxFrontEndMainMenu.ConfigSlide
// [0x00020002] 
struct UForgeGFxFrontEndMainMenu_execConfigSlide_Parms
{
};

// Function ForgeGame.ForgeGFxObjectSelectable.ReplaceSelected
// [0x00020002] 
struct UForgeGFxObjectSelectable_execReplaceSelected_Parms
{
	struct FString                                     NewText;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxObjectSelectable.SetSelection
// [0x00020002] 
struct UForgeGFxObjectSelectable_execSetSelection_Parms
{
	int                                                StartIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                FinishIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxManualScrollBar.SetScrollProperties
// [0x00020002] 
struct UForgeGFxManualScrollBar_execSetScrollProperties_Parms
{
	int                                                PageSize;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MinPosition;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MaxPosition;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PageScrollSize;                                   		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxSettingsDropDown.RemoveAllListItems
// [0x00020002] 
struct UForgeGFxSettingsDropDown_execRemoveAllListItems_Parms
{
};

// Function ForgeGame.ForgeGFxSettingsDropDown.AddListItem
// [0x00020002] 
struct UForgeGFxSettingsDropDown_execAddListItem_Parms
{
	struct FString                                     NewItemLabel;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxSettingsBindsScrollingList.ReValidateData
// [0x00020002] 
struct UForgeGFxSettingsBindsScrollingList_execReValidateData_Parms
{
};

// Function ForgeGame.ForgeGFxSettingsBindsScrollingList.UpdateBindsListItemReset
// [0x00020002] 
struct UForgeGFxSettingsBindsScrollingList_execUpdateBindsListItemReset_Parms
{
	int                                                BindIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     NewResetBindLabel;                                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxSettingsBindsScrollingList.UpdateBindsListItemController
// [0x00020002] 
struct UForgeGFxSettingsBindsScrollingList_execUpdateBindsListItemController_Parms
{
	int                                                BindIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     NewControllerBindLabel;                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxSettingsBindsScrollingList.UpdateBindsListItemSecondary
// [0x00020002] 
struct UForgeGFxSettingsBindsScrollingList_execUpdateBindsListItemSecondary_Parms
{
	int                                                BindIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     NewSecondaryBindLabel;                            		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxSettingsBindsScrollingList.UpdateBindsListItemPrimary
// [0x00020002] 
struct UForgeGFxSettingsBindsScrollingList_execUpdateBindsListItemPrimary_Parms
{
	int                                                BindIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     NewPrimaryBindLabel;                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxSettingsBindsScrollingList.AddBindsListCat
// [0x00020002] 
struct UForgeGFxSettingsBindsScrollingList_execAddBindsListCat_Parms
{
	int                                                BindIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ActionLabel;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxSettingsBindsScrollingList.AddBindsListItem
// [0x00020002] 
struct UForgeGFxSettingsBindsScrollingList_execAddBindsListItem_Parms
{
	int                                                BindIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ActionLabel;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     PrimaryBindLabel;                                 		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     SecondaryBindLabel;                               		// 0x001C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ControllerBindLabel;                              		// 0x0028 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ResetBindLabel;                                   		// 0x0034 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeGFxSettingsBindsScrollingList.GetRendererAt
// [0x00020002] 
struct UForgeGFxSettingsBindsScrollingList_execGetRendererAt_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Offset;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxGroupMembersScrollingList.ReValidateData
// [0x00020002] 
struct UForgeGFxGroupMembersScrollingList_execReValidateData_Parms
{
};

// Function ForgeGame.ForgeGFxGroupMembersScrollingList.RemoveAllGroupMembers
// [0x00020002] 
struct UForgeGFxGroupMembersScrollingList_execRemoveAllGroupMembers_Parms
{
};

// Function ForgeGame.ForgeGFxGroupMembersScrollingList.AddGroupMembersListItem
// [0x00020002] 
struct UForgeGFxGroupMembersScrollingList_execAddGroupMembersListItem_Parms
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     PlayerName;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ShowPendingInvite : 1;                            		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ShowReady : 1;                                    		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ShowGroupLeader : 1;                              		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxGroupMembersScrollingList.GetRendererAt
// [0x00020002] 
struct UForgeGFxGroupMembersScrollingList_execGetRendererAt_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Offset;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeGFxLoadingScreen.ConfigForRes
// [0x00020000] 
struct UForgeGFxLoadingScreen_execConfigForRes_Parms
{
	int                                                SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function ForgeGame.ForgeGFxLoadingScreen.ConfigLoadingScreen
// [0x00020002] 
struct UForgeGFxLoadingScreen_execConfigLoadingScreen_Parms
{
	// int                                             MapIndex;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADVPlayerController*                      TheDVPC;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function ForgeGame.ForgeGFxLoadingScreen.Start
// [0x00024002] 
struct UForgeGFxLoadingScreen_execStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function ForgeGame.ForgeLocalization.GetNumberAsRank
// [0x00022002] 
struct UForgeLocalization_execGetNumberAsRank_Parms
{
	int                                                Ranking;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeOnlineGameSearch.AddToGameTagFilter
// [0x00020002] 
struct UForgeOnlineGameSearch_execAddToGameTagFilter_Parms
{
	struct FString                                     GameTag;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// TArray< struct FString >                        Tokens;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function ForgeGame.ForgeOnlineLeaderboardsRead.OnReadComplete
// [0x00020802] ( FUNC_Event )
struct UForgeOnlineLeaderboardsRead_eventOnReadComplete_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif