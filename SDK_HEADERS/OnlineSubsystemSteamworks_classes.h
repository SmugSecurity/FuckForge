/*
#############################################################################################
# Forge War (1.0.9953.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.h
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ESteamMatchmakingType
/*enum ESteamMatchmakingType
{
	SMT_Invalid                                        = 0,
	SMT_LAN                                            = 1,
	SMT_Internet                                       = 2,
	SMT_MAX                                            = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ELobbyVisibility
/*enum ELobbyVisibility
{
	LV_Public                                          = 0,
	LV_Friends                                         = 1,
	LV_Private                                         = 2,
	LV_Invisible                                       = 3,
	LV_MAX                                             = 4
};*/

// Enum OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ELobbyDistance
/*enum ELobbyDistance
{
	LD_Best                                            = 0,
	LD_Close                                           = 1,
	LD_Far                                             = 2,
	LD_Any                                             = 3,
	LD_MAX                                             = 4
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardSortType
/*enum ELeaderboardSortType
{
	LST_Ascending                                      = 0,
	LST_Descending                                     = 1,
	LST_MAX                                            = 2
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardRequestType
/*enum ELeaderboardRequestType
{
	LRT_Global                                         = 0,
	LRT_Player                                         = 1,
	LRT_Friends                                        = 2,
	LRT_MAX                                            = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardFormat
/*enum ELeaderboardFormat
{
	LF_Number                                          = 0,
	LF_Seconds                                         = 1,
	LF_Milliseconds                                    = 2,
	LF_MAX                                             = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardUpdateType
/*enum ELeaderboardUpdateType
{
	LUT_KeepBest                                       = 0,
	LUT_Force                                          = 1,
	LUT_MAX                                            = 2
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EMuteType
/*enum EMuteType
{
	MUTE_None                                          = 0,
	MUTE_AllButFriends                                 = 1,
	MUTE_All                                           = 2,
	MUTE_MAX                                           = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks
// 0x0004 (0x0274 - 0x0270)
class UOnlineAuthInterfaceSteamworks : public UOnlineAuthInterfaceImpl
{
public:
	struct FPointer                                    AuthCallbackBridge;                               		// 0x0270 (0x0004) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1834 ];

		return pClassPointer;
	};

	bool GetServerAddr ( int* OutServerIP, int* OutServerPort );
	bool GetServerUniqueId ( struct FUniqueNetId* OutServerUID );
	bool VerifyServerAuthSession ( struct FUniqueNetId ServerUID, int ServerIP, int AuthTicketUID );
	bool CreateServerAuthSession ( struct FUniqueNetId ClientUID, int ClientIP, int ClientPort, int* OutAuthTicketUID );
	bool VerifyClientAuthSession ( struct FUniqueNetId ClientUID, int ClientIP, int ClientPort, int AuthTicketUID );
	bool CreateClientAuthSession ( struct FUniqueNetId ServerUID, int ServerIP, int ServerPort, unsigned long bSecure, int* OutAuthTicketUID );
	bool SendServerAuthRequest ( struct FUniqueNetId ServerUID );
	bool SendClientAuthRequest ( class UPlayer* ClientConnection, struct FUniqueNetId ClientUID );
};

UClass* UOnlineAuthInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x00B0 (0x0264 - 0x01B4)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	TArray< struct FServerQueryToRulesResponseMapping > QueryToRulesResponseMap;                          		// 0x01B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FServerQueryToPingResponseMapping > QueryToPingResponseMap;                           		// 0x01C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    ServerListResponse;                               		// 0x01CC (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned char                                      CurrentMatchmakingType;                           		// 0x01D0 (0x0001) [0x0000000000000000]              
	struct FPointer                                    CurrentMatchmakingQuery;                          		// 0x01D4 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FScriptDelegate >                   GameInviteAcceptedDelegates;                      		// 0x01D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineGameSearch*                           InviteGameSearch;                                 		// 0x01E4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     InviteLocationUrl;                                		// 0x01E8 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RegisterPlayerCompleteDelegates;                  		// 0x01F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UnregisterPlayerCompleteDelegates;                		// 0x0200 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FClientFilterORClause >             ActiveClientsideFilters;                          		// 0x020C (0x000C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned long                                      bFilterEngineBuild : 1;                           		// 0x0218 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIgnoreRefreshComplete : 1;                       		// 0x0218 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	TArray< struct FFilterKeyToSteamKeyMapping >       FilterKeyToSteamKeyMap;                           		// 0x021C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< class UOnlineGameSettings* >               PendingRulesSearchSettings;                       		// 0x0228 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UOnlineGameSettings* >               PendingPingSearchSettings;                        		// 0x0234 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1835 ];

		return pClassPointer;
	};

	bool QueryNonAdvertisedData ( int StartAt, int NumberToQuery );
	void ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID );
	void ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited );
	bool AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName );
	void OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult );
	void ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	bool UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData );
};

UClass* UOnlineGameInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks
// 0x0154 (0x0190 - 0x003C)
class UOnlineLobbyInterfaceSteamworks : public UObject
{
public:
	struct FPointer                                    LobbyCallbackBridge;                              		// 0x003C (0x0004) [0x0000000000001000]              ( CPF_Native )
	TArray< struct FLobbyMetaData >                    CreateLobbySettings;                              		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueNetId                                PendingCreateLobbyResult;                         		// 0x004C (0x0008) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FScriptDelegate >                   CreateLobbyCompleteDelegates;                     		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      JoinedLobbies;                                    		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bLobbySearchInProgress : 1;                       		// 0x006C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	TArray< struct FBasicLobbyInfo >                   CachedFindLobbyResults;                           		// 0x0070 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FindLobbiesCompleteDelegates;                     		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FActiveLobbyInfo >                  ActiveLobbies;                                    		// 0x0088 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   JoinLobbyCompleteDelegates;                       		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           LobbyMemberKeys;                                  		// 0x00A0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LobbySettingsUpdateDelegates;                     		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LobbyMemberSettingsUpdateDelegates;               		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LobbyMemberStatusUpdateDelegates;                 		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LobbyReceiveMessageDelegates;                     		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LobbyReceiveBinaryDataDelegates;                  		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            CachedBinaryData;                                 		// 0x00E8 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LobbyJoinGameDelegates;                           		// 0x00F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LobbyInviteDelegates;                             		// 0x0100 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateLobbyComplete__Delegate;                		// 0x010C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFindLobbiesComplete__Delegate;                		// 0x0118 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinLobbyComplete__Delegate;                  		// 0x0124 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLobbySettingsUpdate__Delegate;                		// 0x0130 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLobbyMemberSettingsUpdate__Delegate;          		// 0x013C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLobbyMemberStatusUpdate__Delegate;            		// 0x0148 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLobbyReceiveMessage__Delegate;                		// 0x0154 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLobbyReceiveBinaryData__Delegate;             		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLobbyJoinGame__Delegate;                      		// 0x016C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLobbyKicked__Delegate;                        		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLobbyInvite__Delegate;                        		// 0x0184 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1836 ];

		return pClassPointer;
	};

	void SetLobbyId ( struct FUniqueNetId LobbyId );
	bool GetLobbyFromCommandline ( unsigned long bMarkAsJoined, struct FUniqueNetId* LobbyId );
	void ClearLobbyInviteDelegate ( struct FScriptDelegate LobbyInviteDelegate );
	void AddLobbyInviteDelegate ( struct FScriptDelegate LobbyInviteDelegate );
	void OnLobbyInvite ( struct FUniqueNetId LobbyId, struct FUniqueNetId FriendId, unsigned long bAccepted );
	bool InviteToLobby ( struct FUniqueNetId LobbyId, struct FUniqueNetId PlayerID );
	bool SetLobbyOwner ( struct FUniqueNetId LobbyId, struct FUniqueNetId NewOwner );
	bool SetLobbyLock ( struct FUniqueNetId LobbyId, unsigned long bLocked );
	bool SetLobbyType ( struct FUniqueNetId LobbyId, unsigned char Type );
	bool SetLobbyServer ( struct FUniqueNetId LobbyId, struct FUniqueNetId ServerUID, struct FString ServerIP );
	bool RemoveLobbySetting ( struct FUniqueNetId LobbyId, struct FString Key );
	bool SetLobbySetting ( struct FUniqueNetId LobbyId, struct FString Key, struct FString Value );
	bool GetLobbyAdmin ( struct FUniqueNetId LobbyId, struct FUniqueNetId* AdminId );
	void OnLobbyKicked ( int LobbyIndex, int AdminIndex, TArray< struct FActiveLobbyInfo >* LobbyList );
	void ClearLobbyJoinGameDelegate ( struct FScriptDelegate LobbyJoinGameDelegate );
	void AddLobbyJoinGameDelegate ( struct FScriptDelegate LobbyJoinGameDelegate );
	void eventTriggerLobbyJoinGameDelegates ( int LobbyIndex, struct FUniqueNetId ServerID, struct FString ServerIP );
	void OnLobbyJoinGame ( int LobbyIndex, struct FUniqueNetId ServerID, struct FString ServerIP, TArray< struct FActiveLobbyInfo >* LobbyList );
	void ClearLobbyReceiveBinaryDataDelegate ( struct FScriptDelegate LobbyReceiveBinaryDataDelegate );
	void AddLobbyReceiveBinaryDataDelegate ( struct FScriptDelegate LobbyReceiveBinaryDataDelegate );
	void eventTriggerLobbyReceiveBinaryDataDelegates ( int LobbyIndex, int MemberIndex );
	void OnLobbyReceiveBinaryData ( int LobbyIndex, int MemberIndex, TArray< struct FActiveLobbyInfo >* LobbyList, TArray< unsigned char >* Data );
	void ClearLobbyReceiveMessageDelegate ( struct FScriptDelegate LobbyReceiveMessageDelegate );
	void AddLobbyReceiveMessageDelegate ( struct FScriptDelegate LobbyReceiveMessageDelegate );
	void eventTriggerLobbyReceiveMessageDelegates ( int LobbyIndex, int MemberIndex, struct FString Type, struct FString Message );
	void OnLobbyReceiveMessage ( int LobbyIndex, int MemberIndex, struct FString Type, struct FString Message, TArray< struct FActiveLobbyInfo >* LobbyList );
	void ClearLobbyMemberStatusUpdateDelegate ( struct FScriptDelegate LobbyMemberStatusUpdateDelegate );
	void AddLobbyMemberStatusUpdateDelegate ( struct FScriptDelegate LobbyMemberStatusUpdateDelegate );
	void eventTriggerLobbyMemberStatusUpdateDelegates ( int LobbyIndex, int MemberIndex, int InstigatorIndex, struct FString Status );
	void OnLobbyMemberStatusUpdate ( int LobbyIndex, int MemberIndex, int InstigatorIndex, struct FString Status, TArray< struct FActiveLobbyInfo >* LobbyList );
	void ClearLobbyMemberSettingsUpdateDelegate ( struct FScriptDelegate LobbyMemberSettingsUpdateDelegate );
	void AddLobbyMemberSettingsUpdateDelegate ( struct FScriptDelegate LobbyMemberSettingsUpdateDelegate );
	void eventTriggerLobbyMemberSettingsUpdateDelegates ( int LobbyIndex, int MemberIndex );
	void OnLobbyMemberSettingsUpdate ( int LobbyIndex, int MemberIndex, TArray< struct FActiveLobbyInfo >* LobbyList );
	void ClearLobbySettingsUpdateDelegate ( struct FScriptDelegate LobbySettingsUpdateDelegate );
	void AddLobbySettingsUpdateDelegate ( struct FScriptDelegate LobbySettingsUpdateDelegate );
	void eventTriggerLobbySettingsUpdateDelegates ( int LobbyIndex );
	void OnLobbySettingsUpdate ( int LobbyIndex, TArray< struct FActiveLobbyInfo >* LobbyList );
	bool SendLobbyBinaryData ( struct FUniqueNetId LobbyId, TArray< unsigned char >* Data );
	bool SendLobbyMessage ( struct FUniqueNetId LobbyId, struct FString Message );
	bool SetLobbyUserSetting ( struct FUniqueNetId LobbyId, struct FString Key, struct FString Value );
	bool LeaveLobby ( struct FUniqueNetId LobbyId );
	void ClearJoinLobbyCompleteDelegate ( struct FScriptDelegate JoinLobbyCompleteDelegate );
	void AddJoinLobbyCompleteDelegate ( struct FScriptDelegate JoinLobbyCompleteDelegate );
	void eventTriggerJoinLobbyCompleteDelegates ( unsigned long bWasSuccessful, int LobbyIndex, struct FUniqueNetId LobbyUID, struct FString Error );
	void OnJoinLobbyComplete ( unsigned long bWasSuccessful, int LobbyIndex, struct FUniqueNetId LobbyUID, struct FString Error, TArray< struct FActiveLobbyInfo >* LobbyList );
	bool JoinLobby ( struct FUniqueNetId LobbyId );
	void ClearFindLobbiesCompleteDelegate ( struct FScriptDelegate FindLobbiesCompleteDelegate );
	void AddFindLobbiesCompleteDelegate ( struct FScriptDelegate FindLobbiesCompleteDelegate );
	void eventTriggerFindLobbiesCompleteDelegates ( unsigned long bWasSuccessful );
	void OnFindLobbiesComplete ( unsigned long bWasSuccessful, TArray< struct FBasicLobbyInfo >* LobbyList );
	bool UpdateFoundLobbies ( struct FUniqueNetId LobbyId );
	bool FindLobbies ( int MaxResults, TArray< struct FLobbyFilter > Filters, TArray< struct FLobbySortFilter > SortFilters, int MinSlots, unsigned char Distance );
	void ClearCreateLobbyCompleteDelegate ( struct FScriptDelegate CreateLobbyCompleteDelegate );
	void AddCreateLobbyCompleteDelegate ( struct FScriptDelegate CreateLobbyCompleteDelegate );
	void OnCreateLobbyComplete ( unsigned long bWasSuccessful, struct FUniqueNetId LobbyId, struct FString Error );
	bool CreateLobby ( int MaxPlayers, unsigned char Type, TArray< struct FLobbyMetaData > InitialSettings );
};

UClass* UOnlineLobbyInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x05BC (0x06D4 - 0x0118)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	struct FPointer                                    CallbackBridge;                                   		// 0x0118 (0x0004) [0x0000000000001000]              ( CPF_Native )
	unsigned long                                      bStoringAchievement : 1;                          		// 0x011C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bClientStatsStorePending : 1;                     		// 0x011C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bGSStatsStoresSuccess : 1;                        		// 0x011C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNeedsKeyboardTicking : 1;                        		// 0x011C (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bLastHasConnection : 1;                           		// 0x011C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsStatsSessionOk : 1;                            		// 0x011C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHasSteamworksAccount : 1;                        		// 0x011C (0x0004) [0x0000000000004002] [0x00000040] ( CPF_Const | CPF_Config )
	unsigned long                                      bShouldUseMcp : 1;                                		// 0x011C (0x0004) [0x0000000000004002] [0x00000080] ( CPF_Const | CPF_Config )
	int                                                TotalGSStatsStoresPending;                        		// 0x0120 (0x0004) [0x0000000000000000]              
	unsigned char                                      UserStatsReceivedState;                           		// 0x0124 (0x0001) [0x0000000000000000]              
	unsigned char                                      LoggedInStatus;                                   		// 0x0125 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      bWasKeyboardInputCanceled;                        		// 0x0126 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      CurrentNotificationPosition;                      		// 0x0127 (0x0001) [0x0000000000004000]              ( CPF_Config )
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                    		// 0x0128 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     LocalProfileName;                                 		// 0x012C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LoggedInPlayerName;                               		// 0x0138 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FUniqueNetId                                LoggedInPlayerId;                                 		// 0x0144 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                LoggedInPlayerNum;                                		// 0x014C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ProfileDataDirectory;                             		// 0x0150 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ProfileDataExtension;                             		// 0x015C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteProfileSettingsDelegates;                    		// 0x0168 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineProfileSettings*                      CachedProfile;                                    		// 0x0174 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LocalPlayerStorageReadDelegates;                  		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LocalPlayerStorageWriteDelegates;                 		// 0x0184 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RemotePlayerStorageReadDelegates;                 		// 0x0190 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SpeechRecognitionCompleteDelegates;               		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadFriendsDelegates;                             		// 0x01A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendsChangeDelegates;                           		// 0x01B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   MutingChangeDelegates;                            		// 0x01C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginChangeDelegates;                             		// 0x01CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginFailedDelegates;                             		// 0x01D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LogoutCompletedDelegates;                         		// 0x01E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AccountCreateDelegates;                           		// 0x01F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   TalkingDelegates;                                 		// 0x01FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadOnlineStatsCompleteDelegates;                 		// 0x0208 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FlushOnlineStatsDelegates;                        		// 0x0214 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ConnectionStatusChangeDelegates;                  		// 0x0220 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ControllerChangeDelegates;                        		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LinkStatusDelegates;                              		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadTitleFileCompleteDelegates;                   		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AchievementDelegates;                             		// 0x0250 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AchievementReadDelegates;                         		// 0x025C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   EnumerateUserFilesCompleteDelegates;              		// 0x0268 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadUserFileCompleteDelegates;                    		// 0x0274 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteUserFileCompleteDelegates;                   		// 0x0280 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DeleteUserFileCompleteDelegates;                  		// 0x028C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SharedFileReadCompleteDelegates;                  		// 0x0298 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SharedFileWriteCompleteDelegates;                 		// 0x02A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLocalTalkerSteam                           CurrentLocalTalker;                               		// 0x02B0 (0x0008) [0x0000000000000000]              
	TArray< struct FRemoteTalker >                     RemoteTalkers;                                    		// 0x02B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GameID;                                           		// 0x02C4 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	class UOnlineStatsRead*                            CurrentStatsRead;                                 		// 0x02C8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FPendingPlayerStats >               PendingStats;                                     		// 0x02CC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     KeyboardResultsString;                            		// 0x02D8 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   KeyboardInputDelegates;                           		// 0x02E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendInviteReceivedDelegates;                    		// 0x02F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendMessageReceivedDelegates;                   		// 0x02FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AddFriendByNameCompleteDelegates;                 		// 0x0308 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FProfileSettingsCache                       ProfileCache;                                     		// 0x0314 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlinePlayerStorage*                        PlayerStorageCache;                               		// 0x033C (0x0004) [0x0000000000000000]              
	struct FString                                     CachedFriendMessage;                              		// 0x0340 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FDeviceIdCache                              DeviceCache;                                      		// 0x034C (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           LocationUrlsForInvites;                           		// 0x0368 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     LocationUrl;                                      		// 0x0374 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReceivedGameInviteDelegates;                      		// 0x0380 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   JoinFriendGameCompleteDelegates;                  		// 0x038C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   GetNumberOfCurrentPlayersCompleteDelegates;       		// 0x0398 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RegisterHostStatGuidCompleteDelegates;            		// 0x03A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineFriendMessage >              CachedFriendMessages;                             		// 0x03B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineStatusMapping >              StatusMappings;                                   		// 0x03BC (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DefaultStatus;                                    		// 0x03C8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GameInviteMessage;                                		// 0x03D4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FControllerConnectionState                  ControllerStates[ 0x4 ];                          		// 0x03E0 (0x0020) [0x0000000000000000]              
	float                                              ConnectionPresenceTimeInterval;                   		// 0x0400 (0x0004) [0x0000000000000000]              
	float                                              ConnectionPresenceElapsedTime;                    		// 0x0404 (0x0004) [0x0000000000000000]              
	struct FString                                     EncryptedProductKey;                              		// 0x0408 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      MuteList;                                         		// 0x0414 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FSteamUserCloud >                   UserCloudFiles;                                   		// 0x0420 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSteamUserCloudMetadata >           UserCloudMetadata;                                		// 0x042C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTitleFile >                        SharedFileCache;                                  		// 0x0438 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQueuedAvatarRequest >              QueuedAvatarRequests;                             		// 0x0444 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FAchievementMappingInfo >           AchievementMappings;                              		// 0x0450 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FAchievementProgressStat >          PendingAchievementProgress;                       		// 0x045C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FLeaderboardTemplate >              LeaderboardList;                                  		// 0x0468 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDeferredLeaderboardRead >          DeferredLeaderboardReads;                         		// 0x0474 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FDeferredLeaderboardWrite >         DeferredLeaderboardWrites;                        		// 0x0480 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FDeferredLeaderboardWrite >         PendingLeaderboardStats;                          		// 0x048C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FViewIdToLeaderboardName >          LeaderboardNameMappings;                          		// 0x0498 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< int >                                      GameServerStatsMappings;                          		// 0x04A4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UOnlineAuthInterfaceSteamworks*              CachedAuthInt;                                    		// 0x04B0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FIpAddr >                           PendingRedirects;                                 		// 0x04B4 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UOnlineLobbyInterfaceSteamworks*             LobbyInterface;                                   		// 0x04C0 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x04C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x04D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x04DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x04E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x04F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x0500 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x050C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x0518 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x0524 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x0530 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x053C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x0548 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x0554 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;           		// 0x0560 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                		// 0x056C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x0578 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x0584 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x0590 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x059C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x05A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x05B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x05C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x05CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;       		// 0x05D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x05E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x05F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x05FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x0608 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x0614 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x0620 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x062C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;            		// 0x0638 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x0644 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                 		// 0x0650 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x065C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadOnlineAvatarComplete__Delegate;           		// 0x0668 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;  		// 0x0674 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;		// 0x0680 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;         		// 0x068C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;               		// 0x0698 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;              		// 0x06A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;             		// 0x06B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadSharedFileComplete__Delegate;             		// 0x06BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteSharedFileComplete__Delegate;            		// 0x06C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1837 ];

		return pClassPointer;
	};

	void ClearAllDelegates ( );
	void ClearWriteSharedFileCompleteDelegate ( struct FScriptDelegate WriteSharedFileCompleteDelegate );
	void AddWriteSharedFileCompleteDelegate ( struct FScriptDelegate WriteSharedFileCompleteDelegate );
	bool WriteSharedFile ( struct FString UserId, struct FString Filename, TArray< unsigned char >* Contents );
	void OnWriteSharedFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename, struct FString SharedHandle );
	void ClearReadSharedFileCompleteDelegate ( struct FScriptDelegate ReadSharedFileCompleteDelegate );
	void AddReadSharedFileCompleteDelegate ( struct FScriptDelegate ReadSharedFileCompleteDelegate );
	bool ReadSharedFile ( struct FString SharedHandle );
	void OnReadSharedFileComplete ( unsigned long bWasSuccessful, struct FString SharedHandle );
	bool ClearSharedFile ( struct FString SharedHandle );
	bool ClearSharedFiles ( );
	bool GetSharedFileContents ( struct FString SharedHandle, TArray< unsigned char >* FileContents );
	void ClearDeleteUserFileCompleteDelegate ( struct FScriptDelegate DeleteUserFileCompleteDelegate );
	void AddDeleteUserFileCompleteDelegate ( struct FScriptDelegate DeleteUserFileCompleteDelegate );
	bool DeleteUserFile ( struct FString UserId, struct FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete );
	void OnDeleteUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename );
	void ClearWriteUserFileCompleteDelegate ( struct FScriptDelegate WriteUserFileCompleteDelegate );
	void AddWriteUserFileCompleteDelegate ( struct FScriptDelegate WriteUserFileCompleteDelegate );
	bool WriteUserFile ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents );
	void OnWriteUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename );
	void ClearReadUserFileCompleteDelegate ( struct FScriptDelegate ReadUserFileCompleteDelegate );
	void AddReadUserFileCompleteDelegate ( struct FScriptDelegate ReadUserFileCompleteDelegate );
	bool ReadUserFile ( struct FString UserId, struct FString Filename );
	void OnReadUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename );
	void GetUserFileList ( struct FString UserId, TArray< struct FEmsFile >* UserFiles );
	void ClearEnumerateUserFileCompleteDelegate ( struct FScriptDelegate EnumerateUserFileCompleteDelegate );
	void AddEnumerateUserFileCompleteDelegate ( struct FScriptDelegate EnumerateUserFileCompleteDelegate );
	void EnumerateUserFiles ( struct FString UserId );
	void OnEnumerateUserFilesComplete ( unsigned long bWasSuccessful, struct FString UserId );
	bool ClearFile ( struct FString UserId, struct FString Filename );
	bool ClearFiles ( struct FString UserId );
	bool GetFileContents ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents );
	bool WriteUserFileInternal ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents );
	bool GetFriendJoinURL ( struct FUniqueNetId FriendUID, struct FString* ServerURL, struct FString* ServerUID );
	bool GetCommandlineJoinURL ( unsigned long bMarkAsJoined, struct FString* ServerURL, struct FString* ServerUID );
	bool Int64ToUniqueNetId ( struct FString UIDString, struct FUniqueNetId* OutUID );
	struct FString UniqueNetIdToInt64 ( struct FUniqueNetId* Uid );
	bool eventSetLobbyInterface ( class UObject* NewInterface );
	void NotifyVOIPPlaybackFinished ( class UAudioComponent* VOIPAudioComponent );
	void OnVOIPPlaybackFinished ( class UAudioComponent* AC );
	bool ShowProfileUI ( unsigned char LocalUserNum, struct FString SubURL, struct FUniqueNetId PlayerUID );
	struct FString UniqueNetIdToPlayerName ( struct FUniqueNetId* Uid );
	bool DisplayAchievementProgress ( int AchievementId, int ProgressCount, int MaxProgress );
	bool CreateLeaderboard ( struct FString LeaderboardName, unsigned char SortType, unsigned char DisplayFormat );
	bool ResetStats ( unsigned long bResetAchievements );
	bool ShowCustomMessageUI ( unsigned char LocalUserNum, struct FString MessageTitle, struct FString NonEditableMessage, struct FString EditableMessage, TArray< struct FUniqueNetId >* Recipients );
	void ClearCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId );
	class UOnlineProfileSettings* GetCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId );
	void ClearReadCrossTitleProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void AddReadCrossTitleProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void OnReadCrossTitleProfileSettingsComplete ( unsigned char LocalUserNum, int TitleId, unsigned long bWasSuccessful );
	bool ReadCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings );
	bool UnlockAvatarAward ( unsigned char LocalUserNum, int AvatarItemId );
	void GetSteamClanData ( TArray< struct FSteamPlayerClanData >* Results );
	void ClearGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate );
	void AddGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate );
	void OnGetNumberOfCurrentPlayersComplete ( int TotalPlayers );
	bool GetNumberOfCurrentPlayers ( );
	void ReadOnlineAvatar ( struct FUniqueNetId PlayerNetId, int Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate );
	void OnReadOnlineAvatarComplete ( struct FUniqueNetId PlayerNetId, class UTexture2D* Avatar );
	bool ShowCustomPlayersUI ( unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray< struct FUniqueNetId >* Players );
	unsigned char GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements );
	void ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void OnReadAchievementsComplete ( int TitleId );
	bool ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages );
	bool ShowPlayersUI ( unsigned char LocalUserNum );
	bool ShowFriendsInviteUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool ShowFriendsUI ( unsigned char LocalUserNum );
	void ClearProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void AddProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void OnProfileDataChanged ( );
	bool UnlockGamerPicture ( unsigned char LocalUserNum, int PictureId );
	void ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void OnUnlockAchievementComplete ( unsigned long bWasSuccessful );
	bool UnlockAchievement ( unsigned char LocalUserNum, int AchievementId );
	bool IsDeviceValid ( int DeviceID, int SizeNeeded );
	int GetDeviceSelectionResults ( unsigned char LocalUserNum, struct FString* DeviceName );
	void ClearDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void AddDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void OnDeviceSelectionComplete ( unsigned long bWasSuccessful );
	bool ShowDeviceSelectionUI ( unsigned char LocalUserNum, int SizeNeeded, unsigned long bManageStorage );
	bool ShowMembershipMarketplaceUI ( unsigned char LocalUserNum );
	bool ShowContentMarketplaceUI ( unsigned char LocalUserNum, int CategoryMask, int OfferId );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText );
	bool ShowAchievementsUI ( unsigned char LocalUserNum );
	bool ShowMessagesUI ( unsigned char LocalUserNum );
	bool ShowGamerCardUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool ShowFeedbackUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool DeleteMessage ( unsigned char LocalUserNum, int MessageIndex );
	bool UnmuteAll ( unsigned char LocalUserNum );
	bool MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends );
	void CalcAggregateSkill ( TArray< struct FDouble > Mus, TArray< struct FDouble > Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma );
	bool RegisterStatGuid ( struct FUniqueNetId PlayerID, struct FString* ClientStatGuid );
	struct FString GetClientStatGuid ( );
	void ClearRegisterHostStatGuidCompleteDelegateDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void AddRegisterHostStatGuidCompleteDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful );
	bool RegisterHostStatGuid ( struct FString* HostStatGuid );
	struct FString GetHostStatGuid ( );
	void ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message );
	void GetFriendMessages ( unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages );
	void ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void OnJoinFriendGameComplete ( unsigned long bWasSuccessful );
	bool JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend );
	void ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate );
	void AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate );
	void OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName );
	bool SendGameInviteToFriends ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Friends, struct FString Text );
	bool SendGameInviteToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text );
	bool SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message );
	void ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate );
	void AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate );
	void OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message );
	bool DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	bool AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	bool RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend );
	void ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void OnAddFriendByNameComplete ( unsigned long bWasSuccessful );
	bool AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message );
	bool AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message );
	struct FString GetKeyboardInputResults ( unsigned char* bWasCanceled );
	void ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void OnKeyboardInputComplete ( unsigned long bWasSuccessful );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength );
	void SetOnlineStatus ( unsigned char LocalUserNum, int StatusId, TArray< struct FLocalizedStringSetting >* LocalizedStringSettings, TArray< struct FSettingsProperty >* Properties );
	bool GetLocalAccountNames ( TArray< struct FString >* Accounts );
	bool DeleteLocalAccount ( struct FString UserName, struct FString Password );
	bool RenameLocalAccount ( struct FString NewUserName, struct FString OldUserName, struct FString Password );
	bool CreateLocalAccount ( struct FString UserName, struct FString Password );
	void ClearCreateOnlineAccountCompletedDelegate ( struct FScriptDelegate AccountCreateDelegate );
	void AddCreateOnlineAccountCompletedDelegate ( struct FScriptDelegate AccountCreateDelegate );
	void OnCreateOnlineAccountCompleted ( unsigned char ErrorStatus );
	bool CreateOnlineAccount ( struct FString UserName, struct FString Password, struct FString EmailAddress, struct FString ProductKey );
	unsigned char GetTitleFileState ( struct FString Filename );
	bool GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents );
	void ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	void AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	bool ReadTitleFile ( struct FString FileToRead );
	void OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename );
	void ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void OnStorageDeviceChange ( );
	int GetLocale ( );
	unsigned char GetNATType ( );
	void ClearConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate );
	void AddConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate );
	void OnConnectionStatusChange ( unsigned char ConnectionStatus );
	bool IsControllerConnected ( int ControllerId );
	void ClearControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate );
	void AddControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate );
	void OnControllerChange ( int ControllerId, unsigned long bIsConnected );
	void SetNetworkNotificationPosition ( unsigned char NewPos );
	unsigned char GetNetworkNotificationPosition ( );
	void ClearExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate );
	void AddExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate );
	void OnExternalUIChange ( unsigned long bIsOpening );
	void ClearLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate );
	void AddLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate );
	void OnLinkStatusChange ( unsigned long bIsConnected );
	bool HasLinkConnection ( );
	struct FString eventGetPlayerNicknameFromIndex ( int UserIndex );
	bool WriteOnlinePlayerScores ( struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores );
	void ClearFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void AddFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void OnFlushOnlineStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool FlushOnlineStats ( struct FName SessionName );
	bool WriteOnlineStats ( struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite );
	void FreeStats ( class UOnlineStatsRead* StatsRead );
	void ClearReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate );
	void AddReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate );
	void OnReadOnlineStatsComplete ( unsigned long bWasSuccessful );
	bool ReadOnlineStatsByRankAroundPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows );
	bool ReadOnlineStatsByRank ( class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead );
	bool ReadOnlineStatsForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead );
	bool ReadOnlineStats ( class UOnlineStatsRead* StatsRead, TArray< struct FUniqueNetId >* Players );
	bool SetSpeechRecognitionObject ( unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj );
	bool SelectVocabulary ( unsigned char LocalUserNum, int VocabularyId );
	void ClearRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate );
	void AddRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate );
	void OnRecognitionComplete ( );
	bool GetRecognitionResults ( unsigned char LocalUserNum, TArray< struct FSpeechRecognizedWord >* Words );
	bool StopSpeechRecognition ( unsigned char LocalUserNum );
	bool StartSpeechRecognition ( unsigned char LocalUserNum );
	void StopNetworkedVoice ( unsigned char LocalUserNum );
	void StartNetworkedVoice ( unsigned char LocalUserNum );
	void ClearPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void AddPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void OnPlayerTalkingStateChange ( struct FUniqueNetId Player, unsigned long bIsTalking );
	bool UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide );
	bool MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide );
	bool SetRemoteTalkerPriority ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority );
	bool IsHeadsetPresent ( unsigned char LocalUserNum );
	bool IsRemotePlayerTalking ( struct FUniqueNetId PlayerID );
	bool IsLocalPlayerTalking ( unsigned char LocalUserNum );
	bool UnregisterRemoteTalker ( struct FUniqueNetId PlayerID );
	bool RegisterRemoteTalker ( struct FUniqueNetId PlayerID );
	bool UnregisterLocalTalker ( unsigned char LocalUserNum );
	bool RegisterLocalTalker ( unsigned char LocalUserNum );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends );
	void ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void OnReadFriendsComplete ( unsigned long bWasSuccessful );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	void ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID );
	class UOnlinePlayerStorage* GetPlayerStorage ( unsigned char LocalUserNum );
	void ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful );
	bool ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage );
	void ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID );
	void ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings );
	class UOnlineProfileSettings* GetProfileSettings ( unsigned char LocalUserNum );
	void ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings );
	void ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate );
	void AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate );
	void ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	void AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	void ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId );
	void ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	void AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	bool IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool AreAnyFriends ( unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query );
	bool IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	unsigned char CanShowPresenceInformation ( unsigned char LocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char LocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char LocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char LocalUserNum );
	unsigned char CanCommunicate ( unsigned char LocalUserNum );
	unsigned char CanPlayOnline ( unsigned char LocalUserNum );
	struct FString GetPlayerNickname ( unsigned char LocalUserNum );
	bool GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID );
	bool IsLocalLogin ( unsigned char LocalUserNum );
	bool IsGuestLogin ( unsigned char LocalUserNum );
	unsigned char GetLoginStatus ( unsigned char LocalUserNum );
	void ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void OnLogoutCompleted ( unsigned long bWasSuccessful );
	bool Logout ( unsigned char LocalUserNum );
	void ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate );
	void AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate );
	void OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode );
	bool AutoLogin ( );
	bool Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	void OnFriendsChange ( );
	void OnMutingChange ( );
	void OnLoginCancelled ( );
	void OnLoginChange ( unsigned char LocalUserNum );
	void eventExit ( );
	bool eventInit ( );
};

UClass* UOnlineSubsystemSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.IpNetDriverSteamworks
// 0x0000 (0x01B4 - 0x01B4)
class UIpNetDriverSteamworks : public UTcpNetDriver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1838 ];

		return pClassPointer;
	};

};

UClass* UIpNetDriverSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks
// 0x0000 (0x902C - 0x902C)
class UIpNetConnectionSteamworks : public UTcpipConnection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1839 ];

		return pClassPointer;
	};

};

UClass* UIpNetConnectionSteamworks::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif