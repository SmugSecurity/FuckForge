/*
#############################################################################################
# Forge War (1.0.9953.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToRulesResponseMapping
// 0x0008
struct FServerQueryToRulesResponseMapping
{
	int                                                Query;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Response;                                         		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToPingResponseMapping
// 0x0008
struct FServerQueryToPingResponseMapping
{
	int                                                Query;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Response;                                         		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClientFilterORClause
// 0x003C
struct FClientFilterORClause
{
	struct FMultiMap_Mirror                            OrParams;                                         		// 0x0000 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FilterKeyToSteamKeyMapping
// 0x0030
struct FFilterKeyToSteamKeyMapping
{
	int                                                KeyId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      KeyType;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     RawKey;                                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SteamKey;                                         		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bReverseFilter : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     IgnoreValue;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LobbyMetaData
// 0x0018
struct FLobbyMetaData
{
	struct FString                                     Key;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LobbyFilter
// 0x0020
struct FLobbyFilter
{
	struct FString                                     Key;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Operator;                                         		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned long                                      bNumeric : 1;                                     		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LobbySortFilter
// 0x0010
struct FLobbySortFilter
{
	struct FString                                     Key;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TargetValue;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.BasicLobbyInfo
// 0x0014
struct FBasicLobbyInfo
{
	struct FUniqueNetId                                LobbyUID;                                         		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FLobbyMetaData >                    LobbySettings;                                    		// 0x0008 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LobbyMember
// 0x0014
struct FLobbyMember
{
	struct FUniqueNetId                                PlayerUID;                                        		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FLobbyMetaData >                    PlayerSettings;                                   		// 0x0008 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ActiveLobbyInfo
// 0x000C(0x0020 - 0x0014)
struct FActiveLobbyInfo : FBasicLobbyInfo
{
	TArray< struct FLobbyMember >                      Members;                                          		// 0x0014 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardHandle
// 0x0008
struct FLeaderboardHandle
{
	struct FQWord                                      Dud;                                              		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardTemplate
// 0x0024
struct FLeaderboardTemplate
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UpdateType;                                       		// 0x000C (0x0001) [0x0000000000000000]              
	int                                                LeaderboardSize;                                  		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      SortType;                                         		// 0x0014 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      DisplayFormat;                                    		// 0x0015 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FLeaderboardHandle                          LeaderboardRef;                                   		// 0x0018 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bLeaderboardInitializing : 1;                     		// 0x0020 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bLeaderboardInitiated : 1;                        		// 0x0020 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardRead
// 0x0024
struct FDeferredLeaderboardRead
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      RequestType;                                      		// 0x000C (0x0001) [0x0000000000000000]              
	int                                                Start;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                End;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	TArray< struct FUniqueNetId >                      PlayerList;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardWrite
// 0x001C
struct FDeferredLeaderboardWrite
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< int >                                      LeaderboardData;                                  		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardEntry
// 0x001C
struct FLeaderboardEntry
{
	struct FUniqueNetId                                PlayerUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< int >                                      LeaderboardData;                                  		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ViewIdToLeaderboardName
// 0x0010
struct FViewIdToLeaderboardName
{
	int                                                ViewId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     LeaderboardName;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamPlayerClanData
// 0x0018
struct FSteamPlayerClanData
{
	struct FString                                     ClanName;                                         		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ClanTag;                                          		// 0x000C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ProfileSettingsCache
// 0x0028
struct FProfileSettingsCache
{
	class UOnlineProfileSettings*                      Profile;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ReadDelegates;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteDelegates;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ProfileDataChangedDelegates;                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LocalTalkerSteam
// 0x0001(0x0005 - 0x0004)
struct FLocalTalkerSteam : FLocalTalker
{
	unsigned char                                      MuteType;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeviceIdCache
// 0x001C
struct FDeviceIdCache
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             DeviceSelectionMulticast;                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DeviceSelectionDelegates;                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementProgressStat
// 0x0010
struct FAchievementProgressStat
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Progress;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MaxProgress;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUnlock : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementMappingInfo
// 0x001C
struct FAchievementMappingInfo
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       AchievementName;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	int                                                ViewId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ProgressCount;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaxProgress;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAutoUnlock : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueuedAvatarRequest
// 0x0020
struct FQueuedAvatarRequest
{
	float                                              CheckTime;                                        		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumberOfAttempts;                                 		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0008 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                Size;                                             		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                 		// 0x0014 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamUserCloudMetadata
// 0x0018
struct FSteamUserCloudMetadata
{
	struct FString                                     UserId;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FEmsFile >                          UserCloudMetadata;                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamUserCloud
// 0x0018
struct FSteamUserCloud
{
	struct FString                                     UserId;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTitleFile >                        UserCloudFileData;                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ControllerConnectionState
// 0x0008
struct FControllerConnectionState
{
	int                                                bIsControllerConnected;                           		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                bLastIsControllerConnected;                       		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineStatusMapping
// 0x0010
struct FOnlineStatusMapping
{
	int                                                StatusId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     StatusString;                                     		// 0x0004 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PlayerStat
// 0x0014
struct FPlayerStat
{
	int                                                ViewId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ColumnId;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FSettingsData                               Data;                                             		// 0x0008 (0x000C) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PendingPlayerStats
// 0x0048
struct FPendingPlayerStats
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     PlayerName;                                       		// 0x0008 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     StatGuid;                                         		// 0x0014 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FPlayerStat >                       Stats;                                            		// 0x0020 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FOnlinePlayerScore                          Score;                                            		// 0x002C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     Place;                                            		// 0x003C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif