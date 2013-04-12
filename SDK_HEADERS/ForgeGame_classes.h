/*
#############################################################################################
# Forge War (1.0.9953.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: ForgeGame_classes.h
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

#define CONST_JOIN_SERVER_HEADER                                 "JOIN"
#define CONST_KICK_HEADER                                        "KICK"

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum ForgeGame.ForgeDB.ESkin
/*enum ESkin
{
	ES_Default                                         = 0,
	ES_Black                                           = 1,
	ES_White                                           = 2,
	ES_Holiday2012                                     = 3,
	ES_MAX                                             = 4
};*/

// Enum ForgeGame.ForgeDB.EForgeSteamStats
/*enum EForgeSteamStats
{
	EFSS_Global_GamesWon                               = 0,
	EFSS_Global_GamesLost                              = 1,
	EFSS_Global_Kills                                  = 2,
	EFSS_Global_Deaths                                 = 3,
	EFSS_Global_DamageDone                             = 4,
	EFSS_Global_HealingDone                            = 5,
	EFSS_Global_ProtectionDone                         = 6,
	EFSS_Global_DamageTaken                            = 7,
	EFSS_Global_KillStreaks                            = 8,
	EFSS_Global_Assists                                = 9,
	EFSS_Global_AssistStreaks                          = 10,
	EFSS_Global_LongestLife                            = 11,
	EFSS_Global_GamesPlayed                            = 12,
	EFSS_Global_CalculatedSkill                        = 13,
	EFSS_Global_TimeInCombat                           = 14,
	EFSS_Assassin_Kills                                = 15,
	EFSS_Assassin_Deaths                               = 16,
	EFSS_Assassin_DamageDone                           = 17,
	EFSS_Assassin_DamageTaken                          = 18,
	EFSS_Assassin_Assists                              = 19,
	EFSS_Assassin_LongestLife                          = 20,
	EFSS_Assassin_CalculatedSkill                      = 21,
	EFSS_Assassin_TimeInCombat                         = 22,
	EFSS_Pathfinder_Kills                              = 23,
	EFSS_Pathfinder_Deaths                             = 24,
	EFSS_Pathfinder_DamageDone                         = 25,
	EFSS_Pathfinder_DamageTaken                        = 26,
	EFSS_Pathfinder_Assists                            = 27,
	EFSS_Pathfinder_LongestLife                        = 28,
	EFSS_Pathfinder_CalculatedSkill                    = 29,
	EFSS_Pathfinder_TimeInCombat                       = 30,
	EFSS_Pyromancer_Kills                              = 31,
	EFSS_Pyromancer_Deaths                             = 32,
	EFSS_Pyromancer_DamageDone                         = 33,
	EFSS_Pyromancer_DamageTaken                        = 34,
	EFSS_Pyromancer_Assists                            = 35,
	EFSS_Pyromancer_LongestLife                        = 36,
	EFSS_Pyromancer_CalculatedSkill                    = 37,
	EFSS_Pyromancer_TimeInCombat                       = 38,
	EFSS_Shaman_Kills                                  = 39,
	EFSS_Shaman_Deaths                                 = 40,
	EFSS_Shaman_DamageDone                             = 41,
	EFSS_Shaman_HealingDone                            = 42,
	EFSS_Shaman_DamageTaken                            = 43,
	EFSS_Shaman_Assists                                = 44,
	EFSS_Shaman_LongestLife                            = 45,
	EFSS_Shaman_CalculatedSkill                        = 46,
	EFSS_Shaman_TimeInCombat                           = 47,
	EFSS_Warden_Kills                                  = 48,
	EFSS_Warden_Deaths                                 = 49,
	EFSS_Warden_DamageDone                             = 50,
	EFSS_Warden_ProtectionDone                         = 51,
	EFSS_Warden_DamageTaken                            = 52,
	EFSS_Warden_Assists                                = 53,
	EFSS_Warden_LongestLife                            = 54,
	EFSS_Warden_CalculatedSkill                        = 55,
	EFSS_Warden_TimeInCombat                           = 56,
	EFSS_MAX                                           = 57
};*/

// Enum ForgeGame.ForgeDB.EAbilityFocus
/*enum EAbilityFocus
{
	AF_Default                                         = 0,
	AF_A                                               = 1,
	AF_B                                               = 2,
	AF_C                                               = 3,
	AF_MAX                                             = 4
};*/

// Enum ForgeGame.ForgeDB.EAchievement
/*enum EAchievement
{
	EA_NONE                                            = 0,
	EA_Tutorial                                        = 1,
	EA_MAX                                             = 2
};*/

// Enum ForgeGame.ForgeDB.ETauntSituation
/*enum ETauntSituation
{
	ETS_Dying                                          = 0,
	ETS_KilledPlayer                                   = 1,
	ETS_Searching                                      = 2,
	ETS_HasFlag                                        = 3,
	ETS_CapturedFlag                                   = 4,
	ETS_EnemyHasFlag                                   = 5,
	ETS_EnemyCapturedFlag                              = 6,
	ETS_MAX                                            = 7
};*/

// Enum ForgeGame.ForgeDB.ETauntPawnType
/*enum ETauntPawnType
{
	ETPT_All                                           = 0,
	ETPT_Male                                          = 1,
	ETPT_Female                                        = 2,
	ETPT_Assassin                                      = 3,
	ETPT_Pathfinder                                    = 4,
	ETPT_Pyromancer                                    = 5,
	ETPT_Shaman                                        = 6,
	ETPT_Warden                                        = 7,
	ETPT_Ravager                                       = 8,
	ETPT_MAX                                           = 9
};*/

// Enum ForgeGame.DVBuffCalculator.EStatName
/*enum EStatName
{
	STATNAME_HealthMax                                 = 0,
	STATNAME_HealthRegen                               = 1,
	STATNAME_ResourceMax                               = 2,
	STATNAME_ResourceRegen                             = 3,
	STATNAME_DeterminationRegen                        = 4,
	STATNAME_MoveSpeed                                 = 5,
	STATNAME_DamageMirror                              = 6,
	STATNAME_CanCast                                   = 7,
	STATNAME_ArmorPhysical                             = 8,
	STATNAME_ArmorNature                               = 9,
	STATNAME_ArmorSpiritual                            = 10,
	STATNAME_ArmorMagic                                = 11,
	STATNAME_DamageMultiplier                          = 12,
	STATNAME_InboundDamageMultiplier                   = 13,
	STATNAME_IsStealthed                               = 14,
	STATNAME_ShadowShifted                             = 15,
	STATNAME_Stunned                                   = 16,
	STATNAME_Gravity                                   = 17,
	STATNAME_Blinded                                   = 18,
	STATNAME_MAX                                       = 19
};*/

// Enum ForgeGame.DVBuffCalculator.EmodifierType
/*enum EmodifierType
{
	MODTYPE_Multiply                                   = 0,
	MODTYPE_Add                                        = 1,
	MODTYPE_Assign                                     = 2,
	MODTYPE_Maximum                                    = 3,
	MODTYPE_MAX                                        = 4
};*/

// Enum ForgeGame.DVSeqEvent_AttackResult.EForgePawnFaction
/*enum EForgePawnFaction
{
	EFPF_Player                                        = 0,
	EFPF_Friendly                                      = 1,
	EFPF_Enemy                                         = 2,
	EFPF_MAX                                           = 3
};*/

// Enum ForgeGame.DVSeqEvent_AttackResult.EForgeAttackResultType
/*enum EForgeAttackResultType
{
	EFAHT_Blocked                                      = 0,
	EFAHT_MissSmoke                                    = 1,
	EFAHT_MissDisorient                                = 2,
	EFAHT_Ability1                                     = 3,
	EFAHT_Ability2                                     = 4,
	EFAHT_Ability3                                     = 5,
	EFAHT_Ability4                                     = 6,
	EFAHT_Ability5                                     = 7,
	EFAHT_Ability6                                     = 8,
	EFAHT_Ability7                                     = 9,
	EFAHT_Ability8                                     = 10,
	EFAHT_Ability9                                     = 11,
	EFAHT_AnyAbility                                   = 12,
	EFAHT_MAX                                          = 13
};*/

// Enum ForgeGame.DVPhysicalMaterialProperties.EInteractionRotation
/*enum EInteractionRotation
{
	EIR_HitNormal                                      = 0,
	EIR_StaticRotation                                 = 1,
	EIR_Velocity                                       = 2,
	EIR_MAX                                            = 3
};*/

// Enum ForgeGame.DVPhysicalMaterialProperties.ESurfaceType
/*enum ESurfaceType
{
	EST_Default                                        = 0,
	EST_Dirt                                           = 1,
	EST_Energy                                         = 2,
	EST_Flesh                                          = 3,
	EST_Foliage                                        = 4,
	EST_GlassBroken                                    = 5,
	EST_GlassPlate                                     = 6,
	EST_Grass                                          = 7,
	EST_Metal                                          = 8,
	EST_Mud                                            = 9,
	EST_Snow                                           = 10,
	EST_Stone                                          = 11,
	EST_Tile                                           = 12,
	EST_WaterDeep                                      = 13,
	EST_WaterShallow                                   = 14,
	EST_Water                                          = 15,
	EST_Wood                                           = 16,
	EST_MAX                                            = 17
};*/

// Enum ForgeGame.DVPhysicalMaterialProperties.EInteractionSockets
/*enum EInteractionSockets
{
	EIA_PawnHitSockets                                 = 0,
	EIA_OverrideSockets                                = 1,
	EIA_MAX                                            = 2
};*/

// Enum ForgeGame.DVPawnHeroRavager.ERavagerFocus
/*enum ERavagerFocus
{
	RF_Sword                                           = 0,
	RF_Chain                                           = 1,
	RF_MAX                                             = 2
};*/

// Enum ForgeGame.ForgeDB.EPlayerClass
/*enum EPlayerClass
{
	EPC_NONE                                           = 0,
	EPC_Assassin                                       = 1,
	EPC_Pathfinder                                     = 2,
	EPC_Pyromancer                                     = 3,
	EPC_Shaman                                         = 4,
	EPC_Warden                                         = 5,
	EPC_Ravager                                        = 6,
	EPC_Lich                                           = 7,
	EPC_Tinkerer                                       = 8,
	EPC_Alchemist                                      = 9,
	EPC_MAX                                            = 10
};*/

// Enum ForgeGame.ForgeDB.EOnlineStatsViews
/*enum EOnlineStatsViews
{
	EOSV_Stats                                         = 0,
	EOSV_Leaderboards                                  = 1,
	EOSV_Achievements                                  = 2,
	EOSV_MAX                                           = 3
};*/

// Enum ForgeGame.ForgeDB.EMedal
/*enum EMedal
{
	EM_Healing                                         = 0,
	EM_Damage                                          = 1,
	EM_Assists                                         = 2,
	EM_Kills                                           = 3,
	EM_AssistStreak                                    = 4,
	EM_KillStreak                                      = 5,
	EM_Protection                                      = 6,
	EM_Survivor                                        = 7,
	EM_Captures                                        = 8,
	EM_Defenses                                        = 9,
	EM_Towers                                          = 10,
	EM_MAX                                             = 11
};*/

// Enum ForgeGame.DVAnimNodeBlendByFall.EBlendFallTypes
/*enum EBlendFallTypes
{
	BFT_TakeOff                                        = 0,
	BFT_Falling                                        = 1,
	BFT_Land                                           = 2,
	BFT_None                                           = 3,
	BFT_MAX                                            = 4
};*/

// Enum ForgeGame.DVLogEntry.EMissType
/*enum EMissType
{
	MISS_Blocked                                       = 0,
	MISS_SmokeCloud                                    = 1,
	MISS_Disoriented                                   = 2,
	MISS_SpawnProtection                               = 3,
	MISS_MAX                                           = 4
};*/

// Enum ForgeGame.DVLogEntry.ELogType
/*enum ELogType
{
	LOG_StartCast                                      = 0,
	LOG_HitPlayer                                      = 1,
	LOG_Missed                                         = 2,
	LOG_MAX                                            = 3
};*/

// Enum ForgeGame.DVNetworkLink.ENetworkQueryType
/*enum ENetworkQueryType
{
	NQT_ServerUpdate                                   = 0,
	NQT_PlayerAuth                                     = 1,
	NQT_QuickMatch                                     = 2,
	NQT_JoinPlayer                                     = 3,
	NQT_GetMessages                                    = 4,
	NQT_SendMessage                                    = 5,
	NQT_GetPlayerAccount                               = 6,
	NQT_TransferXP                                     = 7,
	NQT_RecordPlayerStats                              = 8,
	NQT_GetGameId                                      = 9,
	NQT_RecordPlayerMedal                              = 10,
	NQT_RecordEndOfGame                                = 11,
	NQT_GetPlayerSkinOptions                           = 12,
	NQT_GetPlayerTitleOptions                          = 13,
	NQT_SetPlayerSkin                                  = 14,
	NQT_SetPlayerTitle                                 = 15,
	NQT_GetPlayerClassCustomization                    = 16,
	NQT_SpendArmorPoint                                = 17,
	NQT_SpendCustomizationPoint                        = 18,
	NQT_AwardAchievement                               = 19,
	NQT_AuthenticateSteamPlayer                        = 20,
	NQT_EnterCode                                      = 21,
	NQT_MAX                                            = 22
};*/

// Enum ForgeGame.DVSeqAct_SetTeamSpawn.EForgeTeam
/*enum EForgeTeam
{
	EFT_Team0                                          = 0,
	EFT_Team1                                          = 1,
	EFT_TeamAll                                        = 2,
	EFT_MAX                                            = 3
};*/

// Enum ForgeGame.DVSeqAct_TutorialSectionComplete.ESectionCompleted
/*enum ESectionCompleted
{
	ESC_Movement                                       = 0,
	ESC_Block                                          = 1,
	ESC_MovementAbility                                = 2,
	ESC_AbilityRange                                   = 3,
	ESC_MAX                                            = 4
};*/

// Enum ForgeGame.DVSeqEvent_Input.EForgeInputType
/*enum EForgeInputType
{
	EFIT_Ability1                                      = 0,
	EFIT_Ability2                                      = 1,
	EFIT_Ability3                                      = 2,
	EFIT_Ability4                                      = 3,
	EFIT_Ability5                                      = 4,
	EFIT_Ability6                                      = 5,
	EFIT_Ability7                                      = 6,
	EFIT_Ability8                                      = 7,
	EFIT_Ability9                                      = 8,
	EFIT_Block                                         = 9,
	EFIT_Jump                                          = 10,
	EFIT_Sprint                                        = 11,
	EFIT_MAX                                           = 12
};*/

// Enum ForgeGame.ForgeClassRewardLevels.EXPRewardType
/*enum EXPRewardType
{
	XPRT_Armor                                         = 0,
	XPRT_Customization                                 = 1,
	XPRT_Ability                                       = 2,
	XPRT_Title                                         = 3,
	XPRT_Skin                                          = 4,
	XPRT_Emote                                         = 5,
	XPRT_MAX                                           = 6
};*/

// Enum ForgeGame.ForgeGFxHUD.ENagState
/*enum ENagState
{
	ENS_ClassSelect                                    = 0,
	ENS_Respawn                                        = 1,
	ENS_WaitingForPlayers                              = 2,
	ENS_NONE                                           = 3,
	ENS_MAX                                            = 4
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class ForgeGame.DVGameViewportClient
// 0x0000 (0x0128 - 0x0128)
class UDVGameViewportClient : public UGameViewportClient
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1840 ];

		return pClassPointer;
	};

	void GetSystemTextureGroupSetting ( unsigned char TextureGroup, int* OutMinLODSize, int* OutMaxLODSize, int* OutLODBias, struct FName* OutMinMagFilter, struct FName* OutMipFilter, unsigned char* OutMipGenSettings );
	bool GetSystemFloatSetting ( struct FString SystemSettingName, float* OutVal );
	bool GetSystemIntSetting ( struct FString SystemSettingName, int* OutVal );
	bool GetSystemBoolSetting ( struct FString SystemSettingName, unsigned char* OutVal );
	void GetAvailableResolutions ( TArray< struct FVector >* out_AvailableResolutions );
};

UClass* UDVGameViewportClient::pClassPointer = NULL;

// Class ForgeGame.DVPawnBase
// 0x000C (0x045C - 0x0450)
class ADVPawnBase : public APawn
{
public:
	struct FBlockingChannelsContainer                  BlockingChannels;                                 		// 0x0450 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	unsigned long                                      ShadowShifted : 1;                                		// 0x0454 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	float                                              FrictionOverride;                                 		// 0x0458 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1841 ];

		return pClassPointer;
	};

	void OnSetPawnBlockingChannels ( class UDVSeqAct_SetPawnBlockingChannels* SeqAct );
};

UClass* ADVPawnBase::pClassPointer = NULL;

// Class ForgeGame.DVPlayerControllerBase
// 0x0000 (0x0584 - 0x0584)
class ADVPlayerControllerBase : public APlayerController
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1842 ];

		return pClassPointer;
	};

	struct FString GetTerminalIPAddress ( );
	void SetHasPlayedIntro ( unsigned long NewHasPlayedIntro );
	bool GetHasPlayedIntro ( );
	void SetUserId ( struct FString UserId );
	struct FString GetUserId ( );
	void SetSessionId ( struct FString SessionId );
	struct FString GetSessionID ( );
};

UClass* ADVPlayerControllerBase::pClassPointer = NULL;

// Class ForgeGame.ForgeGameInfoBase
// 0x0024 (0x0398 - 0x0374)
class AForgeGameInfoBase : public AGameInfo
{
public:
	TArray< struct FString >                           GameTypes;                                        		// 0x0374 (0x000C) [0x0000000000444002]              ( CPF_Const | CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	TArray< struct FString >                           Maps;                                             		// 0x0380 (0x000C) [0x0000000000444002]              ( CPF_Const | CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	struct FString                                     ForgeVersion;                                     		// 0x038C (0x000C) [0x0000000000444002]              ( CPF_Const | CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1843 ];

		return pClassPointer;
	};

	struct FString GetAuthenticatedServerSessionKey ( );
	int GetAuthenticatedServerId ( );
	bool DoesMapExist ( struct FString MapName );
};

UClass* AForgeGameInfoBase::pClassPointer = NULL;

// Class ForgeGame.DVAnimNodeBlendByFall
// 0x0010 (0x0124 - 0x0114)
class UDVAnimNodeBlendByFall : public UAnimNodeBlendList
{
public:
	float                                              BlendTime;                                        		// 0x0114 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PreLandTime;                                      		// 0x0118 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      FallState;                                        		// 0x011C (0x0001) [0x0000000000000002]              ( CPF_Const )
	float                                              LastFallingVelocity;                              		// 0x0120 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1844 ];

		return pClassPointer;
	};

};

UClass* UDVAnimNodeBlendByFall::pClassPointer = NULL;

// Class ForgeGame.DVAnimNodeScaleRateByPawnSpeed
// 0x000C (0x0104 - 0x00F8)
class UDVAnimNodeScaleRateByPawnSpeed : public UAnimNodeScalePlayRate
{
public:
	float                                              AnimationMovementSpeed;                           		// 0x00F8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PostMultiplier;                                   		// 0x00FC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PostAddition;                                     		// 0x0100 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1845 ];

		return pClassPointer;
	};

};

UClass* UDVAnimNodeScaleRateByPawnSpeed::pClassPointer = NULL;

// Class ForgeGame.DVAnimNotify_BoneVisibility
// 0x0011 (0x0051 - 0x0040)
class UDVAnimNotify_BoneVisibility : public UAnimNotify
{
public:
	TArray< struct FName >                             Bones;                                            		// 0x0040 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bHideBones : 1;                                   		// 0x004C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bSkipIfOwnerIsHidden : 1;                         		// 0x004C (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned char                                      PhysicsBodyOption;                                		// 0x0050 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1846 ];

		return pClassPointer;
	};

};

UClass* UDVAnimNotify_BoneVisibility::pClassPointer = NULL;

// Class ForgeGame.DVAnimNotify_Scripted
// 0x000C (0x004C - 0x0040)
class UDVAnimNotify_Scripted : public UAnimNotify_Scripted
{
public:
	struct FString                                     Label;                                            		// 0x0040 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1847 ];

		return pClassPointer;
	};

};

UClass* UDVAnimNotify_Scripted::pClassPointer = NULL;

// Class ForgeGame.ForgeDB
// 0x0028 (0x0064 - 0x003C)
class UForgeDB : public UObject
{
public:
	TArray< class ADVPawnHero* >                       HeroPawns;                                        		// 0x003C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class ADVAbility* >                        Abilities;                                        		// 0x0048 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class ADVAbility*                                  UnstuckAbilityArchetype;                          		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FName >                             BindableKeys;                                     		// 0x0058 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42419 ];

		return pClassPointer;
	};

	struct FString ConvertSteamRegionIdToGameTagFilterText ( int SteamRegionId );
	int ConvertSteamRegionIdToForgeRegionId ( int SteamRegionId );
	int ConvertForgeRegionIdToSteamRegionId ( int ForgeRegionId );
	int GetAbilitySlotOrderProfileSettingsIndex ( unsigned char PlayerClass, int SlotIndex );
	int GetAbilityFocusProfileSettingsIndex ( unsigned char PlayerClass );
	struct FString GetEnglishKeyName ( struct FName OldKeyName );
	struct FName GetKeyForFunction ( struct FString BoundCommand );
	int GetOrderMappedAbilityIndex ( int DefaultAbilityIndex, unsigned char ChosenClass );
	bool MouseIsOverElement ( class UGFxObject* TheElement );
	struct FVector2D GetMouseFlashPosition ( );
	struct FString GetSkinNameFromEnum ( unsigned char TheSkinEnum );
	unsigned char GetSkinEnumFromId ( int SkinId );
	class UTexture* GetAbilitySlotTextureForClass ( unsigned char TheClass, int AbilitySlot );
	struct FString GetAbilitySlotNameForClass ( unsigned char TheClass, int AbilitySlot );
	struct FString GetAbilitySlotNameForAbility ( class ADVAbility* InputAbility );
	bool UsesMana ( unsigned char TheClass );
	class UClass* GetClassClassFromEnum ( unsigned char ThePlayerClass );
	struct FString GetClassStringFromEnum ( unsigned char ThePlayerClass );
	unsigned char GetClassEnumFromString ( struct FString ClassName );
	class ADVAbility* GetAbilityArchetype ( unsigned char OwningClass, unsigned char Slot, unsigned char Focus );
	class ADVPawnHero* GetPawnArchetypeForClass ( unsigned char TheClass );
	int GetMapId ( struct FString MapName );
	int GetGameTypeId ( struct FString GameType );
	struct FString GetSteamId ( struct FUniqueNetId UniqueId );
};

UClass* UForgeDB::pClassPointer = NULL;

// Class ForgeGame.DVSeqAct_SetPawnBlockingChannels
// 0x0004 (0x0100 - 0x00FC)
class UDVSeqAct_SetPawnBlockingChannels : public USequenceAction
{
public:
	struct FBlockingChannelsContainer                  BlockingChannels;                                 		// 0x00FC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42464 ];

		return pClassPointer;
	};

};

UClass* UDVSeqAct_SetPawnBlockingChannels::pClassPointer = NULL;

// Class ForgeGame.DVBuffCalculator
// 0x001C (0x0058 - 0x003C)
class UDVBuffCalculator : public UObject
{
public:
	TArray< struct FProtectionFromAbility >            ProtectionList;                                   		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSStatChange >                      StatChanges;                                      		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ADVPawn*                                     Pawn;                                             		// 0x0054 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42467 ];

		return pClassPointer;
	};

	void ResetForRoundStart ( );
	void ResetForDeath ( );
	void RemoveExpired ( );
	void CalculateFinalCaps ( unsigned char StatName, float* PreviousValue );
	void CalculatePreLockCaps ( unsigned char StatName, float* PreviousValue );
	float CalculateMaxChanges ( unsigned char TheStat, float EffectiveValue, float BaseValue );
	void CalculateAssignedChanges ( unsigned char TheStat, float* PreviousValue );
	float CalculateAddedChanges ( unsigned char TheStat );
	float CalculateMultipliedChanges ( unsigned char TheStat, float BaseValue );
	float CalculateStat ( unsigned char TheStat, float BaseValue );
	void AddBuff ( class UDVBuff* NewBuff );
	void AddToStatChanges ( struct FSStatChange NewStatChange );
	void Destroyed ( );
};

UClass* UDVBuffCalculator::pClassPointer = NULL;

// Class ForgeGame.DVAbility
// 0x00E8 (0x02B0 - 0x01C8)
class ADVAbility : public AActor
{
public:
	class UDVBuff*                                     GivenBuff;                                        		// 0x01C8 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UDVHealthOverTime*                           HealthOverTime;                                   		// 0x01CC (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	float                                              Cooldown;                                         		// 0x01D0 (0x0004) [0x0000000000000000]              
	float                                              CooldownInterval;                                 		// 0x01D4 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              TimeTillReady;                                    		// 0x01D8 (0x0004) [0x0000000000000000]              
	unsigned char                                      Used;                                             		// 0x01DC (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      Refreshed;                                        		// 0x01DD (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      OwningClass;                                      		// 0x01DE (0x0001) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	unsigned char                                      Slot;                                             		// 0x01DF (0x0001) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	unsigned char                                      Focus;                                            		// 0x01E0 (0x0001) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	unsigned char                                      RepStartCast;                                     		// 0x01E1 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      AbilitiesIndex;                                   		// 0x01E2 (0x0001) [0x0000000000000020]              ( CPF_Net )
	float                                              ResourceCost;                                     		// 0x01E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CastTime;                                         		// 0x01E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Range;                                            		// 0x01EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Damage;                                           		// 0x01F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      DamageType;                                       		// 0x01F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      CanMoveWhileCasting : 1;                          		// 0x01F8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      InterruptImmune : 1;                              		// 0x01F8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      FriendlyAbility : 1;                              		// 0x01F8 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      TriggersGCD : 1;                                  		// 0x01F8 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      IgnoresGCD : 1;                                   		// 0x01F8 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      DoesStacking : 1;                                 		// 0x01F8 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      Targeted : 1;                                     		// 0x01F8 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      UsedAimAssist : 1;                                		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      FullBodyAnim : 1;                                 		// 0x01F8 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      Locked : 1;                                       		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000200] 
	float                                              Delay;                                            		// 0x01FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     AbilityName;                                      		// 0x0200 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FocusName;                                        		// 0x020C (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UParticleSystem*                             CastParticle;                                     		// 0x0218 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             FireParticle;                                     		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             HitParticle;                                      		// 0x0220 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             FailureParticle;                                  		// 0x0224 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CastAnimName;                                     		// 0x0228 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CastSocket;                                       		// 0x0230 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       FireSocket;                                       		// 0x0238 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       HitSocket;                                        		// 0x0240 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       FailureSocket;                                    		// 0x0248 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BeamEndPointName;                                 		// 0x0250 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSAttachmentAnimation >             AttachmentAnimations;                             		// 0x0258 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class USoundCue*                                   CastingSound;                                     		// 0x0264 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   FireSound;                                        		// 0x0268 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   HitSound;                                         		// 0x026C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   FailureSound;                                     		// 0x0270 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVPawn*                                     CastingPawn;                                      		// 0x0274 (0x0004) [0x0000000000000000]              
	class ADVPawn*                                     TargetPawn;                                       		// 0x0278 (0x0004) [0x0000000000000000]              
	TArray< class ADVPawn* >                           ModifiedAttackers;                                		// 0x027C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ADVPawn* >                           ModifiedDefenders;                                		// 0x0288 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UDVHealthOverTime* >                 ActiveHots;                                       		// 0x0294 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                HotTickTime;                                      		// 0x02A0 (0x0004) [0x0000000000000000]              
	class UDVAttack*                                   Attack;                                           		// 0x02A4 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    ParticleEmitter;                                  		// 0x02A8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             GenericHit;                                       		// 0x02AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42501 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	struct FString GetDescriptionNumbers ( class ADVAbility* AbilityArchetype, unsigned char TheClass, struct FString StaticFriendlyColor, struct FString StaticEnemyColor );
	struct FString GetFullDescription ( class ADVAbility* AbilityArchetype, unsigned char TheClass );
	void KillPartcleEmitter ( );
	void AddParticleEmitter ( class APawn* Hero );
	class UDVAttack* MakeAttack ( );
	class UDVAttack* SpawnAttack ( );
	void HotTick ( );
	void SendHot ( class ADVPawn* HotTarget );
	void Reset ( );
	void UnRegisterWithAllDefendingPawns ( );
	void UnRegisterWithDefendingPawn ( class ADVPawn* Modifier );
	void RegisterWithDefendingPawn ( class ADVPawn* Modifier );
	void ModifyDefense ( class UDVAttack* IncomingAttack, class ADVPawn* Defender, TArray< struct FSDamage >* DamageTaken, int* ProtectionDone );
	void UnRegisterWithAllAttackingPawns ( );
	void UnRegisterWithAttackingPawn ( class ADVPawn* Modifier );
	void RegisterWithAttackingPawn ( class ADVPawn* Modifier );
	void ModifyAttack ( class UDVAttack* OutGoingAttack );
	bool IsStillInLOS ( class ADVPawn* TargetActor );
	void GoOnCooldown ( unsigned long UseResource );
	bool Interrupt ( unsigned long SelfInterrupt );
	void LogStartCast ( );
	void FireAbility ( );
	void PerformAbility ( );
	bool Activate ( class ADVPawn* RepTargetPawn, unsigned long RepUsingAimAssist );
	bool ReadyToActivate ( );
	bool IsAbilityReady ( );
	void Tick ( float DeltaTime );
	void SetAbilitiesIndex ( int NewAbilitiesIndex );
	void PlayFailureEffect ( );
	void PlayHitEffect ( class ADVPawn* RepHitPawn );
	void PlayFireEffect ( class ADVPawn* RepHitPawn );
	void PlayAnim ( );
	void PlayCastEffect ( );
	struct FString GetAbilityDescription ( );
	struct FString GetAbilityName ( );
	struct FString GetAbilityLocalizationPath ( unsigned char TheOwningClass, struct FString TheAbilityName, unsigned char TheFocus );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbility::pClassPointer = NULL;

// Class ForgeGame.DVBuff
// 0x0010 (0x004C - 0x003C)
class UDVBuff : public UObject
{
public:
	TArray< struct FSStatChange >                      StatChanges;                                      		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ADVAbility*                                  Ability;                                          		// 0x0048 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42530 ];

		return pClassPointer;
	};

};

UClass* UDVBuff::pClassPointer = NULL;

// Class ForgeGame.DVPawn
// 0x01A8 (0x0604 - 0x045C)
class ADVPawn : public ADVPawnBase
{
public:
	TArray< struct ADVPawn_FSAttachment >              Attachments;                                      		// 0x045C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSGenericOverrideInteraction >      FootstepInteractionOverrides;                     		// 0x0468 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FName >                             UnfixedBodyNames;                                 		// 0x0474 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FName >                             EnabledSpringBodyNames;                           		// 0x0480 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FName >                             HitReactionBones;                                 		// 0x048C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              LinearBoneSpringStrength;                         		// 0x0498 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              AngularBoneSpringStrength;                        		// 0x049C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ImpulseForce;                                     		// 0x04A0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PhysicsBlendInTime;                               		// 0x04A4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PhysicsTime;                                      		// 0x04A8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PhysicsBlendOutTime;                              		// 0x04AC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FName >                             HitSocketNames;                                   		// 0x04B0 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              PhysicsWeight;                                    		// 0x04BC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PhysicsCD;                                        		// 0x04C0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              LastPhysicsTime;                                  		// 0x04C4 (0x0004) [0x0000000000000000]              
	class UDVBuffCalculator*                           BuffCalc;                                         		// 0x04C8 (0x0004) [0x0000000000000000]              
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x04CC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              HealthPoints;                                     		// 0x04D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthPointsMax;                                  		// 0x04D4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              HealthPointsMaxBase;                              		// 0x04D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthPointsRegen;                                		// 0x04DC (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              HealthPointsRegenBase;                            		// 0x04E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ArmorPhysical;                                    		// 0x04E4 (0x0004) [0x0000000000000000]              
	int                                                ArmorPhysicalBase;                                		// 0x04E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ArmorNature;                                      		// 0x04EC (0x0004) [0x0000000000000000]              
	int                                                ArmorNatureBase;                                  		// 0x04F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ArmorSpiritual;                                   		// 0x04F4 (0x0004) [0x0000000000000000]              
	int                                                ArmorSpiritualBase;                               		// 0x04F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ArmorMagic;                                       		// 0x04FC (0x0004) [0x0000000000000000]              
	int                                                ArmorMagicBase;                                   		// 0x0500 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpAccelRate;                                    		// 0x0504 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              MoveSpeed;                                        		// 0x0508 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              MoveSpeedBase;                                    		// 0x050C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageMultiplier;                                 		// 0x0510 (0x0004) [0x0000000000000000]              
	float                                              InboundDamageMultiplier;                          		// 0x0514 (0x0004) [0x0000000000000000]              
	float                                              DamageMirror;                                     		// 0x0518 (0x0004) [0x0000000000000000]              
	float                                              DamageMirrorBase;                                 		// 0x051C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GCDIntervalBase;                                  		// 0x0520 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVAbility*                                  CastingSpell;                                     		// 0x0524 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< class ADVAbility* >                        AttackModifiers;                                  		// 0x0528 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ADVAbility* >                        DefenseModifiers;                                 		// 0x0534 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Disoriented;                                      		// 0x0540 (0x0004) [0x0000000000000000]              
	float                                              DisorientedDecayRate;                             		// 0x0544 (0x0004) [0x0000000000000000]              
	float                                              Gravity;                                          		// 0x0548 (0x0004) [0x0000000000000000]              
	class AForgeGameInfo*                              ForgeGame;                                        		// 0x054C (0x0004) [0x0000000000000000]              
	struct FName                                       FullBodyAnimSlotName;                             		// 0x0550 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       UpperBodyAnimSlotName;                            		// 0x0558 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LeftFootSocketName;                               		// 0x0560 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RightFootSocketName;                              		// 0x0568 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                JumpCost;                                         		// 0x0570 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxHealsPerSecond;                                		// 0x0574 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSHealRecord >                      HealCounter;                                      		// 0x0578 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAnimNodeSlot*                               FullBodyAnimSlot;                                 		// 0x0584 (0x0004) [0x0000000000000000]              
	class UAnimNodeSlot*                               UpperBodyAnimSlot;                                		// 0x0588 (0x0004) [0x0000000000000000]              
	struct FName                                       DeathAnimName;                                    		// 0x058C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       HitAnimName;                                      		// 0x0594 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                HeadIconsHeight;                                  		// 0x059C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCameraShake*                                CameraShake;                                      		// 0x05A0 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UCameraShake*                                CameraShakeHitPlayer;                             		// 0x05A4 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class ULightComponent*                             Light;                                            		// 0x05A8 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             MedalParticle;                                    		// 0x05AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialEffect*                             PPMaterial;                                       		// 0x05B0 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    ParticleEmitter;                                  		// 0x05B4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPhysicalMaterial*                           DefaultPhysicalMaterial;                          		// 0x05B8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FSHitReaction                               HitReactionInfo;                                  		// 0x05BC (0x0010) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      CanCast : 1;                                      		// 0x05CC (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      ResourceIsMana : 1;                               		// 0x05CC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      MeleeClass : 1;                                   		// 0x05CC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	float                                              Resource;                                         		// 0x05D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ResourceMax;                                      		// 0x05D4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              ResourceMaxBase;                                  		// 0x05D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ResourceRegen;                                    		// 0x05DC (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              ResourceRegenBase;                                		// 0x05E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeOutOfLoS;                                     		// 0x05E4 (0x0004) [0x0000000000000000]              
	float                                              LocalDistance;                                    		// 0x05E8 (0x0004) [0x0000000000000000]              
	int                                                LastVelocitySq;                                   		// 0x05EC (0x0004) [0x0000000000000000]              
	struct FSSyncResource                              SyncResource;                                     		// 0x05F0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ADVAbilityMoltenCage*                        MoltenCage;                                       		// 0x05F4 (0x0004) [0x0000000000000000]              
	TArray< class ADVAbilitySpirtualFervor* >          FervorStacks;                                     		// 0x05F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42540 ];

		return pClassPointer;
	};

	void eventBaseChange ( );
	void TossPawn ( struct FVector Knockback );
	void eventPlayFootStepSound ( int FootDown );
	void AddVelocity ( struct FVector NewVelocity, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo );
	void RemoveDisoriented ( int Decrease );
	void AddDisoriented ( int Increase );
	void TakeFallingDamage ( );
	void GiveBuff ( class UDVBuff* GivenBuff );
	float ArmorDiminish ( int ArmorValue, float Scale );
	int GetArmorForType ( class UClass* Type, unsigned long BaseArmor );
	float ReduceDamage ( struct FSDamage NewDamage );
	void StartRagdoll ( );
	void StopRagdoll ( );
	void SetRagdollAnimation ( );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void NotifyHealthChange ( class ADVPlayerController* Attacker, float HealthChange );
	void SimulatedPhysicsBlendOut ( );
	void SimulatingPhysics ( );
	void SimulatingPhysicsBlendIn ( );
	void BlendInPhysics ( );
	void PlayHitReaction ( struct FVector AttackImpulse );
	void ClientTargetHit ( class ADVPawn* EnemyHit, unsigned long IsHeal, unsigned long ExactlyTargetted );
	bool AttackMisses ( class UDVLogEntry* LogEntry, class UDVAttack** Attack );
	bool CheckSmokeMiss ( struct FVector AttackOrigin );
	void CapHealing ( float* TotalDamageDone );
	void NotifyKismetOfAttackResult ( class ADVPawn* TheAttacker, class ADVPawn* TheTarget, unsigned char TheResult );
	void TakeAttack ( class UDVAttack** Attack );
	void TakeEnvironmentalDamage ( float TotalDamageDone, unsigned long CreditLastHitBy );
	void Suicide ( );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void DoRegens ( );
	void eventTick ( float DeltaTime );
	bool DoJump ( unsigned long bUpdating );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void MatchStarting ( );
	bool IsPawnReady ( );
	bool StopsProjectile ( class AProjectile* P );
	void InitiateStats ( );
	bool ShouldDisplayOnHud ( );
	void PostBeginPlay ( );
	void RemoveResource ( float Amount );
	void ResetCollision ( );
	void eventStuckOnPawn ( class APawn* OtherPawn );
	void eventEncroachedBy ( class AActor* Other );
	void PlayGetMedal ( );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void eventDestroyed ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVPawn::pClassPointer = NULL;

// Class ForgeGame.DVSeqEvent_AttackResult
// 0x0003 (0x0117 - 0x0114)
class UDVSeqEvent_AttackResult : public USequenceEvent
{
public:
	unsigned char                                      AttackAggressor;                                  		// 0x0114 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AttackTarget;                                     		// 0x0115 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AttackResult;                                     		// 0x0116 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42542 ];

		return pClassPointer;
	};

};

UClass* UDVSeqEvent_AttackResult::pClassPointer = NULL;

// Class ForgeGame.DVPhysicalMaterialProperties
// 0x0028 (0x0064 - 0x003C)
class UDVPhysicalMaterialProperties : public UPhysicalMaterialPropertyBase
{
public:
	unsigned char                                      SurfaceType;                                      		// 0x003C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FSGenericInteraction >              FootstepInteractions;                             		// 0x0040 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FSGenericInteraction >              JumpingInteractions;                              		// 0x004C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FSGenericInteraction >              LandingInteractions;                              		// 0x0058 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42549 ];

		return pClassPointer;
	};

	void InstanceInteraction ( struct FSGenericInteraction GenericInteraction, struct FVector Location, unsigned long UseOverrideRotation, struct FRotator OverrideRotation, class USkeletalMeshComponent* SkeletalMeshToAttachTo, TArray< struct FName > AttachmentSocketNames, unsigned long SkipIfDedicatedServer );
};

UClass* UDVPhysicalMaterialProperties::pClassPointer = NULL;

// Class ForgeGame.DVAbilitySpirtualFervor
// 0x0024 (0x02D4 - 0x02B0)
class ADVAbilitySpirtualFervor : public ADVAbility
{
public:
	float                                              TickTimer;                                        		// 0x02B0 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxNumberOfStack;                                 		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVPawn*                                     RepHitPawn;                                       		// 0x02BC (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      AttackFailed;                                     		// 0x02C0 (0x0001) [0x0000000000000020]              ( CPF_Net )
	class UAudioComponent*                             HitSoundComponent;                                		// 0x02C4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FFervorStack >                      FervorStacks;                                     		// 0x02C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42627 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void Reset ( );
	void ClientRemoveAllStacks ( class ADVPlayerReplicationInfo* PRI );
	void ClientRemoveStack ( class ADVPlayerReplicationInfo* PRI );
	void ClientAddStack ( class ADVPlayerReplicationInfo* PRI );
	int RemoveAllStacks ( class ADVPawn* Pawn );
	bool RemoveStack ( class ADVPawn* Pawn );
	void UpdateStacks ( );
	void UpdateBeamEmitter ( struct FVector EndLocation );
	void Tick ( float DeltaTime );
	void StopAbility ( );
	bool Interrupt ( unsigned long SelfInterrupt );
	void FireAbility ( );
	void PerformAbility ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbilitySpirtualFervor::pClassPointer = NULL;

// Class ForgeGame.DVAttachment
// 0x0004 (0x01CC - 0x01C8)
class ADVAttachment : public AActor
{
public:
	unsigned long                                      DetachOnDeath : 1;                                		// 0x01C8 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      UsePostAsyncWorkTickGroup : 1;                    		// 0x01C8 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42629 ];

		return pClassPointer;
	};

	void ForceMipLevels ( );
	void ToggleHidden ( unsigned long ShouldHide );
	void NotifyOwnerDied ( class APawn* Pawn, struct FName SocketName );
	void PlayDetermined ( unsigned long Determined );
	void SetStealth ( unsigned long IsStealthed, unsigned long IsCamouflaged );
	void AttachToSocketOnSkeletalMeshComponent ( class USkeletalMeshComponent* BaseSkeletalMeshComponent, struct FName SocketName );
	void AttachToSocket ( class ADVPawn* DVPawn, struct FName SocketName );
	class UPrimitiveComponent* GetComponent ( );
	void PostBeginPlay ( );
};

UClass* ADVAttachment::pClassPointer = NULL;

// Class ForgeGame.DVAbilityProjectile
// 0x002C (0x02DC - 0x02B0)
class ADVAbilityProjectile : public ADVAbility
{
public:
	class ADVProjectile*                               DVProjectileArchetype;                            		// 0x02B0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ADVProjectile*                               DVProjectileArchetypeShadow;                      		// 0x02B4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       ProjectileSocket;                                 		// 0x02B8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Knockback;                                        		// 0x02C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                IncDisorientation;                                		// 0x02C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      UseReplicatedEffect : 1;                          		// 0x02C8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                TeamNumber;                                       		// 0x02CC (0x0004) [0x0000000000000000]              
	float                                              FromBehindExtraDamage;                            		// 0x02D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct ADVAbilityProjectile_FSHitPawn              RepHitPawn;                                       		// 0x02D4 (0x0008) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42637 ];

		return pClassPointer;
	};

	void ProjectileHit ( class ADVPawn* HitPawn, struct FVector HitLocation, struct FVector HitNormal, class ADVProjectile* Projectile );
	class ADVProjectile* SpawnProjectile ( );
	void FireAbility ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbilityProjectile::pClassPointer = NULL;

// Class ForgeGame.DVAbilityMoltenCage
// 0x0008 (0x02E4 - 0x02DC)
class ADVAbilityMoltenCage : public ADVAbilityProjectile
{
public:
	class UDVBuff*                                     LongStun;                                         		// 0x02DC (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UDVAttack*                                   LongStunAttack;                                   		// 0x02E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42636 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void HitsActor ( class ADVPawn* HitPawn, class AActor* Other );
	void FireAbility ( );
	void ProjectileHit ( class ADVPawn* HitPawn, struct FVector HitLocation, struct FVector HitNormal, class ADVProjectile* Projectile );
};

UClass* ADVAbilityMoltenCage::pClassPointer = NULL;

// Class ForgeGame.ForgeGameInfo
// 0x0168 (0x0500 - 0x0398)
class AForgeGameInfo : public AForgeGameInfoBase
{
public:
	float                                              GameLength;                                       		// 0x0398 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              WarmupLength;                                     		// 0x039C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DeathTimerLength;                                 		// 0x03A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ScoreDisplayLength;                               		// 0x03A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      RoundsPerMap;                                     		// 0x03A8 (0x0001) [0x0000000000004000]              ( CPF_Config )
	float                                              AutoBalanceTriggerTime;                           		// 0x03AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AutoBalanceWarningTime;                           		// 0x03B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AutoBalanceFinalWarningTime;                      		// 0x03B4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              LastAutoBalanceTrigger;                           		// 0x03B8 (0x0004) [0x0000000000000000]              
	float                                              LastAutoBalanceWarning;                           		// 0x03BC (0x0004) [0x0000000000000000]              
	float                                              LastAutoBalanceFinalWarning;                      		// 0x03C0 (0x0004) [0x0000000000000000]              
	float                                              EndGameNoAutoBalancePeriod;                       		// 0x03C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AssistPeriod;                                     		// 0x03C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HelpRequestPeriod;                                		// 0x03CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      IsGameTypeSetupDone : 1;                          		// 0x03D0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Random : 1;                                       		// 0x03D0 (0x0004) [0x0000000000044000] [0x00000002] ( CPF_Config | CPF_GlobalConfig )
	TArray< class UDVLogEntry* >                       CombatLog;                                        		// 0x03D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           RotationMaps;                                     		// 0x03E0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           RandomGameModes;                                  		// 0x03EC (0x000C) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	float                                              TowerActivePeriod;                                		// 0x03F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              TowerWarningPeriod;                               		// 0x03FC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              LastTowerActiveSwitchTime;                        		// 0x0400 (0x0004) [0x0000000000000000]              
	class ADVTower*                                    LastActiveTower;                                  		// 0x0404 (0x0004) [0x0000000000000000]              
	float                                              LastTimeServerEmptied;                            		// 0x0408 (0x0004) [0x0000000000000000]              
	float                                              MaxLastTimeServerEmptied;                         		// 0x040C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                JoinedPlayersThisTick;                            		// 0x0410 (0x0004) [0x0000000000000000]              
	int                                                Tier1MedalXP;                                     		// 0x0414 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                Tier2MedalXP;                                     		// 0x0418 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                Tier3MedalXP;                                     		// 0x041C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                Tier4MedalXP;                                     		// 0x0420 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalWinningBonusXP;                              		// 0x0424 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalLosingBonusXP;                               		// 0x0428 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ScorePerDamage;                                   		// 0x042C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ScorePerHealing;                                  		// 0x0430 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ScorePerProtection;                               		// 0x0434 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ScorePerKill;                                     		// 0x0438 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ScorePerAssist;                                   		// 0x043C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ScorePerCapture;                                  		// 0x0440 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ScorePerDefense;                                  		// 0x0444 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqDamageTier1;                              		// 0x0448 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqDamageTier2;                              		// 0x044C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqDamageTier3;                              		// 0x0450 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqDamageTier4;                              		// 0x0454 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqHealingTier1;                             		// 0x0458 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqHealingTier2;                             		// 0x045C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqHealingTier3;                             		// 0x0460 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqHealingTier4;                             		// 0x0464 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqProtectionTier1;                          		// 0x0468 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqProtectionTier2;                          		// 0x046C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqProtectionTier3;                          		// 0x0470 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqProtectionTier4;                          		// 0x0474 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqKillTier1;                                		// 0x0478 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqKillTier2;                                		// 0x047C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqKillTier3;                                		// 0x0480 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqKillTier4;                                		// 0x0484 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqKillStreakTier1;                          		// 0x0488 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqKillStreakTier2;                          		// 0x048C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqKillStreakTier3;                          		// 0x0490 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqKillStreakTier4;                          		// 0x0494 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqAssistTier1;                              		// 0x0498 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqAssistTier2;                              		// 0x049C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqAssistTier3;                              		// 0x04A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqAssistTier4;                              		// 0x04A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqAssistStreakTier1;                        		// 0x04A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqAssistStreakTier2;                        		// 0x04AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqAssistStreakTier3;                        		// 0x04B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqAssistStreakTier4;                        		// 0x04B4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqCaptureTier1;                             		// 0x04B8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqCaptureTier2;                             		// 0x04BC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqCaptureTier3;                             		// 0x04C0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqCaptureTier4;                             		// 0x04C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqDefenseTier1;                             		// 0x04C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqDefenseTier2;                             		// 0x04CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqDefenseTier3;                             		// 0x04D0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqDefenseTier4;                             		// 0x04D4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqSurvivorTier1;                            		// 0x04D8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqSurvivorTier2;                            		// 0x04DC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqSurvivorTier3;                            		// 0x04E0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqSurvivorTier4;                            		// 0x04E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqTowersTier1;                              		// 0x04E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqTowersTier2;                              		// 0x04EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqTowersTier3;                              		// 0x04F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MedalReqTowersTier4;                              		// 0x04F4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                CurrentGameID;                                    		// 0x04F8 (0x0004) [0x0000000000000000]              
	float                                              TimeUntilServerUpdate;                            		// 0x04FC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42671 ];

		return pClassPointer;
	};

	void UpdateGameSettings ( );
	bool CanSpectate ( class APlayerController* Viewer, class APlayerReplicationInfo* ViewTarget );
	void eventAddDefaultInventory ( class APawn* P );
	void EndMatch ( );
	unsigned char WinningTeamId ( );
	bool MatchFinished ( );
	void ClearScores ( );
	void RotateMap ( unsigned long ForceOpen );
	void ResetForNextGame ( );
	bool StatsCount ( );
	void ResetTowerActivation ( );
	void CheckTowerActivation ( );
	void AutoBalanceTeams ( );
	void TellAllOnTeam ( unsigned char TeamIndex, struct FString TheMessage );
	void TellAllClients ( struct FString TheMessage );
	void NotifyKilled ( class AController* Killer, class AController* Killed, class APawn* KilledPawn, class UClass* DamageType );
	void OneTimeMapSetup ( );
	void SetPlayerDefaults ( class APawn* PlayerPawn );
	bool InstantRespawn ( );
	void ScoreKill ( class AController* Killer, class AController* Other );
	int GetJoinedPlayers ( );
	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	bool ChangeTeam ( class AController* Other, int N, unsigned long bNewTeam );
	int SmallestTeamIndex ( );
	void StartBots ( );
	void StartHumans ( );
	class APawn* SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot );
	float RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player );
	class APlayerStart* ChoosePlayerStart ( class AController* Player, unsigned char InTeam );
	float GetDeathTimerLength ( );
	void ClearKickTimerForPRI ( class ADVPlayerReplicationInfo* ThePRI );
	void eventPostLogin ( class APlayerController* NewPlayer );
	void eventPostBeginPlay ( );
	void eventTick ( float DeltaTime );
	void UpdateServer ( );
	void InitGameReplicationInfo ( );
	void RegisterServer ( );
};

UClass* AForgeGameInfo::pClassPointer = NULL;

// Class ForgeGame.DVPlayerController
// 0x0160 (0x06E4 - 0x0584)
class ADVPlayerController : public ADVPlayerControllerBase
{
public:
	class ADVPlayerReplicationInfo*                    PRI;                                              		// 0x0584 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             NormalMusic;                                      		// 0x0588 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             FinalMusic;                                       		// 0x058C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ADVPawn*                                     TargetPawn;                                       		// 0x0590 (0x0004) [0x0000000000000000]              
	unsigned long                                      UsingAimAssist : 1;                               		// 0x0594 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      WTFmode : 1;                                      		// 0x0594 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      DebuggingCleve : 1;                               		// 0x0594 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      IsTalking : 1;                                    		// 0x0594 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                QueuedSpell;                                      		// 0x0598 (0x0004) [0x0000000000000000]              
	float                                              QueueTime;                                        		// 0x059C (0x0004) [0x0000000000000000]              
	float                                              QueueTimeInterval;                                		// 0x05A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              KillCamDuration;                                  		// 0x05A4 (0x0004) [0x0000000000000000]              
	float                                              KillCamFollowSpeed;                               		// 0x05A8 (0x0004) [0x0000000000000000]              
	class ADVPawnHero*                                 Hero;                                             		// 0x05AC (0x0004) [0x0000000000000000]              
	class APawn*                                       KillingPawn;                                      		// 0x05B0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FSAssistingPlayer >                 AssistingPlayers;                                 		// 0x05B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ConfigSavedName;                                  		// 0x05C0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     NewMapName;                                       		// 0x05CC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                SecondsAFKBeforeKick;                             		// 0x05D8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              LastInputTime;                                    		// 0x05DC (0x0004) [0x0000000000000000]              
	float                                              LastTryConnectTime;                               		// 0x05E0 (0x0004) [0x0000000000000000]              
	int                                                AvailableXP;                                      		// 0x05E4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                ClassLevels[ 0x5 ];                               		// 0x05E8 (0x0014) [0x0000000000000020]              ( CPF_Net )
	int                                                ClassXPNeeded[ 0x5 ];                             		// 0x05FC (0x0014) [0x0000000000000020]              ( CPF_Net )
	struct FSClassCustomization                        ClassCustomizations[ 0x5 ];                       		// 0x0610 (0x00C8) [0x0000000000000000]              
	float                                              StartedTalkingAt;                                 		// 0x06D8 (0x0004) [0x0000000000000000]              
	class UForgeOnlineProfileSettings*                 CloudSettings;                                    		// 0x06DC (0x0004) [0x0000000000000000]              
	float                                              CloudSettingsLastWritten;                         		// 0x06E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42714 ];

		return pClassPointer;
	};

	void SendPromotionalCode ( struct FString ThePromoCode );
	void TutorialFinished ( );
	void TurnOffSpeaking ( );
	void ToggleSpeaking ( unsigned long bNowOn );
	void eventClearOnlineDelegates ( );
	void AddOnlineDelegates ( unsigned long bRegisterVoice );
	void PlayNormalMusic ( );
	void PlayFinalMusic ( );
	void FadeMusic ( float FadeTime );
	bool eventIsLookInputIgnored ( );
	void ServerChangeTeam ( int N );
	void ServerUpdateCamera ( struct FVector CamLoc, int CamPitchAndYaw );
	void DebugLocalMessage ( struct FString TheMessage, float NewDisplayPeriod );
	void SetAbilityCooldowns ( unsigned long AbilityCooldowns );
	void GiveMedal ( unsigned char MedalType, unsigned char MedalLevel, int MedalXP, int RequiredPoints );
	void ServerGiveMedal ( unsigned char MedalType, unsigned char MedalLevel, int MedalXP, int RequiredPoints );
	void TutorialMode ( );
	TArray< class ADVTower* > GetAllTowers ( );
	void ServerThrowFlag ( );
	void ThrowFlag ( );
	void TeamTalk ( );
	void Talk ( );
	void eventTeamMessage ( class APlayerReplicationInfo* ThePRI, struct FString S, struct FName Type, float MsgLifeTime );
	void YourAbilityFailed ( class ADVAbility* BlockedAbility, class ADVPawn* MissedPawn, unsigned char ReasonFailed );
	void BlockWorked ( class ADVAbility* BlockedAbility );
	void ClientAttackedFrom ( struct FVector WorldLocation );
	void RemoveHelpRequest ( );
	void ServerRequestHelp ( );
	void RequestHelp ( );
	void AddAssist ( struct FSAssistingPlayer NewAssist );
	void AbilityHit ( class ADVPawn* TheHitPawn, unsigned long IsFriendly );
	void ClientNotifyKilled ( unsigned char KillerClass, class ADVPlayerReplicationInfo* KillerPRI, int KillingAbilityIndex, class ADVPlayerReplicationInfo* KilledPRI, unsigned char KilledClass );
	void NotifyKilledWithAbility ( class AController* Killer, class AController* Killed, class APawn* KilledPawn, class UClass* damageTyp, int KillingAbilityIndex );
	void NotifyPawnHealthChange ( class ADVPawn* TheReceivingPawn, float ChangeAmount );
	void ShowMessage ( struct FString TheMessage );
	void ResetSteamCloud ( );
	void ChooseClass ( struct FString ClassName );
	void ServerSuicideRegardless ( );
	void AcknowledgePossession ( class APawn* P );
	void PerformUseAbility ( unsigned char AbilityNumber, class ADVPawn* RepTargetPawn, unsigned long RepUsingAimAssist );
	void ServerUseAbility ( unsigned char AbilityNumber, class ADVPawn* RepTargetPawn, unsigned long RepUsingAimAssist );
	void MappedUseAbility ( unsigned char FinalInteralIndex );
	void UseAbility ( unsigned char AbilityNumber );
	void QueueSpell ( unsigned char AbilityNumber );
	void PlayerTick ( float DeltaTime );
	void KickForAFK ( );
	void PerformBlock ( unsigned long StartBlock );
	void ServerBlock ( unsigned long StartBlock );
	void bLock ( unsigned long StartBlock );
	void PerformStopCast ( );
	void ServerStopCast ( );
	void StopCast ( );
	void PerformUnstuck ( );
	void ServerUnstuck ( );
	void UnStuck ( );
	void PerformSprint ( unsigned long StartSprint );
	void ServerSprint ( unsigned long StartSprint );
	void Sprint ( unsigned long StartSprint );
	void AskForPawn ( );
	bool OnReceivedNativeInputKey ( int ControllerId, struct FName Key, unsigned char EventType, float AmountDepressed, unsigned long bGamepad );
	bool OnReceivedNativeInputAxis ( int ControllerId, struct FName Key, float Delta, float DeltaTime, unsigned long bGamepad );
	void IncrementNotAFKTime ( );
	void eventInitInputSystem ( );
	void SetupAbilitiesInstigator ( );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
	void UpdateAccountDetails ( class UJsonObject* TheNewAccountDetails );
	void SetScreenName ( );
	void SetName ( struct FString S );
	void RequestInvitePlayerName ( struct FString SearchTerm, struct FString GroupID );
	void RequestJoinPlayer ( struct FString SearchTerm );
	void RequestQuickMatch ( struct FString DesiredGameType );
	void InitPlayerReplicationInfo ( );
	void UpdateStatPoints ( int TheClassId, class UJsonObject* TheStatPointDetails );
	void GetUpdatedStatPointsForClass ( int PlayerClassId );
	void SetupAccountDetails ( );
	void eventClientTravel ( struct FString URL, unsigned char TravelType, unsigned long bSeamless, struct FGuid MapPackageGuid );
	void eventClientWasKicked ( struct FString KickReason );
	void AttemptPlayerAuth ( );
	void ServerSetSkinChoices ( unsigned char* ClassSkinChoices );
	void ServerAuthDetails ( struct FString UserId, struct FString SessionId, struct FString ScreenName );
	void ServerSetFocusChoices ( struct FSAbilityFocusChoices* ClassAbiltyFocuses );
	void ClientSendFocusChoices ( );
	void ClientSendSkinChoices ( );
	void ClientAuthResponse ( );
	void ClientAuthRequired ( );
	void CallDVGCloudAuth ( );
	void ApplySteamCloudInputSettings ( );
	void ApplySteamCloudSettings ( );
	void GetCloudSettings ( );
	void InitUserSettings ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
	void FOV ( float F );
	void Pause ( );
	void eventDestroyed ( );
};

UClass* ADVPlayerController::pClassPointer = NULL;

// Class ForgeGame.DVHUD
// 0x002C (0x047C - 0x0450)
class ADVHUD : public AHUD
{
public:
	class UForgeGFxHUD*                                HUDMovie;                                         		// 0x0450 (0x0004) [0x0000000000000000]              
	class UForgeGFxChat*                               ChatMovie;                                        		// 0x0454 (0x0004) [0x0000000000000000]              
	class UForgeGFxEscapeMenu*                         EscapeMenuMovie;                                  		// 0x0458 (0x0004) [0x0000000000000000]              
	class UForgeGFxClassSelect*                        ClassSelectionMovie;                              		// 0x045C (0x0004) [0x0000000000000000]              
	class UForgeGFxTeamSelect*                         TeamSelectionMovie;                               		// 0x0460 (0x0004) [0x0000000000000000]              
	class UForgeGFxScoreBoard*                         ScoreBoardMovie;                                  		// 0x0464 (0x0004) [0x0000000000000000]              
	class UForgeGFxAbilitiesMenu*                      AbilityDetailsMovie;                              		// 0x0468 (0x0004) [0x0000000000000000]              
	class UForgeGFxKillCam*                            KillCamMovie;                                     		// 0x046C (0x0004) [0x0000000000000000]              
	unsigned long                                      ScoreBoardForced : 1;                             		// 0x0470 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                OldSizeX;                                         		// 0x0474 (0x0004) [0x0000000000000000]              
	int                                                OldSizeY;                                         		// 0x0478 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42716 ];

		return pClassPointer;
	};

	int GetLocalPlayerOwnerIndex ( );
	void NotifyBindPostProcessEffects ( );
	void ChatScrollDown ( );
	void ChatScrollUp ( );
	void Message ( class APlayerReplicationInfo* PRI, struct FString msg, struct FName MsgType, float Lifetime );
	void ShowScores ( );
	void ToggleCursorMode ( unsigned long ShowCursorMode );
	void HideKillCam ( );
	void ShowKillCam ( struct FString KillerClassName, class ADVPlayerReplicationInfo* KillerPRI, int KillingAbilityIndex );
	void ToggleScoreBoard ( unsigned long ShowScoreBoard );
	void ToggleTeamSelectionMenu ( );
	void ToggleClassSelectionMenu ( );
	void SlideInit ( class UGFxObject* NewSlideMC, struct FString NewSlideName );
	void ToggleEscapeMenu ( );
	void ResolutionChanged ( );
	void ToggleHUD ( );
	void eventPostRender ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* ADVHUD::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxFrontEndSlide
// 0x0014 (0x0050 - 0x003C)
class UForgeGFxFrontEndSlide : public UObject
{
public:
	class USwfMovie*                                   TheSWF;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	class AHUD*                                        TheHUD;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SlideMC;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	class UForgeGFxManager*                            FrontEndManager;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      UsesBarLayout : 1;                                		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsInitialized : 1;                                		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42719 ];

		return pClassPointer;
	};

	bool FilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	void ConsoleCommand ( struct FString Command, unsigned long bWriteToLog );
	bool HandleScrollDown ( );
	bool HandleScrollUp ( );
	void DoPasteText ( class UForgeGFxObjectSelectable* TheTextField );
	void HandlePasteCommand ( );
	void DoCopyText ( class UForgeGFxObjectSelectable* TheTextField );
	void HandleCopyCommand ( );
	void DoCutText ( class UForgeGFxObjectSelectable* TheTextField );
	void HandleCutCommand ( );
	void Tick ( float DeltaTime );
	void ConfigSlide ( );
	void SlideInSlide ( );
	void ShowSlide ( );
	void SlideOutSlide ( );
	void HideSlide ( );
	void SlideLoaded ( class UGFxObject* NewSlideMC );
};

UClass* UForgeGFxFrontEndSlide::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxFrontEndSettings
// 0x03D0 (0x0420 - 0x0050)
class UForgeGFxFrontEndSettings : public UForgeGFxFrontEndSlide
{
public:
	class UGFxObject*                                  OuterMC;                                          		// 0x0050 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              BackButtonCB;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  LogoMC;                                           		// 0x0058 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsMenuTitleTF;                              		// 0x005C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsMenuMC;                                   		// 0x0060 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsTabs[ 0x4 ];                              		// 0x0064 (0x0010) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsSubTabs[ 0x3 ];                           		// 0x0074 (0x000C) [0x0000000000000000]              
	class UGFxObject*                                  SettingsAudioMC;                                  		// 0x0080 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsAudioMasterTF;                            		// 0x0084 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsAudioMasterCS;                            		// 0x0088 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsAudioCombatTF;                            		// 0x008C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsAudioCombatCS;                            		// 0x0090 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsAudioEventsTF;                            		// 0x0094 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsAudioEventsCS;                            		// 0x0098 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsAudioAmbientTF;                           		// 0x009C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsAudioAmbientCS;                           		// 0x00A0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsAudioMusicTF;                             		// 0x00A4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsAudioMusicCS;                             		// 0x00A8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsAudioMenuTF;                              		// 0x00AC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsAudioMenuCS;                              		// 0x00B0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsAudioVoiceTF;                             		// 0x00B4 (0x0004) [0x0000000000000000]              
	class UForgeGFxSettingsDropDown*                   SettingsAudioVoiceCDD;                            		// 0x00B8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGraphicsMC;                               		// 0x00BC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGraphicsPerformanceMC;                    		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGraphicsPerformanceMaskMC;                		// 0x00C4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGraphicsPerformanceControlsMC;            		// 0x00C8 (0x0004) [0x0000000000000000]              
	class UForgeGFxManualScrollBar*                    SettingsGraphicsPerformanceScrollCSB;             		// 0x00CC (0x0004) [0x0000000000000000]              
	float                                              ScrollMovement;                                   		// 0x00D0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGraphicsResolutionTF;                     		// 0x00D4 (0x0004) [0x0000000000000000]              
	class UForgeGFxSettingsDropDown*                   SettingsGraphicsResolutionCDD;                    		// 0x00D8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGraphicsDisplayModeTF;                    		// 0x00DC (0x0004) [0x0000000000000000]              
	class UForgeGFxSettingsDropDown*                   SettingsGraphicsDisplayModeCDD;                   		// 0x00E0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGraphicsTextureLODBiasTF;                 		// 0x00E4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGraphicsTextureLODBiasInGameTF;           		// 0x00E8 (0x0004) [0x0000000000000000]              
	class UForgeGFxSettingsDropDown*                   SettingsGraphicsTextureLODBiasCDD;                		// 0x00EC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGraphicsAntiAliasingTF;                   		// 0x00F0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGraphicsAntiAliasingInGameTF;             		// 0x00F4 (0x0004) [0x0000000000000000]              
	class UForgeGFxSettingsDropDown*                   SettingsGraphicsAntiAliasingCDD;                  		// 0x00F8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGraphicsGammaTF;                          		// 0x00FC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGraphicsGammaCS;                          		// 0x0100 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGraphicsMotionBlurCB;                     		// 0x0104 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGraphicsDynamicLightsCB;                  		// 0x0108 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGraphicsDynamicShadowsCB;                 		// 0x010C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGraphicsUseVsyncCB;                       		// 0x0110 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGraphicsDepthOfFieldCB;                   		// 0x0114 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGraphicsBloomCB;                          		// 0x0118 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGraphicsLightShaftsCB;                    		// 0x011C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGraphicsParticleDistortionCB;             		// 0x0120 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGraphicsHighQualityMaterialsCB;           		// 0x0124 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGraphicsHighQualityMaterialsInGameTF;     		// 0x0128 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGraphicsAmbientOcclusionCB;               		// 0x012C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGraphicsLensFlaresCB;                     		// 0x0130 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGraphicsIndieTF;                          		// 0x0134 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGraphicsIndieCS;                          		// 0x0138 (0x0004) [0x0000000000000000]              
	int                                                CachedDisplayMode;                                		// 0x013C (0x0004) [0x0000000000000000]              
	int                                                CachedResolutionIndex;                            		// 0x0140 (0x0004) [0x0000000000000000]              
	int                                                CachedAntiAliasingIndex;                          		// 0x0144 (0x0004) [0x0000000000000000]              
	int                                                CachedResX;                                       		// 0x0148 (0x0004) [0x0000000000000000]              
	int                                                CachedResY;                                       		// 0x014C (0x0004) [0x0000000000000000]              
	unsigned long                                      IsInGame : 1;                                     		// 0x0150 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      FirstIgnored : 1;                                 		// 0x0150 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      MotionBlur : 1;                                   		// 0x0150 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      DynamicLights : 1;                                		// 0x0150 (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )
	unsigned long                                      DynamicShadows : 1;                               		// 0x0150 (0x0004) [0x0000000000004000] [0x00000010] ( CPF_Config )
	unsigned long                                      UseVsync : 1;                                     		// 0x0150 (0x0004) [0x0000000000004000] [0x00000020] ( CPF_Config )
	unsigned long                                      DepthOfField : 1;                                 		// 0x0150 (0x0004) [0x0000000000004000] [0x00000040] ( CPF_Config )
	unsigned long                                      Bloom : 1;                                        		// 0x0150 (0x0004) [0x0000000000004000] [0x00000080] ( CPF_Config )
	unsigned long                                      LightShafts : 1;                                  		// 0x0150 (0x0004) [0x0000000000004000] [0x00000100] ( CPF_Config )
	unsigned long                                      ParticleDistortion : 1;                           		// 0x0150 (0x0004) [0x0000000000004000] [0x00000200] ( CPF_Config )
	unsigned long                                      HighQualityMaterials : 1;                         		// 0x0150 (0x0004) [0x0000000000004000] [0x00000400] ( CPF_Config )
	unsigned long                                      AmbientOcclusion : 1;                             		// 0x0150 (0x0004) [0x0000000000004000] [0x00000800] ( CPF_Config )
	unsigned long                                      LensFlares : 1;                                   		// 0x0150 (0x0004) [0x0000000000004000] [0x00001000] ( CPF_Config )
	unsigned long                                      TutorialMode : 1;                                 		// 0x0150 (0x0004) [0x0000000000004000] [0x00002000] ( CPF_Config )
	unsigned long                                      CooldownSliders : 1;                              		// 0x0150 (0x0004) [0x0000000000004000] [0x00004000] ( CPF_Config )
	unsigned long                                      ResourceArc : 1;                                  		// 0x0150 (0x0004) [0x0000000000004000] [0x00008000] ( CPF_Config )
	unsigned long                                      ColorblindMode : 1;                               		// 0x0150 (0x0004) [0x0000000000004000] [0x00010000] ( CPF_Config )
	unsigned long                                      CameraShakeAttack : 1;                            		// 0x0150 (0x0004) [0x0000000000004000] [0x00020000] ( CPF_Config )
	unsigned long                                      CameraShakeDefense : 1;                           		// 0x0150 (0x0004) [0x0000000000004000] [0x00040000] ( CPF_Config )
	unsigned long                                      CloudDirty : 1;                                   		// 0x0150 (0x0004) [0x0000000000000000] [0x00080000] 
	class UGFxObject*                                  SettingsInputMC;                                  		// 0x0154 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsInputMouseMC;                             		// 0x0158 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsInputMouseSensitivityTF;                  		// 0x015C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsInputMouseSensitivityCS;                  		// 0x0160 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsInputMouseSmoothingCB;                    		// 0x0164 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsInputMouseInvertCB;                       		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsInputMouseInvertTurnCB;                   		// 0x016C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsInputKeysMC;                              		// 0x0170 (0x0004) [0x0000000000000000]              
	class UForgeGFxSettingsBindsScrollingList*         SettingsInputKeysListCSL;                         		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsInputKeysScrollBarCSB;                    		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsInputKeysHeadingsMC;                      		// 0x017C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsInputKeysHeadingActionsTF;                		// 0x0180 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsInputKeysHeadingPrimaryTF;                		// 0x0184 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsInputKeysHeadingSecondaryTF;              		// 0x0188 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsInputKeysHeadingControllerTF;             		// 0x018C (0x0004) [0x0000000000000000]              
	float                                              LastRefreshedBinds;                               		// 0x0190 (0x0004) [0x0000000000000000]              
	TArray< struct FSBindDetails >                     BindDetails;                                      		// 0x0194 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSScrollingListLineDetails >        ScrollingListLines;                               		// 0x01A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  SettingsGameMC;                                   		// 0x01AC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGameHUDMC;                                		// 0x01B0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGameHUDBloodMapsTF;                       		// 0x01B4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGameHUDBloodMapsCS;                       		// 0x01B8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGameTutorialModeCB;                       		// 0x01BC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGameCooldownSlidersCB;                    		// 0x01C0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGameResourceArcCB;                        		// 0x01C4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGameHUDChatSizeTF;                        		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGameHUDChatSizeCS;                        		// 0x01CC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGameHUDDamageSizeTF;                      		// 0x01D0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGameHUDDamageSizeCS;                      		// 0x01D4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGameColorblindModeCB;                     		// 0x01D8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGameColorblindModeTF;                     		// 0x01DC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGameOtherMC;                              		// 0x01E0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGameCameraShakeAttackCB;                  		// 0x01E4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGameCameraShakeDefenseCB;                 		// 0x01E8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGameFOVTF;                                		// 0x01EC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGameFOVCS;                                		// 0x01F0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGameQueueLengthTF;                        		// 0x01F4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGameQueueLengthCS;                        		// 0x01F8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGameLolzCB;                               		// 0x01FC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsInputAbilitiesMC;                         		// 0x0200 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsInputAbilitiesClassesTF;                  		// 0x0204 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsInputAbilitiesClassLeftCB;                		// 0x0208 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsInputAbilitiesClassButtonsAreaMC;         		// 0x020C (0x0004) [0x0000000000000000]              
	struct UForgeGFxFrontEndAccountMenu_FSClassSelectionButton SettingsInputAbilitiesClassButtons[ 0x5 ];        		// 0x0210 (0x00C8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              SettingsInputAbilitiesClassRightCB;               		// 0x02D8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsInputAbilitiesDescriptionTF;              		// 0x02DC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsGameAbilityOrderButtons[ 0x8 ];           		// 0x02E0 (0x0020) [0x0000000000000000]              
	class UGFxObject*                                  SettingsGameAbilityOrderIcons[ 0x8 ];             		// 0x0300 (0x0020) [0x0000000000000000]              
	class UGFxObject*                                  SettingsInputAbilitiesMouseoverMC;                		// 0x0320 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsInputAbilitiesMouseoverBackgroundMC;      		// 0x0324 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingsInputAbilitiesMouseoverTF;                		// 0x0328 (0x0004) [0x0000000000000000]              
	unsigned char                                      SwappingSlotNumber;                               		// 0x032C (0x0001) [0x0000000000000000]              
	unsigned char                                      ChatSize;                                         		// 0x032D (0x0001) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      DamageSize;                                       		// 0x032E (0x0001) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      ReOrderAnimationAbilitySlot1;                     		// 0x032F (0x0001) [0x0000000000000000]              
	unsigned char                                      ReOrderAnimationAbilitySlot2;                     		// 0x0330 (0x0001) [0x0000000000000000]              
	float                                              BloodMapAlpha;                                    		// 0x0334 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                CapturingIndex;                                   		// 0x0338 (0x0004) [0x0000000000000000]              
	struct FString                                     CapturingType;                                    		// 0x033C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              ApplyButtonCB;                                    		// 0x0348 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ResetButtonCB;                                    		// 0x034C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SettingDetailsTF;                                 		// 0x0350 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ConfirmContainerMC;                               		// 0x0354 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ConfirmMC;                                        		// 0x0358 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ConfirmTF;                                        		// 0x035C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ConfirmYesCB;                                     		// 0x0360 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ConfirmNoCB;                                      		// 0x0364 (0x0004) [0x0000000000000000]              
	int                                                OldResolutionIndex;                               		// 0x0368 (0x0004) [0x0000000000000000]              
	int                                                OldDisplayMode;                                   		// 0x036C (0x0004) [0x0000000000000000]              
	float                                              ConfirmShownAt;                                   		// 0x0370 (0x0004) [0x0000000000000000]              
	float                                              ConfirmPeriod;                                    		// 0x0374 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MasterVolume;                                     		// 0x0378 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CombatVolume;                                     		// 0x037C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              EventsVolume;                                     		// 0x0380 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AmbientVolume;                                    		// 0x0384 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MusicVolume;                                      		// 0x0388 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MenuVolume;                                       		// 0x038C (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           AvailableResolutions;                             		// 0x0390 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AvailableTextureLevels;                           		// 0x039C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AvailableAntiAliasingLevels;                      		// 0x03A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TextureLODBias;                                   		// 0x03B4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     AntiAliasingLevel;                                		// 0x03B8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              ScreenPercentage;                                 		// 0x03C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DefaultFOV;                                       		// 0x03C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ChosenRegionId;                                   		// 0x03CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                VoiceAllowed;                                     		// 0x03D0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     CurrentTab;                                       		// 0x03D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CurrentSubTab;                                    		// 0x03E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           BindableCommands;                                 		// 0x03EC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ChosenClass;                                      		// 0x03F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumClassIconsDisplayed;                           		// 0x0404 (0x0004) [0x0000000000000000]              
	int                                                FirstClassIndexDisplayed;                         		// 0x0408 (0x0004) [0x0000000000000000]              
	int                                                OldFirstClassIndexDisplayed;                      		// 0x040C (0x0004) [0x0000000000000000]              
	float                                              LastSlideTime;                                    		// 0x0410 (0x0004) [0x0000000000000000]              
	float                                              MinSlideTime;                                     		// 0x0414 (0x0004) [0x0000000000000000]              
	float                                              ReOrderAnimationStarted;                          		// 0x0418 (0x0004) [0x0000000000000000]              
	float                                              ReOrderAnimationLength;                           		// 0x041C (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42718 ];

		return pClassPointer;
	};

	void UpdateAccountDetails ( class UJsonObject* TheNewAccountDetails );
	struct FString GetCommandForSteamCloudIndex ( int TheIndex, int* BindType );
	int GetSteamCloudIndexForCommand ( struct FString TheCommand );
	void GetBindsForCommand ( struct FString TheCommand, int* PrimaryBind, int* SecondaryBind, int* ControllerBind );
	void SetAllBindsFromSteamCloud ( );
	void SaveAllBindsToSteamCloud ( );
	void BindKey ( struct FName KeyName, struct FString NewCommand, struct FName ExistingKey );
	bool FilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	void OnResetBindPress ( struct FEventData ev );
	void OnControllerBindPress ( struct FEventData ev );
	void OnSecondaryBindPress ( struct FEventData ev );
	void OnPrimaryBindPress ( struct FEventData ev );
	void OnAbilityReOrderPress ( struct FEventData ev );
	void OnClassRightPress ( struct FEventData ev );
	void OnClassLeftPress ( struct FEventData ev );
	float GetBloodAlpha ( );
	void OnLolzChange ( struct FEventData ev );
	void OnQueueLengthChange ( struct FEventData ev );
	void OnFovChange ( struct FEventData ev );
	void OnCameraShakeDefenseChange ( struct FEventData ev );
	void OnCameraShakeAttackChange ( struct FEventData ev );
	void OnColorblindModeChange ( struct FEventData ev );
	void OnDamageSizeChange ( struct FEventData ev );
	void OnChatSizeChange ( struct FEventData ev );
	void OnResourceArcChange ( struct FEventData ev );
	void OnCooldownSlidersChange ( struct FEventData ev );
	void OnTutorialModeChange ( struct FEventData ev );
	void OnBloodMapChange ( struct FEventData ev );
	void OnInvertTurnChange ( struct FEventData ev );
	void OnInvertMouseChange ( struct FEventData ev );
	void OnMouseSmoothingChange ( struct FEventData ev );
	void OnMouseSensitivityChange ( struct FEventData ev );
	void SetVolume ( struct FName SoundClassName, float NewVolume );
	void OnVoiceAllowedChange ( struct FEventData ev );
	void OnMenuVolumeChange ( struct FEventData ev );
	void OnMusicVolumeChange ( struct FEventData ev );
	void OnAmbientVolumeChange ( struct FEventData ev );
	void OnEventsVolumeChange ( struct FEventData ev );
	void OnCombatVolumeChange ( struct FEventData ev );
	void OnMasterVolumeChange ( struct FEventData ev );
	void OnIndieChange ( struct FEventData ev );
	void OnGammaChange ( struct FEventData ev );
	void ShowAbilityReorderMouseover ( );
	void Tick ( float DeltaTime );
	void OnResetPress ( struct FEventData ev );
	void OnApplyPress ( struct FEventData ev );
	void OnSubTabPress ( struct FEventData ev );
	void OnGameTabPress ( struct FEventData ev );
	void OnInputTabPress ( struct FEventData ev );
	void OnAudioTabPress ( struct FEventData ev );
	void OnGraphicsTabPress ( struct FEventData ev );
	void SetResolutionToIndex ( int NewResolutionIndex, int NewDisplayModeIndex );
	void OnConfirmNoPress ( struct FEventData ev );
	void OnConfirmYesPress ( struct FEventData ev );
	void OnBackPress ( struct FEventData ev );
	bool HandleScrollDown ( );
	bool HandleScrollUp ( );
	void HandlePasteCommand ( );
	void HandleCopyCommand ( );
	void HandleCutCommand ( );
	void ConfigForRes ( int SizeX, int SizeY );
	void SetGraphicsCaches ( );
	void ApplySteamCloudSettings ( );
	void ShowSlide ( );
	void HideSlide ( );
	void UpdateBindRow ( int RowIndex );
	bool IsControllerButton ( struct FName ButtonName );
	void ConfigForClass ( struct FString ClassName );
	void OnClassButtonChange ( struct FEventData ev );
	void OnClassButtonPress ( struct FEventData ev );
	void CreateAbilityClassSelectButtons ( );
	void SetGraphicsTabPresets ( );
	void ConfigBindDetails ( );
	void SetSliderValues ( );
	void ConfigSlide ( );
};

UClass* UForgeGFxFrontEndSettings::pClassPointer = NULL;

// Class ForgeGame.DVPlayerReplicationInfo
// 0x0240 (0x04BC - 0x027C)
class ADVPlayerReplicationInfo : public APlayerReplicationInfo
{
public:
	unsigned char                                      DesiredClass;                                     		// 0x027C (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      LastSpawnedClass;                                 		// 0x027D (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      StackCounter;                                     		// 0x027E (0x0001) [0x0000000000000000]              
	unsigned char                                      KillsReplicated;                                  		// 0x027F (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      Assists;                                          		// 0x0280 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      Captures;                                         		// 0x0281 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      Defenses;                                         		// 0x0282 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      CurrentKillStreak;                                		// 0x0283 (0x0001) [0x0000000000000000]              
	unsigned char                                      BestKillStreak;                                   		// 0x0284 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      CurrentAssistStreak;                              		// 0x0285 (0x0001) [0x0000000000000000]              
	unsigned char                                      BestAssistStreak;                                 		// 0x0286 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      CurrentCaptureStreak;                             		// 0x0287 (0x0001) [0x0000000000000000]              
	unsigned char                                      BestCaptureStreak;                                		// 0x0288 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      CurrentDefenseStreak;                             		// 0x0289 (0x0001) [0x0000000000000000]              
	unsigned char                                      BestDefenseStreak;                                		// 0x028A (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      PendingGlobalSteamStatGames;                      		// 0x028B (0x0001) [0x0000000000000000]              
	unsigned char                                      PendingGlobalSteamStatWins;                       		// 0x028C (0x0001) [0x0000000000000000]              
	unsigned char                                      PendingGlobalSteamStatLosses;                     		// 0x028D (0x0001) [0x0000000000000000]              
	unsigned char                                      LivesAvailable;                                   		// 0x028E (0x0001) [0x0000000000000000]              
	unsigned char                                      ClassSkinChoices[ 0x5 ];                          		// 0x028F (0x0005) [0x0000000000000020]              ( CPF_Net )
	float                                              GCD;                                              		// 0x0294 (0x0004) [0x0000000000000000]              
	float                                              GCDInterval;                                      		// 0x0298 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              TimeTillReady;                                    		// 0x029C (0x0004) [0x0000000000000000]              
	float                                              DeathTimeLeft;                                    		// 0x02A0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ADVAbility*                                  UnstuckAbility;                                   		// 0x02A4 (0x0004) [0x0000000000000000]              
	class ADVAbility*                                  CurrentAbilities[ 0x8 ];                          		// 0x02A8 (0x0020) [0x0000000000000020]              ( CPF_Net )
	int                                                DamageDone;                                       		// 0x02C8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                HealingDone;                                      		// 0x02CC (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                ProtectionDone;                                   		// 0x02D0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                LongestLife;                                      		// 0x02D4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                TowerTugging;                                     		// 0x02D8 (0x0004) [0x0000000000000000]              
	int                                                DamageTaken;                                      		// 0x02DC (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                HealingTaken;                                     		// 0x02E0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                ProtectionTaken;                                  		// 0x02E4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              LastSpawnedAt;                                    		// 0x02E8 (0x0004) [0x0000000000000000]              
	float                                              AutoBalancedSurvivorTime;                         		// 0x02EC (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FSPendingSteamStats                         PendingGlobalSteamStats;                          		// 0x02F0 (0x0030) [0x0000000000000000]              
	struct FSPendingSteamStats                         PendingPerClassSteamStats[ 0x5 ];                 		// 0x0320 (0x00F0) [0x0000000000000000]              
	struct FSMedalLevelsWon                            MedalsWon[ 0xB ];                                 		// 0x0410 (0x002C) [0x0000000000000020]              ( CPF_Net )
	struct FString                                     AuthUserID;                                       		// 0x043C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AuthSessionID;                                    		// 0x0448 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LastCheckedScoreAt;                               		// 0x0454 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsCarryingFlag : 1;                               		// 0x0458 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      IsPawnAliveAndWell : 1;                           		// 0x0458 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	struct FSAbilityFocusChoices                       ClassAbiltyFocuses[ 0x7 ];                        		// 0x045C (0x0038) [0x0000000000000020]              ( CPF_Net )
	struct FString                                     ChosenTitle;                                      		// 0x0494 (0x000C) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      MutedIds;                                         		// 0x04A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LastCheckedMutesAt;                               		// 0x04AC (0x0004) [0x0000000000000000]              
	class UForgeOnlineStatsRead*                       TheStatsReader;                                   		// 0x04B0 (0x0004) [0x0000000000000000]              
	class UForgeOnlineStatsWrite*                      TheStatsWriter;                                   		// 0x04B4 (0x0004) [0x0000000000000000]              
	class AForgeGameInfo*                              ForgeGameInfo;                                    		// 0x04B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42750 ];

		return pClassPointer;
	};

	void UsedAbility ( unsigned long TriggersGCD );
	void UpdateScore ( );
	void Tick ( float DeltaTime );
	void eventDestroyed ( );
	void GetSteamAvatar ( );
	void RegisterPlayerWithSession ( );
	void eventPostBeginPlay ( );
	void InitAbilities ( );
	void ServerSetDesiredClass ( unsigned char NewDesiredClass );
	void CopyProperties ( class APlayerReplicationInfo* PRI );
	void ScoreDefense ( );
	void ScoreCapture ( int ExtraPoints );
	void ScoreAssist ( );
	void ScoreKill ( );
	void ScoreDamageTaken ( float AddedDamageTaken );
	void ScoreProtectionDone ( int AddedProtection );
	void ScoreHealingDone ( int AddedHealing );
	void ScoreDamageDone ( int AddedDamage );
	void FinalizeStats ( );
	void ResetAllStats ( );
	void IncrementDeaths ( int Amt );
	bool StatsRecordingValid ( );
	void ResetStatsForDeath ( );
	void SetSkinForClass ( unsigned char PlayerClass, unsigned char Skin );
	void SetDesiredClass ( unsigned char NewDesiredClass );
	void KickForUnAuth ( );
	void WriteUpdatedSteamStats ( );
	void UpdateStatsForEndSpec ( );
	void UpdateStatsForEndLoss ( );
	void UpdateStatsForEndWin ( );
	void ClearPendingSteamStats ( );
	void UpdateStoredSteamStats ( );
	void UpdateCalculatedSkillValues ( );
	void SetStoredStatIfGreater ( unsigned char TheStat, int NewAmount );
	void SetStoredStat ( unsigned char TheStat, int NewAmount );
	int GetStoredStat ( unsigned char TheStat );
	void IncrementStoredStat ( unsigned char TheStat, int IncrementAmount );
	void ReadSteamStatsComplete ( unsigned long bWasSuccessful );
	void GetSteamStats ( );
};

UClass* ADVPlayerReplicationInfo::pClassPointer = NULL;

// Class ForgeGame.DVDamageType
// 0x0000 (0x0064 - 0x0064)
class UDVDamageType : public UDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42759 ];

		return pClassPointer;
	};

	struct FString StringVersion ( class UClass* DamageType );
};

UClass* UDVDamageType::pClassPointer = NULL;

// Class ForgeGame.DVAttack
// 0x0058 (0x0094 - 0x003C)
class UDVAttack : public UObject
{
public:
	class ADVAbility*                                  Ability;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	class ADVPawn*                                     Instigator;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	class ADVPawn*                                     Target;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	class AController*                                 InstigatorController;                             		// 0x0048 (0x0004) [0x0000000000000000]              
	class ADVPlayerReplicationInfo*                    RepInfo;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	TArray< class UDVBuff* >                           Buffs;                                            		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UDVHealthOverTime* >                 Hots;                                             		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     Knockback;                                        		// 0x0068 (0x000C) [0x0000000000000000]              
	float                                              Knockdown;                                        		// 0x0074 (0x0004) [0x0000000000000000]              
	unsigned long                                      BlockImmune : 1;                                  		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Failed : 1;                                       		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Friendly : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      HotTick : 1;                                      		// 0x0078 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      Mirrored : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      UsedAimAssist : 1;                                		// 0x0078 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      DontCauseHitReaction : 1;                         		// 0x0078 (0x0004) [0x0000000000000000] [0x00000040] 
	struct FVector                                     Origin;                                           		// 0x007C (0x000C) [0x0000000000000000]              
	TArray< struct FSDamage >                          RawDamages;                                       		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42780 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void Release ( );
	void AddBuff ( class UDVBuff* Buff );
	void AddHot ( class UDVHealthOverTime* Hot );
	void SetKnockdown ( float NewKnockdown );
	void SetKnockback ( struct FVector Direction, int Distance );
	void AddDamage ( float Amount, class UClass* Type );
	void SetDontCauseHitReaction ( unsigned long NewDontCauseHitReaction );
	void SetMirrored ( unsigned long NewMirrored );
	void SetFriendly ( unsigned long NewFriendly );
	void SetHotTick ( unsigned long NewHotTick );
	void SetBlockImmune ( unsigned long NewBlockImmune );
	void SetInstigatorController ( class AController* NewInstigator );
	void SetAbility ( class ADVAbility* NewAbility );
	void SetOrigin ( struct FVector NewOrigin );
};

UClass* UDVAttack::pClassPointer = NULL;

// Class ForgeGame.ForgeOnlineProfileSettings
// 0x0004 (0x0090 - 0x008C)
class UForgeOnlineProfileSettings : public UOnlineProfileSettings
{
public:
	unsigned long                                      NeedsSaving : 1;                                  		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42798 ];

		return pClassPointer;
	};

	void DownAbilityReordering ( );
	void UpAbilityReordering ( );
	void AddMissingDefaultSettings ( );
	void SanityChecks ( );
	bool eventMigrateRevision ( int OldVersionNumber );
};

UClass* UForgeOnlineProfileSettings::pClassPointer = NULL;

// Class ForgeGame.DVPawnMortal
// 0x0064 (0x0668 - 0x0604)
class ADVPawnMortal : public ADVPawn
{
public:
	float                                              MinMoveSpeedWhenDetermined;                       		// 0x0604 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       KnockedDownAnim;                                  		// 0x0608 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       OnGroundAnim;                                     		// 0x0610 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GetUpAnim;                                        		// 0x0618 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StunnedAnim;                                      		// 0x0620 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PinnedAnim;                                       		// 0x0628 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UMaterial*                                   ShadowShiftPPMaterial;                            		// 0x0630 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          BlindedPPMaterial;                                		// 0x0634 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   BlindedPPMaterialInst;                            		// 0x0638 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             StealthInVFX;                                     		// 0x063C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             StealthIdleVFX;                                   		// 0x0640 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             StealthOutVFX;                                    		// 0x0644 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class URadialBlurComponent*                        BlindBlur;                                        		// 0x0648 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             StealthSound;                                     		// 0x064C (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      Determined : 1;                                   		// 0x0650 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      Stunned : 1;                                      		// 0x0650 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      Blinded : 1;                                      		// 0x0650 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned char                                      RepKnockdown;                                     		// 0x0654 (0x0001) [0x0000000000000020]              ( CPF_Net )
	float                                              KnockdownIdleTime;                                		// 0x0658 (0x0004) [0x0000000000000000]              
	class UMaterialEffect*                             PPBlind;                                          		// 0x065C (0x0004) [0x0000000000000000]              
	class UPostProcessEffect*                          PPDistortion;                                     		// 0x0660 (0x0004) [0x0000000000000000]              
	class UPostProcessEffect*                          PPUber;                                           		// 0x0664 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42812 ];

		return pClassPointer;
	};

	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal );
	void TossPawn ( struct FVector Knockback );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc );
	void PlayHitReaction ( struct FVector AttackImpulse );
	void TakeAttack ( class UDVAttack** Attack );
	void eventTick ( float DeltaTime );
	void PostBeginPlay ( );
	void SetPostProcess ( );
	void PlayBlinded ( float DeltaTime );
	void PlayShadowShift ( );
	void SetShadowShift ( );
	void eventDestroyed ( );
	void PlayPinned ( );
	void PlayStunned ( );
	void PlayGetUp ( );
	void PlayIdleGround ( );
	void PlayKnockdown ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVPawnMortal::pClassPointer = NULL;

// Class ForgeGame.DVPawnHero
// 0x00C8 (0x0730 - 0x0668)
class ADVPawnHero : public ADVPawnMortal
{
public:
	TArray< struct FSSkin >                            Skins;                                            		// 0x0668 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0674 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	struct FString                                     ClassName;                                        		// 0x0678 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                HitscanRange;                                     		// 0x0684 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WallJumpR;                                        		// 0x0688 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WallJumpL;                                        		// 0x0690 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WallJumpF;                                        		// 0x0698 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WallJumpB;                                        		// 0x06A0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastJumpVelocity;                                 		// 0x06A8 (0x000C) [0x0000000000000000]              
	unsigned char                                      WallJumpDir;                                      		// 0x06B4 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      PlayBlockedRep;                                   		// 0x06B5 (0x0001) [0x0000000000000020]              ( CPF_Net )
	class UParticleSystem*                             SpawnProtection;                                  		// 0x06B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    SpawnProtectionEmitter;                           		// 0x06BC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      SpawnProtectionOver : 1;                          		// 0x06C0 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      Sprinting : 1;                                    		// 0x06C0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      RequestingHelp : 1;                               		// 0x06C0 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      Blocking : 1;                                     		// 0x06C0 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	float                                              SpawnProtectionTime;                              		// 0x06C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeSpawned;                                      		// 0x06C8 (0x0004) [0x0000000000000000]              
	float                                              Determination;                                    		// 0x06CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeterminationNoCC;                                		// 0x06D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeterminationRegen;                               		// 0x06D4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              DeterminationRegenBase;                           		// 0x06D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HealthLastTick;                                   		// 0x06DC (0x0004) [0x0000000000000000]              
	class UDecalComponent*                             HeroRings;                                        		// 0x06E0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   HeroRingsMaterialInstance;                        		// 0x06E4 (0x0004) [0x0000000000000000]              
	class ADVFlag*                                     CarriedFlag;                                      		// 0x06E8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              SprintMultiplier;                                 		// 0x06EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SprintingCost;                                    		// 0x06F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                WallJumpCost;                                     		// 0x06F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                WallJumpRange;                                    		// 0x06F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlockResourceCost;                                		// 0x06FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlockRampingCost;                                 		// 0x0700 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlockBuffTime;                                    		// 0x0704 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlockingSpeedMultiplier;                          		// 0x0708 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastUnBlockTime;                                  		// 0x070C (0x0004) [0x0000000000000000]              
	int                                                BlockingDamage;                                   		// 0x0710 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BlockingAnimStart;                                		// 0x0714 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BlockingAnimIdle;                                 		// 0x071C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BlockingAnimEnd;                                  		// 0x0724 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             BlockingVFX;                                      		// 0x072C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42811 ];

		return pClassPointer;
	};

	void UnPossessed ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void PlayWallJump ( );
	bool DoJump ( unsigned long bUpdating );
	void TossPawn ( struct FVector Knockback );
	void RemoveBlockResource ( );
	bool AttackMisses ( class UDVLogEntry* LogEntry, class UDVAttack** Attack );
	void eventDestroyed ( );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc );
	void Tick ( float DeltaTime );
	bool CanCapObjective ( );
	void InitiateStats ( );
	void PostBeginPlay ( );
	void PlaySpawnProtection ( );
	bool IsPawnReady ( );
	void PlayBlocked ( );
	void PlayBlockingIdle ( );
	void PlayBlocking ( );
	void PlayDetermined ( );
	void SetSkin ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVPawnHero::pClassPointer = NULL;

// Class ForgeGame.DVPawnHeroAssassin
// 0x0010 (0x0740 - 0x0730)
class ADVPawnHeroAssassin : public ADVPawnHero
{
public:
	unsigned long                                      Stealthed : 1;                                    		// 0x0730 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      OldStealthState : 1;                              		// 0x0730 (0x0004) [0x0000000000000000] [0x00000002] 
	class ADVAbilityPuncture*                          Puncture;                                         		// 0x0734 (0x0004) [0x0000000000000000]              
	class ADVAbilityStealth*                           StealthAbility;                                   		// 0x0738 (0x0004) [0x0000000000000000]              
	float                                              StealthStackBonus;                                		// 0x073C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42828 ];

		return pClassPointer;
	};

	void AttackedSomeone ( );
	void eventPlayFootStepSound ( int FootDown );
	bool CanCapObjective ( );
	bool ShouldDisplayOnHud ( );
	void TakeAttack ( class UDVAttack** Attack );
	void Tick ( float DeltaTime );
	void PlayBlinded ( float DeltaTime );
	void SetPostProcess ( );
	void SetStealth ( );
	void SetSkin ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVPawnHeroAssassin::pClassPointer = NULL;

// Class ForgeGame.DVLogEntry
// 0x0036 (0x0072 - 0x003C)
class UDVLogEntry : public UObject
{
public:
	float                                              Time;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	class ADVAbility*                                  Ability;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FString                                     VictimName;                                       		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InstigatorName;                                   		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSDamage >                          DamageTaken;                                      		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ADVAbility*                                  InterruptedAbility;                               		// 0x0068 (0x0004) [0x0000000000000000]              
	class UDVAttack*                                   Attack;                                           		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned char                                      LogType;                                          		// 0x0070 (0x0001) [0x0000000000000000]              
	unsigned char                                      MissType;                                         		// 0x0071 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42832 ];

		return pClassPointer;
	};

	void Destroyed ( );
	struct FString Report ( );
	void LogMiss ( unsigned char Type );
};

UClass* UDVLogEntry::pClassPointer = NULL;

// Class ForgeGame.DVAbilityHitscan
// 0x0018 (0x02C8 - 0x02B0)
class ADVAbilityHitscan : public ADVAbility
{
public:
	unsigned long                                      HitsAllies : 1;                                   		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      HitsEnemies : 1;                                  		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              FromBehindExtraDamage;                            		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RangeSq;                                          		// 0x02B8 (0x0004) [0x0000000000000000]              
	unsigned char                                      AttackFailed;                                     		// 0x02BC (0x0001) [0x0000000000000020]              ( CPF_Net )
	struct ADVAbilityHitscan_FSHitPawn                 RepHitPawn;                                       		// 0x02C0 (0x0008) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42852 ];

		return pClassPointer;
	};

	void FireAbility ( );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbilityHitscan::pClassPointer = NULL;

// Class ForgeGame.DVAbilityPuncture
// 0x0010 (0x02D8 - 0x02C8)
class ADVAbilityPuncture : public ADVAbilityHitscan
{
public:
	float                                              Duration;                                         		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPunctureStack >                    PunctureStacks;                                   		// 0x02CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42851 ];

		return pClassPointer;
	};

	void Reset ( );
	void HotTick ( );
	void SendHot ( class ADVPawn* HotTarget );
	void ClientRemoveAllStacks ( class ADVPlayerReplicationInfo* PRI );
	void ClientRemoveStack ( class ADVPlayerReplicationInfo* PRI );
	void ClientAddStack ( class ADVPlayerReplicationInfo* PRI );
	int StackCountForPawn ( class ADVPawn* Pawn );
	int RemoveAllStacks ( class ADVPawn* Pawn );
	bool RemoveStack ( class ADVPawn* Pawn );
	void UpdateStacks ( );
	void FireAbility ( );
};

UClass* ADVAbilityPuncture::pClassPointer = NULL;

// Class ForgeGame.DVPawnHeroPathfinder
// 0x0010 (0x0740 - 0x0730)
class ADVPawnHeroPathfinder : public ADVPawnHero
{
public:
	unsigned long                                      Camouflaged : 1;                                  		// 0x0730 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      CamoLocationExposed : 1;                          		// 0x0730 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      OldCamoState : 1;                                 		// 0x0730 (0x0004) [0x0000000000000000] [0x00000004] 
	class UParticleSystem*                             CamoIdleVFX;                                      		// 0x0734 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVAbilityCamouflage*                        CamoAbility;                                      		// 0x0738 (0x0004) [0x0000000000000000]              
	class UMaterial*                                   CamoPPMaterial;                                   		// 0x073C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42861 ];

		return pClassPointer;
	};

	void TakeAttack ( class UDVAttack** Attack );
	bool CanCapObjective ( );
	bool ShouldDisplayOnHud ( );
	void SetCamouflaged ( );
	void SetPostProcess ( );
	void SetSkin ( );
	void Tick ( float DeltaTime );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVPawnHeroPathfinder::pClassPointer = NULL;

// Class ForgeGame.ForgeGameInfoCTF
// 0x0008 (0x0508 - 0x0500)
class AForgeGameInfoCTF : public AForgeGameInfo
{
public:
	int                                                WinningCaptures;                                  		// 0x0500 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FlagReturnLength;                                 		// 0x0504 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42875 ];

		return pClassPointer;
	};

	unsigned char WinningTeamId ( );
	void ScoreKill ( class AController* Killer, class AController* Other );
	void FlagCaptured ( class ADVFlag* TheFlag );
	void OneTimeMapSetup ( );
	bool MatchFinished ( );
	void eventPostBeginPlay ( );
};

UClass* AForgeGameInfoCTF::pClassPointer = NULL;

// Class ForgeGame.ForgeGameInfoTraining
// 0x000C (0x0514 - 0x0508)
class AForgeGameInfoTraining : public AForgeGameInfoCTF
{
public:
	struct FString                                     SectionsComplete;                                 		// 0x0508 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42874 ];

		return pClassPointer;
	};

	void AutoBalanceTeams ( );
	void StartBots ( );
	class APawn* SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot );
	void SetupKismet ( );
	bool ChangeTeam ( class AController* Other, int N, unsigned long bNewTeam );
	void CheckTowerActivation ( );
	void OneTimeMapSetup ( );
	void eventHandleSeamlessTravelPlayer ( class AController** C );
	void eventPostSeamlessTravel ( );
	void eventPostLogin ( class APlayerController* NewPlayer );
	float GetDeathTimerLength ( );
};

UClass* AForgeGameInfoTraining::pClassPointer = NULL;

// Class ForgeGame.DVSmokeCloud
// 0x0010 (0x01D8 - 0x01C8)
class ADVSmokeCloud : public AActor
{
public:
	class UAudioComponent*                             AmbientSound;                                     		// 0x01C8 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleSystem;                                   		// 0x01CC (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ADVPlayerController*                         LocalPC;                                          		// 0x01D0 (0x0004) [0x0000000000000000]              
	unsigned long                                      ShadowShifted : 1;                                		// 0x01D4 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42896 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void PostBeginPlay ( );
};

UClass* ADVSmokeCloud::pClassPointer = NULL;

// Class ForgeGame.DVHealthOverTime
// 0x0018 (0x0054 - 0x003C)
class UDVHealthOverTime : public UObject
{
public:
	float                                              Duration;                                         		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Damage;                                           		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      DamageType;                                       		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVPawn*                                     Target;                                           		// 0x0048 (0x0004) [0x0000000000000000]              
	class UDVAttack*                                   Attack;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              Expiry;                                           		// 0x0050 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42947 ];

		return pClassPointer;
	};

};

UClass* UDVHealthOverTime::pClassPointer = NULL;

// Class ForgeGame.DVDamageTypeMagic
// 0x0000 (0x0064 - 0x0064)
class UDVDamageTypeMagic : public UDVDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42969 ];

		return pClassPointer;
	};

};

UClass* UDVDamageTypeMagic::pClassPointer = NULL;

// Class ForgeGame.DVDamageTypeMagicEarth
// 0x0000 (0x0064 - 0x0064)
class UDVDamageTypeMagicEarth : public UDVDamageTypeMagic
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42970 ];

		return pClassPointer;
	};

};

UClass* UDVDamageTypeMagicEarth::pClassPointer = NULL;

// Class ForgeGame.DVDamageTypeMagicFire
// 0x0000 (0x0064 - 0x0064)
class UDVDamageTypeMagicFire : public UDVDamageTypeMagic
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42971 ];

		return pClassPointer;
	};

};

UClass* UDVDamageTypeMagicFire::pClassPointer = NULL;

// Class ForgeGame.DVDamageTypeMagicIce
// 0x0000 (0x0064 - 0x0064)
class UDVDamageTypeMagicIce : public UDVDamageTypeMagic
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42972 ];

		return pClassPointer;
	};

};

UClass* UDVDamageTypeMagicIce::pClassPointer = NULL;

// Class ForgeGame.DVDamageTypeNature
// 0x0000 (0x0064 - 0x0064)
class UDVDamageTypeNature : public UDVDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42973 ];

		return pClassPointer;
	};

};

UClass* UDVDamageTypeNature::pClassPointer = NULL;

// Class ForgeGame.DVDamageTypeNatureDisease
// 0x0000 (0x0064 - 0x0064)
class UDVDamageTypeNatureDisease : public UDVDamageTypeNature
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42974 ];

		return pClassPointer;
	};

};

UClass* UDVDamageTypeNatureDisease::pClassPointer = NULL;

// Class ForgeGame.DVDamageTypeNaturePoison
// 0x0000 (0x0064 - 0x0064)
class UDVDamageTypeNaturePoison : public UDVDamageTypeNature
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42975 ];

		return pClassPointer;
	};

};

UClass* UDVDamageTypeNaturePoison::pClassPointer = NULL;

// Class ForgeGame.DVDamageTypePhysical
// 0x0000 (0x0064 - 0x0064)
class UDVDamageTypePhysical : public UDVDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42976 ];

		return pClassPointer;
	};

};

UClass* UDVDamageTypePhysical::pClassPointer = NULL;

// Class ForgeGame.DVDamageTypeSpiritual
// 0x0000 (0x0064 - 0x0064)
class UDVDamageTypeSpiritual : public UDVDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42977 ];

		return pClassPointer;
	};

};

UClass* UDVDamageTypeSpiritual::pClassPointer = NULL;

// Class ForgeGame.DVDamageTypeSpiritualDeath
// 0x0000 (0x0064 - 0x0064)
class UDVDamageTypeSpiritualDeath : public UDVDamageTypeSpiritual
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42978 ];

		return pClassPointer;
	};

};

UClass* UDVDamageTypeSpiritualDeath::pClassPointer = NULL;

// Class ForgeGame.DVDamageTypeSpiritualWrath
// 0x0000 (0x0064 - 0x0064)
class UDVDamageTypeSpiritualWrath : public UDVDamageTypeSpiritual
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42979 ];

		return pClassPointer;
	};

};

UClass* UDVDamageTypeSpiritualWrath::pClassPointer = NULL;

// Class ForgeGame.DVFlag
// 0x0088 (0x0250 - 0x01C8)
class ADVFlag : public AActor
{
public:
	class ADVFlagStand*                                FlagStand;                                        		// 0x01C8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      DefendingTeamIndex;                               		// 0x01CC (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      TeamConfiguration;                                		// 0x01CD (0x0001) [0x0000000000000000]              
	unsigned long                                      IsOnStand : 1;                                    		// 0x01D0 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      IsDropped : 1;                                    		// 0x01D0 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      IsThrown : 1;                                     		// 0x01D0 (0x0004) [0x0000000000000000] [0x00000004] 
	class ADVPawnHero*                                 CarryingHero;                                     		// 0x01D4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ADVPlayerReplicationInfo*                    CarryingPRI;                                      		// 0x01D8 (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                            		// 0x01DC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      OverlayMeshComponent;                             		// 0x01E0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleSystemComponent;                          		// 0x01E4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ULightEnvironmentComponent*                  LightEnvironment;                                 		// 0x01E8 (0x0004) [0x00000000040A000A]              ( CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	float                                              CollisionHeight;                                  		// 0x01EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CollisionRadius;                                  		// 0x01F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               SkeletalMesh;                                     		// 0x01F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeshScale;                                        		// 0x01F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeshCarryingScale;                                		// 0x01FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             FriendlyParticleSystem;                           		// 0x0200 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             FriendlyParticleSystemColorblind;                 		// 0x0204 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             EnemyParticleSystem;                              		// 0x0208 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             EnemyParticleSystemColorblind;                    		// 0x020C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   FriendlyMIC;                                      		// 0x0210 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   FriendlyMICColorblind;                            		// 0x0214 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   EnemyMIC;                                         		// 0x0218 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   EnemyMICColorblind;                               		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   FriendlyOverlayMIC;                               		// 0x0220 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   FriendlyOverlayMICColorblind;                     		// 0x0224 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   EnemyOverlayMIC;                                  		// 0x0228 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   EnemyOverlayMICColorblind;                        		// 0x022C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeUntilReturn;                                  		// 0x0230 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              DropTime;                                         		// 0x0234 (0x0004) [0x0000000000000000]              
	class ADVPawnHero*                                 DroppingHero;                                     		// 0x0238 (0x0004) [0x0000000000000000]              
	float                                              ThrowSpeed;                                       		// 0x023C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxThrowDistance;                                 		// 0x0240 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       FlagSocketName;                                   		// 0x0244 (0x0008) [0x0000000000000000]              
	float                                              LastScaledTime;                                   		// 0x024C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43127 ];

		return pClassPointer;
	};

	void Throw ( );
	void Captured ( );
	void ReturnFlag ( );
	void DropFlag ( );
	void SetupColorblindMode ( );
	void Tick ( float DeltaTime );
	void RemoveAttachment ( );
	void AttachToCarryingHero ( );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void SetOwnerStats ( );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVFlag::pClassPointer = NULL;

// Class ForgeGame.DVAbilityStealth
// 0x000C (0x02BC - 0x02B0)
class ADVAbilityStealth : public ADVAbility
{
public:
	float                                              SpeedBoost;                                       		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Duration;                                         		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVPawnHeroAssassin*                         Assassin;                                         		// 0x02B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43219 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void LeaveStealth ( );
	void FireAbility ( );
	bool ReadyToActivate ( );
};

UClass* ADVAbilityStealth::pClassPointer = NULL;

// Class ForgeGame.DVAbilityCamouflage
// 0x0014 (0x02C4 - 0x02B0)
class ADVAbilityCamouflage : public ADVAbility
{
public:
	unsigned long                                      AutoSwap : 1;                                     		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              CooldownForCamoOnly;                              		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVPawnHeroPathfinder*                       Pathfinder;                                       		// 0x02B8 (0x0004) [0x0000000000000000]              
	struct ADVAbilityCamouflage_FSHitPawn              RepHitPawn;                                       		// 0x02BC (0x0008) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43260 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void LeaveCamo ( );
	void ModifyDefense ( class UDVAttack* IncomingAttack, class ADVPawn* Defender, TArray< struct FSDamage >* DamageTaken, int* ProtectionDone );
	void SwapWithPawn ( class ADVPawn* SwapTarget );
	void FireAbility ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbilityCamouflage::pClassPointer = NULL;

// Class ForgeGame.DVPawnHeroPyromancer
// 0x0000 (0x0730 - 0x0730)
class ADVPawnHeroPyromancer : public ADVPawnHero
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43291 ];

		return pClassPointer;
	};

	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
};

UClass* ADVPawnHeroPyromancer::pClassPointer = NULL;

// Class ForgeGame.DVPawnHeroShaman
// 0x0004 (0x0734 - 0x0730)
class ADVPawnHeroShaman : public ADVPawnHero
{
public:
	class ADVAbilitySpirtualFervor*                    Fervor;                                           		// 0x0730 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43303 ];

		return pClassPointer;
	};

};

UClass* ADVPawnHeroShaman::pClassPointer = NULL;

// Class ForgeGame.DVPawnHeroWarden
// 0x0010 (0x0740 - 0x0730)
class ADVPawnHeroWarden : public ADVPawnHero
{
public:
	float                                              DamageFromVengeanceStacks;                        		// 0x0730 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVAbilityToggleAOE*                         CurrentAuraAbility;                               		// 0x0734 (0x0004) [0x0000000000000000]              
	unsigned char                                      VengeanceStacks;                                  		// 0x0738 (0x0001) [0x0000000000000020]              ( CPF_Net )
	class ADVPawn*                                     LeapTarget;                                       		// 0x073C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43313 ];

		return pClassPointer;
	};

	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	bool DoJump ( unsigned long bUpdating );
	void Tick ( float DeltaTime );
	void ReplicatedEvent ( struct FName VarName );
};

UClass* ADVPawnHeroWarden::pClassPointer = NULL;

// Class ForgeGame.DVAbilityToggle
// 0x0008 (0x02B8 - 0x02B0)
class ADVAbilityToggle : public ADVAbility
{
public:
	unsigned long                                      Active : 1;                                       		// 0x02B0 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	float                                              TickTimer;                                        		// 0x02B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43318 ];

		return pClassPointer;
	};

	void Reset ( );
	void PlayCastEffect ( );
};

UClass* ADVAbilityToggle::pClassPointer = NULL;

// Class ForgeGame.DVAbilityToggleAOE
// 0x0004 (0x02BC - 0x02B8)
class ADVAbilityToggleAOE : public ADVAbilityToggle
{
public:
	unsigned long                                      HitsAllies : 1;                                   		// 0x02B8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      HitsEnemies : 1;                                  		// 0x02B8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43317 ];

		return pClassPointer;
	};

	void PerTickEffect ( class ADVPawn* CurPawn, unsigned long SecondRun );
	void Tick ( float DeltaTime );
};

UClass* ADVAbilityToggleAOE::pClassPointer = NULL;

// Class ForgeGame.DVPawnHeroRavager
// 0x0019 (0x0749 - 0x0730)
class ADVPawnHeroRavager : public ADVPawnHero
{
public:
	class UAnimSet*                                    FocusAnimset[ 0x2 ];                              		// 0x0730 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       SwitchFocusAnimSeqNames[ 0x2 ];                   		// 0x0738 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      CurrentFocus;                                     		// 0x0748 (0x0001) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43343 ];

		return pClassPointer;
	};

	void UpdateFocusAnimSetsTimer ( );
	void UpdateFocusAnimSets ( );
	void SetCurrentFocus ( unsigned char NewFocus );
	void eventReplicatedEvent ( struct FName VarName );
	void PostBeginPlay ( );
};

UClass* ADVPawnHeroRavager::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxHUD
// 0x066C (0x07D4 - 0x0168)
class UForgeGFxHUD : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BottomMC;                                         		// 0x016C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilitiesMC;                                      		// 0x0170 (0x0004) [0x0000000000000000]              
	struct FSAbilityIcon                               Abilities[ 0x8 ];                                 		// 0x0174 (0x0200) [0x0000000000000000]              
	class UGFxObject*                                  XPBarMC;                                          		// 0x0374 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  XPBarMaskMC;                                      		// 0x0378 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  XPBarTextTF;                                      		// 0x037C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  XPLevelTextTF;                                    		// 0x0380 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BarsMC;                                           		// 0x0384 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HealthBarMC;                                      		// 0x0388 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HealthBarMaskMC;                                  		// 0x038C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HealthBarMissingMaskMC;                           		// 0x0390 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HealthBarTextTF;                                  		// 0x0394 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ResourceBarMC;                                    		// 0x0398 (0x0004) [0x0000000000000000]              
	class UForgeGFxSwappableIconObject*                ResourceBarIconMC;                                		// 0x039C (0x0004) [0x0000000000000000]              
	class UForgeGFxSwappableIconObject*                ResourceBarImageMC;                               		// 0x03A0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ResourceBarMaskMC;                                		// 0x03A4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ResourceBarMissingMaskMC;                         		// 0x03A8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ResourceBarTextTF;                                		// 0x03AC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DeterminationBarMC;                               		// 0x03B0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DeterminationBarMaskMC;                           		// 0x03B4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DeterminationBarTextTF;                           		// 0x03B8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoMC;                                       		// 0x03BC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFMC;                                    		// 0x03C0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFBackgroundMC;                          		// 0x03C4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFTeamCapsTF;                            		// 0x03C8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFEnemyCapsTF;                           		// 0x03CC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFTeamHasFlagMC;                         		// 0x03D0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFEnemyHasFlagMC;                        		// 0x03D4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFTeamReturnMC;                          		// 0x03D8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFTeamReturnTF;                          		// 0x03DC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFEnemyReturnMC;                         		// 0x03E0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFEnemyReturnTF;                         		// 0x03E4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoGenericMC;                                		// 0x03E8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoGenericBackgroundMC;                      		// 0x03EC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoGenericTeamLivesTF;                       		// 0x03F0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoGenericEnemyLivesTF;                      		// 0x03F4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GameClockTimeTF;                                  		// 0x03F8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CastingBarMC;                                     		// 0x03FC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CastingBarMaskMC;                                 		// 0x0400 (0x0004) [0x0000000000000000]              
	class UForgeGFxSwappableIconObject*                CastingBarIconMC;                                 		// 0x0404 (0x0004) [0x0000000000000000]              
	float                                              LastDeathTime;                                    		// 0x0408 (0x0004) [0x0000000000000000]              
	float                                              CastingTimeLeft;                                  		// 0x040C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CenterMC;                                         		// 0x0410 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RespawnMessageMC;                                 		// 0x0414 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RespawnMessageTF;                                 		// 0x0418 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TutorialCompletedMC;                              		// 0x041C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TutorialCompletedTF;                              		// 0x0420 (0x0004) [0x0000000000000000]              
	unsigned long                                      TutorialCompletedShown : 1;                       		// 0x0424 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ShowingBlockFlash : 1;                            		// 0x0424 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      KismetMessageShown : 1;                           		// 0x0424 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      TowerFlashing : 1;                                		// 0x0424 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ResourceFull : 1;                                 		// 0x0424 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      CachedTutorialMode : 1;                           		// 0x0424 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      ConfiguredForColorblind : 1;                      		// 0x0424 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      CursorMode : 1;                                   		// 0x0424 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      ScoreboardShowing : 1;                            		// 0x0424 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bInitialized : 1;                                 		// 0x0424 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned char                                      NagState;                                         		// 0x0428 (0x0001) [0x0000000000000000]              
	unsigned char                                      ConfiguredClass;                                  		// 0x0429 (0x0001) [0x0000000000000000]              
	float                                              NagLastUpdated;                                   		// 0x042C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CrosshairMC;                                      		// 0x0430 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CrosshairImageMC;                                 		// 0x0434 (0x0004) [0x0000000000000000]              
	float                                              LastAttackHitEnemyTime;                           		// 0x0438 (0x0004) [0x0000000000000000]              
	float                                              HitEnemyNotificationPeriod;                       		// 0x043C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ResourceArcMC;                                    		// 0x0440 (0x0004) [0x0000000000000000]              
	class UForgeGFxSwappableIconObject*                ResourceArcImageMC;                               		// 0x0444 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ResourceArcMaskMC;                                		// 0x0448 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ResourceArcMissingMaskMC;                         		// 0x044C (0x0004) [0x0000000000000000]              
	struct FSResourceArcAbilityIcon                    ResourceArcAbilityIcons[ 0x8 ];                   		// 0x0450 (0x0060) [0x0000000000000000]              
	class UGFxObject*                                  CooldownFlashMC;                                  		// 0x04B0 (0x0004) [0x0000000000000000]              
	class UForgeGFxSwappableIconObject*                CooldownFlashImageMC;                             		// 0x04B4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BlockFlashContainerMC;                            		// 0x04B8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BlockFlashMC;                                     		// 0x04BC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BlockFlashSuccessMC;                              		// 0x04C0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BlockFlashBackgroundMC;                           		// 0x04C4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BlockFlashIconMC;                                 		// 0x04C8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BlockFlashTF;                                     		// 0x04CC (0x0004) [0x0000000000000000]              
	TArray< struct FSBlockedAbility >                  MoreBlockedAbilities;                             		// 0x04D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSBlockedAbility >                  DisplayedBlockedAbilities;                        		// 0x04DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              DisplayedBlocksShuffledAt;                        		// 0x04E8 (0x0004) [0x0000000000000000]              
	float                                              BlockShuffleTime;                                 		// 0x04EC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UGFxObject*                                  CooldownSliders[ 0x8 ];                           		// 0x04F0 (0x0020) [0x0000000000000000]              
	int                                                CooldownSlideXMax;                                		// 0x0510 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MessagesMC;                                       		// 0x0514 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MessageMC;                                        		// 0x0518 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MessageTF;                                        		// 0x051C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AwardContainerMC;                                 		// 0x0520 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AwardMC;                                          		// 0x0524 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AwardIconMC;                                      		// 0x0528 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AwardTitleTF;                                     		// 0x052C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AwardXPTF;                                        		// 0x0530 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AwardDescriptionTF;                               		// 0x0534 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KismetMessagesMC;                                 		// 0x0538 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KismetMessageMC;                                  		// 0x053C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KismetMessageTF;                                  		// 0x0540 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KismetMessageBackgroundMC;                        		// 0x0544 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TopMC;                                            		// 0x0548 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GameMessageTF;                                    		// 0x054C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TimerMC;                                          		// 0x0550 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TimerTextTF;                                      		// 0x0554 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DVTowerBarsMC;                                    		// 0x0558 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DVTowerTowerIconMC;                               		// 0x055C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DVTowerFriendlyBarMC;                             		// 0x0560 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DVTowerFriendlyBarMaskMC;                         		// 0x0564 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DVTowerEnemyBarMC;                                		// 0x0568 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DVTowerEnemyBarMaskMC;                            		// 0x056C (0x0004) [0x0000000000000000]              
	TArray< class ADVTower* >                          TheTowers;                                        		// 0x0570 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TowerLastCheckTime;                               		// 0x057C (0x0004) [0x0000000000000000]              
	TArray< struct FSHUDMessage >                      HUDMessages;                                      		// 0x0580 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MessageDisplayPeriod;                             		// 0x058C (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FSHUDAward >                        HUDAwards;                                        		// 0x0590 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              AwardDisplayPeriod;                               		// 0x059C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UGFxObject*                                  BloodMC;                                          		// 0x05A0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DamageArrowUpMC;                                  		// 0x05A4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DamageArrowLeftMC;                                		// 0x05A8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DamageArrowRightMC;                               		// 0x05AC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DamageArrowDownMC;                                		// 0x05B0 (0x0004) [0x0000000000000000]              
	TArray< struct FSAttackLocation >                  RecentAttacks;                                    		// 0x05B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ShowAttackPeriod;                                 		// 0x05C0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CalloutArrowUpMC;                                 		// 0x05C4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CalloutArrowLeftMC;                               		// 0x05C8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CalloutArrowRightMC;                              		// 0x05CC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CalloutArrowDownMC;                               		// 0x05D0 (0x0004) [0x0000000000000000]              
	float                                              LastResourceFullTime;                             		// 0x05D4 (0x0004) [0x0000000000000000]              
	TArray< struct FSAbilityCooldownOff >              AbilityCooldownFlashes;                           		// 0x05D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            WasOnCooldown;                                    		// 0x05E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              CooldownFlashPeriod;                              		// 0x05F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UGFxObject*                                  WorldIconsMC;                                     		// 0x05F4 (0x0004) [0x0000000000000000]              
	TArray< struct FSCombatIcons >                     CombatIcons;                                      		// 0x05F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              CombatTextPeriod;                                 		// 0x0604 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UGFxObject*                                  WorldMessagesMC;                                  		// 0x0608 (0x0004) [0x0000000000000000]              
	TArray< struct FSWorldMessage >                    WorldMessages;                                    		// 0x060C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  KillMessagesMC;                                   		// 0x0618 (0x0004) [0x0000000000000000]              
	float                                              KillMessageShuffleTime;                           		// 0x061C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              KillMessageShuffleDistance;                       		// 0x0620 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              KillMessageLifetime;                              		// 0x0624 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FSKillMessage                               KillMessageQueue[ 0x5 ];                          		// 0x0628 (0x0064) [0x0000000000000000]              
	class UGFxObject*                                  KillNotificationContainerMC;                      		// 0x068C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KillNotificationTF;                               		// 0x0690 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TutorialMC;                                       		// 0x0694 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              TutorialTabHUDCB;                                 		// 0x0698 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              TutorialTabGameModeCB;                            		// 0x069C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TutorialSlideHUDMC;                               		// 0x06A0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TutorialTitleTF;                                  		// 0x06A4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TutorialIntroTF;                                  		// 0x06A8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TutorialPoints[ 0xA ];                            		// 0x06AC (0x0028) [0x0000000000000000]              
	class UGFxObject*                                  TutorialOutroTF;                                  		// 0x06D4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TutorialBackgroundMC;                             		// 0x06D8 (0x0004) [0x0000000000000000]              
	float                                              TipsLastShownTime;                                		// 0x06DC (0x0004) [0x0000000000000000]              
	float                                              TipsMessagePeriod;                                		// 0x06E0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              LastShowedTowerTip;                               		// 0x06E4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TipsMC;                                           		// 0x06E8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TipsAbilityIconMC;                                		// 0x06EC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TipsTitleTF;                                      		// 0x06F0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TipsUnderlineMC;                                  		// 0x06F4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TipsDescriptionTF;                                		// 0x06F8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TipsBackgroundMC;                                 		// 0x06FC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TipsKeyTF;                                        		// 0x0700 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TipsKeyBackgroundMC;                              		// 0x0704 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HelpMC;                                           		// 0x0708 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HelpIndicatorMC;                                  		// 0x070C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HelpIndicatorTF;                                  		// 0x0710 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HelpTutorialMC;                                   		// 0x0714 (0x0004) [0x0000000000000000]              
	float                                              HelpTutorialLastUpdate;                           		// 0x0718 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HelpTutorialTF;                                   		// 0x071C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HelpTutorialDescriptionTF;                        		// 0x0720 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HelpTutorialKeyTF;                                		// 0x0724 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HelpTutorialKeyBackgroundMC;                      		// 0x0728 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FlagCaptureHintMC;                                		// 0x072C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FlagCaptureHintIconMC;                            		// 0x0730 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FlagCaptureHintTF;                                		// 0x0734 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FlagLocationHintFriendlyMC;                       		// 0x0738 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FlagLocationHintFriendlyIconMC;                   		// 0x073C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FlagLocationHintEnemyMC;                          		// 0x0740 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FlagLocationHintEnemyIconMC;                      		// 0x0744 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  VoiceNotificationContainerMC;                     		// 0x0748 (0x0004) [0x0000000000000000]              
	struct FSVoiceNotification                         VoiceNotifications[ 0x4 ];                        		// 0x074C (0x0050) [0x0000000000000000]              
	float                                              VoiceStayPeriod;                                  		// 0x079C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  VoiceIndicatorMC;                                 		// 0x07A0 (0x0004) [0x0000000000000000]              
	float                                              WeLastSpokeAt;                                    		// 0x07A4 (0x0004) [0x0000000000000000]              
	class UClass*                                      ConfiguredGameMode;                               		// 0x07A8 (0x0004) [0x0000000000000000]              
	int                                                TotalVisiblePixels;                               		// 0x07AC (0x0004) [0x0000000000000000]              
	int                                                ConfigResX;                                       		// 0x07B0 (0x0004) [0x0000000000000000]              
	int                                                ConfigResY;                                       		// 0x07B4 (0x0004) [0x0000000000000000]              
	float                                              LastGetMessagesTime;                              		// 0x07B8 (0x0004) [0x0000000000000000]              
	struct FString                                     FriendlyColor;                                    		// 0x07BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     EnemyColor;                                       		// 0x07C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43404 ];

		return pClassPointer;
	};

	void ShowTutorialMisc ( struct FString MiscItem, class AActor* TheSubject );
	void ShowTutorialAbility ( int AbilityIndex );
	void SetupTipsWindow ( struct FString NewTitle, struct FString NewDescription, unsigned long IsAbilityHint, struct FName KeyName );
	void UpdateTips ( float DeltaTime );
	void UpdateHelp ( );
	void UpdateTutorial ( );
	void DisplayKeyDetails ( class UGFxObject* KeyNameTF, class UGFxObject* KeyBackgroundMC, struct FName TheKey );
	void UpdateVoiceNotifications ( class ADVGameReplicationInfo* TheGRI );
	void UpdateCrosshair ( float DeltaTime );
	void AttackHitEnemy ( class ADVPawn* EnemyHit, unsigned long IsHeal, unsigned long ExactlyTargetted );
	void PulseCrosshair ( class ADVPawn* TheHitPawn, unsigned long IsFriendly );
	void ShowPawnCasting ( class ADVPawnHero* CastingPawn, class ADVAbility* TheAbility );
	void AddPawnHealthChange ( class ADVPawn* TheReceivingPawn, float DamageAmount, struct FString MissText );
	void RegisterHeroPawn ( class ADVPawn* NewPawn );
	void DeRegisterPRI ( class ADVPlayerReplicationInfo* OldPRI );
	void RegisterPRI ( class ADVPlayerReplicationInfo* NewPRI );
	void ConfigForRes ( int SizeX, int SizeY );
	void HideWorldMessage ( class UDVSeqAct_DrawText* TheOwningKismetNode );
	void ShowWorldMessage ( struct FString NewMessage, class AActor* NewTarget, class UDVSeqAct_DrawText* NewOwningKismetNode, float NewDuration, int NewFontSize );
	void UpdateWorldMessages ( float CurrentWorldTime );
	void UpdateHeroCastBar ( int HeroIndex );
	void UpdateWorldIcons ( );
	void DrawObjectAtWorldLocation ( class UGFxObject* TheObject, struct FVector TheWorldLocation, float NewScale );
	void UpdateFlagHints ( );
	void UpdateFlagStandIcon ( );
	void PlayAward ( );
	void UpdateAwardQueue ( );
	void OnQueueAchievement ( unsigned char AchievementType, unsigned char AchievementLevel, int AchievementXP, int AchievementRequiredPoints );
	void OnQueueAward ( unsigned char MedalType, unsigned char MedalLevel, int MedalXP, int MedalRequiredPoints );
	void HideKismetMessage ( );
	void PlayKismetMessage ( struct FString TheMessage, float TheDuration );
	void PlayMessage ( );
	void UpdateMessageQueue ( );
	void OnQueueMessage ( struct FString NewMessage, float NewDisplayPeriod );
	void DoTerminate ( );
	void OnQueueTerminateMessage ( struct FString NewMessage );
	void UpdateArcs ( );
	void UpdateDVTowerBars ( float DeltaTime );
	void UpdateDMTeamInfo ( );
	void UpdateCTFTeamInfo ( );
	void UpdateBlood ( );
	void HideCalloutArrows ( );
	bool OffScreen ( struct FVector WorldLocation );
	void UpdateCalloutArrows ( class ADVPlayerController* MyDVPC, class ADVPawnHero* MyPawn );
	void HideDamageArrows ( );
	void UpdateDamageArrows ( class ADVPlayerController* MyDVPC );
	void AttackedFrom ( struct FVector WorldLocation );
	void MyAbilityBlocked ( class ADVAbility* BlockedAbility, class ADVPawn* MissedPawn, unsigned char ReasonFailed );
	void BlockWorked ( class ADVAbility* BlockedAbility );
	void HideBlockFlash ( );
	void ShowBlockFlash ( );
	void UpdateBlockFlash ( class ADVPlayerController* MyPC );
	void UpdateKillMessages ( float DeltaTime );
	void SetKillPlayerName ( class UGFxObject* PlayerNameTF, class ADVPlayerReplicationInfo* ThePRI );
	void AddKillMessage ( struct FString KillerClass, class ADVPlayerReplicationInfo* KillerPRI, int KillingAbilityIndex, class ADVPlayerReplicationInfo* KilledPRI, struct FString KilledClass );
	void PlayCooldownFlash ( );
	void UpdateCooldownFlashQueue ( );
	void OnQueueCooldownFlash ( int AbilityIndex );
	void UpdateAbilityCooldown ( struct FSAbilityIcon TheAbility, float CooldownLength, float CooldownRatio, unsigned long FromGCD );
	struct FString GetShortVersionOfKey ( struct FString KeyName );
	struct FString GetCommaFormat ( int Value );
	struct FString GetTimerShortFormat ( float TimeSeconds, int Places );
	struct FString GetTimerFormat ( float TimeSeconds, int Places );
	struct FString GetClockFormat ( float TimeSeconds, unsigned long HideZeroes );
	void CheckColorblind ( );
	void Tick ( float DeltaTime );
	void SetupAbilityIcons ( );
	void SetupResourceBars ( );
	void SetupHUDForClass ( struct FString ClassName );
	void ApplySteamCloudSettings ( );
	void ConfigAbilityIcons ( );
	void ConfigHUD ( );
	bool Start ( unsigned long StartPaused );
};

UClass* UForgeGFxHUD::pClassPointer = NULL;

// Class ForgeGame.DVMeshAttachment
// 0x0010 (0x01DC - 0x01CC)
class ADVMeshAttachment : public ADVAttachment
{
public:
	class UMeshComponent*                              MeshComponent;                                    		// 0x01CC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UMaterialInterface* >                DefaultMeshMaterials;                             		// 0x01D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43527 ];

		return pClassPointer;
	};

	void PlayDetermined ( unsigned long Determined );
	void SetStealth ( unsigned long IsStealthed, unsigned long IsCamouflaged );
	void PostBeginPlay ( );
};

UClass* ADVMeshAttachment::pClassPointer = NULL;

// Class ForgeGame.DVSkeletalMeshAttachment
// 0x001C (0x01F8 - 0x01DC)
class ADVSkeletalMeshAttachment : public ADVMeshAttachment
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                            		// 0x01DC (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       AnimSlotName;                                     		// 0x01E0 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct ADVSkeletalMeshAttachment_FSAttachment > Attachments;                                      		// 0x01E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimNodeSlot*                               AnimSlot;                                         		// 0x01F4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43526 ];

		return pClassPointer;
	};

	void ToggleHidden ( unsigned long ShouldHide );
	void ForceMipLevels ( );
	void NotifyOwnerDied ( class APawn* Pawn, struct FName SocketName );
	void PostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void Destroyed ( );
	class UPrimitiveComponent* GetComponent ( );
	void PostBeginPlay ( );
};

UClass* ADVSkeletalMeshAttachment::pClassPointer = NULL;

// Class ForgeGame.DVAbilityStrike
// 0x0008 (0x02D0 - 0x02C8)
class ADVAbilityStrike : public ADVAbilityHitscan
{
public:
	struct FName                                       CastAnimNameAlt;                                  		// 0x02C8 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43561 ];

		return pClassPointer;
	};

	void PlayAnim ( );
};

UClass* ADVAbilityStrike::pClassPointer = NULL;

// Class ForgeGame.DVAbilityPanterasKiss
// 0x001C (0x02E4 - 0x02C8)
class ADVAbilityPanterasKiss : public ADVAbilityHitscan
{
public:
	float                                              KissDamage;                                       		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      BasedOnDamageTaken : 1;                           		// 0x02CC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              MultiplierPerStack;                               		// 0x02D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageTakenSoFar;                                 		// 0x02D4 (0x0004) [0x0000000000000000]              
	int                                                StacksUsed;                                       		// 0x02D8 (0x0004) [0x0000000000000000]              
	class UDVAttack*                                   KissAttack;                                       		// 0x02DC (0x0004) [0x0000000000000000]              
	int                                                MaxDamage;                                        		// 0x02E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43565 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void Reset ( );
	void DamageTick ( );
	void ModifyDefense ( class UDVAttack* IncomingAttack, class ADVPawn* Defender, TArray< struct FSDamage >* DamageTaken, int* ProtectionDone );
	void FireAbility ( );
	void PostBeginPlay ( );
};

UClass* ADVAbilityPanterasKiss::pClassPointer = NULL;

// Class ForgeGame.DVAbilityShadowShift
// 0x000C (0x02D4 - 0x02C8)
class ADVAbilityShadowShift : public ADVAbilityHitscan
{
public:
	class UDVBuff*                                     SelfBuff;                                         		// 0x02C8 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	float                                              SpeedPerStack;                                    		// 0x02CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Splash;                                           		// 0x02D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43623 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void FireAbility ( );
};

UClass* ADVAbilityShadowShift::pClassPointer = NULL;

// Class ForgeGame.DVAbilityDisorientingStrike
// 0x0018 (0x02C8 - 0x02B0)
class ADVAbilityDisorientingStrike : public ADVAbility
{
public:
	class ADVPawn*                                     RepHitPawn;                                       		// 0x02B0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      AttackFailed;                                     		// 0x02B4 (0x0001) [0x0000000000000020]              ( CPF_Net )
	int                                                Knockback;                                        		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumberOfAttacksToMiss;                            		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDVBuff*                                     OutOfStealthBuff;                                 		// 0x02C0 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	int                                                RangeSq;                                          		// 0x02C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43631 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void ModifyAttack ( class UDVAttack* OutGoingAttack );
	void FireAbility ( );
	void PostBeginPlay ( );
	void PlayFireEffect ( class ADVPawn* HitPawn );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbilityDisorientingStrike::pClassPointer = NULL;

// Class ForgeGame.DVAbilityShadowLeap
// 0x001C (0x02CC - 0x02B0)
class ADVAbilityShadowLeap : public ADVAbility
{
public:
	class UDVBuff*                                     SelfBuff;                                         		// 0x02B0 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	unsigned long                                      PutsYouIntoStealth : 1;                           		// 0x02B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              BonusDamageNextAttack;                            		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LeaptFrom;                                        		// 0x02BC (0x000C) [0x0000000000000020]              ( CPF_Net )
	int                                                RangeSq;                                          		// 0x02C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43648 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void ModifyAttack ( class UDVAttack* OutGoingAttack );
	void PerformAbility ( );
	bool ReadyToActivate ( );
	void PlayHitEffect ( class ADVPawn* HitPawn );
	void PostBeginPlay ( );
	void PlayFireEffect ( class ADVPawn* HitPawn );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbilityShadowLeap::pClassPointer = NULL;

// Class ForgeGame.DVAbilitySmokeCloud
// 0x0010 (0x02C0 - 0x02B0)
class ADVAbilitySmokeCloud : public ADVAbility
{
public:
	int                                                CloudLifeTime;                                    		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      UseOnTarget : 1;                                  		// 0x02B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class ADVSmokeCloud*                               Cloud;                                            		// 0x02B8 (0x0004) [0x0000000000000000]              
	int                                                RangeSq;                                          		// 0x02BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43681 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void Reset ( );
	void FireAbility ( );
	void PostBeginPlay ( );
	bool ReadyToActivate ( );
};

UClass* ADVAbilitySmokeCloud::pClassPointer = NULL;

// Class ForgeGame.DVProjectile
// 0x0034 (0x0238 - 0x0204)
class ADVProjectile : public AProjectile
{
public:
	TArray< struct FSGenericOverrideInteraction >      ImpactInteractions;                               		// 0x0204 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class ULightComponent*                             Light;                                            		// 0x0210 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AmbientSound;                                     		// 0x0214 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleSystem;                                   		// 0x0218 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      ShadowShifted : 1;                                		// 0x021C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      ContinuesAfterHit : 1;                            		// 0x021C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      FlysStraight : 1;                                 		// 0x021C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      Exploded : 1;                                     		// 0x021C (0x0004) [0x0000000000000000] [0x00000008] 
	class USoundCue*                                   LocalSound;                                       		// 0x0220 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      HitActor;                                         		// 0x0224 (0x0004) [0x0000000000000000]              
	class UDVAttack*                                   Attack;                                           		// 0x0228 (0x0004) [0x0000000000000000]              
	class ADVPawn*                                     TargetPawn;                                       		// 0x022C (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ADVPawn*                                     LastTouched;                                      		// 0x0230 (0x0004) [0x0000000000000000]              
	class ADVPawn*                                     LocalPawn;                                        		// 0x0234 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43740 ];

		return pClassPointer;
	};

	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	bool ProjectileMisses ( class ADVPawn* Pawn, struct FVector HitLocation );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	bool StopsProjectile ( class AProjectile* P );
	void ProjectileHoming ( );
	void Tick ( float DeltaTime );
	void PostBeginPlay ( );
};

UClass* ADVProjectile::pClassPointer = NULL;

// Class ForgeGame.DVAbilityPoisonedArrow
// 0x001C (0x02F8 - 0x02DC)
class ADVAbilityPoisonedArrow : public ADVAbilityProjectile
{
public:
	float                                              Duration;                                         		// 0x02DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DamagePerMeter;                                   		// 0x02E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxDamagePerTick;                                 		// 0x02E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageTick;                                       		// 0x02E8 (0x0004) [0x0000000000000000]              
	TArray< struct FAffectedPawn >                     AffectedPawns;                                    		// 0x02EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43762 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void ProjectileHit ( class ADVPawn* HitPawn, struct FVector HitLocation, struct FVector HitNormal, class ADVProjectile* Projectile );
};

UClass* ADVAbilityPoisonedArrow::pClassPointer = NULL;

// Class ForgeGame.DVAbilityVolley
// 0x0004 (0x02E0 - 0x02DC)
class ADVAbilityVolley : public ADVAbilityProjectile
{
public:
	unsigned long                                      FirstHit : 1;                                     		// 0x02DC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43786 ];

		return pClassPointer;
	};

	void ProjectileHit ( class ADVPawn* HitPawn, struct FVector HitLocation, struct FVector HitNormal, class ADVProjectile* Projectile );
	void FireAbility ( );
};

UClass* ADVAbilityVolley::pClassPointer = NULL;

// Class ForgeGame.DVAbilityTrap
// 0x0028 (0x02D8 - 0x02B0)
class ADVAbilityTrap : public ADVAbility
{
public:
	float                                              TrapLifetime;                                     		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TrapLifetimeAfterActive;                          		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVTrap*                                     TrapArchetype;                                    		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ThrowPower;                                       		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVTrap*                                     Trap;                                             		// 0x02C0 (0x0004) [0x0000000000000000]              
	int                                                TeamNumber;                                       		// 0x02C4 (0x0004) [0x0000000000000000]              
	struct FSRepTrapUsed                               TrapUsed;                                         		// 0x02C8 (0x0010) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43797 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void ActivateTrap ( struct FVector TrapLocation, class ADVPawnHero* OtherHero );
	void Reset ( );
	void FireAbility ( );
	void PlayFireEffect ( class ADVPawn* HitPawn );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbilityTrap::pClassPointer = NULL;

// Class ForgeGame.DVTrap
// 0x0034 (0x01FC - 0x01C8)
class ADVTrap : public AActor
{
public:
	class USkeletalMeshComponent*                      Mesh;                                             		// 0x01C8 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      OverlayMesh;                                      		// 0x01CC (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	struct FName                                       DropAnim;                                         		// 0x01D0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TiggerAnim;                                       		// 0x01D8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       FullAnimSlotName;                                 		// 0x01E0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeSlot*                               FullAnimSlot;                                     		// 0x01E8 (0x0004) [0x0000000000000000]              
	unsigned long                                      Active : 1;                                       		// 0x01EC (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      ShadowShifted : 1;                                		// 0x01EC (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	class ADVPawnHero*                                 Hero;                                             		// 0x01F0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ADVAbilityTrap*                              OwningAbility;                                    		// 0x01F4 (0x0004) [0x0000000000000000]              
	int                                                TeamNumber;                                       		// 0x01F8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43802 ];

		return pClassPointer;
	};

	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void Tick ( float DeltaTime );
	void SetStealth ( );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void eventPostBeginPlay ( );
	void PlayDrop ( );
	void PlayTigger ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVTrap::pClassPointer = NULL;

// Class ForgeGame.DVAbilityCaltrips
// 0x0004 (0x02DC - 0x02D8)
class ADVAbilityCaltrips : public ADVAbilityTrap
{
public:
	class UDVBuff*                                     SelfBuff;                                         		// 0x02D8 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43824 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void ActivateTrap ( struct FVector TrapLocation, class ADVPawnHero* OtherHero );
};

UClass* ADVAbilityCaltrips::pClassPointer = NULL;

// Class ForgeGame.DVAbilityBlindingArrow
// 0x0004 (0x02E0 - 0x02DC)
class ADVAbilityBlindingArrow : public ADVAbilityProjectile
{
public:
	float                                              DurationByDistance;                               		// 0x02DC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43831 ];

		return pClassPointer;
	};

	void ProjectileHit ( class ADVPawn* HitPawn, struct FVector HitLocation, struct FVector HitNormal, class ADVProjectile* Projectile );
};

UClass* ADVAbilityBlindingArrow::pClassPointer = NULL;

// Class ForgeGame.DVAbilityExplosiveTrap
// 0x0008 (0x02E0 - 0x02D8)
class ADVAbilityExplosiveTrap : public ADVAbilityTrap
{
public:
	int                                                KnockbackDistance;                                		// 0x02D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Knockdown;                                        		// 0x02DC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43861 ];

		return pClassPointer;
	};

	void ActivateTrap ( struct FVector TrapLocation, class ADVPawnHero* OtherHero );
};

UClass* ADVAbilityExplosiveTrap::pClassPointer = NULL;

// Class ForgeGame.DVAbilityCurseOfFlame
// 0x0014 (0x02DC - 0x02C8)
class ADVAbilityCurseOfFlame : public ADVAbilityHitscan
{
public:
	int                                                DetonateDamage;                                   		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DetonateDelay;                                    		// 0x02CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DamageReduction;                                  		// 0x02D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AddedSlow;                                        		// 0x02D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDVAttack*                                   DetonateAttack;                                   		// 0x02D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43998 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	struct FString GetDescriptionNumbers ( class ADVAbility* AbilityArchetype, unsigned char TheClass, struct FString StaticFriendlyColor, struct FString StaticEnemyColor );
	void Detonate ( );
	void FireAbility ( );
};

UClass* ADVAbilityCurseOfFlame::pClassPointer = NULL;

// Class ForgeGame.DVAbilityFlameBurst
// 0x000D (0x02BD - 0x02B0)
class ADVAbilityFlameBurst : public ADVAbility
{
public:
	int                                                KnockbackDistance;                                		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RocketJumpDistance;                               		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AirControl;                                       		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RepFireAbility;                                   		// 0x02BC (0x0001) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44017 ];

		return pClassPointer;
	};

	void FireAbility ( );
	void PlayFireEffect ( class ADVPawn* RepHitPawn );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbilityFlameBurst::pClassPointer = NULL;

// Class ForgeGame.DVAbilityMoltenArmor
// 0x000A (0x02BA - 0x02B0)
class ADVAbilityMoltenArmor : public ADVAbility
{
public:
	float                                              Duration;                                         		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      SingleTarget : 1;                                 		// 0x02B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      RepFireAbility;                                   		// 0x02B8 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      FinishedCast;                                     		// 0x02B9 (0x0001) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44044 ];

		return pClassPointer;
	};

	void ModifyDefense ( class UDVAttack* IncomingAttack, class ADVPawn* Defender, TArray< struct FSDamage >* DamageTaken, int* ProtectionDone );
	void StopAbility ( );
	void FireAbility ( );
	void PlayFireEffect ( class ADVPawn* RepHitPawn );
	void PlayFinishedCast ( );
	void PlayCastEffect ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbilityMoltenArmor::pClassPointer = NULL;

// Class ForgeGame.DVAbilityWallOfFlame
// 0x0018 (0x02C8 - 0x02B0)
class ADVAbilityWallOfFlame : public ADVAbility
{
public:
	float                                              BuffDuration;                                     		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                WallLifeTime;                                     		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVWallOfFlame_C*                            WallArchetype;                                    		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BonusTouchingDamage;                              		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Perpendicular : 1;                                		// 0x02C0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class ADVWallOfFlame_C*                            Wall;                                             		// 0x02C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44069 ];

		return pClassPointer;
	};

	void Reset ( );
	void FireAbility ( );
};

UClass* ADVAbilityWallOfFlame::pClassPointer = NULL;

// Class ForgeGame.DVWallOfFlame_C
// 0x004C (0x0214 - 0x01C8)
class ADVWallOfFlame_C : public AActor
{
public:
	class UAudioComponent*                             AmbientSound;                                     		// 0x01C8 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             EnemyWallParticle;                                		// 0x01CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             FriendlyWallParticle;                             		// 0x01D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     WallSize;                                         		// 0x01D4 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UStaticMeshComponent*                        Mesh;                                             		// 0x01E0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              DamageTick;                                       		// 0x01E4 (0x0004) [0x0000000000000000]              
	class ADVAbilityWallOfFlame*                       OwningAbility;                                    		// 0x01E8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UDVAttack*                                   Attack;                                           		// 0x01EC (0x0004) [0x0000000000000000]              
	class UDVAttack*                                   BonusTouchingAttack;                              		// 0x01F0 (0x0004) [0x0000000000000000]              
	unsigned char                                      DefendingTeamIndex;                               		// 0x01F4 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      FriendlyConfiguration : 1;                        		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ShadowShifted : 1;                                		// 0x01F8 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	class UParticleSystemComponent*                    ParticleSystem;                                   		// 0x01FC (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ADVPlayerController*                         LocalPC;                                          		// 0x0200 (0x0004) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0204 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FPawnTime >                         TouchedPawns;                                     		// 0x0208 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44071 ];

		return pClassPointer;
	};

	void SetParticleSystemForAlignment ( unsigned long ForceUpdate );
	void Tick ( float DeltaTime );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVWallOfFlame_C::pClassPointer = NULL;

// Class ForgeGame.DVAbilityFireStorm
// 0x0011 (0x02C1 - 0x02B0)
class ADVAbilityFireStorm : public ADVAbility
{
public:
	unsigned long                                      Active : 1;                                       		// 0x02B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      HitsTarget : 1;                                   		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      UsedOnAllies : 1;                                 		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	float                                              DamageTick;                                       		// 0x02B4 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVPawn*                                     RepHitPawn;                                       		// 0x02BC (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      AttackFailed;                                     		// 0x02C0 (0x0001) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44091 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void Tick ( float DeltaTime );
	void StopAbility ( );
	void FireAbility ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbilityFireStorm::pClassPointer = NULL;

// Class ForgeGame.DVAbilitySpiritualBalance
// 0x0000 (0x02C8 - 0x02C8)
class ADVAbilitySpiritualBalance : public ADVAbilityHitscan
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44181 ];

		return pClassPointer;
	};

	void FireAbility ( );
	void PlayHitEffect ( class ADVPawn* HitPawn );
};

UClass* ADVAbilitySpiritualBalance::pClassPointer = NULL;

// Class ForgeGame.DVAbilitySpiritualBond
// 0x0014 (0x02C4 - 0x02B0)
class ADVAbilitySpiritualBond : public ADVAbility
{
public:
	class ADVPawn*                                     RepHitPawn;                                       		// 0x02B0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UAudioComponent*                             HitSoundComponent;                                		// 0x02B4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ResourceSteal;                                    		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RangeSq;                                          		// 0x02BC (0x0004) [0x0000000000000000]              
	float                                              TickTimer;                                        		// 0x02C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44188 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void UpdateBeamEmitter ( struct FVector EndLocation );
	void Tick ( float DeltaTime );
	void Deactivate ( );
	void FireAbility ( );
	void PostBeginPlay ( );
};

UClass* ADVAbilitySpiritualBond::pClassPointer = NULL;

// Class ForgeGame.DVAbilitySpiritualBurden
// 0x0010 (0x02C0 - 0x02B0)
class ADVAbilitySpiritualBurden : public ADVAbility
{
public:
	float                                              Duration;                                         		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDVBuff*                                     SelfBuff;                                         		// 0x02B4 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	unsigned long                                      Active : 1;                                       		// 0x02B8 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	float                                              TickTime;                                         		// 0x02BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44203 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void Reset ( );
	void Tick ( float DeltaTime );
	void StopAbility ( );
	void FireAbility ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbilitySpiritualBurden::pClassPointer = NULL;

// Class ForgeGame.DVAbilityBlessedAura
// 0x0010 (0x02C0 - 0x02B0)
class ADVAbilityBlessedAura : public ADVAbility
{
public:
	float                                              PerAllyCost;                                      		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      RequiresTarget : 1;                               		// 0x02B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct ADVAbilityBlessedAura_FSHitPawn             RepHitPawn;                                       		// 0x02B8 (0x0008) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44217 ];

		return pClassPointer;
	};

	void FireAbility ( );
	void PlayFireEffect ( class ADVPawn* HitPawn );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbilityBlessedAura::pClassPointer = NULL;

// Class ForgeGame.DVAbilityHeal
// 0x0004 (0x02CC - 0x02C8)
class ADVAbilityHeal : public ADVAbilityHitscan
{
public:
	int                                                HealPerStack;                                     		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44234 ];

		return pClassPointer;
	};

	void FireAbility ( );
};

UClass* ADVAbilityHeal::pClassPointer = NULL;

// Class ForgeGame.DVAbilitySelf
// 0x0000 (0x02B0 - 0x02B0)
class ADVAbilitySelf : public ADVAbility
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44242 ];

		return pClassPointer;
	};

	void FireAbility ( );
};

UClass* ADVAbilitySelf::pClassPointer = NULL;

// Class ForgeGame.DVAbilityDomeOfProtection
// 0x0014 (0x02C4 - 0x02B0)
class ADVAbilityDomeOfProtection : public ADVAbility
{
public:
	int                                                DomeLifeTime;                                     		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DomeHitPoints;                                    		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVDomeOfProtection_C*                       DomeArchetype;                                    		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      SpawnAtTarget : 1;                                		// 0x02BC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class ADVDomeOfProtection_C*                       Dome;                                             		// 0x02C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44292 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void Reset ( );
	void DomeKilled ( );
	void ModifyDefense ( class UDVAttack* IncomingAttack, class ADVPawn* Defender, TArray< struct FSDamage >* DamageTaken, int* ProtectionDone );
	void FireAbility ( );
};

UClass* ADVAbilityDomeOfProtection::pClassPointer = NULL;

// Class ForgeGame.DVDomeOfProtection_C
// 0x0020 (0x01E8 - 0x01C8)
class ADVDomeOfProtection_C : public AActor
{
public:
	class ADVAbility*                                  OwningAbility;                                    		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             AmbientSound;                                     		// 0x01CC (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             EnemyDomeParticle;                                		// 0x01D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             FriendlyDomeParticle;                             		// 0x01D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DefendingTeamIndex;                               		// 0x01D8 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      FriendlyConfiguration : 1;                        		// 0x01DC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ShadowShifted : 1;                                		// 0x01DC (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	class UParticleSystemComponent*                    ParticleSystem;                                   		// 0x01E0 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ADVPlayerController*                         LocalPC;                                          		// 0x01E4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44294 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void SetParticleSystemForAlignment ( unsigned long ForceUpdate );
	void Tick ( float DeltaTime );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVDomeOfProtection_C::pClassPointer = NULL;

// Class ForgeGame.DVAbilitySelfAOE
// 0x0005 (0x02B5 - 0x02B0)
class ADVAbilitySelfAOE : public ADVAbility
{
public:
	unsigned long                                      HitsAllies : 1;                                   		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      HitsEnemies : 1;                                  		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      RepFireAbility;                                   		// 0x02B4 (0x0001) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44380 ];

		return pClassPointer;
	};

	void FireAbility ( );
	void PlayFireEffect ( class ADVPawn* RepHitPawn );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbilitySelfAOE::pClassPointer = NULL;

// Class ForgeGame.DVAbilityVengeance
// 0x001B (0x02D0 - 0x02B5)
class ADVAbilityVengeance : public ADVAbilitySelfAOE
{
public:
	int                                                MaxStacks;                                        		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StackDuration;                                    		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    StackTimes;                                       		// 0x02C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ADVPawnHeroWarden*                           Warden;                                           		// 0x02CC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44392 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void Reset ( );
	void Tick ( float DeltaTime );
	void FireAbility ( );
};

UClass* ADVAbilityVengeance::pClassPointer = NULL;

// Class ForgeGame.DVAbilityShockwave
// 0x000C (0x02BC - 0x02B0)
class ADVAbilityShockwave : public ADVAbility
{
public:
	float                                              ConeAngle;                                        		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumberOfAttacksToMiss;                            		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Knockback;                                        		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44405 ];

		return pClassPointer;
	};

	void FireAbility ( );
};

UClass* ADVAbilityShockwave::pClassPointer = NULL;

// Class ForgeGame.DVAbilityChargingLeap
// 0x0034 (0x02E4 - 0x02B0)
class ADVAbilityChargingLeap : public ADVAbility
{
public:
	int                                                Knockback;                                        		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LeapSpeed;                                        		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Origin;                                           		// 0x02B8 (0x000C) [0x0000000000000000]              
	class ADVPawn*                                     RepHitPawn;                                       		// 0x02C4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     FirstNormal;                                      		// 0x02C8 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastSeenLocation;                                 		// 0x02D4 (0x000C) [0x0000000000000000]              
	int                                                RangeSq;                                          		// 0x02E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44411 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void HitTarget ( );
	void Tick ( float DeltaTime );
	void PerformAbility ( );
	void PostBeginPlay ( );
	void ReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbilityChargingLeap::pClassPointer = NULL;

// Class ForgeGame.DVAbilityShieldStorm
// 0x002C (0x02DC - 0x02B0)
class ADVAbilityShieldStorm : public ADVAbility
{
public:
	unsigned long                                      Active : 1;                                       		// 0x02B0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Duration;                                         		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Speed;                                            		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Knockback;                                        		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVTriggerShieldStorm*                       Tigger;                                           		// 0x02C0 (0x0004) [0x0000000000000000]              
	struct FVector                                     StartRotation;                                    		// 0x02C4 (0x000C) [0x0000000000000000]              
	struct FVector                                     CurrentRotation;                                  		// 0x02D0 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44429 ];

		return pClassPointer;
	};

	void TriggerTouch ( class ADVPawn* OtherPawn );
	void Tick ( float DeltaTime );
	void Deactivate ( );
	void PerformAbility ( );
};

UClass* ADVAbilityShieldStorm::pClassPointer = NULL;

// Class ForgeGame.DVTriggerShieldStorm
// 0x0008 (0x01DC - 0x01D4)
class ADVTriggerShieldStorm : public ATrigger_Dynamic
{
public:
	class ADVAbilityShieldStorm*                       Ability;                                          		// 0x01D4 (0x0004) [0x0000000000000000]              
	float                                              TickTimer;                                        		// 0x01D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44433 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
};

UClass* ADVTriggerShieldStorm::pClassPointer = NULL;

// Class ForgeGame.DVAbilityRaiseMorale
// 0x0008 (0x02C4 - 0x02BC)
class ADVAbilityRaiseMorale : public ADVAbilityToggleAOE
{
public:
	class ADVPawnHeroWarden*                           Warden;                                           		// 0x02BC (0x0004) [0x0000000000000000]              
	float                                              DamagePerStack;                                   		// 0x02C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44461 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void PerTickEffect ( class ADVPawn* CurPawn, unsigned long SecondRun );
	void FireAbility ( );
};

UClass* ADVAbilityRaiseMorale::pClassPointer = NULL;

// Class ForgeGame.DVAbilityStandGround
// 0x0004 (0x02B4 - 0x02B0)
class ADVAbilityStandGround : public ADVAbility
{
public:
	class UDVBuff*                                     CanCastBuff;                                      		// 0x02B0 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44474 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void ModifyDefense ( class UDVAttack* IncomingAttack, class ADVPawn* Defender, TArray< struct FSDamage >* DamageTaken, int* ProtectionDone );
	bool Interrupt ( unsigned long SelfInterrupt );
	void FireAbility ( );
	void PerformAbility ( );
};

UClass* ADVAbilityStandGround::pClassPointer = NULL;

// Class ForgeGame.DVAbilityProtectAllies
// 0x0008 (0x02C4 - 0x02BC)
class ADVAbilityProtectAllies : public ADVAbilityToggleAOE
{
public:
	class ADVPawnHeroWarden*                           Warden;                                           		// 0x02BC (0x0004) [0x0000000000000000]              
	int                                                HealthPerStack;                                   		// 0x02C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44489 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void PerTickEffect ( class ADVPawn* CurPawn, unsigned long SecondRun );
	void FireAbility ( );
};

UClass* ADVAbilityProtectAllies::pClassPointer = NULL;

// Class ForgeGame.DVAbilityRavagerAttack
// 0x001C (0x02CC - 0x02B0)
class ADVAbilityRavagerAttack : public ADVAbility
{
public:
	unsigned long                                      ThreeSixty : 1;                                   		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              CleveAngle;                                       		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Knockback;                                        		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVPawnHeroRavager*                          Ravager;                                          		// 0x02BC (0x0004) [0x0000000000000000]              
	int                                                RangeSq;                                          		// 0x02C0 (0x0004) [0x0000000000000000]              
	struct ADVAbilityRavagerAttack_FSHitPawn           RepHitPawn;                                       		// 0x02C4 (0x0008) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44537 ];

		return pClassPointer;
	};

	void FireAbility ( );
	void PlayFireEffect ( class ADVPawn* RepHitPawnFire );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbilityRavagerAttack::pClassPointer = NULL;

// Class ForgeGame.DVAbilityRavagerFocus
// 0x0000 (0x02B8 - 0x02B8)
class ADVAbilityRavagerFocus : public ADVAbilityToggle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44557 ];

		return pClassPointer;
	};

	void FireAbility ( );
};

UClass* ADVAbilityRavagerFocus::pClassPointer = NULL;

// Class ForgeGame.DVAbilityHook
// 0x0010 (0x02EC - 0x02DC)
class ADVAbilityHook : public ADVAbilityProjectile
{
public:
	class APlayerController*                           HookedController;                                 		// 0x02DC (0x0004) [0x0000000000000000]              
	float                                              Expiry;                                           		// 0x02E0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ADVPawn*                                     HookedPawn;                                       		// 0x02E4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                HookSpeed;                                        		// 0x02E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44561 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void PullPawn ( );
	void Tick ( float DeltaTime );
	void HookEnded ( );
	void ProjectileHit ( class ADVPawn* HitPawn, struct FVector HitLocation, struct FVector HitNormal, class ADVProjectile* Projectile );
	void FireAbility ( );
};

UClass* ADVAbilityHook::pClassPointer = NULL;

// Class ForgeGame.DVAbilityGrapple
// 0x0000 (0x02EC - 0x02EC)
class ADVAbilityGrapple : public ADVAbilityHook
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44581 ];

		return pClassPointer;
	};

	void HookEnded ( );
	void PullPawn ( );
	void ProjectileHit ( class ADVPawn* HitPawn, struct FVector HitLocation, struct FVector HitNormal, class ADVProjectile* Projectile );
};

UClass* ADVAbilityGrapple::pClassPointer = NULL;

// Class ForgeGame.DVAbilityChainSlap
// 0x0011 (0x02C1 - 0x02B0)
class ADVAbilityChainSlap : public ADVAbility
{
public:
	struct FVector                                     TraceExtent;                                      		// 0x02B0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageDistanceMultiplier;                         		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RepFireAbility;                                   		// 0x02C0 (0x0001) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44592 ];

		return pClassPointer;
	};

	void FireAbility ( );
	void PlayFireEffect ( class ADVPawn* RepHitPawn );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVAbilityChainSlap::pClassPointer = NULL;

// Class ForgeGame.DVAbilityLift
// 0x0008 (0x02D0 - 0x02C8)
class ADVAbilityLift : public ADVAbilityHitscan
{
public:
	float                                              Duration;                                         		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LiftRate;                                         		// 0x02CC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44612 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void StopAbility ( );
	void FireAbility ( );
};

UClass* ADVAbilityLift::pClassPointer = NULL;

// Class ForgeGame.DVAbilityGravityOfWill
// 0x001B (0x02D0 - 0x02B5)
class ADVAbilityGravityOfWill : public ADVAbilitySelfAOE
{
public:
	unsigned long                                      Active : 1;                                       		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                PullRange;                                        		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PullRate;                                         		// 0x02C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ADVPawn* >                           AffectedPawns;                                    		// 0x02C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44620 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	bool Interrupt ( unsigned long SelfInterrupt );
	void Reset ( );
	void StopPull ( );
	void FireAbility ( );
	void PerformAbility ( );
};

UClass* ADVAbilityGravityOfWill::pClassPointer = NULL;

// Class ForgeGame.DVAbilityPainOfAllegiance
// 0x0014 (0x02DC - 0x02C8)
class ADVAbilityPainOfAllegiance : public ADVAbilityHitscan
{
public:
	int                                                TickCouner;                                       		// 0x02C8 (0x0004) [0x0000000000000000]              
	int                                                DamagePerAlly;                                    		// 0x02CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RangeOfAllies;                                    		// 0x02D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumberOfTicks;                                    		// 0x02D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVPawn*                                     HitPawn;                                          		// 0x02D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44636 ];

		return pClassPointer;
	};

	void TickDamage ( );
	void FireAbility ( );
};

UClass* ADVAbilityPainOfAllegiance::pClassPointer = NULL;

// Class ForgeGame.DVAbilityUnstuck
// 0x0000 (0x02B0 - 0x02B0)
class ADVAbilityUnstuck : public ADVAbility
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44647 ];

		return pClassPointer;
	};

	void FireAbility ( );
};

UClass* ADVAbilityUnstuck::pClassPointer = NULL;

// Class ForgeGame.ForgeOnlineSubsystemDelegates
// 0x0000 (0x003C - 0x003C)
class UForgeOnlineSubsystemDelegates : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44739 ];

		return pClassPointer;
	};

	void GenerateKickData ( struct FUniqueNetId KickedUniqueNetId, TArray< unsigned char >* OutData );
	void GenerateJoinServerData ( struct FString ServerURL, TArray< unsigned char >* OutData );
	int GetBestServerFromResults ( TArray< struct FOnlineGameSearchResult > AllSearchResults, int SizeOfGroup, int DesiredSkill );
	void FindOnlineGameCanceled ( unsigned long bWasSuccessful );
	void FindOnlineGameComplete ( unsigned long bWasSuccessful );
	bool FindOnlineGames ( unsigned long IsLanQuery, struct FString Environment, int SteamRegionId, struct FString GameModeQueue, struct FString ForgeVersion );
	void HandleSteamGameSearchEvents ( );
	void LobbyMemberStatusUpdate ( int LobbyIndex, int MemberIndex, int InstigatorIndex, struct FString Status, TArray< struct FActiveLobbyInfo >* LobbyList );
	void LobbyMemberSettingsUpdate ( int LobbyIndex, int MemberIndex, TArray< struct FActiveLobbyInfo >* LobbyList );
	void LobbySettingsUpdate ( int LobbyIndex, TArray< struct FActiveLobbyInfo >* LobbyList );
	void LobbyReceiveBinaryData ( int LobbyIndex, int MemberIndex, TArray< struct FActiveLobbyInfo >* LobbyList, TArray< unsigned char >* Data );
	void LobbyReceiveMessage ( int LobbyIndex, int MemberIndex, struct FString Type, struct FString Message, TArray< struct FActiveLobbyInfo >* LobbyList );
	void JoinLobbyComplete ( unsigned long bWasSuccessful, int LobbyIndex, struct FUniqueNetId LobbyUID, struct FString Error, TArray< struct FActiveLobbyInfo >* LobbyList );
	void LobbyInvite ( struct FUniqueNetId LobbyId, struct FUniqueNetId FriendId, unsigned long bAccepted );
	void HandleSteamLobbyEvents ( );
	void CreateLobbyCompleted ( unsigned long bWasSuccessful, struct FUniqueNetId LobbyId, struct FString Error );
	void CreateLobby ( );
	bool SetSkinChoiceForClass ( unsigned char ChosenClass, unsigned char TheChosenSkin );
	bool GetSkinChoiceForClass ( unsigned char ChosenClass, unsigned char* TheChosenSkin );
	void CloudWriteComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	void WriteCloudSettings ( );
	void ReadCloudSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	void ReadCloudSettings ( );
	bool SetCloudSetting ( int SettingId, struct FString NewValue );
	bool GetCloudSetting ( int SettingId, struct FString* TheSettingValue );
	void FlushSteamStatsComplete ( struct FName SessionNameThing, unsigned long bWasSuccessful );
	void WriteUpdatedSteamStats ( class ADVPlayerController* TheDVPC, struct FUniqueNetId TheUniqueId, class UForgeOnlineStatsRead* TheStatsReader, class UForgeOnlineStatsWrite* TheStatsWriter );
	void OnReadOnlineAvatarComplete ( struct FUniqueNetId PlayerNetId, class UTexture2D* Avatar );
	void GetAvatarForUniqueId ( struct FUniqueNetId PlayerNetId );
};

UClass* UForgeOnlineSubsystemDelegates::pClassPointer = NULL;

// Class ForgeGame.DVAbilityResetCD
// 0x0000 (0x02B0 - 0x02B0)
class ADVAbilityResetCD : public ADVAbility
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44877 ];

		return pClassPointer;
	};

	void FireAbility ( );
};

UClass* ADVAbilityResetCD::pClassPointer = NULL;

// Class ForgeGame.DVAbilityShrine
// 0x0000 (0x02B0 - 0x02B0)
class ADVAbilityShrine : public ADVAbility
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44883 ];

		return pClassPointer;
	};

	void FireAbility ( );
};

UClass* ADVAbilityShrine::pClassPointer = NULL;

// Class ForgeGame.DVDummyController
// 0x0008 (0x036C - 0x0364)
class ADVDummyController : public AAIController
{
public:
	class ADVPawnHero*                                 Hero;                                             		// 0x0364 (0x0004) [0x0000000000000000]              
	class ADVPlayerReplicationInfo*                    PRI;                                              		// 0x0368 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44886 ];

		return pClassPointer;
	};

	void OnToggleCinematicMode ( class USeqAct_ToggleCinematicMode* Action );
	void OnToggleInput ( class USeqAct_ToggleInput* inAction );
	void IncomingAbility ( class ADVAbility* Ability );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
	void PostBeginPlay ( );
};

UClass* ADVDummyController::pClassPointer = NULL;

// Class ForgeGame.ForgeTaunts
// 0x000C (0x0048 - 0x003C)
class UForgeTaunts : public UObject
{
public:
	TArray< struct FSChatTaunt >                       ChatTaunts;                                       		// 0x003C (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44900 ];

		return pClassPointer;
	};

	bool IsSubUserType ( unsigned char ParentType, unsigned char ChildType );
	bool TauntApplies ( struct FSChatTaunt TheTaunt, unsigned char TheSituation, unsigned char UserType, unsigned char TargetType );
};

UClass* UForgeTaunts::pClassPointer = NULL;

// Class ForgeGame.DVAIController
// 0x0070 (0x03DC - 0x036C)
class ADVAIController : public ADVDummyController
{
public:
	class ADVPlayerController*                         HumanPC;                                          		// 0x036C (0x0004) [0x0000000000000000]              
	struct FVector                                     FinalDestination;                                 		// 0x0370 (0x000C) [0x0000000000000000]              
	struct FVector                                     NextMoveLocation;                                 		// 0x037C (0x000C) [0x0000000000000000]              
	struct FVector                                     AdjustedNextMoveLocation;                         		// 0x0388 (0x000C) [0x0000000000000000]              
	float                                              SkillLevel;                                       		// 0x0394 (0x0004) [0x0000000000000000]              
	float                                              AbilityTimer;                                     		// 0x0398 (0x0004) [0x0000000000000000]              
	unsigned long                                      LOSToPlayer : 1;                                  		// 0x039C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      PathToPlayer : 1;                                 		// 0x039C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      CantFindEnemy : 1;                                		// 0x039C (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                RangeToPlayer;                                    		// 0x03A0 (0x0004) [0x0000000000000000]              
	class AForgeGameInfoBotMatch*                      ForgeGameInfo;                                    		// 0x03A4 (0x0004) [0x0000000000000000]              
	class ADVPathNodeFlee*                             TargetFleeNode;                                   		// 0x03A8 (0x0004) [0x0000000000000000]              
	float                                              ChaseCoolDown;                                    		// 0x03AC (0x0004) [0x0000000000000000]              
	float                                              FleeCoolDown;                                     		// 0x03B0 (0x0004) [0x0000000000000000]              
	float                                              RepathCooldown;                                   		// 0x03B4 (0x0004) [0x0000000000000000]              
	float                                              InLOSTimer;                                       		// 0x03B8 (0x0004) [0x0000000000000000]              
	float                                              StuckTimer;                                       		// 0x03BC (0x0004) [0x0000000000000000]              
	float                                              BlockTime;                                        		// 0x03C0 (0x0004) [0x0000000000000000]              
	float                                              UsePathingCD;                                     		// 0x03C4 (0x0004) [0x0000000000000000]              
	int                                                MeleeFollowDis;                                   		// 0x03C8 (0x0004) [0x0000000000000000]              
	float                                              TimeLastFoundEnemy;                               		// 0x03CC (0x0004) [0x0000000000000000]              
	float                                              SearchingTauntTime;                               		// 0x03D0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              LastUnstuckTime;                                  		// 0x03D4 (0x0004) [0x0000000000000000]              
	class UForgeTaunts*                                TauntsDB;                                         		// 0x03D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44914 ];

		return pClassPointer;
	};

	void DoTaunt ( unsigned char TargetClass, unsigned char context );
	void PawnDied ( class APawn* inPawn );
	void Flee ( );
	class ADVShrine* FindShrine ( );
	void PathToTarget ( );
	void AIMovement ( float DeltaTime );
	void UnStuck ( );
	void CheckForStuck ( float DeltaTime );
	void Tick ( float DeltaTime );
	void PerformBlock ( unsigned long StartBlock );
	void UnBlock ( );
	void bLock ( );
	void IncomingAbility ( class ADVAbility* Ability );
	bool UseAbility ( unsigned char AbilityNumber );
	void ChooseAbility ( );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
	void PostBeginPlay ( );
};

UClass* ADVAIController::pClassPointer = NULL;

// Class ForgeGame.DVPathNodeFlee
// 0x0004 (0x01CC - 0x01C8)
class ADVPathNodeFlee : public AActor
{
public:
	int                                                Distance;                                         		// 0x01C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44928 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ADVPathNodeFlee::pClassPointer = NULL;

// Class ForgeGame.ForgeGameInfoBotMatch
// 0x0018 (0x052C - 0x0514)
class AForgeGameInfoBotMatch : public AForgeGameInfoTraining
{
public:
	TArray< class ADVPathNodeFlee* >                   FleeNodes;                                        		// 0x0514 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ADVShrine* >                         Shrines;                                          		// 0x0520 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44930 ];

		return pClassPointer;
	};

};

UClass* AForgeGameInfoBotMatch::pClassPointer = NULL;

// Class ForgeGame.DVShrine
// 0x0014 (0x01DC - 0x01C8)
class ADVShrine : public AActor
{
public:
	class UStaticMeshComponent*                        Mesh;                                             		// 0x01C8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ADVAbility*                                  AbilityArchetype;                                 		// 0x01CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    ParticleSystem;                                   		// 0x01D0 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      Ready : 1;                                        		// 0x01D4 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	class ADVAbility*                                  Ability;                                          		// 0x01D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44969 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
	void eventDestroyed ( );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVShrine::pClassPointer = NULL;

// Class ForgeGame.DVAIControllerAssassin
// 0x0004 (0x03E0 - 0x03DC)
class ADVAIControllerAssassin : public ADVAIController
{
public:
	class ADVPawnHeroAssassin*                         Assassin;                                         		// 0x03DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45000 ];

		return pClassPointer;
	};

	void AIMovement ( float DeltaTime );
	void UnStuck ( );
	void ChooseAbility ( );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
};

UClass* ADVAIControllerAssassin::pClassPointer = NULL;

// Class ForgeGame.DVAIControllerPathfinder
// 0x0008 (0x03E4 - 0x03DC)
class ADVAIControllerPathfinder : public ADVAIController
{
public:
	class ADVPawnHeroPathfinder*                       Pathfinder;                                       		// 0x03DC (0x0004) [0x0000000000000000]              
	float                                              CamoTimer;                                        		// 0x03E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45011 ];

		return pClassPointer;
	};

	void AIMovement ( float DeltaTime );
	void Tick ( float DeltaTime );
	void ChooseAbility ( );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
};

UClass* ADVAIControllerPathfinder::pClassPointer = NULL;

// Class ForgeGame.DVAIControllerPyromancer
// 0x0004 (0x03E0 - 0x03DC)
class ADVAIControllerPyromancer : public ADVAIController
{
public:
	class ADVPawnHeroPyromancer*                       Pyromancer;                                       		// 0x03DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45023 ];

		return pClassPointer;
	};

	void ChooseAbility ( );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
};

UClass* ADVAIControllerPyromancer::pClassPointer = NULL;

// Class ForgeGame.DVAIControllerShaman
// 0x0008 (0x03E4 - 0x03DC)
class ADVAIControllerShaman : public ADVAIController
{
public:
	class ADVPawnHeroShaman*                           Shaman;                                           		// 0x03DC (0x0004) [0x0000000000000000]              
	float                                              JumpAroundTime;                                   		// 0x03E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45031 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void ChooseAbility ( );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
};

UClass* ADVAIControllerShaman::pClassPointer = NULL;

// Class ForgeGame.DVAIControllerWarden
// 0x0004 (0x03E0 - 0x03DC)
class ADVAIControllerWarden : public ADVAIController
{
public:
	class ADVPawnHeroWarden*                           Warden;                                           		// 0x03DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45041 ];

		return pClassPointer;
	};

	void UnStuck ( );
	void ChooseAbility ( );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
};

UClass* ADVAIControllerWarden::pClassPointer = NULL;

// Class ForgeGame.DVAnimNotify_AttachmentVisibility
// 0x0010 (0x005C - 0x004C)
class UDVAnimNotify_AttachmentVisibility : public UDVAnimNotify_Scripted
{
public:
	TArray< int >                                      AttachmentIndices;                                		// 0x004C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bHideAttachments : 1;                             		// 0x0058 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bSkipIfOwnerIsHidden : 1;                         		// 0x0058 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45058 ];

		return pClassPointer;
	};

	void eventNotify ( class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator );
};

UClass* UDVAnimNotify_AttachmentVisibility::pClassPointer = NULL;

// Class ForgeGame.DVAnimNotify_Ragdoll
// 0x0000 (0x004C - 0x004C)
class UDVAnimNotify_Ragdoll : public UDVAnimNotify_Scripted
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45074 ];

		return pClassPointer;
	};

	void eventNotifyEnd ( class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator );
	void eventNotify ( class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator );
};

UClass* UDVAnimNotify_Ragdoll::pClassPointer = NULL;

// Class ForgeGame.DVArenaBlock
// 0x0004 (0x01CC - 0x01C8)
class ADVArenaBlock : public AActor
{
public:
	class UStaticMeshComponent*                        Mesh;                                             		// 0x01C8 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45084 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ADVArenaBlock::pClassPointer = NULL;

// Class ForgeGame.DVCamera
// 0x002C (0x04D4 - 0x04A8)
class ADVCamera : public ACamera
{
public:
	float                                              CameraOffSetYMax;                                 		// 0x04A8 (0x0004) [0x0000000000000000]              
	float                                              CameraOffSetYMin;                                 		// 0x04AC (0x0004) [0x0000000000000000]              
	float                                              CameraOffSetZ;                                    		// 0x04B0 (0x0004) [0x0000000000000000]              
	float                                              SpringIn;                                         		// 0x04B4 (0x0004) [0x0000000000000000]              
	float                                              SpringOut;                                        		// 0x04B8 (0x0004) [0x0000000000000000]              
	int                                                MaxTargetRange;                                   		// 0x04BC (0x0004) [0x0000000000000000]              
	float                                              CurCameraOffSetY;                                 		// 0x04C0 (0x0004) [0x0000000000000000]              
	class AActor*                                      MousedOverActor;                                  		// 0x04C4 (0x0004) [0x0000000000000000]              
	float                                              FuzzyAimValue;                                    		// 0x04C8 (0x0004) [0x0000000000000000]              
	float                                              MeleeAimAngle;                                    		// 0x04CC (0x0004) [0x0000000000000000]              
	int                                                SpectatePawnDistance;                             		// 0x04D0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45148 ];

		return pClassPointer;
	};

	class AActor* TracePawn ( struct FVector TraceEnd, struct FVector TraceStart, float DeltaTime, struct FVector* HitLocation, struct FVector* HitNormal, unsigned char* UsingAssist );
	void UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT );
};

UClass* ADVCamera::pClassPointer = NULL;

// Class ForgeGame.DVDummyBlockingController
// 0x0000 (0x036C - 0x036C)
class ADVDummyBlockingController : public ADVDummyController
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45205 ];

		return pClassPointer;
	};

	void PerformBlock ( unsigned long StartBlock );
	void UnBlock ( );
	void bLock ( );
	void IncomingAbility ( class ADVAbility* Ability );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
};

UClass* ADVDummyBlockingController::pClassPointer = NULL;

// Class ForgeGame.DVDummyPreviewController
// 0x0000 (0x036C - 0x036C)
class ADVDummyPreviewController : public ADVDummyController
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45216 ];

		return pClassPointer;
	};

};

UClass* ADVDummyPreviewController::pClassPointer = NULL;

// Class ForgeGame.DVFlagStand
// 0x0028 (0x022C - 0x0204)
class ADVFlagStand : public ADynamicSMActor
{
public:
	unsigned char                                      DefendingTeamIndex;                               		// 0x0204 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     FlagOffset;                                       		// 0x0208 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class ADVFlag*                                     FlagArchetype;                                    		// 0x0214 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      RequireFlagHomeToCap : 1;                         		// 0x0218 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IsEnabled : 1;                                    		// 0x0218 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              CollisionHeight;                                  		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CollisionRadius;                                  		// 0x0220 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               SkeletalMesh;                                     		// 0x0224 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVFlag*                                     TheFlag;                                          		// 0x0228 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45254 ];

		return pClassPointer;
	};

	void Deactivate ( );
	void Activate ( );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void SpawnTheFlag ( );
	void PostBeginPlay ( );
};

UClass* ADVFlagStand::pClassPointer = NULL;

// Class ForgeGame.DVGameReplicationInfo
// 0x002C (0x0244 - 0x0218)
class ADVGameReplicationInfo : public AGameReplicationInfo
{
public:
	unsigned long                                      WarmupHasBegun : 1;                               		// 0x0218 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      GameHasBegun : 1;                                 		// 0x0218 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      ScoreDisplayHasBegun : 1;                         		// 0x0218 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	float                                              WarmupTimeLeft;                                   		// 0x021C (0x0004) [0x0000000000000000]              
	float                                              GameTimeLeft;                                     		// 0x0220 (0x0004) [0x0000000000000000]              
	float                                              ScoreDisplayTimeLeft;                             		// 0x0224 (0x0004) [0x0000000000000000]              
	int                                                CTFWinningCaptures;                               		// 0x0228 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                TDMDeathsAllowed;                                 		// 0x022C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                KOTHWinningPoints;                                		// 0x0230 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                FinalMusicStartTime;                              		// 0x0234 (0x0004) [0x0000000000000000]              
	float                                              MusicFadeTime;                                    		// 0x0238 (0x0004) [0x0000000000000000]              
	unsigned char                                      WinningTeam;                                      		// 0x023C (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      RoundsPerMap;                                     		// 0x023D (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      NumberOfRoundsFinished;                           		// 0x023E (0x0001) [0x0000000000000020]              ( CPF_Net )
	int                                                GameMaxPlayers;                                   		// 0x0240 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45265 ];

		return pClassPointer;
	};

	void DestroyPRIs ( );
	void PlayFinalMusic ( );
	void eventTick ( float DeltaTime );
	void eventTimer ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADVGameReplicationInfo::pClassPointer = NULL;

// Class ForgeGame.DVGameViewportClientExtend
// 0x0000 (0x0128 - 0x0128)
class UDVGameViewportClientExtend : public UDVGameViewportClient
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45380 ];

		return pClassPointer;
	};

	void DrawLoadingScreen ( class UCanvas* Canvas );
	void DrawTransition ( class UCanvas* Canvas );
	void NotifyConnectionError ( unsigned char MessageType, struct FString Message, struct FString Title );
};

UClass* UDVGameViewportClientExtend::pClassPointer = NULL;

// Class ForgeGame.DVHUDFrontEnd
// 0x0010 (0x0460 - 0x0450)
class ADVHUDFrontEnd : public AHUD
{
public:
	class UForgeGFxFrontEnd*                           MainMenuMovie;                                    		// 0x0450 (0x0004) [0x0000000000000000]              
	int                                                OldSizeX;                                         		// 0x0454 (0x0004) [0x0000000000000000]              
	int                                                OldSizeY;                                         		// 0x0458 (0x0004) [0x0000000000000000]              
	unsigned long                                      NeedToJoinLobby : 1;                              		// 0x045C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45387 ];

		return pClassPointer;
	};

	int GetLocalPlayerOwnerIndex ( );
	void ResolutionChanged ( );
	void eventPostRender ( );
	void eventPostBeginPlay ( );
};

UClass* ADVHUDFrontEnd::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxKillCam
// 0x0034 (0x019C - 0x0168)
class UForgeGFxKillCam : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KillCamContainerMC;                               		// 0x016C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KillCamMC;                                        		// 0x0170 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KillCamIntroTF;                                   		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KillCamAvatarLoaderMC;                            		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KillCamNameTF;                                    		// 0x017C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KillCamTitleTF;                                   		// 0x0180 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KillCamClassIconMC;                               		// 0x0184 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KillCamClassLevelTF;                              		// 0x0188 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KillCamAbilityIconMC;                             		// 0x018C (0x0004) [0x0000000000000000]              
	unsigned long                                      IsShown : 1;                                      		// 0x0190 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInitialized : 1;                                 		// 0x0190 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              LastShownAt;                                      		// 0x0194 (0x0004) [0x0000000000000000]              
	float                                              ShowPeriod;                                       		// 0x0198 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45404 ];

		return pClassPointer;
	};

	void Hide ( );
	void ConfigureForKiller ( struct FString KillerClassName, class ADVPlayerReplicationInfo* KillerPRI, int KillingAbilityIndex );
	void Tick ( float DeltaTime );
	void ConfigKillCam ( );
	bool Start ( unsigned long StartPaused );
};

UClass* UForgeGFxKillCam::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxManager
// 0x0014 (0x017C - 0x0168)
class UForgeGFxManager : public UGFxMoviePlayer
{
public:
	class AHUD*                                        TheHUD;                                           		// 0x0168 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsCtrlDown : 1;                                   		// 0x016C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsCapturing : 1;                                  		// 0x016C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bInitialized : 1;                                 		// 0x016C (0x0004) [0x0000000000000000] [0x00000004] 
	class UGFxObject*                                  RootMC;                                           		// 0x0170 (0x0004) [0x0000000000000000]              
	class UForgeGFxFrontEndSlide*                      CapturingSlide;                                   		// 0x0174 (0x0004) [0x0000000000000000]              
	float                                              SwappingTime;                                     		// 0x0178 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45407 ];

		return pClassPointer;
	};

	void SwapFromTo ( struct FString OldSlideName, struct FString NewSlideName );
};

UClass* UForgeGFxManager::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxAbilitiesMenu
// 0x00A9 (0x0225 - 0x017C)
class UForgeGFxAbilitiesMenu : public UForgeGFxManager
{
public:
	class UGFxObject*                                  AbilitiesWindowMC;                                		// 0x017C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilitiesTitleTF;                                 		// 0x0180 (0x0004) [0x0000000000000000]              
	struct FSAbilityDetailsLine                        AbilityLines[ 0x8 ];                              		// 0x0184 (0x00A0) [0x0000000000000000]              
	unsigned char                                      ConfiguredClass;                                  		// 0x0224 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45406 ];

		return pClassPointer;
	};

	void SetVisibility ( unsigned long NewVisiblity );
	void UpdateAbilitiesForClass ( unsigned char ClassEnum );
	void UpdateAbilityBindText ( int AbilityIndex );
	void Tick ( float DeltaTime );
	void ConfigAbilitiesMenu ( );
	bool Start ( unsigned long StartPaused );
};

UClass* UForgeGFxAbilitiesMenu::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxScoresSlide
// 0x0888 (0x09F0 - 0x0168)
class UForgeGFxScoresSlide : public UGFxMoviePlayer
{
public:
	class USwfMovie*                                   TheSWF;                                           		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PlayerSummaryMC;                                  		// 0x016C (0x0004) [0x0000000000000000]              
	struct FSTeamElements                              TeamElements[ 0x2 ];                              		// 0x0170 (0x0808) [0x0000000000000000]              
	class UGFxObject*                                  MedalMouseOverMC;                                 		// 0x0978 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MedalMouseOverTF;                                 		// 0x097C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MedalMouseOverBackgroundMC;                       		// 0x0980 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamSummaryMC;                                    		// 0x0984 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RoundInfoTF;                                      		// 0x0988 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoMC;                                       		// 0x098C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFMC;                                    		// 0x0990 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFBackgroundMC;                          		// 0x0994 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFTeamCapsTF;                            		// 0x0998 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFEnemyCapsTF;                           		// 0x099C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFTeamHasFlagMC;                         		// 0x09A0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFEnemyHasFlagMC;                        		// 0x09A4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFTeamReturnMC;                          		// 0x09A8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFTeamReturnTF;                          		// 0x09AC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFEnemyReturnMC;                         		// 0x09B0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoCTFEnemyReturnTF;                         		// 0x09B4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoGenericMC;                                		// 0x09B8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoGenericBackgroundMC;                      		// 0x09BC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoGenericTeamLivesTF;                       		// 0x09C0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamInfoGenericEnemyLivesTF;                      		// 0x09C4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GameClockTimeTF;                                  		// 0x09C8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SteamDropDownMC;                                  		// 0x09CC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SteamDropDownButtons[ 0x3 ];                      		// 0x09D0 (0x000C) [0x0000000000000000]              
	unsigned long                                      ForScoreboard : 1;                                		// 0x09DC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsVisible : 1;                                    		// 0x09DC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      AreScoresInitialized : 1;                         		// 0x09DC (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              ScoresOffsetX;                                    		// 0x09E0 (0x0004) [0x0000000000000000]              
	TArray< int >                                      DevSteamWs;                                       		// 0x09E4 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45410 ];

		return pClassPointer;
	};

	void OnAddFriendSelect ( struct FEventData ev );
	void OnViewProfileSelect ( struct FEventData ev );
	void OnPlayerMuteChange ( struct FEventData ev );
	void MoveSteamDropDownToMouse ( );
	void GetPRIFromData ( struct FString DataString, class ADVPlayerReplicationInfo** TargetPRI );
	void OnPlayerClicked ( struct FEventData ev );
	void OnTeamSelected ( );
	bool CheckSwapToTeam ( unsigned char NewTeamNum );
	void OnDevotedPress ( struct FEventData ev );
	void OnZealousPress ( struct FEventData ev );
	void UpdateGenericTeamInfo ( class UClass* TheGameMode );
	void UpdateCTFTeamInfo ( );
	int SortPRIsByScore ( class APlayerReplicationInfo* PRI1, class APlayerReplicationInfo* PRI2 );
	void SetBackgroundColor ( class UGFxObject* TheLineBackground, unsigned char LineTeam, unsigned char PlayerTeam );
	void Tick ( float DeltaTime );
	void SteamDropDownInit ( class UGFxObject* NewSteamDropDownMC );
	void TeamSummaryInit ( class UGFxObject* NewTeamSummaryMC );
	void UpdatePlayerLine ( struct FSPlayerLineElement ThePlayerLine, class ADVPlayerReplicationInfo* UpdatePRI );
	void ClearPlayerLine ( struct FSPlayerLineElement ThePlayerLine );
	struct FSTeamElements ConfigPlayerSummaryForTeam ( struct FString CurTeamName );
	void ShowMessage ( struct FString TheMessageText );
	void SetVisibility ( unsigned long NewVisiblity );
	void PlayerSummaryInit ( class UGFxObject* NewPlayerSummaryMC, unsigned long NewForScoreboard );
};

UClass* UForgeGFxScoresSlide::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxScoreBoard
// 0x0194 (0x0B84 - 0x09F0)
class UForgeGFxScoreBoard : public UForgeGFxScoresSlide
{
public:
	class ADVHUD*                                      TheHUD;                                           		// 0x09F0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RootMC;                                           		// 0x09F4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScoresSlideMC;                                    		// 0x09F8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsContainerMC;                                 		// 0x09FC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsMC;                                          		// 0x0A00 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsTitleTF;                                     		// 0x0A04 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatKillsLabelTF;                                 		// 0x0A08 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatKillsTF;                                      		// 0x0A0C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatDeathsLabelTF;                                		// 0x0A10 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatDeathsTF;                                     		// 0x0A14 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatAssistsLabelTF;                               		// 0x0A18 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatAssistsTF;                                    		// 0x0A1C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatDamageDoneLabelTF;                            		// 0x0A20 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatDamageDoneTF;                                 		// 0x0A24 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatHealingDoneLabelTF;                           		// 0x0A28 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatHealingDoneTF;                                		// 0x0A2C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatProtectionDoneLabelTF;                        		// 0x0A30 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatProtectionDoneTF;                             		// 0x0A34 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatCapturesLabelTF;                              		// 0x0A38 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatCapturesTF;                                   		// 0x0A3C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatRelicDefensesLabelTF;                         		// 0x0A40 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatRelicDefensesTF;                              		// 0x0A44 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatBestKillStreakLabelTF;                        		// 0x0A48 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatBestKillStreakTF;                             		// 0x0A4C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatLongestLifeLabelTF;                           		// 0x0A50 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatLongestLifeTF;                                		// 0x0A54 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatBestAssistStreakLabelTF;                      		// 0x0A58 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatBestAssistStreakTF;                           		// 0x0A5C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatDamageTakenLabelTF;                           		// 0x0A60 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatDamageTakenTF;                                		// 0x0A64 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatHealingTakenLabelTF;                          		// 0x0A68 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatHealingTakenTF;                               		// 0x0A6C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatProtectionTakenLabelTF;                       		// 0x0A70 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatProtectionTakenTF;                            		// 0x0A74 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatBestCaptureStreakLabelTF;                     		// 0x0A78 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatBestCaptureStreakTF;                          		// 0x0A7C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatBestDefenseStreakLabelTF;                     		// 0x0A80 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatBestDefenseStreakTF;                          		// 0x0A84 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MedalsMC;                                         		// 0x0A88 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MedalsTitleTF;                                    		// 0x0A8C (0x0004) [0x0000000000000000]              
	struct FSMedalDetails                              MedalDetails[ 0xF ];                              		// 0x0A90 (0x00F0) [0x0000000000000000]              
	unsigned long                                      bInitialized : 1;                                 		// 0x0B80 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45409 ];

		return pClassPointer;
	};

	void ConfigForRes ( int SizeX, int SizeY );
	void Tick ( float DeltaTime );
	void SetVisibility ( unsigned long NewVisiblity );
	void PlayerSummaryInit ( class UGFxObject* NewPlayerSummaryMC, unsigned long NewForScoreboard );
	void ConfigScoreBoard ( );
	bool Start ( unsigned long StartPaused );
};

UClass* UForgeGFxScoreBoard::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxTeamSelect
// 0x0044 (0x0A34 - 0x09F0)
class UForgeGFxTeamSelect : public UForgeGFxScoresSlide
{
public:
	class ADVHUD*                                      TheHUD;                                           		// 0x09F0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RootMC;                                           		// 0x09F4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScoresSlideMC;                                    		// 0x09F8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ForgeLogoMC;                                      		// 0x09FC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CenterMC;                                         		// 0x0A00 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ChooseTeamMC;                                     		// 0x0A04 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ChooseTeamTF;                                     		// 0x0A08 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScoresAreaMC;                                     		// 0x0A0C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ZealousSlotsTF;                                   		// 0x0A10 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DevotedSlotsTF;                                   		// 0x0A14 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BottomMC;                                         		// 0x0A18 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SelectionButtonsMC;                               		// 0x0A1C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SpectateButtonCB;                                 		// 0x0A20 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              RandomButtonCB;                                   		// 0x0A24 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MessageMC;                                        		// 0x0A28 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MessageTF;                                        		// 0x0A2C (0x0004) [0x0000000000000000]              
	unsigned long                                      IsInAPlayingTeam : 1;                             		// 0x0A30 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInitialized : 1;                                 		// 0x0A30 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45412 ];

		return pClassPointer;
	};

	void OnTeamSelected ( );
	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	void OnRandomButtonPress ( struct FEventData ev );
	void OnSpectateButtonPress ( struct FEventData ev );
	void ConfigForRes ( int SizeX, int SizeY );
	void Tick ( float DeltaTime );
	void ShowMessage ( struct FString TheMessageText );
	void ConfigTeamSelect ( );
	bool Start ( unsigned long StartPaused );
};

UClass* UForgeGFxTeamSelect::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxClassSelect
// 0x00A4 (0x020C - 0x0168)
class UForgeGFxClassSelect : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TopMC;                                            		// 0x016C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SlideLeftCB;                                      		// 0x0170 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SlideRightCB;                                     		// 0x0174 (0x0004) [0x0000000000000000]              
	TArray< struct UForgeGFxClassSelect_FSClassSelectionButton > ClassButtons;                                     		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  CenterMC;                                         		// 0x0184 (0x0004) [0x0000000000000000]              
	class UForgeGFxSwappableIconObject*                HeroBackgroundSI;                                 		// 0x0188 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ClassDetailsMC;                                   		// 0x018C (0x0004) [0x0000000000000000]              
	class UForgeGFxSwappableIconObject*                ClassIconSI;                                      		// 0x0190 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ClassNameTF;                                      		// 0x0194 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ClassDescriptionTF;                               		// 0x0198 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ClassAbilitiesBarMC;                              		// 0x019C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              AbilityButtonCB[ 0x8 ];                           		// 0x01A0 (0x0020) [0x0000000000000000]              
	class UGFxObject*                                  AbilitiesTitleTF;                                 		// 0x01C0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityDetailsMC;                                 		// 0x01C4 (0x0004) [0x0000000000000000]              
	class UForgeGFxSwappableIconObject*                AbilityIconSI;                                    		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityNameTF;                                    		// 0x01CC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilityDescriptionTF;                             		// 0x01D0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BottomMC;                                         		// 0x01D4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SelectionButtonsMC;                               		// 0x01D8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              CancelButtonCB;                                   		// 0x01DC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SelectButtonCB;                                   		// 0x01E0 (0x0004) [0x0000000000000000]              
	unsigned char                                      ChosenClass;                                      		// 0x01E4 (0x0001) [0x0000000000000000]              
	int                                                ChosenAbility;                                    		// 0x01E8 (0x0004) [0x0000000000000000]              
	int                                                NumClassIconsDisplayed;                           		// 0x01EC (0x0004) [0x0000000000000000]              
	int                                                FirstClassIndexDisplayed;                         		// 0x01F0 (0x0004) [0x0000000000000000]              
	int                                                OldFirstClassIndexDisplayed;                      		// 0x01F4 (0x0004) [0x0000000000000000]              
	float                                              LastSlideTime;                                    		// 0x01F8 (0x0004) [0x0000000000000000]              
	float                                              MinSlideTime;                                     		// 0x01FC (0x0004) [0x0000000000000000]              
	int                                                UsablePixels;                                     		// 0x0200 (0x0004) [0x0000000000000000]              
	int                                                PaddingPixels;                                    		// 0x0204 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInitialized : 1;                                 		// 0x0208 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45414 ];

		return pClassPointer;
	};

	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	void SelectAbility ( int AbilitySlot );
	void OnClassButtonChange ( struct FEventData ev );
	void OnClassButtonPress ( struct FEventData ev );
	void OnAbilityButtonPress ( struct FEventData ev );
	void OnSelectButtonPress ( struct FEventData ev );
	void OnCancelButtonPress ( struct FEventData ev );
	void OnSlideRightPress ( struct FEventData ev );
	void OnSlideLeftPress ( struct FEventData ev );
	void ConfigForRes ( int SizeX, int SizeY );
	void Tick ( float DeltaTime );
	void ConfigureAbility ( int AbilityNumber );
	void ApplySteamCloudSettings ( );
	void ConfigForClass ( struct FString ClassName );
	struct UForgeGFxClassSelect_FSClassSelectionButton ConfigureClassButtonFor ( struct FString ClassName );
	void ConfigClassSelect ( );
	bool Start ( unsigned long StartPaused );
};

UClass* UForgeGFxClassSelect::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxEscapeMenu
// 0x005C (0x01D8 - 0x017C)
class UForgeGFxEscapeMenu : public UForgeGFxManager
{
public:
	class UGFxClikWidget*                              QuitNagCB;                                        		// 0x017C (0x0004) [0x0000000000000000]              
	class UForgeGFxQuitNagBackground*                  QuitNagImageMC;                                   		// 0x0180 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  QuitNagFeaturesTitleTF;                           		// 0x0184 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  QuitNagFeaturesListTF;                            		// 0x0188 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  QuitNagLinkTF;                                    		// 0x018C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  EscapeMenuMC;                                     		// 0x0190 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  EscapeMenuMaskMC;                                 		// 0x0194 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ChangeTeamCB;                                     		// 0x0198 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ChangeClassCB;                                    		// 0x019C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              AbilityBindCB;                                    		// 0x01A0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ExitToMenuCB;                                     		// 0x01A4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ExitGameCB;                                       		// 0x01A8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ConfirmWindowMC;                                  		// 0x01AC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ConfirmTextTF;                                    		// 0x01B0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ConfirmNoButtonCB;                                		// 0x01B4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ConfirmYesButtonCB;                               		// 0x01B8 (0x0004) [0x0000000000000000]              
	class UForgeGFxFrontEndSettings*                   SettingsMenuSL;                                   		// 0x01BC (0x0004) [0x0000000000000000]              
	struct FString                                     ConfiguredClass;                                  		// 0x01C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LastShownTime;                                    		// 0x01CC (0x0004) [0x0000000000000000]              
	float                                              AppearAnimationTime;                              		// 0x01D0 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsBindingKeys : 1;                                		// 0x01D4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      CapturingNewBind : 1;                             		// 0x01D4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsConfirmingExitMenu : 1;                         		// 0x01D4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      IsConfirmingExitGame : 1;                         		// 0x01D4 (0x0004) [0x0000000000000000] [0x00000008] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45416 ];

		return pClassPointer;
	};

	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	void OnQuitNagPress ( struct FEventData ev );
	void OnConfirmYesPress ( struct FEventData ev );
	void OnConfirmNoPress ( struct FEventData ev );
	void OnExitGamePress ( struct FEventData ev );
	void OnExitMenuPress ( struct FEventData ev );
	void OnSettingsPress ( struct FEventData ev );
	void OnChangeClassPress ( struct FEventData ev );
	void OnChangeTeamPress ( struct FEventData ev );
	void SlideInit ( class UGFxObject* NewSlideMC, struct FString NewSlideName );
	void ToggleEscapeMenuEnabled ( unsigned long ShouldBeEnabled );
	void SwapFromTo ( struct FString OldSlideName, struct FString NewSlideName );
	void Tick ( float DeltaTime );
	void ConfigForRes ( int SizeX, int SizeY );
	void ConfigEscapeMenu ( );
	bool Start ( unsigned long StartPaused );
};

UClass* UForgeGFxEscapeMenu::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxChat
// 0x0054 (0x01BC - 0x0168)
class UForgeGFxChat : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ChatMC;                                           		// 0x016C (0x0004) [0x0000000000000000]              
	class UForgeGFxChatTextInput*                      ChatInputCTI;                                     		// 0x0170 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ChatInputTF;                                      		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ChatModeMC;                                       		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ChatModeTF;                                       		// 0x017C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ChatScrollMC;                                     		// 0x0180 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ChatScrollSliderMC;                               		// 0x0184 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ChatItemsMC;                                      		// 0x0188 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ChatItemsMaskMC;                                  		// 0x018C (0x0004) [0x0000000000000000]              
	TArray< struct FSChatItem >                        ChatMessages;                                     		// 0x0190 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ChatDisplayTime;                                  		// 0x019C (0x0004) [0x0000000000000000]              
	unsigned long                                      ChatShouldDisplay : 1;                            		// 0x01A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ChatIsGlobal : 1;                                 		// 0x01A0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsTyping : 1;                                     		// 0x01A0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      CursorMode : 1;                                   		// 0x01A0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bInitialized : 1;                                 		// 0x01A0 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              ChatLastToggledAt;                                		// 0x01A4 (0x0004) [0x0000000000000000]              
	float                                              ChatHeight;                                       		// 0x01A8 (0x0004) [0x0000000000000000]              
	float                                              ChatHidePeriod;                                   		// 0x01AC (0x0004) [0x0000000000000000]              
	float                                              ChatScrollPos;                                    		// 0x01B0 (0x0004) [0x0000000000000000]              
	float                                              ChatVisibleHeight;                                		// 0x01B4 (0x0004) [0x0000000000000000]              
	int                                                TotalVisiblePixels;                               		// 0x01B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45418 ];

		return pClassPointer;
	};

	void DrawChatMessage ( struct FSChatItem NewChatItem );
	void ReDrawAllChatMessages ( );
	void AddSayMessage ( class APlayerReplicationInfo* SayingPRI, struct FString Message, struct FName MessageType );
	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	void StopChatting ( );
	void SendMessage ( );
	void StartChatting ( unsigned long WantsTeamChat );
	void ChatScrollDown ( );
	void ChatScrollUp ( );
	void ClearChat ( );
	void HideChat ( );
	void ShowChat ( );
	void ConfigForRes ( int SizeX, int SizeY );
	void Tick ( float DeltaTime );
	void ConfigChat ( );
	bool Start ( unsigned long StartPaused );
};

UClass* UForgeGFxChat::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxFrontEnd
// 0x00BC (0x0238 - 0x017C)
class UForgeGFxFrontEnd : public UForgeGFxManager
{
public:
	class UForgeGFxFrontEndMainMenu*                   MainMenuSL;                                       		// 0x017C (0x0004) [0x0000000000000000]              
	class UForgeGFxFrontEndSettings*                   SettingsMenuSL;                                   		// 0x0180 (0x0004) [0x0000000000000000]              
	class UForgeGFxFrontEndQuickMatchMenu*             QuickMatchMenuSL;                                 		// 0x0184 (0x0004) [0x0000000000000000]              
	class UForgeGFxFrontEndPlayMenu*                   PlayMenuSL;                                       		// 0x0188 (0x0004) [0x0000000000000000]              
	class UForgeGFxFrontEndJoinPlayerMenu*             JoinPlayerMenuSL;                                 		// 0x018C (0x0004) [0x0000000000000000]              
	class UForgeGFxFrontEndCommunityMenu*              CommunityMenuSL;                                  		// 0x0190 (0x0004) [0x0000000000000000]              
	class UForgeGFxFrontEndGroupMenu*                  GroupMenuSL;                                      		// 0x0194 (0x0004) [0x0000000000000000]              
	class UForgeGFxFrontEndAccountMenu*                AccountMenuSL;                                    		// 0x0198 (0x0004) [0x0000000000000000]              
	class UForgeGFxFrontEndCredits*                    CreditsSL;                                        		// 0x019C (0x0004) [0x0000000000000000]              
	class UForgeGFxFrontEndTrainingMenu*               TrainingMenuSL;                                   		// 0x01A0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  NotificationContainerMC;                          		// 0x01A4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  NotificationMC;                                   		// 0x01A8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  NotificationTF;                                   		// 0x01AC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  InviteContainerMC;                                		// 0x01B0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  InviteMC;                                         		// 0x01B4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  InviteTF;                                         		// 0x01B8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              InviteAcceptButtonCB;                             		// 0x01BC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              InviteDeclineButtonCB;                            		// 0x01C0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TerminateContainerMC;                             		// 0x01C4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TerminateMC;                                      		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TerminateTF;                                      		// 0x01CC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BarSlideBackgroundMC;                             		// 0x01D0 (0x0004) [0x0000000000000000]              
	struct FString                                     SwappingSlideName;                                		// 0x01D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SwappingOldSlideName;                             		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsSwappingViaSlide : 1;                           		// 0x01EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      NeedToShowBarBackground : 1;                      		// 0x01EC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsNotificationShown : 1;                          		// 0x01EC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      IsInviteShown : 1;                                		// 0x01EC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      IsGeneralShown : 1;                               		// 0x01EC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      IsTerminateShown : 1;                             		// 0x01EC (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      KickMessageShown : 1;                             		// 0x01EC (0x0004) [0x0000000000004000] [0x00000040] ( CPF_Config )
	float                                              LastNotificationTime;                             		// 0x01F0 (0x0004) [0x0000000000000000]              
	float                                              NotificationShowPeriod;                           		// 0x01F4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              LastInviteTime;                                   		// 0x01F8 (0x0004) [0x0000000000000000]              
	float                                              LastInviteHideTime;                               		// 0x01FC (0x0004) [0x0000000000000000]              
	float                                              InviteShowCenterPeriod;                           		// 0x0200 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              InviteShowTotalPeriod;                            		// 0x0204 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FUniqueNetId                                InviteGroupId;                                    		// 0x0208 (0x0008) [0x0000000000000000]              
	float                                              LastGeneralTime;                                  		// 0x0210 (0x0004) [0x0000000000000000]              
	float                                              GeneralShowCenterPeriod;                          		// 0x0214 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              GeneralShowTotalPeriod;                           		// 0x0218 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              LastTerminateTime;                                		// 0x021C (0x0004) [0x0000000000000000]              
	float                                              TerminateShowPeriod;                              		// 0x0220 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     KickMessage;                                      		// 0x0224 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              LastGetMessagesTime;                              		// 0x0230 (0x0004) [0x0000000000000000]              
	float                                              GetMessagesPeriod;                                		// 0x0234 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45479 ];

		return pClassPointer;
	};

	void ConnectTo ( struct FOnlineGameSearchResult TheMatchedServer );
	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	void ConfigForRes ( int SizeX, int SizeY );
	void ShowInvite ( struct FUniqueNetId GroupID, struct FString LeaderName );
	void ShowNotification ( struct FString TheMessage );
	void SetTerminateMessage ( struct FString TheMessage );
	void SetGeneralMessage ( struct FString TheMessage );
	void SetKickMessage ( struct FString NewKickMessage );
	void EnableJoinPlayerButtons ( );
	void DisableJoinPlayerButtons ( );
	void EnableQueueButtons ( );
	void DisableQueueButtons ( );
	void SetMenuFailMessage ( struct FString NewMenuFailMessage );
	void JoinLobby ( struct FUniqueNetId GroupID, TArray< struct FActiveLobbyInfo > LobbyList );
	void DeclineInvite ( struct FUniqueNetId GroupID );
	void AcceptInvite ( struct FUniqueNetId GroupID );
	void OnInviteDeclinePress ( struct FEventData ev );
	void OnInviteAcceptPress ( struct FEventData ev );
	void Tick ( float DeltaTime );
	class UForgeGFxFrontEndSlide* GetSlideByName ( struct FString SlideName );
	void SwapFromTo ( struct FString OldSlideName, struct FString NewSlideName );
	void SlideInit ( class UGFxObject* NewSlideMC, struct FString NewSlideName );
	void ConfigFrontEnd ( );
	bool Start ( unsigned long StartPaused );
};

UClass* UForgeGFxFrontEnd::pClassPointer = NULL;

// Class ForgeGame.DVNetworkLink
// 0x00D4 (0x02DC - 0x0208)
class ADVNetworkLink : public ATcpLink
{
public:
	struct FString                                     AuthHost;                                         		// 0x0208 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AuthPort;                                         		// 0x0214 (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentQueryType;                                 		// 0x0218 (0x0001) [0x0000000000000000]              
	struct FString                                     LineEnd;                                          		// 0x021C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ADVPlayerReplicationInfo*                    PlayerPRI;                                        		// 0x0228 (0x0004) [0x0000000000000000]              
	class APlayerReplicationInfo*                      PlainPlayerPRI;                                   		// 0x022C (0x0004) [0x0000000000000000]              
	int                                                WantedGameType;                                   		// 0x0230 (0x0004) [0x0000000000000000]              
	class UForgeGFxFrontEnd*                           TheMainMenu;                                      		// 0x0234 (0x0004) [0x0000000000000000]              
	class UForgeGFxHUD*                                TheHUD;                                           		// 0x0238 (0x0004) [0x0000000000000000]              
	struct FString                                     QueryString;                                      		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SenderId;                                         		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ReceiverId;                                       		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MessageTypeId;                                    		// 0x0260 (0x0004) [0x0000000000000000]              
	struct FString                                     MessageBody;                                      		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClassName;                                        		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DeltaXP;                                          		// 0x027C (0x0004) [0x0000000000000000]              
	struct FString                                     MedalJSON;                                        		// 0x0280 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MedalWinnerId;                                    		// 0x028C (0x0004) [0x0000000000000000]              
	struct FString                                     WinningPlayersJSON;                               		// 0x0290 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LosingPlayersJSON;                                		// 0x029C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ADVPlayerController*                         ThePC;                                            		// 0x02A8 (0x0004) [0x0000000000000000]              
	int                                                ClassId;                                          		// 0x02AC (0x0004) [0x0000000000000000]              
	int                                                NewSkinId;                                        		// 0x02B0 (0x0004) [0x0000000000000000]              
	struct FString                                     NewPlayerTitle;                                   		// 0x02B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PointSwapFrom;                                    		// 0x02C0 (0x0004) [0x0000000000000000]              
	int                                                PointSwapTo;                                      		// 0x02C4 (0x0004) [0x0000000000000000]              
	int                                                AchievementId;                                    		// 0x02C8 (0x0004) [0x0000000000000000]              
	struct FString                                     TheCode;                                          		// 0x02CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      LogWebServices : 1;                               		// 0x02D8 (0x0004) [0x0000000000004002] [0x00000001] ( CPF_Const | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45521 ];

		return pClassPointer;
	};

	void HandleAuthSteamPlayerResponse ( struct FString ResponseString );
	void HandleMessage ( class UJsonObject* TheMessage );
	void HandleMessages ( struct FString MessagesJSON );
	void eventReceivedText ( struct FString Text );
	struct FString GetContentFromHTTP ( struct FString PacketText );
	void eventOpened ( );
	struct FString GetPlayerStats ( );
	struct FString URLEncode ( struct FString URLString );
	void eventResolveFailed ( );
	void eventResolved ( struct FIpAddr Addr );
	void ConnectFailed ( );
	void InitNetworkLink ( unsigned char NewQueryType );
};

UClass* ADVNetworkLink::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxFrontEndSlideBar
// 0x000C (0x005C - 0x0050)
class UForgeGFxFrontEndSlideBar : public UForgeGFxFrontEndSlide
{
public:
	float                                              LastSlideStartTime;                               		// 0x0050 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsSlideIn : 1;                                    		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsSlideComplete : 1;                              		// 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      LastRemoveWasHide : 1;                            		// 0x0054 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              SlidingPeriod;                                    		// 0x0058 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45623 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void FixDisappearing ( );
	void SlideInSlide ( );
	void ShowSlide ( );
	void SlideOutSlide ( );
	void HideSlide ( );
};

UClass* UForgeGFxFrontEndSlideBar::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxFrontEndQuickMatchMenu
// 0x0048 (0x00A4 - 0x005C)
class UForgeGFxFrontEndQuickMatchMenu : public UForgeGFxFrontEndSlideBar
{
public:
	class UGFxObject*                                  QuickMatchMenuMC;                                 		// 0x005C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              QuickMatchMenuBackCB;                             		// 0x0060 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  QuickMatchMenuRegionTF;                           		// 0x0064 (0x0004) [0x0000000000000000]              
	class UForgeGFxSettingsDropDown*                   QuickMatchMenuRegionCDD;                          		// 0x0068 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  QuickMatchMenuTitleMC;                            		// 0x006C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  QuickMatchMenuTitleTF;                            		// 0x0070 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              QuickMatchMenuButtons[ 0x6 ];                     		// 0x0074 (0x0018) [0x0000000000000000]              
	unsigned long                                      RandomQueueAvailable : 1;                         		// 0x008C (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      TDMQueueAvailable : 1;                            		// 0x008C (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      CTFQueueAvailable : 1;                            		// 0x008C (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      KOTHQueueAvailable : 1;                           		// 0x008C (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )
	unsigned long                                      ArenaQueueAvailable : 1;                          		// 0x008C (0x0004) [0x0000000000004000] [0x00000010] ( CPF_Config )
	unsigned long                                      AssaultQueueAvailable : 1;                        		// 0x008C (0x0004) [0x0000000000004000] [0x00000020] ( CPF_Config )
	unsigned long                                      QueueButtonsDisabled : 1;                         		// 0x008C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      IsSearchingForServer : 1;                         		// 0x008C (0x0004) [0x0000000000000000] [0x00000080] 
	float                                              LastCheckedQueueButtons;                          		// 0x0090 (0x0004) [0x0000000000000000]              
	struct FString                                     ServerSearchQueue;                                		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ChosenRegionId;                                   		// 0x00A0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45622 ];

		return pClassPointer;
	};

	void ConnectTo ( struct FOnlineGameSearchResult TheMatchedServer );
	void HandleGameSearchResults ( TArray< struct FOnlineGameSearchResult > AllSearchResults );
	void SearchForServer ( struct FString GameModeQueue );
	void OnAssaultPress ( struct FEventData ev );
	void OnArenaPress ( struct FEventData ev );
	void OnKOTHPress ( struct FEventData ev );
	void OnCTFPress ( struct FEventData ev );
	void OnTDMPress ( struct FEventData ev );
	void OnRandomPress ( struct FEventData ev );
	void OnRegionChange ( struct FEventData ev );
	void OnBackPress ( struct FEventData ev );
	void Tick ( float DeltaTime );
	void EnableQueueButtons ( );
	void DisableQueueButtons ( );
	void ConfigSlide ( );
};

UClass* UForgeGFxFrontEndQuickMatchMenu::pClassPointer = NULL;

// Class ForgeGame.DVParticleEffectManager
// 0x0000 (0x01C8 - 0x01C8)
class ADVParticleEffectManager : public AParticleEventManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45633 ];

		return pClassPointer;
	};

	void eventHandleParticleModuleEventSendToGame ( class UParticleModuleEventSendToGame* InEvent, struct FVector* InCollideDirection, struct FVector* InHitLocation, struct FVector* InHitNormal, struct FName* InBoneName );
};

UClass* ADVParticleEffectManager::pClassPointer = NULL;

// Class ForgeGame.DVParticleModuleSpawnDecalGameEvent
// 0x000C (0x0048 - 0x003C)
class UDVParticleModuleSpawnDecalGameEvent : public UParticleModuleEventSendToGame
{
public:
	TArray< struct FSDecalData >                       Decals;                                           		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45641 ];

		return pClassPointer;
	};

	void eventDoEvent ( struct FVector* InCollideDirection, struct FVector* InHitLocation, struct FVector* InHitNormal, struct FName* InBoneName );
};

UClass* UDVParticleModuleSpawnDecalGameEvent::pClassPointer = NULL;

// Class ForgeGame.DVParticleSystemAttachment
// 0x0004 (0x01D0 - 0x01CC)
class ADVParticleSystemAttachment : public ADVAttachment
{
public:
	class UParticleSystemComponent*                    ParticleSystem;                                   		// 0x01CC (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45672 ];

		return pClassPointer;
	};

	void AttachToSocketOnSkeletalMeshComponent ( class USkeletalMeshComponent* BaseSkeletalMeshComponent, struct FName SocketName );
	void AttachToSocket ( class ADVPawn* DVPawn, struct FName SocketName );
	class UPrimitiveComponent* GetComponent ( );
};

UClass* ADVParticleSystemAttachment::pClassPointer = NULL;

// Class ForgeGame.DVPawnBoss
// 0x0000 (0x0604 - 0x0604)
class ADVPawnBoss : public ADVPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45690 ];

		return pClassPointer;
	};

};

UClass* ADVPawnBoss::pClassPointer = NULL;

// Class ForgeGame.DVPawnBossLich
// 0x0000 (0x0604 - 0x0604)
class ADVPawnBossLich : public ADVPawnBoss
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45696 ];

		return pClassPointer;
	};

};

UClass* ADVPawnBossLich::pClassPointer = NULL;

// Class ForgeGame.DVSeqEvent_ClassChanged
// 0x0000 (0x0114 - 0x0114)
class UDVSeqEvent_ClassChanged : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45902 ];

		return pClassPointer;
	};

};

UClass* UDVSeqEvent_ClassChanged::pClassPointer = NULL;

// Class ForgeGame.ForgeGameInfoArena
// 0x0014 (0x0514 - 0x0500)
class AForgeGameInfoArena : public AForgeGameInfo
{
public:
	float                                              TowerSpawnTime;                                   		// 0x0500 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              TugPerPlayer;                                     		// 0x0504 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class ADVTower*                                    ArenaTower;                                       		// 0x0508 (0x0004) [0x0000000000000000]              
	unsigned long                                      WarnedAboutTower : 1;                             		// 0x050C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GameWonAt;                                        		// 0x0510 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45903 ];

		return pClassPointer;
	};

	void CheckTowerActivation ( );
	class APawn* SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot );
	unsigned char WinningTeamId ( );
	void OneTimeMapSetup ( );
	bool MatchFinished ( );
	void ScoreKill ( class AController* Killer, class AController* Other );
};

UClass* AForgeGameInfoArena::pClassPointer = NULL;

// Class ForgeGame.DVTower
// 0x0048 (0x0210 - 0x01C8)
class ADVTower : public AActor
{
public:
	struct FString                                     TowerName;                                        		// 0x01C8 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      UncountedOverage;                                 		// 0x01D4 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      ExtraPoints;                                      		// 0x01D5 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      CappedExtraPoints;                                		// 0x01D6 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      OwningTeam;                                       		// 0x01D7 (0x0001) [0x0000000000000000]              
	float                                              TugPerPlayer;                                     		// 0x01D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Ownership;                                        		// 0x01DC (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              TugRadius;                                        		// 0x01E0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DistanceToDecap;                                  		// 0x01E4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UParticleSystemComponent*                    ParticleSystemComponent;                          		// 0x01E8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ParticlesScale;                                   		// 0x01EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ParticleSystemTemplate;                           		// 0x01F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsEnabled : 1;                                    		// 0x01F4 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      IsDying : 1;                                      		// 0x01F4 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	TArray< class ADVPawnHero* >                       Team0Cappers;                                     		// 0x01F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ADVPawnHero* >                       Team1Cappers;                                     		// 0x0204 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45958 ];

		return pClassPointer;
	};

	void Deactivate ( );
	void Activate ( );
	void ResetForNewRound ( );
	void SetOwningTeam ( );
	void Tick ( float DeltaTime );
	void GiveTuggersCredit ( );
	void CheckTuggerValidity ( );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void PostBeginPlay ( );
};

UClass* ADVTower::pClassPointer = NULL;

// Class ForgeGame.ForgeOnlineStatsWrite
// 0x0000 (0x0088 - 0x0088)
class UForgeOnlineStatsWrite : public UOnlineStatsWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46048 ];

		return pClassPointer;
	};

};

UClass* UForgeOnlineStatsWrite::pClassPointer = NULL;

// Class ForgeGame.ForgeOnlineStatsRead
// 0x0000 (0x0088 - 0x0088)
class UForgeOnlineStatsRead : public UOnlineStatsRead
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46050 ];

		return pClassPointer;
	};

	struct FString GetGlobalStats ( struct FUniqueNetId PlayerUniqueId, int ColumnId );
	struct FString GetStatsForClass ( struct FUniqueNetId PlayerUniqueId, struct FString ChosenClass );
	struct FString FormatTimeStat ( int StatValue );
	struct FString FormatCountStat ( int StatValue );
};

UClass* UForgeOnlineStatsRead::pClassPointer = NULL;

// Class ForgeGame.DVPlayerStartOptional
// 0x000C (0x02BC - 0x02B0)
class ADVPlayerStartOptional : public APlayerStart
{
public:
	struct FString                                     AvailableInGameType;                              		// 0x02B0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46249 ];

		return pClassPointer;
	};

};

UClass* ADVPlayerStartOptional::pClassPointer = NULL;

// Class ForgeGame.DVProjectileHook
// 0x0018 (0x0250 - 0x0238)
class ADVProjectileHook : public ADVProjectile
{
public:
	class UParticleSystem*                             ChainBeam;                                        		// 0x0238 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BeamEndPointName;                                 		// 0x023C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ChainSocket;                                      		// 0x0244 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    BeamEmitter;                                      		// 0x024C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46253 ];

		return pClassPointer;
	};

	void AddParticleEmitter ( class APawn* Hero );
	void KillPartcleEmitter ( );
	void UpdateBeamEmitter ( struct FVector EndLocation );
	void Tick ( float DeltaTime );
	void Destoryed ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void ProjectileHoming ( );
};

UClass* ADVProjectileHook::pClassPointer = NULL;

// Class ForgeGame.DVRavagerChainAttachment
// 0x0014 (0x01E4 - 0x01D0)
class ADVRavagerChainAttachment : public ADVParticleSystemAttachment
{
public:
	struct FName                                       EndSocketName;                                    		// 0x01D0 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       ChainEndParameterName;                            		// 0x01D8 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ADVPawn*                                     AttachedPawn;                                     		// 0x01E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46275 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void AttachToSocket ( class ADVPawn* DVPawn, struct FName SocketName );
};

UClass* ADVRavagerChainAttachment::pClassPointer = NULL;

// Class ForgeGame.DVSeqAct_AssignTeam
// 0x0008 (0x0104 - 0x00FC)
class UDVSeqAct_AssignTeam : public USequenceAction
{
public:
	unsigned char                                      TeamIndex;                                        		// 0x00FC (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class APawn*                                       ThePawn;                                          		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46288 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDVSeqAct_AssignTeam::pClassPointer = NULL;

// Class ForgeGame.DVSeqAct_ChangeBotHealth
// 0x000C (0x0108 - 0x00FC)
class UDVSeqAct_ChangeBotHealth : public USequenceAction
{
public:
	class ADVDummyController*                          BotController;                                    		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVPawnHero*                                 BotPawn;                                          		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HealthChange;                                     		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46293 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDVSeqAct_ChangeBotHealth::pClassPointer = NULL;

// Class ForgeGame.DVSeqAct_ChangeBotSkill
// 0x0009 (0x0105 - 0x00FC)
class UDVSeqAct_ChangeBotSkill : public USequenceAction
{
public:
	class ADVAIController*                             BotController;                                    		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADVPawnHero*                                 BotPawn;                                          		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      NewSkillLevel;                                    		// 0x0104 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46299 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDVSeqAct_ChangeBotSkill::pClassPointer = NULL;

// Class ForgeGame.DVSeqAct_DrawText
// 0x0024 (0x0120 - 0x00FC)
class UDVSeqAct_DrawText : public USequenceAction
{
public:
	struct FString                                     TheMessage;                                       		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DisplayTime;                                      		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FontSize;                                         		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     KeyCommand;                                       		// 0x0110 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class AActor*                                      TargetActor;                                      		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46305 ];

		return pClassPointer;
	};

	void eventReset ( );
	void eventActivated ( );
};

UClass* UDVSeqAct_DrawText::pClassPointer = NULL;

// Class ForgeGame.DVSeqAct_GetTeamNumber
// 0x0008 (0x0104 - 0x00FC)
class UDVSeqAct_GetTeamNumber : public USequenceAction
{
public:
	unsigned char                                      TeamIndex;                                        		// 0x00FC (0x0001) [0x0000000000000000]              
	class AController*                                 ThePlayer;                                        		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46319 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDVSeqAct_GetTeamNumber::pClassPointer = NULL;

// Class ForgeGame.DVSeqAct_HideHUDMessage
// 0x0000 (0x00FC - 0x00FC)
class UDVSeqAct_HideHUDMessage : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46324 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDVSeqAct_HideHUDMessage::pClassPointer = NULL;

// Class ForgeGame.DVSeqAct_LockAbility
// 0x0008 (0x0104 - 0x00FC)
class UDVSeqAct_LockAbility : public USequenceAction
{
public:
	unsigned char                                      AbilitySlot;                                      		// 0x00FC (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      LockAbility : 1;                                  		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46328 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDVSeqAct_LockAbility::pClassPointer = NULL;

// Class ForgeGame.DVSeqAct_ResetKismet
// 0x0000 (0x00FC - 0x00FC)
class UDVSeqAct_ResetKismet : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46334 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDVSeqAct_ResetKismet::pClassPointer = NULL;

// Class ForgeGame.DVSeqAct_SetAbilityCooldowns
// 0x0004 (0x0100 - 0x00FC)
class UDVSeqAct_SetAbilityCooldowns : public USequenceAction
{
public:
	unsigned long                                      AbilitiesHaveCooldowns : 1;                       		// 0x00FC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46341 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDVSeqAct_SetAbilityCooldowns::pClassPointer = NULL;

// Class ForgeGame.DVSeqAct_SetTeamSpawn
// 0x0008 (0x0104 - 0x00FC)
class UDVSeqAct_SetTeamSpawn : public USequenceAction
{
public:
	unsigned char                                      TargetTeam;                                       		// 0x00FC (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UObject*                                     NewSpawnPoint;                                    		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46347 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDVSeqAct_SetTeamSpawn::pClassPointer = NULL;

// Class ForgeGame.DVSeqAct_ShowHUDMessage
// 0x001C (0x0118 - 0x00FC)
class UDVSeqAct_ShowHUDMessage : public USequenceAction
{
public:
	struct FString                                     TheMessage;                                       		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DisplayPeriod;                                    		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     KeyCommand;                                       		// 0x010C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46354 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDVSeqAct_ShowHUDMessage::pClassPointer = NULL;

// Class ForgeGame.DVSeqAct_TutorialSectionComplete
// 0x0001 (0x00FD - 0x00FC)
class UDVSeqAct_TutorialSectionComplete : public USequenceAction
{
public:
	unsigned char                                      TutorialSection;                                  		// 0x00FC (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46364 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDVSeqAct_TutorialSectionComplete::pClassPointer = NULL;

// Class ForgeGame.DVSeqCond_ComparePlayerClass
// 0x0000 (0x00E4 - 0x00E4)
class UDVSeqCond_ComparePlayerClass : public USequenceCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46372 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDVSeqCond_ComparePlayerClass::pClassPointer = NULL;

// Class ForgeGame.DVSeqCond_ComparePlayerTeam
// 0x0004 (0x00E8 - 0x00E4)
class UDVSeqCond_ComparePlayerTeam : public USequenceCondition
{
public:
	class AController*                                 ThePlayer;                                        		// 0x00E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46376 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDVSeqCond_ComparePlayerTeam::pClassPointer = NULL;

// Class ForgeGame.DVSeqEvent_Input
// 0x0001 (0x0129 - 0x0128)
class UDVSeqEvent_Input : public USeqEvent_Input
{
public:
	unsigned char                                      ActionToLookFor;                                  		// 0x0128 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46381 ];

		return pClassPointer;
	};

	void Setup ( );
	void eventToggled ( );
};

UClass* UDVSeqEvent_Input::pClassPointer = NULL;

// Class ForgeGame.DVSeqVar_HumanPlayer
// 0x0004 (0x00CC - 0x00C8)
class UDVSeqVar_HumanPlayer : public USeqVar_Player
{
public:
	unsigned long                                      ThisIsHumans : 1;                                 		// 0x00C8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46394 ];

		return pClassPointer;
	};

	class UObject* GetObjectValue ( );
};

UClass* UDVSeqVar_HumanPlayer::pClassPointer = NULL;

// Class ForgeGame.DVStaticMeshAttachment
// 0x0004 (0x01E0 - 0x01DC)
class ADVStaticMeshAttachment : public ADVMeshAttachment
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                              		// 0x01DC (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46458 ];

		return pClassPointer;
	};

	class UPrimitiveComponent* GetComponent ( );
};

UClass* ADVStaticMeshAttachment::pClassPointer = NULL;

// Class ForgeGame.DVTeamInfo
// 0x0010 (0x01F4 - 0x01E4)
class ADVTeamInfo : public ATeamInfo
{
public:
	int                                                Kills;                                            		// 0x01E4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                Deaths;                                           		// 0x01E8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                Captures;                                         		// 0x01EC (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ADVFlag*                                     Flag;                                             		// 0x01F0 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46464 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
};

UClass* ADVTeamInfo::pClassPointer = NULL;

// Class ForgeGame.ForgeClassRewardLevels
// 0x000C (0x0048 - 0x003C)
class UForgeClassRewardLevels : public UObject
{
public:
	TArray< struct FSXPClassRewards >                  ClassRewards;                                     		// 0x003C (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46530 ];

		return pClassPointer;
	};

};

UClass* UForgeClassRewardLevels::pClassPointer = NULL;

// Class ForgeGame.ForgeOnlineGameSettings
// 0x0008 (0x00B4 - 0x00AC)
class UForgeOnlineGameSettings : public UOnlineGameSettings
{
public:
	int                                                ServerGlobalAveragedSkill;                        		// 0x00AC (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                ReservedSlots;                                    		// 0x00B0 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46547 ];

		return pClassPointer;
	};

	void UpdateForgeGameSettings ( );
	void UpdateFromURL ( class AGameInfo* Game, struct FString* URL );
};

UClass* UForgeOnlineGameSettings::pClassPointer = NULL;

// Class ForgeGame.ForgeGameInfoAssault
// 0x0000 (0x0500 - 0x0500)
class AForgeGameInfoAssault : public AForgeGameInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46792 ];

		return pClassPointer;
	};

	void OneTimeMapSetup ( );
};

UClass* AForgeGameInfoAssault::pClassPointer = NULL;

// Class ForgeGame.ForgeGameInfoFrontEnd
// 0x0000 (0x0374 - 0x0374)
class AForgeGameInfoFrontEnd : public AGameInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46866 ];

		return pClassPointer;
	};

	void RestartPlayer ( class AController* NewPlayer );
};

UClass* AForgeGameInfoFrontEnd::pClassPointer = NULL;

// Class ForgeGame.ForgeGameInfoKOTH
// 0x0014 (0x0514 - 0x0500)
class AForgeGameInfoKOTH : public AForgeGameInfo
{
public:
	int                                                WinningPoints;                                    		// 0x0500 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              PointsPeriod;                                     		// 0x0504 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ControlledTowerPoints;                            		// 0x0508 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CapturedTowerPoints;                              		// 0x050C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              LastScoredTowers;                                 		// 0x0510 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46870 ];

		return pClassPointer;
	};

	void ScoreTowers ( );
	unsigned char WinningTeamId ( );
	void OneTimeMapSetup ( );
	bool MatchFinished ( );
	void eventPostBeginPlay ( );
};

UClass* AForgeGameInfoKOTH::pClassPointer = NULL;

// Class ForgeGame.ForgeGameInfoTDM
// 0x0008 (0x0508 - 0x0500)
class AForgeGameInfoTDM : public AForgeGameInfo
{
public:
	int                                                DeathsAllowed;                                    		// 0x0500 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpawnWaveTimer;                                   		// 0x0504 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46899 ];

		return pClassPointer;
	};

	unsigned char WinningTeamId ( );
	void OneTimeMapSetup ( );
	bool MatchFinished ( );
	void ScoreKill ( class AController* Killer, class AController* Other );
	void eventPostBeginPlay ( );
};

UClass* AForgeGameInfoTDM::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxChatTextInput
// 0x0000 (0x0084 - 0x0084)
class UForgeGFxChatTextInput : public UGFxClikWidget
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46972 ];

		return pClassPointer;
	};

	void SetTextSize ( float NewTextSize );
};

UClass* UForgeGFxChatTextInput::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxSwappableIconObject
// 0x0000 (0x0078 - 0x0078)
class UForgeGFxSwappableIconObject : public UGFxObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47066 ];

		return pClassPointer;
	};

	void ChangeIconImage ( struct FString NewIconName, int IconWidth, int IconHeight );
};

UClass* UForgeGFxSwappableIconObject::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxQuitNagBackground
// 0x0000 (0x0078 - 0x0078)
class UForgeGFxQuitNagBackground : public UGFxObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47178 ];

		return pClassPointer;
	};

	void SetLetterSpacing ( int NewLetterSpacing );
};

UClass* UForgeGFxQuitNagBackground::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxFrontEndTrainingMenu
// 0x0018 (0x0074 - 0x005C)
class UForgeGFxFrontEndTrainingMenu : public UForgeGFxFrontEndSlideBar
{
public:
	class UGFxObject*                                  TrainingMenuMC;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              TrainingMenuBackCB;                               		// 0x0060 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TrainingMenuTitleMC;                              		// 0x0064 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TrainingMenuTitleTF;                              		// 0x0068 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              TrainingMenuButtons[ 0x2 ];                       		// 0x006C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47274 ];

		return pClassPointer;
	};

	void OnBotMatchPress ( struct FEventData ev );
	void OnTutorialPress ( struct FEventData ev );
	void OnBackPress ( struct FEventData ev );
	void ConfigSlide ( );
};

UClass* UForgeGFxFrontEndTrainingMenu::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxFrontEndCredits
// 0x0010 (0x0060 - 0x0050)
class UForgeGFxFrontEndCredits : public UForgeGFxFrontEndSlide
{
public:
	class UGFxObject*                                  CreditsMC;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  QuitTF;                                           		// 0x0054 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CreditsScrollMC;                                  		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              AnimationStart;                                   		// 0x005C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47276 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void ConfigForRes ( int SizeX, int SizeY );
	void ShowSlide ( );
	void ConfigSlide ( );
};

UClass* UForgeGFxFrontEndCredits::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxFrontEndAccountMenu
// 0x096C (0x09BC - 0x0050)
class UForgeGFxFrontEndAccountMenu : public UForgeGFxFrontEndSlide
{
public:
	class UGFxObject*                                  AccountMenuMC;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AccountAreaMC;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AccountXPTitleTF;                                 		// 0x0058 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AccountXPTF;                                      		// 0x005C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AccountStatsTitleTF;                              		// 0x0060 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AccountStatsDetails1TF;                           		// 0x0064 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AccountStatsDetails2TF;                           		// 0x0068 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AccountStatsDetails3TF;                           		// 0x006C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AccountStatsDetails4TF;                           		// 0x0070 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AccountStatsDetails5TF;                           		// 0x0074 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AvatarAreaMC;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AvatarAvatarMC;                                   		// 0x007C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AvatarAvatarLoaderMC;                             		// 0x0080 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AvatarAccountNameTF;                              		// 0x0084 (0x0004) [0x0000000000000000]              
	class UForgeGFxSettingsDropDown*                   AvatarAccountTitleCDD;                            		// 0x0088 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AvatarGuildNameTF;                                		// 0x008C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AvatarFriendsTF;                                  		// 0x0090 (0x0004) [0x0000000000000000]              
	struct FString                                     CurrentTitle;                                     		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AvailableTitles;                                  		// 0x00A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  ClassesAreaMC;                                    		// 0x00AC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ClassesTitleTF;                                   		// 0x00B0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SlideLeftCB;                                      		// 0x00B4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SlideRightCB;                                     		// 0x00B8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TabsAreaMC;                                       		// 0x00BC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ClassAreaTabs[ 0x4 ];                             		// 0x00C0 (0x0010) [0x0000000000000000]              
	class UGFxObject*                                  XPAreaMC;                                         		// 0x00D0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  XPBarAreaMC;                                      		// 0x00D4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ExperienceTitleTF;                                		// 0x00D8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ExperienceDescriptionTF;                          		// 0x00DC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ExperienceToSpendTF;                              		// 0x00E0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ExperiencePointsTF;                               		// 0x00E4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ClassLevelMC;                                     		// 0x00E8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ClassLevelTextTF;                                 		// 0x00EC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  XPBarMC;                                          		// 0x00F0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  XPBarMaskMC;                                      		// 0x00F4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              BuyLevelButtonCB;                                 		// 0x00F8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  XPRewardsAreaMC;                                  		// 0x00FC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  XPRewardsTitleTF;                                 		// 0x0100 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  XPRewardsDescriptionTF;                           		// 0x0104 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  XPRewardsLevelRequiredTF;                         		// 0x0108 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  XPRewardsLevelsMC;                                		// 0x010C (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        XPRewardsLevelsItemsThin;                         		// 0x0110 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        XPRewardsLevelsItemsAbility;                      		// 0x011C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UForgeGFxManualScrollBar*                    XPRewardsScrollCSB;                               		// 0x0128 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TipsAreaMC;                                       		// 0x012C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TipDetailsMC;                                     		// 0x0130 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TipTitleTF;                                       		// 0x0134 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TipDescription;                                   		// 0x0138 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilitiesAreaMC;                                  		// 0x013C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilitiesTitleTF;                                 		// 0x0140 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilitiesDescriptionTF;                           		// 0x0144 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilitiesAbilityTitleTF;                          		// 0x0148 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AbilitiesAbilitiesMC;                             		// 0x014C (0x0004) [0x0000000000000000]              
	struct FSAbilityFocusLine                          AbilityFocusLines[ 0x6 ];                         		// 0x0150 (0x0288) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UForgeGFxManualScrollBar*                    AbilitiesScrollCSB;                               		// 0x03D8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsAreaMC;                                      		// 0x03DC (0x0004) [0x0000000000000000]              
	struct FSClassStatPoints                           ClassStatPointDetails[ 0x5 ];                     		// 0x03E0 (0x01B8) [0x0000000000000000]              
	class UGFxObject*                                  StatsAreaNameTF;                                  		// 0x0598 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              StatsAreaSubTabs[ 0x2 ];                          		// 0x059C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  StatsASPAreaMC;                                   		// 0x05A4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsASPArmorTotalTF;                             		// 0x05A8 (0x0004) [0x0000000000000000]              
	struct FString                                     StatsASPArmorTotalTextCache;                      		// 0x05AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  StatsASPSpeedTotalTF;                             		// 0x05B8 (0x0004) [0x0000000000000000]              
	struct FString                                     StatsASPSpeedTotalTextCache;                      		// 0x05BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  StatsASPEnergyTotalTF;                            		// 0x05C8 (0x0004) [0x0000000000000000]              
	struct FString                                     StatsASPEnergyTotalTextCache;                     		// 0x05CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  StatsASPAvailableTF;                              		// 0x05D8 (0x0004) [0x0000000000000000]              
	struct FString                                     StatsASPAvailableTextCache;                       		// 0x05DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  StatsASPAvailableDescriptionTF;                   		// 0x05E8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsASPArmorTitleTF;                             		// 0x05EC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsASPArmorDifferenceTF;                        		// 0x05F0 (0x0004) [0x0000000000000000]              
	struct FString                                     StatsASPArmorDifferenceTextCache;                 		// 0x05F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              StatsASPArmorMinusCB;                             		// 0x0600 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              StatsASPArmorPlusCB;                              		// 0x0604 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsASPArmorDescriptionTF;                       		// 0x0608 (0x0004) [0x0000000000000000]              
	struct FSArmorPointsLine                           StatsASPArmorLines[ 0x4 ];                        		// 0x060C (0x00F0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  StatsASPSpeedTitleTF;                             		// 0x06FC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsASPSpeedDifferenceTF;                        		// 0x0700 (0x0004) [0x0000000000000000]              
	struct FString                                     StatsASPSpeedDifferenceTextCache;                 		// 0x0704 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              StatsASPSpeedMinusCB;                             		// 0x0710 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              StatsASPSpeedPlusCB;                              		// 0x0714 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsASPSpeedDescriptionTF;                       		// 0x0718 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsASPEnergyTitleTF;                            		// 0x071C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsASPEnergyDifferenceTF;                       		// 0x0720 (0x0004) [0x0000000000000000]              
	struct FString                                     StatsASPEnergyDifferenceTextCache;                		// 0x0724 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              StatsASPEnergyMinusCB;                            		// 0x0730 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              StatsASPEnergyPlusCB;                             		// 0x0734 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsASPEnergyDescriptionTF;                      		// 0x0738 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ASPResetCB;                                       		// 0x073C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ASPApplyCB;                                       		// 0x0740 (0x0004) [0x0000000000000000]              
	float                                              LastUpdatedASP;                                   		// 0x0744 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsArmorAreaMC;                                 		// 0x0748 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsArmorSummaryMC;                              		// 0x074C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsArmorSummaryPointsTF;                        		// 0x0750 (0x0004) [0x0000000000000000]              
	struct FString                                     StatsArmorSummaryPointsTextCache;                 		// 0x0754 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  StatsArmorSummaryTitleTF;                         		// 0x0760 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatsArmorSummaryDescriptionTF;                   		// 0x0764 (0x0004) [0x0000000000000000]              
	struct FSArmorPointsLine                           StatsArmorLines[ 0x4 ];                           		// 0x0768 (0x00F0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              ArmorResetCB;                                     		// 0x0858 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ArmorApplyCB;                                     		// 0x085C (0x0004) [0x0000000000000000]              
	float                                              LastUpdatedArmor;                                 		// 0x0860 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  EquipmentAreaMC;                                  		// 0x0864 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  EquipmentTitleTF;                                 		// 0x0868 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  EquipmentDescriptionTF;                           		// 0x086C (0x0004) [0x0000000000000000]              
	struct FSEquipmentSlot                             EquipmentSlots[ 0x7 ];                            		// 0x0870 (0x0070) [0x0000000000000000]              
	class UGFxClikWidget*                              ChangeSkinCB;                                     		// 0x08E0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  EquipmentSkinPopupMC;                             		// 0x08E4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  EquipmentSkinRenderMC;                            		// 0x08E8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  EquipmentSkinTempMC;                              		// 0x08EC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              EquipmentSkinPrevCB;                              		// 0x08F0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              EquipmentSkinNextCB;                              		// 0x08F4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              EquipmentSkinApplyCB;                             		// 0x08F8 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsSkinPreviewOpen : 1;                            		// 0x08FC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      SpendingIsASP : 1;                                		// 0x08FC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsCapturingMouseMovement : 1;                     		// 0x08FC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      CloudDirty : 1;                                   		// 0x08FC (0x0004) [0x0000000000000000] [0x00000008] 
	class UForgeClassRewardLevels*                     ClassRewardLevels;                                		// 0x0900 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ClassStatsAreaMC;                                 		// 0x0904 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ClassStatsTitleTF;                                		// 0x0908 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ClassStatsDetailsTF;                              		// 0x090C (0x0004) [0x0000000000000000]              
	class UForgeGFxSwappableIconObject*                ClassStatsPortraitSI;                             		// 0x0910 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              BackButtonCB;                                     		// 0x0914 (0x0004) [0x0000000000000000]              
	int                                                AvailableXP;                                      		// 0x0918 (0x0004) [0x0000000000000000]              
	int                                                TotalXPEarned;                                    		// 0x091C (0x0004) [0x0000000000000000]              
	TArray< struct UForgeGFxFrontEndAccountMenu_FSClassSelectionButton > ClassButtons;                                     		// 0x0920 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SpendingFromCategoryId;                           		// 0x092C (0x0004) [0x0000000000000000]              
	int                                                SpendingToCategoryId;                             		// 0x0930 (0x0004) [0x0000000000000000]              
	struct FString                                     ChosenClass;                                      		// 0x0934 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ChosenTab;                                        		// 0x0940 (0x0004) [0x0000000000000000]              
	class ASceneCapture2DActor*                        EquipmentSkinPreviewCamera;                       		// 0x0944 (0x0004) [0x0000000000000000]              
	float                                              CameraZOffset;                                    		// 0x0948 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   LastMousePosition;                                		// 0x094C (0x0008) [0x0000000000000000]              
	struct FRotator                                    DesiredPreviewCameraRotation;                     		// 0x0954 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CurrentPreviewCameraRotation;                     		// 0x0960 (0x000C) [0x0000000000000000]              
	float                                              DesiredPreviewCameraDistance;                     		// 0x096C (0x0004) [0x0000000000000000]              
	float                                              CurrentPreviewCameraDistance;                     		// 0x0970 (0x0004) [0x0000000000000000]              
	struct FSClassSkinsAvailable                       ClassSkinsAvailable[ 0x5 ];                       		// 0x0974 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      CurrentPreviewSkin;                               		// 0x09B0 (0x0001) [0x0000000000000000]              
	int                                                ResX;                                             		// 0x09B4 (0x0004) [0x0000000000000000]              
	int                                                ResY;                                             		// 0x09B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47277 ];

		return pClassPointer;
	};

	void UpdateStatPoints ( int TheClassId, class UJsonObject* TheStatPointDetails );
	void UpdateAvailableTitles ( struct FString TheAvailableTitles );
	void UpdateSkinOptions ( int TheClassId, struct FString TheSkinOptions );
	void UpdateAccountDetails ( class UJsonObject* TheNewAccountDetails );
	void SpendCustomizationPoint ( int PlayerClassId, int FromCategoryId, int ToCategoryId );
	void SpendArmorPoint ( int PlayerClassId, int FromCategoryId, int ToCategoryId );
	void GetUpdatedStatPointsForClass ( int PlayerClassId );
	void GetUpdatedStatPoints ( );
	void SetPlayerTitle ( struct FString NewTitle );
	void GetUpdatedPlayerTitles ( );
	void SetPlayerSkinForClass ( unsigned char ThePlayerClass, int TheSkinId );
	void GetUpdatedPlayerSkinsForClass ( unsigned char ThePlayerClass );
	void GetUpdatedPlayerSkins ( );
	void GetUpdatedAccountDetails ( );
	void UpdateArmorSubTab ( );
	void UpdateASPSubTab ( );
	struct FString ColorizeArmorDifference ( int Difference, unsigned long IsActive );
	struct FString ColorizeArmor ( int Base, int Difference, unsigned long IsActive );
	struct FString DetailedColorizeSpeed ( float Value, unsigned long IsActive );
	struct FString DetailedColorizeInt ( int Value, unsigned long IsActive );
	struct FString ColorizeInt ( int Value, unsigned long IsActive );
	void Tick ( float DeltaTime );
	void OnClassButtonChange ( struct FEventData ev );
	void OnClassButtonPress ( struct FEventData ev );
	void OnBackPress ( struct FEventData ev );
	void OnAbilityFocusPressed ( struct FEventData ev );
	void OnSkinApplyPress ( struct FEventData ev );
	void OnSkinNextPress ( struct FEventData ev );
	void OnSkinPrevPress ( struct FEventData ev );
	void OnChangeSkinPress ( struct FEventData ev );
	void OnBuyLevelPress ( struct FEventData ev );
	bool HandleScrollDown ( );
	bool HandleScrollUp ( );
	void HandlePasteCommand ( );
	void HandleCopyCommand ( );
	void HandleCutCommand ( );
	void ConfigForRes ( int SizeX, int SizeY );
	void OnArmorApplyPress ( struct FEventData ev );
	void OnArmorResetPress ( struct FEventData ev );
	void OnArmorPlusPress ( struct FEventData ev );
	void OnArmorMinusPress ( struct FEventData ev );
	void OnASPApplyPress ( struct FEventData ev );
	void OnASPResetPress ( struct FEventData ev );
	void OnASPPlusPress ( struct FEventData ev );
	void OnASPMinusPress ( struct FEventData ev );
	int GetSpendingCategoryIdFromButtonData ( struct FString ButtonData );
	void OnEquipmentTabPress ( struct FEventData ev );
	void OnArmorSubTabPress ( struct FEventData ev );
	void OnASPSubTabPress ( struct FEventData ev );
	void OnStatsTabPress ( struct FEventData ev );
	void OnAbilitiesTabPress ( struct FEventData ev );
	void OnExperienceTabPress ( struct FEventData ev );
	void ShowTip ( struct FString TipName, unsigned long ShowFlash );
	void ResetTips ( unsigned long ShowFlash );
	void FlashTips ( );
	void ShowSlide ( );
	void HideSlide ( );
	bool FilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	void OnPlayerTitleChange ( struct FEventData ev );
	void OnSlideRightPress ( struct FEventData ev );
	void OnSlideLeftPress ( struct FEventData ev );
	void ScrollToReward ( int NewLevelNumber );
	void SetAvatar ( );
	void SetPreviewSkin ( class ADVDummyPreviewController* PreviewController );
	void UpdateSkins ( );
	void ConfigureSkinPreview ( struct FString ClassName );
	void SetPreviewMeshLODLevels ( );
	void ConfigureXPRewards ( );
	void ConfigureAbilityFocuses ( struct FString ClassName );
	int GetRequiredLevelForAbility ( struct FString OwningClassName, unsigned char Slot, unsigned char Focus );
	void SetupStatsForChosenClass ( );
	void ConfigForClass ( struct FString ClassName );
	void CreateXPRewardLevelItems ( );
	struct UForgeGFxFrontEndAccountMenu_FSClassSelectionButton ConfigureClassButtonFor ( struct FString ClassName );
	void CreateAbilityFocusItems ( );
	void SetupGlobalStats ( );
	int RenderTargetY ( );
	int RenderTargetX ( );
	void SetupSkinPreviewRenderTarget ( );
	void ConfigSlide ( );
};

UClass* UForgeGFxFrontEndAccountMenu::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxFrontEndGroupMenu
// 0x0294 (0x02E4 - 0x0050)
class UForgeGFxFrontEndGroupMenu : public UForgeGFxFrontEndSlide
{
public:
	class UGFxObject*                                  GroupMenuMC;                                      		// 0x0050 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              BackButtonCB;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  LogoMC;                                           		// 0x0058 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GroupMenuTitleTF;                                 		// 0x005C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GroupMenuInnerMC;                                 		// 0x0060 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ReadyButtonCB;                                    		// 0x0064 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              LaunchButtonCB;                                   		// 0x0068 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              InviteButtonCB;                                   		// 0x006C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GameRegionTF;                                     		// 0x0070 (0x0004) [0x0000000000000000]              
	class UForgeGFxSettingsDropDown*                   GameRegionCDD;                                    		// 0x0074 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GameTypeTF;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	class UForgeGFxSettingsDropDown*                   GameTypeCDD;                                      		// 0x007C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GroupMembersAreaMC;                               		// 0x0080 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GroupMemberNumbersTF;                             		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FSGroupMemberLine                           MemberLines[ 0xC ];                               		// 0x0088 (0x01E0) [0x0000000000000000]              
	class UGFxObject*                                  GroupChatAreaMC;                                  		// 0x0268 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsChatInputFocused : 1;                           		// 0x026C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ChatScrollVisible : 1;                            		// 0x026C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsLeader : 1;                                     		// 0x026C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      IsReady : 1;                                      		// 0x026C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ShowingSteamDropDown : 1;                         		// 0x026C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      IsSearchingForServer : 1;                         		// 0x026C (0x0004) [0x0000000000000000] [0x00000020] 
	class UGFxObject*                                  GroupChatTitleTF;                                 		// 0x0270 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              GroupChatInputCTI;                                		// 0x0274 (0x0004) [0x0000000000000000]              
	class UForgeGFxObjectSelectable*                   GroupChatInputTFS;                                		// 0x0278 (0x0004) [0x0000000000000000]              
	class UForgeGFxManualScrollBar*                    GroupChatScrollBarCSB;                            		// 0x027C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GroupChatItemsMC;                                 		// 0x0280 (0x0004) [0x0000000000000000]              
	TArray< struct FSGroupChatItem >                   GroupChatMessages;                                		// 0x0284 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ChatHeight;                                       		// 0x0290 (0x0004) [0x0000000000000000]              
	float                                              ChatVisibleHeight;                                		// 0x0294 (0x0004) [0x0000000000000000]              
	TArray< struct FSGroupGameMode >                   GroupGameModes;                                   		// 0x0298 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSPlayerAvatar >                    PlayerAvatars;                                    		// 0x02A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  SteamDropDownMC;                                  		// 0x02B0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SteamDropDownButtons[ 0x4 ];                      		// 0x02B4 (0x0010) [0x0000000000000000]              
	struct FUniqueNetId                                GroupID;                                          		// 0x02C4 (0x0008) [0x0000000000000000]              
	struct FUniqueNetId                                SteamDropDownId;                                  		// 0x02CC (0x0008) [0x0000000000000000]              
	int                                                NumberOfMembers;                                  		// 0x02D4 (0x0004) [0x0000000000000000]              
	struct FString                                     PendingGameModeChosen;                            		// 0x02D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47278 ];

		return pClassPointer;
	};

	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	void SendMessage ( );
	void OnSteamActionPress ( struct FEventData ev );
	void OnPlayerNamePress ( struct FEventData ev );
	void OnChatInputFocusOut ( struct FEventData ev );
	void OnChatInputFocusIn ( struct FEventData ev );
	void ChangeReady ( unsigned long NewReady );
	void HandleGameSearchResults ( TArray< struct FOnlineGameSearchResult > AllSearchResults );
	void GroupLaunch ( );
	void KickMember ( struct FUniqueNetId TargetId );
	void LeaveGroup ( );
	void RefreshAvatars ( );
	void StoreAvatar ( struct FUniqueNetId PlayerNetId, class UTexture2D* Avatar );
	void UpdateSettings ( TArray< struct FLobbyMetaData > NewLobbySettings );
	void OnGameModeChange ( struct FEventData ev );
	void OnRegionChange ( struct FEventData ev );
	void EnableQueueButtons ( );
	void OnInvitePress ( struct FEventData ev );
	void OnLaunchPress ( struct FEventData ev );
	void OnReadyPress ( struct FEventData ev );
	void OnBackPress ( struct FEventData ev );
	bool HandleScrollDown ( );
	bool HandleScrollUp ( );
	void HandlePasteCommand ( );
	void HandleCopyCommand ( );
	void HandleCutCommand ( );
	void DrawChatMessage ( struct FSGroupChatItem NewChatItem );
	void AddGroupMessage ( struct FUniqueNetId SayingId, struct FString Message );
	void ChatScrollDown ( );
	void ChatScrollUp ( );
	void ClearChat ( );
	void Tick ( float DeltaTime );
	void ConfigForRes ( int SizeX, int SizeY );
	void ShowSlide ( );
	void HideSlide ( );
	void UpdateGroup ( struct FActiveLobbyInfo TheLobbyData, int MemberIndex, struct FString Status );
	void NewGroupCreated ( );
	void ConfigSlide ( );
};

UClass* UForgeGFxFrontEndGroupMenu::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxFrontEndCommunityMenu
// 0x0018 (0x0074 - 0x005C)
class UForgeGFxFrontEndCommunityMenu : public UForgeGFxFrontEndSlideBar
{
public:
	class UGFxObject*                                  CommunityMenuMC;                                  		// 0x005C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              CommunityMenuBackCB;                              		// 0x0060 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CommunityMenuTitleMC;                             		// 0x0064 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CommunityMenuTitleTF;                             		// 0x0068 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              CommunityMenuButtons[ 0x2 ];                      		// 0x006C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47280 ];

		return pClassPointer;
	};

	void OnFriendsPress ( struct FEventData ev );
	void OnBackPress ( struct FEventData ev );
	void ConfigSlide ( );
};

UClass* UForgeGFxFrontEndCommunityMenu::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxFrontEndJoinPlayerMenu
// 0x0024 (0x0080 - 0x005C)
class UForgeGFxFrontEndJoinPlayerMenu : public UForgeGFxFrontEndSlideBar
{
public:
	class UGFxObject*                                  JoinPlayerMenuMC;                                 		// 0x005C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              JoinPlayerMenuBackCB;                             		// 0x0060 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  JoinPlayerMenuTitleMC;                            		// 0x0064 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  JoinPlayerMenuTitleTF;                            		// 0x0068 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  NameIntroTF;                                      		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned long                                      IsNameInputFocused : 1;                           		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxClikWidget*                              NameInputCTI;                                     		// 0x0074 (0x0004) [0x0000000000000000]              
	class UForgeGFxObjectSelectable*                   NameInputTFS;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              JoinPlayerCB;                                     		// 0x007C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47282 ];

		return pClassPointer;
	};

	void OnBackPress ( struct FEventData ev );
	void OnJoinPlayerPress ( struct FEventData ev );
	void OnNameInputFocusOut ( struct FEventData ev );
	void OnNameInputFocusIn ( struct FEventData ev );
	void HandlePasteCommand ( );
	void HandleCopyCommand ( );
	void HandleCutCommand ( );
	void EnableJoinPlayerButtons ( );
	void DisableJoinPlayerButtons ( );
	void ConfigSlide ( );
};

UClass* UForgeGFxFrontEndJoinPlayerMenu::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxFrontEndPlayMenu
// 0x003C (0x0098 - 0x005C)
class UForgeGFxFrontEndPlayMenu : public UForgeGFxFrontEndSlideBar
{
public:
	class UGFxObject*                                  PlayMenuMC;                                       		// 0x005C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              PlayMenuBackCB;                                   		// 0x0060 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PlayMenuTitleMC;                                  		// 0x0064 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PlayMenuTitleTF;                                  		// 0x0068 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              PlayMenuButtons[ 0x5 ];                           		// 0x006C (0x0014) [0x0000000000000000]              
	class UGFxObject*                                  ServerBrowserPopupMC;                             		// 0x0080 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ServerBrowserTitleTF;                             		// 0x0084 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ServerBrowserStep1TF;                             		// 0x0088 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ServerBrowserStep2TF;                             		// 0x008C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ServerBrowserPopupCB;                             		// 0x0090 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsShowingServerBrowserPopup : 1;                  		// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47284 ];

		return pClassPointer;
	};

	void OnJoinPlayerPress ( struct FEventData ev );
	void ShowServerBrowserPopup ( );
	void HideServerBrowserPopup ( );
	void OnServerBrowserPopupPress ( struct FEventData ev );
	void OnCreateGroupPress ( struct FEventData ev );
	void OnBrowseServerPress ( struct FEventData ev );
	void OnBackPress ( struct FEventData ev );
	void SlideInSlide ( );
	void ShowSlide ( );
	void ConfigSlide ( );
};

UClass* UForgeGFxFrontEndPlayMenu::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxFrontEndMainMenu
// 0x0090 (0x00EC - 0x005C)
class UForgeGFxFrontEndMainMenu : public UForgeGFxFrontEndSlideBar
{
public:
	class UGFxObject*                                  MainMenuMC;                                       		// 0x005C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  NameIntroTF;                                      		// 0x0060 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              NameInputCTI;                                     		// 0x0064 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MainMenuButtons[ 0x9 ];                           		// 0x0068 (0x0024) [0x0000000000000000]              
	class UGFxObject*                                  MainMenuNotes[ 0x9 ];                             		// 0x008C (0x0024) [0x0000000000000000]              
	class UGFxClikWidget*                              QuitNagCB;                                        		// 0x00B0 (0x0004) [0x0000000000000000]              
	class UForgeGFxQuitNagBackground*                  QuitNagImageMC;                                   		// 0x00B4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  QuitNagFeaturesTitleTF;                           		// 0x00B8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  QuitNagFeaturesListTF;                            		// 0x00BC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  QuitNagLinkTF;                                    		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  IntroMovieMC;                                     		// 0x00C4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CodeEntryContainerMC;                             		// 0x00C8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CodeEntryBoxMC;                                   		// 0x00CC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CodeEntryTF;                                      		// 0x00D0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              CodeEntryCTI;                                     		// 0x00D4 (0x0004) [0x0000000000000000]              
	class UForgeGFxObjectSelectable*                   CodeEntryTFS;                                     		// 0x00D8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              CodeEntrySendCB;                                  		// 0x00DC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              CodeEntryCancelCB;                                		// 0x00E0 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsIntroPlaying : 1;                               		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsCodeEntryDialogUp : 1;                          		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      TutorialDone : 1;                                 		// 0x00E4 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      HasHandledSteamLobbyJoinRequest : 1;              		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              IntroStarted;                                     		// 0x00E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47285 ];

		return pClassPointer;
	};

	void OnQuitNagPress ( struct FEventData ev );
	void OnExitPress ( struct FEventData ev );
	void OnCreditsPress ( struct FEventData ev );
	void OnSettingsPress ( struct FEventData ev );
	void OnEnterCodeCancelPress ( struct FEventData ev );
	void OnEnterCodeSendPress ( struct FEventData ev );
	void OnEnterCodePress ( struct FEventData ev );
	void OnAccountPress ( struct FEventData ev );
	void OnCommunityPress ( struct FEventData ev );
	void OnPlayPress ( struct FEventData ev );
	void OnQuickPlayPress ( struct FEventData ev );
	void OnTrainingPress ( struct FEventData ev );
	void ApplySteamCloudSettings ( );
	void ConfigForRes ( int SizeX, int SizeY );
	bool HandleSkip ( );
	void HandleSteamLobbyJoinRequest ( );
	bool CanAcceptSteamLobbyJoinRequest ( );
	void SlideInSlide ( );
	void ShowSlide ( );
	void Tick ( float DeltaTime );
	void HandlePasteCommand ( );
	void HandleCopyCommand ( );
	void HandleCutCommand ( );
	void ConfigSlide ( );
};

UClass* UForgeGFxFrontEndMainMenu::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxObjectSelectable
// 0x0000 (0x0078 - 0x0078)
class UForgeGFxObjectSelectable : public UGFxObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47398 ];

		return pClassPointer;
	};

	void ReplaceSelected ( struct FString NewText );
	void SetSelection ( int StartIndex, int FinishIndex );
};

UClass* UForgeGFxObjectSelectable::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxManualScrollBar
// 0x0000 (0x0084 - 0x0084)
class UForgeGFxManualScrollBar : public UGFxClikWidget
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47517 ];

		return pClassPointer;
	};

	void SetScrollProperties ( int PageSize, int MinPosition, int MaxPosition, int PageScrollSize );
};

UClass* UForgeGFxManualScrollBar::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxSettingsDropDown
// 0x0000 (0x0084 - 0x0084)
class UForgeGFxSettingsDropDown : public UGFxClikWidget
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47556 ];

		return pClassPointer;
	};

	void RemoveAllListItems ( );
	void AddListItem ( struct FString NewItemLabel );
};

UClass* UForgeGFxSettingsDropDown::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxSettingsBindsScrollingList
// 0x0000 (0x0084 - 0x0084)
class UForgeGFxSettingsBindsScrollingList : public UGFxClikWidget
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48434 ];

		return pClassPointer;
	};

	void ReValidateData ( );
	void UpdateBindsListItemReset ( int BindIndex, struct FString NewResetBindLabel );
	void UpdateBindsListItemController ( int BindIndex, struct FString NewControllerBindLabel );
	void UpdateBindsListItemSecondary ( int BindIndex, struct FString NewSecondaryBindLabel );
	void UpdateBindsListItemPrimary ( int BindIndex, struct FString NewPrimaryBindLabel );
	void AddBindsListCat ( int BindIndex, struct FString ActionLabel );
	void AddBindsListItem ( int BindIndex, struct FString ActionLabel, struct FString PrimaryBindLabel, struct FString SecondaryBindLabel, struct FString ControllerBindLabel, struct FString ResetBindLabel );
	class UGFxObject* GetRendererAt ( int Index, int Offset );
};

UClass* UForgeGFxSettingsBindsScrollingList::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxGroupMembersScrollingList
// 0x0000 (0x0084 - 0x0084)
class UForgeGFxGroupMembersScrollingList : public UGFxClikWidget
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48820 ];

		return pClassPointer;
	};

	void ReValidateData ( );
	void RemoveAllGroupMembers ( );
	void AddGroupMembersListItem ( int PlayerID, struct FString PlayerName, unsigned long ShowPendingInvite, unsigned long ShowReady, unsigned long ShowGroupLeader );
	class UGFxObject* GetRendererAt ( int Index, int Offset );
};

UClass* UForgeGFxGroupMembersScrollingList::pClassPointer = NULL;

// Class ForgeGame.ForgeGFxLoadingScreen
// 0x0010 (0x0178 - 0x0168)
class UForgeGFxLoadingScreen : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  LoadingTF;                                        		// 0x016C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BackgroundImageMC;                                		// 0x0170 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInitialized : 1;                                 		// 0x0174 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49535 ];

		return pClassPointer;
	};

	void ConfigForRes ( int SizeX, int SizeY );
	void ConfigLoadingScreen ( );
	bool Start ( unsigned long StartPaused );
};

UClass* UForgeGFxLoadingScreen::pClassPointer = NULL;

// Class ForgeGame.ForgeLocalization
// 0x0000 (0x003C - 0x003C)
class UForgeLocalization : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49798 ];

		return pClassPointer;
	};

	struct FString GetNumberAsRank ( int Ranking );
};

UClass* UForgeLocalization::pClassPointer = NULL;

// Class ForgeGame.ForgeOnlineGameSearch
// 0x000C (0x0100 - 0x00F4)
class UForgeOnlineGameSearch : public UOnlineGameSearch
{
public:
	struct FString                                     GameTagsFilter;                                   		// 0x00F4 (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49895 ];

		return pClassPointer;
	};

	void AddToGameTagFilter ( struct FString GameTag );
};

UClass* UForgeOnlineGameSearch::pClassPointer = NULL;

// Class ForgeGame.ForgeOnlineLeaderboardsRead
// 0x0000 (0x0088 - 0x0088)
class UForgeOnlineLeaderboardsRead : public UOnlineStatsRead
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49912 ];

		return pClassPointer;
	};

	void eventOnReadComplete ( );
};

UClass* UForgeOnlineLeaderboardsRead::pClassPointer = NULL;

// Class ForgeGame.ForgeOnlineLeaderboardsWrite
// 0x0000 (0x0088 - 0x0088)
class UForgeOnlineLeaderboardsWrite : public UOnlineStatsWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49915 ];

		return pClassPointer;
	};

};

UClass* UForgeOnlineLeaderboardsWrite::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif