/*
#############################################################################################
# Forge War (1.0.9953.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_functions.h
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

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            OutServerIP                    ( CPF_Parm | CPF_OutParm )
// int                            OutServerPort                  ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceSteamworks::GetServerAddr ( int* OutServerIP, int* OutServerPort )
{
	static UFunction* pFnGetServerAddr = NULL;

	if ( ! pFnGetServerAddr )
		pFnGetServerAddr = (UFunction*) UObject::GObjObjects()->Data[ 40790 ];

	UOnlineAuthInterfaceSteamworks_execGetServerAddr_Parms GetServerAddr_Parms;

	pFnGetServerAddr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetServerAddr, &GetServerAddr_Parms, NULL );

	pFnGetServerAddr->FunctionFlags |= 0x400;

	if ( OutServerIP )
		*OutServerIP = GetServerAddr_Parms.OutServerIP;

	if ( OutServerPort )
		*OutServerPort = GetServerAddr_Parms.OutServerPort;

	return GetServerAddr_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            OutServerUID                   ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceSteamworks::GetServerUniqueId ( struct FUniqueNetId* OutServerUID )
{
	static UFunction* pFnGetServerUniqueId = NULL;

	if ( ! pFnGetServerUniqueId )
		pFnGetServerUniqueId = (UFunction*) UObject::GObjObjects()->Data[ 40787 ];

	UOnlineAuthInterfaceSteamworks_execGetServerUniqueId_Parms GetServerUniqueId_Parms;

	pFnGetServerUniqueId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetServerUniqueId, &GetServerUniqueId_Parms, NULL );

	pFnGetServerUniqueId->FunctionFlags |= 0x400;

	if ( OutServerUID )
		memcpy ( OutServerUID, &GetServerUniqueId_Parms.OutServerUID, 0x8 );

	return GetServerUniqueId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// int                            ServerIP                       ( CPF_Parm )
// int                            AuthTicketUID                  ( CPF_Parm )

bool UOnlineAuthInterfaceSteamworks::VerifyServerAuthSession ( struct FUniqueNetId ServerUID, int ServerIP, int AuthTicketUID )
{
	static UFunction* pFnVerifyServerAuthSession = NULL;

	if ( ! pFnVerifyServerAuthSession )
		pFnVerifyServerAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 40782 ];

	UOnlineAuthInterfaceSteamworks_execVerifyServerAuthSession_Parms VerifyServerAuthSession_Parms;
	memcpy ( &VerifyServerAuthSession_Parms.ServerUID, &ServerUID, 0x8 );
	VerifyServerAuthSession_Parms.ServerIP = ServerIP;
	VerifyServerAuthSession_Parms.AuthTicketUID = AuthTicketUID;

	pFnVerifyServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVerifyServerAuthSession, &VerifyServerAuthSession_Parms, NULL );

	pFnVerifyServerAuthSession->FunctionFlags |= 0x400;

	return VerifyServerAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// int                            ClientIP                       ( CPF_Parm )
// int                            ClientPort                     ( CPF_Parm )
// int                            OutAuthTicketUID               ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceSteamworks::CreateServerAuthSession ( struct FUniqueNetId ClientUID, int ClientIP, int ClientPort, int* OutAuthTicketUID )
{
	static UFunction* pFnCreateServerAuthSession = NULL;

	if ( ! pFnCreateServerAuthSession )
		pFnCreateServerAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 40776 ];

	UOnlineAuthInterfaceSteamworks_execCreateServerAuthSession_Parms CreateServerAuthSession_Parms;
	memcpy ( &CreateServerAuthSession_Parms.ClientUID, &ClientUID, 0x8 );
	CreateServerAuthSession_Parms.ClientIP = ClientIP;
	CreateServerAuthSession_Parms.ClientPort = ClientPort;

	pFnCreateServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateServerAuthSession, &CreateServerAuthSession_Parms, NULL );

	pFnCreateServerAuthSession->FunctionFlags |= 0x400;

	if ( OutAuthTicketUID )
		*OutAuthTicketUID = CreateServerAuthSession_Parms.OutAuthTicketUID;

	return CreateServerAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// int                            ClientIP                       ( CPF_Parm )
// int                            ClientPort                     ( CPF_Parm )
// int                            AuthTicketUID                  ( CPF_Parm )

bool UOnlineAuthInterfaceSteamworks::VerifyClientAuthSession ( struct FUniqueNetId ClientUID, int ClientIP, int ClientPort, int AuthTicketUID )
{
	static UFunction* pFnVerifyClientAuthSession = NULL;

	if ( ! pFnVerifyClientAuthSession )
		pFnVerifyClientAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 40770 ];

	UOnlineAuthInterfaceSteamworks_execVerifyClientAuthSession_Parms VerifyClientAuthSession_Parms;
	memcpy ( &VerifyClientAuthSession_Parms.ClientUID, &ClientUID, 0x8 );
	VerifyClientAuthSession_Parms.ClientIP = ClientIP;
	VerifyClientAuthSession_Parms.ClientPort = ClientPort;
	VerifyClientAuthSession_Parms.AuthTicketUID = AuthTicketUID;

	pFnVerifyClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVerifyClientAuthSession, &VerifyClientAuthSession_Parms, NULL );

	pFnVerifyClientAuthSession->FunctionFlags |= 0x400;

	return VerifyClientAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// int                            ServerIP                       ( CPF_Parm )
// int                            ServerPort                     ( CPF_Parm )
// unsigned long                  bSecure                        ( CPF_Parm )
// int                            OutAuthTicketUID               ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceSteamworks::CreateClientAuthSession ( struct FUniqueNetId ServerUID, int ServerIP, int ServerPort, unsigned long bSecure, int* OutAuthTicketUID )
{
	static UFunction* pFnCreateClientAuthSession = NULL;

	if ( ! pFnCreateClientAuthSession )
		pFnCreateClientAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 40763 ];

	UOnlineAuthInterfaceSteamworks_execCreateClientAuthSession_Parms CreateClientAuthSession_Parms;
	memcpy ( &CreateClientAuthSession_Parms.ServerUID, &ServerUID, 0x8 );
	CreateClientAuthSession_Parms.ServerIP = ServerIP;
	CreateClientAuthSession_Parms.ServerPort = ServerPort;
	CreateClientAuthSession_Parms.bSecure = bSecure;

	pFnCreateClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateClientAuthSession, &CreateClientAuthSession_Parms, NULL );

	pFnCreateClientAuthSession->FunctionFlags |= 0x400;

	if ( OutAuthTicketUID )
		*OutAuthTicketUID = CreateClientAuthSession_Parms.OutAuthTicketUID;

	return CreateClientAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )

bool UOnlineAuthInterfaceSteamworks::SendServerAuthRequest ( struct FUniqueNetId ServerUID )
{
	static UFunction* pFnSendServerAuthRequest = NULL;

	if ( ! pFnSendServerAuthRequest )
		pFnSendServerAuthRequest = (UFunction*) UObject::GObjObjects()->Data[ 40760 ];

	UOnlineAuthInterfaceSteamworks_execSendServerAuthRequest_Parms SendServerAuthRequest_Parms;
	memcpy ( &SendServerAuthRequest_Parms.ServerUID, &ServerUID, 0x8 );

	pFnSendServerAuthRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendServerAuthRequest, &SendServerAuthRequest_Parms, NULL );

	pFnSendServerAuthRequest->FunctionFlags |= 0x400;

	return SendServerAuthRequest_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ClientConnection               ( CPF_Parm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )

bool UOnlineAuthInterfaceSteamworks::SendClientAuthRequest ( class UPlayer* ClientConnection, struct FUniqueNetId ClientUID )
{
	static UFunction* pFnSendClientAuthRequest = NULL;

	if ( ! pFnSendClientAuthRequest )
		pFnSendClientAuthRequest = (UFunction*) UObject::GObjObjects()->Data[ 40756 ];

	UOnlineAuthInterfaceSteamworks_execSendClientAuthRequest_Parms SendClientAuthRequest_Parms;
	SendClientAuthRequest_Parms.ClientConnection = ClientConnection;
	memcpy ( &SendClientAuthRequest_Parms.ClientUID, &ClientUID, 0x8 );

	pFnSendClientAuthRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendClientAuthRequest, &SendClientAuthRequest_Parms, NULL );

	pFnSendClientAuthRequest->FunctionFlags |= 0x400;

	return SendClientAuthRequest_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            StartAt                        ( CPF_Parm )
// int                            NumberToQuery                  ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::QueryNonAdvertisedData ( int StartAt, int NumberToQuery )
{
	static UFunction* pFnQueryNonAdvertisedData = NULL;

	if ( ! pFnQueryNonAdvertisedData )
		pFnQueryNonAdvertisedData = (UFunction*) UObject::GObjObjects()->Data[ 40883 ];

	UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	QueryNonAdvertisedData_Parms.StartAt = StartAt;
	QueryNonAdvertisedData_Parms.NumberToQuery = NumberToQuery;

	this->ProcessEvent ( pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, NULL );

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterPlayerCompleteDelegate )
		pFnClearUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40880 ];

	UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterPlayerCompleteDelegate )
		pFnAddUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40878 ];

	UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceSteamworks::OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnregisterPlayerComplete = NULL;

	if ( ! pFnOnUnregisterPlayerComplete )
		pFnOnUnregisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 40808 ];

	UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy ( &OnUnregisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnUnregisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterPlayer = NULL;

	if ( ! pFnUnregisterPlayer )
		pFnUnregisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 40871 ];

	UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy ( &UnregisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &UnregisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );

	pFnUnregisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterPlayer, &UnregisterPlayer_Parms, NULL );

	pFnUnregisterPlayer->FunctionFlags |= 0x400;

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearRegisterPlayerCompleteDelegate )
		pFnClearRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40868 ];

	UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddRegisterPlayerCompleteDelegate )
		pFnAddRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40866 ];

	UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceSteamworks::OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterPlayerComplete = NULL;

	if ( ! pFnOnRegisterPlayerComplete )
		pFnOnRegisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 40805 ];

	UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy ( &OnRegisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnRegisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasInvited                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited )
{
	static UFunction* pFnRegisterPlayer = NULL;

	if ( ! pFnRegisterPlayer )
		pFnRegisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 40858 ];

	UOnlineGameInterfaceSteamworks_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy ( &RegisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &RegisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	pFnRegisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterPlayer, &RegisterPlayer_Parms, NULL );

	pFnRegisterPlayer->FunctionFlags |= 0x400;

	return RegisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName )
{
	static UFunction* pFnAcceptGameInvite = NULL;

	if ( ! pFnAcceptGameInvite )
		pFnAcceptGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 40854 ];

	UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptGameInvite_Parms.SessionName, &SessionName, 0x8 );

	pFnAcceptGameInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptGameInvite, &AcceptGameInvite_Parms, NULL );

	pFnAcceptGameInvite->FunctionFlags |= 0x400;

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// [0x00520000] 
// Parameters infos:
// struct FOnlineGameSearchResult InviteResult                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineGameInterfaceSteamworks::OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult )
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if ( ! pFnOnGameInviteAccepted )
		pFnOnGameInviteAccepted = (UFunction*) UObject::GObjObjects()->Data[ 40802 ];

	UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;

	this->ProcessEvent ( pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL );

	if ( InviteResult )
		memcpy ( InviteResult, &OnGameInviteAccepted_Parms.InviteResult, 0x8 );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnClearGameInviteAcceptedDelegate = NULL;

	if ( ! pFnClearGameInviteAcceptedDelegate )
		pFnClearGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40849 ];

	UOnlineGameInterfaceSteamworks_execClearGameInviteAcceptedDelegate_Parms ClearGameInviteAcceptedDelegate_Parms;
	ClearGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC );

	this->ProcessEvent ( pFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnAddGameInviteAcceptedDelegate = NULL;

	if ( ! pFnAddGameInviteAcceptedDelegate )
		pFnAddGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40846 ];

	UOnlineGameInterfaceSteamworks_execAddGameInviteAcceptedDelegate_Parms AddGameInviteAcceptedDelegate_Parms;
	AddGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC );

	this->ProcessEvent ( pFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     UpdatedGameSettings            ( CPF_Parm )
// unsigned long                  bShouldRefreshOnlineData       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineGameInterfaceSteamworks::UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData )
{
	static UFunction* pFnUpdateOnlineGame = NULL;

	if ( ! pFnUpdateOnlineGame )
		pFnUpdateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 40841 ];

	UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy ( &UpdateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	UpdateOnlineGame_Parms.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	pFnUpdateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, NULL );

	pFnUpdateOnlineGame->FunctionFlags |= 0x400;

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyId
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )

void UOnlineLobbyInterfaceSteamworks::SetLobbyId ( struct FUniqueNetId LobbyId )
{
	static UFunction* pFnSetLobbyId = NULL;

	if ( ! pFnSetLobbyId )
		pFnSetLobbyId = (UFunction*) UObject::GObjObjects()->Data[ 41164 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbyId_Parms SetLobbyId_Parms;
	memcpy ( &SetLobbyId_Parms.LobbyId, &LobbyId, 0x8 );

	pFnSetLobbyId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyId, &SetLobbyId_Parms, NULL );

	pFnSetLobbyId->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyFromCommandline
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bMarkAsJoined                  ( CPF_OptionalParm | CPF_Parm )
// struct FUniqueNetId            LobbyId                        ( CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::GetLobbyFromCommandline ( unsigned long bMarkAsJoined, struct FUniqueNetId* LobbyId )
{
	static UFunction* pFnGetLobbyFromCommandline = NULL;

	if ( ! pFnGetLobbyFromCommandline )
		pFnGetLobbyFromCommandline = (UFunction*) UObject::GObjObjects()->Data[ 41160 ];

	UOnlineLobbyInterfaceSteamworks_execGetLobbyFromCommandline_Parms GetLobbyFromCommandline_Parms;
	GetLobbyFromCommandline_Parms.bMarkAsJoined = bMarkAsJoined;

	pFnGetLobbyFromCommandline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLobbyFromCommandline, &GetLobbyFromCommandline_Parms, NULL );

	pFnGetLobbyFromCommandline->FunctionFlags |= 0x400;

	if ( LobbyId )
		memcpy ( LobbyId, &GetLobbyFromCommandline_Parms.LobbyId, 0x8 );

	return GetLobbyFromCommandline_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyInviteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyInviteDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::ClearLobbyInviteDelegate ( struct FScriptDelegate LobbyInviteDelegate )
{
	static UFunction* pFnClearLobbyInviteDelegate = NULL;

	if ( ! pFnClearLobbyInviteDelegate )
		pFnClearLobbyInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41157 ];

	UOnlineLobbyInterfaceSteamworks_execClearLobbyInviteDelegate_Parms ClearLobbyInviteDelegate_Parms;
	memcpy ( &ClearLobbyInviteDelegate_Parms.LobbyInviteDelegate, &LobbyInviteDelegate, 0xC );

	this->ProcessEvent ( pFnClearLobbyInviteDelegate, &ClearLobbyInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyInviteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyInviteDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::AddLobbyInviteDelegate ( struct FScriptDelegate LobbyInviteDelegate )
{
	static UFunction* pFnAddLobbyInviteDelegate = NULL;

	if ( ! pFnAddLobbyInviteDelegate )
		pFnAddLobbyInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41154 ];

	UOnlineLobbyInterfaceSteamworks_execAddLobbyInviteDelegate_Parms AddLobbyInviteDelegate_Parms;
	memcpy ( &AddLobbyInviteDelegate_Parms.LobbyInviteDelegate, &LobbyInviteDelegate, 0xC );

	this->ProcessEvent ( pFnAddLobbyInviteDelegate, &AddLobbyInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyInvite
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )
// struct FUniqueNetId            FriendId                       ( CPF_Parm )
// unsigned long                  bAccepted                      ( CPF_Parm )

void UOnlineLobbyInterfaceSteamworks::OnLobbyInvite ( struct FUniqueNetId LobbyId, struct FUniqueNetId FriendId, unsigned long bAccepted )
{
	static UFunction* pFnOnLobbyInvite = NULL;

	if ( ! pFnOnLobbyInvite )
		pFnOnLobbyInvite = (UFunction*) UObject::GObjObjects()->Data[ 41150 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbyInvite_Parms OnLobbyInvite_Parms;
	memcpy ( &OnLobbyInvite_Parms.LobbyId, &LobbyId, 0x8 );
	memcpy ( &OnLobbyInvite_Parms.FriendId, &FriendId, 0x8 );
	OnLobbyInvite_Parms.bAccepted = bAccepted;

	this->ProcessEvent ( pFnOnLobbyInvite, &OnLobbyInvite_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.InviteToLobby
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineLobbyInterfaceSteamworks::InviteToLobby ( struct FUniqueNetId LobbyId, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnInviteToLobby = NULL;

	if ( ! pFnInviteToLobby )
		pFnInviteToLobby = (UFunction*) UObject::GObjObjects()->Data[ 41146 ];

	UOnlineLobbyInterfaceSteamworks_execInviteToLobby_Parms InviteToLobby_Parms;
	memcpy ( &InviteToLobby_Parms.LobbyId, &LobbyId, 0x8 );
	memcpy ( &InviteToLobby_Parms.PlayerID, &PlayerID, 0x8 );

	pFnInviteToLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInviteToLobby, &InviteToLobby_Parms, NULL );

	pFnInviteToLobby->FunctionFlags |= 0x400;

	return InviteToLobby_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyOwner
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )
// struct FUniqueNetId            NewOwner                       ( CPF_Parm )

bool UOnlineLobbyInterfaceSteamworks::SetLobbyOwner ( struct FUniqueNetId LobbyId, struct FUniqueNetId NewOwner )
{
	static UFunction* pFnSetLobbyOwner = NULL;

	if ( ! pFnSetLobbyOwner )
		pFnSetLobbyOwner = (UFunction*) UObject::GObjObjects()->Data[ 41142 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbyOwner_Parms SetLobbyOwner_Parms;
	memcpy ( &SetLobbyOwner_Parms.LobbyId, &LobbyId, 0x8 );
	memcpy ( &SetLobbyOwner_Parms.NewOwner, &NewOwner, 0x8 );

	pFnSetLobbyOwner->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyOwner, &SetLobbyOwner_Parms, NULL );

	pFnSetLobbyOwner->FunctionFlags |= 0x400;

	return SetLobbyOwner_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyLock
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )
// unsigned long                  bLocked                        ( CPF_Parm )

bool UOnlineLobbyInterfaceSteamworks::SetLobbyLock ( struct FUniqueNetId LobbyId, unsigned long bLocked )
{
	static UFunction* pFnSetLobbyLock = NULL;

	if ( ! pFnSetLobbyLock )
		pFnSetLobbyLock = (UFunction*) UObject::GObjObjects()->Data[ 41138 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbyLock_Parms SetLobbyLock_Parms;
	memcpy ( &SetLobbyLock_Parms.LobbyId, &LobbyId, 0x8 );
	SetLobbyLock_Parms.bLocked = bLocked;

	pFnSetLobbyLock->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyLock, &SetLobbyLock_Parms, NULL );

	pFnSetLobbyLock->FunctionFlags |= 0x400;

	return SetLobbyLock_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )
// unsigned char                  Type                           ( CPF_Parm )

bool UOnlineLobbyInterfaceSteamworks::SetLobbyType ( struct FUniqueNetId LobbyId, unsigned char Type )
{
	static UFunction* pFnSetLobbyType = NULL;

	if ( ! pFnSetLobbyType )
		pFnSetLobbyType = (UFunction*) UObject::GObjObjects()->Data[ 41134 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbyType_Parms SetLobbyType_Parms;
	memcpy ( &SetLobbyType_Parms.LobbyId, &LobbyId, 0x8 );
	SetLobbyType_Parms.Type = Type;

	pFnSetLobbyType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyType, &SetLobbyType_Parms, NULL );

	pFnSetLobbyType->FunctionFlags |= 0x400;

	return SetLobbyType_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// struct FString                 ServerIP                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineLobbyInterfaceSteamworks::SetLobbyServer ( struct FUniqueNetId LobbyId, struct FUniqueNetId ServerUID, struct FString ServerIP )
{
	static UFunction* pFnSetLobbyServer = NULL;

	if ( ! pFnSetLobbyServer )
		pFnSetLobbyServer = (UFunction*) UObject::GObjObjects()->Data[ 41129 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbyServer_Parms SetLobbyServer_Parms;
	memcpy ( &SetLobbyServer_Parms.LobbyId, &LobbyId, 0x8 );
	memcpy ( &SetLobbyServer_Parms.ServerUID, &ServerUID, 0x8 );
	memcpy ( &SetLobbyServer_Parms.ServerIP, &ServerIP, 0xC );

	pFnSetLobbyServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyServer, &SetLobbyServer_Parms, NULL );

	pFnSetLobbyServer->FunctionFlags |= 0x400;

	return SetLobbyServer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.RemoveLobbySetting
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineLobbyInterfaceSteamworks::RemoveLobbySetting ( struct FUniqueNetId LobbyId, struct FString Key )
{
	static UFunction* pFnRemoveLobbySetting = NULL;

	if ( ! pFnRemoveLobbySetting )
		pFnRemoveLobbySetting = (UFunction*) UObject::GObjObjects()->Data[ 41125 ];

	UOnlineLobbyInterfaceSteamworks_execRemoveLobbySetting_Parms RemoveLobbySetting_Parms;
	memcpy ( &RemoveLobbySetting_Parms.LobbyId, &LobbyId, 0x8 );
	memcpy ( &RemoveLobbySetting_Parms.Key, &Key, 0xC );

	pFnRemoveLobbySetting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveLobbySetting, &RemoveLobbySetting_Parms, NULL );

	pFnRemoveLobbySetting->FunctionFlags |= 0x400;

	return RemoveLobbySetting_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbySetting
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineLobbyInterfaceSteamworks::SetLobbySetting ( struct FUniqueNetId LobbyId, struct FString Key, struct FString Value )
{
	static UFunction* pFnSetLobbySetting = NULL;

	if ( ! pFnSetLobbySetting )
		pFnSetLobbySetting = (UFunction*) UObject::GObjObjects()->Data[ 41120 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbySetting_Parms SetLobbySetting_Parms;
	memcpy ( &SetLobbySetting_Parms.LobbyId, &LobbyId, 0x8 );
	memcpy ( &SetLobbySetting_Parms.Key, &Key, 0xC );
	memcpy ( &SetLobbySetting_Parms.Value, &Value, 0xC );

	pFnSetLobbySetting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbySetting, &SetLobbySetting_Parms, NULL );

	pFnSetLobbySetting->FunctionFlags |= 0x400;

	return SetLobbySetting_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyAdmin
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )
// struct FUniqueNetId            AdminId                        ( CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceSteamworks::GetLobbyAdmin ( struct FUniqueNetId LobbyId, struct FUniqueNetId* AdminId )
{
	static UFunction* pFnGetLobbyAdmin = NULL;

	if ( ! pFnGetLobbyAdmin )
		pFnGetLobbyAdmin = (UFunction*) UObject::GObjObjects()->Data[ 41116 ];

	UOnlineLobbyInterfaceSteamworks_execGetLobbyAdmin_Parms GetLobbyAdmin_Parms;
	memcpy ( &GetLobbyAdmin_Parms.LobbyId, &LobbyId, 0x8 );

	pFnGetLobbyAdmin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLobbyAdmin, &GetLobbyAdmin_Parms, NULL );

	pFnGetLobbyAdmin->FunctionFlags |= 0x400;

	if ( AdminId )
		memcpy ( AdminId, &GetLobbyAdmin_Parms.AdminId, 0x8 );

	return GetLobbyAdmin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyKicked
// [0x00520000] 
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            AdminIndex                     ( CPF_Parm )
// TArray< struct FActiveLobbyInfo > LobbyList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::OnLobbyKicked ( int LobbyIndex, int AdminIndex, TArray< struct FActiveLobbyInfo >* LobbyList )
{
	static UFunction* pFnOnLobbyKicked = NULL;

	if ( ! pFnOnLobbyKicked )
		pFnOnLobbyKicked = (UFunction*) UObject::GObjObjects()->Data[ 41111 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbyKicked_Parms OnLobbyKicked_Parms;
	OnLobbyKicked_Parms.LobbyIndex = LobbyIndex;
	OnLobbyKicked_Parms.AdminIndex = AdminIndex;

	this->ProcessEvent ( pFnOnLobbyKicked, &OnLobbyKicked_Parms, NULL );

	if ( LobbyList )
		memcpy ( LobbyList, &OnLobbyKicked_Parms.LobbyList, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyJoinGameDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyJoinGameDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::ClearLobbyJoinGameDelegate ( struct FScriptDelegate LobbyJoinGameDelegate )
{
	static UFunction* pFnClearLobbyJoinGameDelegate = NULL;

	if ( ! pFnClearLobbyJoinGameDelegate )
		pFnClearLobbyJoinGameDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41108 ];

	UOnlineLobbyInterfaceSteamworks_execClearLobbyJoinGameDelegate_Parms ClearLobbyJoinGameDelegate_Parms;
	memcpy ( &ClearLobbyJoinGameDelegate_Parms.LobbyJoinGameDelegate, &LobbyJoinGameDelegate, 0xC );

	this->ProcessEvent ( pFnClearLobbyJoinGameDelegate, &ClearLobbyJoinGameDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyJoinGameDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyJoinGameDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::AddLobbyJoinGameDelegate ( struct FScriptDelegate LobbyJoinGameDelegate )
{
	static UFunction* pFnAddLobbyJoinGameDelegate = NULL;

	if ( ! pFnAddLobbyJoinGameDelegate )
		pFnAddLobbyJoinGameDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41106 ];

	UOnlineLobbyInterfaceSteamworks_execAddLobbyJoinGameDelegate_Parms AddLobbyJoinGameDelegate_Parms;
	memcpy ( &AddLobbyJoinGameDelegate_Parms.LobbyJoinGameDelegate, &LobbyJoinGameDelegate, 0xC );

	this->ProcessEvent ( pFnAddLobbyJoinGameDelegate, &AddLobbyJoinGameDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyJoinGameDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// struct FUniqueNetId            ServerID                       ( CPF_Parm )
// struct FString                 ServerIP                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbyJoinGameDelegates ( int LobbyIndex, struct FUniqueNetId ServerID, struct FString ServerIP )
{
	static UFunction* pFnTriggerLobbyJoinGameDelegates = NULL;

	if ( ! pFnTriggerLobbyJoinGameDelegates )
		pFnTriggerLobbyJoinGameDelegates = (UFunction*) UObject::GObjObjects()->Data[ 41098 ];

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyJoinGameDelegates_Parms TriggerLobbyJoinGameDelegates_Parms;
	TriggerLobbyJoinGameDelegates_Parms.LobbyIndex = LobbyIndex;
	memcpy ( &TriggerLobbyJoinGameDelegates_Parms.ServerID, &ServerID, 0x8 );
	memcpy ( &TriggerLobbyJoinGameDelegates_Parms.ServerIP, &ServerIP, 0xC );

	this->ProcessEvent ( pFnTriggerLobbyJoinGameDelegates, &TriggerLobbyJoinGameDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyJoinGame
// [0x00520000] 
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// struct FUniqueNetId            ServerID                       ( CPF_Parm )
// struct FString                 ServerIP                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FActiveLobbyInfo > LobbyList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::OnLobbyJoinGame ( int LobbyIndex, struct FUniqueNetId ServerID, struct FString ServerIP, TArray< struct FActiveLobbyInfo >* LobbyList )
{
	static UFunction* pFnOnLobbyJoinGame = NULL;

	if ( ! pFnOnLobbyJoinGame )
		pFnOnLobbyJoinGame = (UFunction*) UObject::GObjObjects()->Data[ 41092 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbyJoinGame_Parms OnLobbyJoinGame_Parms;
	OnLobbyJoinGame_Parms.LobbyIndex = LobbyIndex;
	memcpy ( &OnLobbyJoinGame_Parms.ServerID, &ServerID, 0x8 );
	memcpy ( &OnLobbyJoinGame_Parms.ServerIP, &ServerIP, 0xC );

	this->ProcessEvent ( pFnOnLobbyJoinGame, &OnLobbyJoinGame_Parms, NULL );

	if ( LobbyList )
		memcpy ( LobbyList, &OnLobbyJoinGame_Parms.LobbyList, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyReceiveBinaryDataDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyReceiveBinaryDataDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::ClearLobbyReceiveBinaryDataDelegate ( struct FScriptDelegate LobbyReceiveBinaryDataDelegate )
{
	static UFunction* pFnClearLobbyReceiveBinaryDataDelegate = NULL;

	if ( ! pFnClearLobbyReceiveBinaryDataDelegate )
		pFnClearLobbyReceiveBinaryDataDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41089 ];

	UOnlineLobbyInterfaceSteamworks_execClearLobbyReceiveBinaryDataDelegate_Parms ClearLobbyReceiveBinaryDataDelegate_Parms;
	memcpy ( &ClearLobbyReceiveBinaryDataDelegate_Parms.LobbyReceiveBinaryDataDelegate, &LobbyReceiveBinaryDataDelegate, 0xC );

	this->ProcessEvent ( pFnClearLobbyReceiveBinaryDataDelegate, &ClearLobbyReceiveBinaryDataDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyReceiveBinaryDataDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyReceiveBinaryDataDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::AddLobbyReceiveBinaryDataDelegate ( struct FScriptDelegate LobbyReceiveBinaryDataDelegate )
{
	static UFunction* pFnAddLobbyReceiveBinaryDataDelegate = NULL;

	if ( ! pFnAddLobbyReceiveBinaryDataDelegate )
		pFnAddLobbyReceiveBinaryDataDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41087 ];

	UOnlineLobbyInterfaceSteamworks_execAddLobbyReceiveBinaryDataDelegate_Parms AddLobbyReceiveBinaryDataDelegate_Parms;
	memcpy ( &AddLobbyReceiveBinaryDataDelegate_Parms.LobbyReceiveBinaryDataDelegate, &LobbyReceiveBinaryDataDelegate, 0xC );

	this->ProcessEvent ( pFnAddLobbyReceiveBinaryDataDelegate, &AddLobbyReceiveBinaryDataDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyReceiveBinaryDataDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            MemberIndex                    ( CPF_Parm )

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbyReceiveBinaryDataDelegates ( int LobbyIndex, int MemberIndex )
{
	static UFunction* pFnTriggerLobbyReceiveBinaryDataDelegates = NULL;

	if ( ! pFnTriggerLobbyReceiveBinaryDataDelegates )
		pFnTriggerLobbyReceiveBinaryDataDelegates = (UFunction*) UObject::GObjObjects()->Data[ 41079 ];

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyReceiveBinaryDataDelegates_Parms TriggerLobbyReceiveBinaryDataDelegates_Parms;
	TriggerLobbyReceiveBinaryDataDelegates_Parms.LobbyIndex = LobbyIndex;
	TriggerLobbyReceiveBinaryDataDelegates_Parms.MemberIndex = MemberIndex;

	this->ProcessEvent ( pFnTriggerLobbyReceiveBinaryDataDelegates, &TriggerLobbyReceiveBinaryDataDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyReceiveBinaryData
// [0x00520000] 
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            MemberIndex                    ( CPF_Parm )
// TArray< struct FActiveLobbyInfo > LobbyList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< unsigned char >        Data                           ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::OnLobbyReceiveBinaryData ( int LobbyIndex, int MemberIndex, TArray< struct FActiveLobbyInfo >* LobbyList, TArray< unsigned char >* Data )
{
	static UFunction* pFnOnLobbyReceiveBinaryData = NULL;

	if ( ! pFnOnLobbyReceiveBinaryData )
		pFnOnLobbyReceiveBinaryData = (UFunction*) UObject::GObjObjects()->Data[ 41072 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbyReceiveBinaryData_Parms OnLobbyReceiveBinaryData_Parms;
	OnLobbyReceiveBinaryData_Parms.LobbyIndex = LobbyIndex;
	OnLobbyReceiveBinaryData_Parms.MemberIndex = MemberIndex;

	this->ProcessEvent ( pFnOnLobbyReceiveBinaryData, &OnLobbyReceiveBinaryData_Parms, NULL );

	if ( LobbyList )
		memcpy ( LobbyList, &OnLobbyReceiveBinaryData_Parms.LobbyList, 0xC );

	if ( Data )
		memcpy ( Data, &OnLobbyReceiveBinaryData_Parms.Data, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyReceiveMessageDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyReceiveMessageDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::ClearLobbyReceiveMessageDelegate ( struct FScriptDelegate LobbyReceiveMessageDelegate )
{
	static UFunction* pFnClearLobbyReceiveMessageDelegate = NULL;

	if ( ! pFnClearLobbyReceiveMessageDelegate )
		pFnClearLobbyReceiveMessageDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41069 ];

	UOnlineLobbyInterfaceSteamworks_execClearLobbyReceiveMessageDelegate_Parms ClearLobbyReceiveMessageDelegate_Parms;
	memcpy ( &ClearLobbyReceiveMessageDelegate_Parms.LobbyReceiveMessageDelegate, &LobbyReceiveMessageDelegate, 0xC );

	this->ProcessEvent ( pFnClearLobbyReceiveMessageDelegate, &ClearLobbyReceiveMessageDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyReceiveMessageDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyReceiveMessageDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::AddLobbyReceiveMessageDelegate ( struct FScriptDelegate LobbyReceiveMessageDelegate )
{
	static UFunction* pFnAddLobbyReceiveMessageDelegate = NULL;

	if ( ! pFnAddLobbyReceiveMessageDelegate )
		pFnAddLobbyReceiveMessageDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41067 ];

	UOnlineLobbyInterfaceSteamworks_execAddLobbyReceiveMessageDelegate_Parms AddLobbyReceiveMessageDelegate_Parms;
	memcpy ( &AddLobbyReceiveMessageDelegate_Parms.LobbyReceiveMessageDelegate, &LobbyReceiveMessageDelegate, 0xC );

	this->ProcessEvent ( pFnAddLobbyReceiveMessageDelegate, &AddLobbyReceiveMessageDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyReceiveMessageDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            MemberIndex                    ( CPF_Parm )
// struct FString                 Type                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbyReceiveMessageDelegates ( int LobbyIndex, int MemberIndex, struct FString Type, struct FString Message )
{
	static UFunction* pFnTriggerLobbyReceiveMessageDelegates = NULL;

	if ( ! pFnTriggerLobbyReceiveMessageDelegates )
		pFnTriggerLobbyReceiveMessageDelegates = (UFunction*) UObject::GObjObjects()->Data[ 41058 ];

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyReceiveMessageDelegates_Parms TriggerLobbyReceiveMessageDelegates_Parms;
	TriggerLobbyReceiveMessageDelegates_Parms.LobbyIndex = LobbyIndex;
	TriggerLobbyReceiveMessageDelegates_Parms.MemberIndex = MemberIndex;
	memcpy ( &TriggerLobbyReceiveMessageDelegates_Parms.Type, &Type, 0xC );
	memcpy ( &TriggerLobbyReceiveMessageDelegates_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnTriggerLobbyReceiveMessageDelegates, &TriggerLobbyReceiveMessageDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyReceiveMessage
// [0x00520000] 
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            MemberIndex                    ( CPF_Parm )
// struct FString                 Type                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FActiveLobbyInfo > LobbyList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::OnLobbyReceiveMessage ( int LobbyIndex, int MemberIndex, struct FString Type, struct FString Message, TArray< struct FActiveLobbyInfo >* LobbyList )
{
	static UFunction* pFnOnLobbyReceiveMessage = NULL;

	if ( ! pFnOnLobbyReceiveMessage )
		pFnOnLobbyReceiveMessage = (UFunction*) UObject::GObjObjects()->Data[ 41051 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbyReceiveMessage_Parms OnLobbyReceiveMessage_Parms;
	OnLobbyReceiveMessage_Parms.LobbyIndex = LobbyIndex;
	OnLobbyReceiveMessage_Parms.MemberIndex = MemberIndex;
	memcpy ( &OnLobbyReceiveMessage_Parms.Type, &Type, 0xC );
	memcpy ( &OnLobbyReceiveMessage_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnLobbyReceiveMessage, &OnLobbyReceiveMessage_Parms, NULL );

	if ( LobbyList )
		memcpy ( LobbyList, &OnLobbyReceiveMessage_Parms.LobbyList, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyMemberStatusUpdateDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyMemberStatusUpdateDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::ClearLobbyMemberStatusUpdateDelegate ( struct FScriptDelegate LobbyMemberStatusUpdateDelegate )
{
	static UFunction* pFnClearLobbyMemberStatusUpdateDelegate = NULL;

	if ( ! pFnClearLobbyMemberStatusUpdateDelegate )
		pFnClearLobbyMemberStatusUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41048 ];

	UOnlineLobbyInterfaceSteamworks_execClearLobbyMemberStatusUpdateDelegate_Parms ClearLobbyMemberStatusUpdateDelegate_Parms;
	memcpy ( &ClearLobbyMemberStatusUpdateDelegate_Parms.LobbyMemberStatusUpdateDelegate, &LobbyMemberStatusUpdateDelegate, 0xC );

	this->ProcessEvent ( pFnClearLobbyMemberStatusUpdateDelegate, &ClearLobbyMemberStatusUpdateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyMemberStatusUpdateDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyMemberStatusUpdateDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::AddLobbyMemberStatusUpdateDelegate ( struct FScriptDelegate LobbyMemberStatusUpdateDelegate )
{
	static UFunction* pFnAddLobbyMemberStatusUpdateDelegate = NULL;

	if ( ! pFnAddLobbyMemberStatusUpdateDelegate )
		pFnAddLobbyMemberStatusUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41046 ];

	UOnlineLobbyInterfaceSteamworks_execAddLobbyMemberStatusUpdateDelegate_Parms AddLobbyMemberStatusUpdateDelegate_Parms;
	memcpy ( &AddLobbyMemberStatusUpdateDelegate_Parms.LobbyMemberStatusUpdateDelegate, &LobbyMemberStatusUpdateDelegate, 0xC );

	this->ProcessEvent ( pFnAddLobbyMemberStatusUpdateDelegate, &AddLobbyMemberStatusUpdateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyMemberStatusUpdateDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            MemberIndex                    ( CPF_Parm )
// int                            InstigatorIndex                ( CPF_Parm )
// struct FString                 Status                         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbyMemberStatusUpdateDelegates ( int LobbyIndex, int MemberIndex, int InstigatorIndex, struct FString Status )
{
	static UFunction* pFnTriggerLobbyMemberStatusUpdateDelegates = NULL;

	if ( ! pFnTriggerLobbyMemberStatusUpdateDelegates )
		pFnTriggerLobbyMemberStatusUpdateDelegates = (UFunction*) UObject::GObjObjects()->Data[ 41037 ];

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyMemberStatusUpdateDelegates_Parms TriggerLobbyMemberStatusUpdateDelegates_Parms;
	TriggerLobbyMemberStatusUpdateDelegates_Parms.LobbyIndex = LobbyIndex;
	TriggerLobbyMemberStatusUpdateDelegates_Parms.MemberIndex = MemberIndex;
	TriggerLobbyMemberStatusUpdateDelegates_Parms.InstigatorIndex = InstigatorIndex;
	memcpy ( &TriggerLobbyMemberStatusUpdateDelegates_Parms.Status, &Status, 0xC );

	this->ProcessEvent ( pFnTriggerLobbyMemberStatusUpdateDelegates, &TriggerLobbyMemberStatusUpdateDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyMemberStatusUpdate
// [0x00520000] 
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            MemberIndex                    ( CPF_Parm )
// int                            InstigatorIndex                ( CPF_Parm )
// struct FString                 Status                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FActiveLobbyInfo > LobbyList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::OnLobbyMemberStatusUpdate ( int LobbyIndex, int MemberIndex, int InstigatorIndex, struct FString Status, TArray< struct FActiveLobbyInfo >* LobbyList )
{
	static UFunction* pFnOnLobbyMemberStatusUpdate = NULL;

	if ( ! pFnOnLobbyMemberStatusUpdate )
		pFnOnLobbyMemberStatusUpdate = (UFunction*) UObject::GObjObjects()->Data[ 41030 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbyMemberStatusUpdate_Parms OnLobbyMemberStatusUpdate_Parms;
	OnLobbyMemberStatusUpdate_Parms.LobbyIndex = LobbyIndex;
	OnLobbyMemberStatusUpdate_Parms.MemberIndex = MemberIndex;
	OnLobbyMemberStatusUpdate_Parms.InstigatorIndex = InstigatorIndex;
	memcpy ( &OnLobbyMemberStatusUpdate_Parms.Status, &Status, 0xC );

	this->ProcessEvent ( pFnOnLobbyMemberStatusUpdate, &OnLobbyMemberStatusUpdate_Parms, NULL );

	if ( LobbyList )
		memcpy ( LobbyList, &OnLobbyMemberStatusUpdate_Parms.LobbyList, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyMemberSettingsUpdateDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyMemberSettingsUpdateDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::ClearLobbyMemberSettingsUpdateDelegate ( struct FScriptDelegate LobbyMemberSettingsUpdateDelegate )
{
	static UFunction* pFnClearLobbyMemberSettingsUpdateDelegate = NULL;

	if ( ! pFnClearLobbyMemberSettingsUpdateDelegate )
		pFnClearLobbyMemberSettingsUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41027 ];

	UOnlineLobbyInterfaceSteamworks_execClearLobbyMemberSettingsUpdateDelegate_Parms ClearLobbyMemberSettingsUpdateDelegate_Parms;
	memcpy ( &ClearLobbyMemberSettingsUpdateDelegate_Parms.LobbyMemberSettingsUpdateDelegate, &LobbyMemberSettingsUpdateDelegate, 0xC );

	this->ProcessEvent ( pFnClearLobbyMemberSettingsUpdateDelegate, &ClearLobbyMemberSettingsUpdateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyMemberSettingsUpdateDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyMemberSettingsUpdateDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::AddLobbyMemberSettingsUpdateDelegate ( struct FScriptDelegate LobbyMemberSettingsUpdateDelegate )
{
	static UFunction* pFnAddLobbyMemberSettingsUpdateDelegate = NULL;

	if ( ! pFnAddLobbyMemberSettingsUpdateDelegate )
		pFnAddLobbyMemberSettingsUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41025 ];

	UOnlineLobbyInterfaceSteamworks_execAddLobbyMemberSettingsUpdateDelegate_Parms AddLobbyMemberSettingsUpdateDelegate_Parms;
	memcpy ( &AddLobbyMemberSettingsUpdateDelegate_Parms.LobbyMemberSettingsUpdateDelegate, &LobbyMemberSettingsUpdateDelegate, 0xC );

	this->ProcessEvent ( pFnAddLobbyMemberSettingsUpdateDelegate, &AddLobbyMemberSettingsUpdateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyMemberSettingsUpdateDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            MemberIndex                    ( CPF_Parm )

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbyMemberSettingsUpdateDelegates ( int LobbyIndex, int MemberIndex )
{
	static UFunction* pFnTriggerLobbyMemberSettingsUpdateDelegates = NULL;

	if ( ! pFnTriggerLobbyMemberSettingsUpdateDelegates )
		pFnTriggerLobbyMemberSettingsUpdateDelegates = (UFunction*) UObject::GObjObjects()->Data[ 41018 ];

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyMemberSettingsUpdateDelegates_Parms TriggerLobbyMemberSettingsUpdateDelegates_Parms;
	TriggerLobbyMemberSettingsUpdateDelegates_Parms.LobbyIndex = LobbyIndex;
	TriggerLobbyMemberSettingsUpdateDelegates_Parms.MemberIndex = MemberIndex;

	this->ProcessEvent ( pFnTriggerLobbyMemberSettingsUpdateDelegates, &TriggerLobbyMemberSettingsUpdateDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyMemberSettingsUpdate
// [0x00520000] 
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            MemberIndex                    ( CPF_Parm )
// TArray< struct FActiveLobbyInfo > LobbyList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::OnLobbyMemberSettingsUpdate ( int LobbyIndex, int MemberIndex, TArray< struct FActiveLobbyInfo >* LobbyList )
{
	static UFunction* pFnOnLobbyMemberSettingsUpdate = NULL;

	if ( ! pFnOnLobbyMemberSettingsUpdate )
		pFnOnLobbyMemberSettingsUpdate = (UFunction*) UObject::GObjObjects()->Data[ 41013 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbyMemberSettingsUpdate_Parms OnLobbyMemberSettingsUpdate_Parms;
	OnLobbyMemberSettingsUpdate_Parms.LobbyIndex = LobbyIndex;
	OnLobbyMemberSettingsUpdate_Parms.MemberIndex = MemberIndex;

	this->ProcessEvent ( pFnOnLobbyMemberSettingsUpdate, &OnLobbyMemberSettingsUpdate_Parms, NULL );

	if ( LobbyList )
		memcpy ( LobbyList, &OnLobbyMemberSettingsUpdate_Parms.LobbyList, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbySettingsUpdateDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbySettingsUpdateDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::ClearLobbySettingsUpdateDelegate ( struct FScriptDelegate LobbySettingsUpdateDelegate )
{
	static UFunction* pFnClearLobbySettingsUpdateDelegate = NULL;

	if ( ! pFnClearLobbySettingsUpdateDelegate )
		pFnClearLobbySettingsUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41010 ];

	UOnlineLobbyInterfaceSteamworks_execClearLobbySettingsUpdateDelegate_Parms ClearLobbySettingsUpdateDelegate_Parms;
	memcpy ( &ClearLobbySettingsUpdateDelegate_Parms.LobbySettingsUpdateDelegate, &LobbySettingsUpdateDelegate, 0xC );

	this->ProcessEvent ( pFnClearLobbySettingsUpdateDelegate, &ClearLobbySettingsUpdateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbySettingsUpdateDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbySettingsUpdateDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::AddLobbySettingsUpdateDelegate ( struct FScriptDelegate LobbySettingsUpdateDelegate )
{
	static UFunction* pFnAddLobbySettingsUpdateDelegate = NULL;

	if ( ! pFnAddLobbySettingsUpdateDelegate )
		pFnAddLobbySettingsUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41008 ];

	UOnlineLobbyInterfaceSteamworks_execAddLobbySettingsUpdateDelegate_Parms AddLobbySettingsUpdateDelegate_Parms;
	memcpy ( &AddLobbySettingsUpdateDelegate_Parms.LobbySettingsUpdateDelegate, &LobbySettingsUpdateDelegate, 0xC );

	this->ProcessEvent ( pFnAddLobbySettingsUpdateDelegate, &AddLobbySettingsUpdateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbySettingsUpdateDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbySettingsUpdateDelegates ( int LobbyIndex )
{
	static UFunction* pFnTriggerLobbySettingsUpdateDelegates = NULL;

	if ( ! pFnTriggerLobbySettingsUpdateDelegates )
		pFnTriggerLobbySettingsUpdateDelegates = (UFunction*) UObject::GObjObjects()->Data[ 41002 ];

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbySettingsUpdateDelegates_Parms TriggerLobbySettingsUpdateDelegates_Parms;
	TriggerLobbySettingsUpdateDelegates_Parms.LobbyIndex = LobbyIndex;

	this->ProcessEvent ( pFnTriggerLobbySettingsUpdateDelegates, &TriggerLobbySettingsUpdateDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbySettingsUpdate
// [0x00520000] 
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// TArray< struct FActiveLobbyInfo > LobbyList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::OnLobbySettingsUpdate ( int LobbyIndex, TArray< struct FActiveLobbyInfo >* LobbyList )
{
	static UFunction* pFnOnLobbySettingsUpdate = NULL;

	if ( ! pFnOnLobbySettingsUpdate )
		pFnOnLobbySettingsUpdate = (UFunction*) UObject::GObjObjects()->Data[ 40998 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbySettingsUpdate_Parms OnLobbySettingsUpdate_Parms;
	OnLobbySettingsUpdate_Parms.LobbyIndex = LobbyIndex;

	this->ProcessEvent ( pFnOnLobbySettingsUpdate, &OnLobbySettingsUpdate_Parms, NULL );

	if ( LobbyList )
		memcpy ( LobbyList, &OnLobbySettingsUpdate_Parms.LobbyList, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyBinaryData
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )
// TArray< unsigned char >        Data                           ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineLobbyInterfaceSteamworks::SendLobbyBinaryData ( struct FUniqueNetId LobbyId, TArray< unsigned char >* Data )
{
	static UFunction* pFnSendLobbyBinaryData = NULL;

	if ( ! pFnSendLobbyBinaryData )
		pFnSendLobbyBinaryData = (UFunction*) UObject::GObjObjects()->Data[ 40993 ];

	UOnlineLobbyInterfaceSteamworks_execSendLobbyBinaryData_Parms SendLobbyBinaryData_Parms;
	memcpy ( &SendLobbyBinaryData_Parms.LobbyId, &LobbyId, 0x8 );

	pFnSendLobbyBinaryData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendLobbyBinaryData, &SendLobbyBinaryData_Parms, NULL );

	pFnSendLobbyBinaryData->FunctionFlags |= 0x400;

	if ( Data )
		memcpy ( Data, &SendLobbyBinaryData_Parms.Data, 0xC );

	return SendLobbyBinaryData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineLobbyInterfaceSteamworks::SendLobbyMessage ( struct FUniqueNetId LobbyId, struct FString Message )
{
	static UFunction* pFnSendLobbyMessage = NULL;

	if ( ! pFnSendLobbyMessage )
		pFnSendLobbyMessage = (UFunction*) UObject::GObjObjects()->Data[ 40989 ];

	UOnlineLobbyInterfaceSteamworks_execSendLobbyMessage_Parms SendLobbyMessage_Parms;
	memcpy ( &SendLobbyMessage_Parms.LobbyId, &LobbyId, 0x8 );
	memcpy ( &SendLobbyMessage_Parms.Message, &Message, 0xC );

	pFnSendLobbyMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendLobbyMessage, &SendLobbyMessage_Parms, NULL );

	pFnSendLobbyMessage->FunctionFlags |= 0x400;

	return SendLobbyMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyUserSetting
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineLobbyInterfaceSteamworks::SetLobbyUserSetting ( struct FUniqueNetId LobbyId, struct FString Key, struct FString Value )
{
	static UFunction* pFnSetLobbyUserSetting = NULL;

	if ( ! pFnSetLobbyUserSetting )
		pFnSetLobbyUserSetting = (UFunction*) UObject::GObjObjects()->Data[ 40984 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbyUserSetting_Parms SetLobbyUserSetting_Parms;
	memcpy ( &SetLobbyUserSetting_Parms.LobbyId, &LobbyId, 0x8 );
	memcpy ( &SetLobbyUserSetting_Parms.Key, &Key, 0xC );
	memcpy ( &SetLobbyUserSetting_Parms.Value, &Value, 0xC );

	pFnSetLobbyUserSetting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyUserSetting, &SetLobbyUserSetting_Parms, NULL );

	pFnSetLobbyUserSetting->FunctionFlags |= 0x400;

	return SetLobbyUserSetting_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LeaveLobby
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )

bool UOnlineLobbyInterfaceSteamworks::LeaveLobby ( struct FUniqueNetId LobbyId )
{
	static UFunction* pFnLeaveLobby = NULL;

	if ( ! pFnLeaveLobby )
		pFnLeaveLobby = (UFunction*) UObject::GObjObjects()->Data[ 40981 ];

	UOnlineLobbyInterfaceSteamworks_execLeaveLobby_Parms LeaveLobby_Parms;
	memcpy ( &LeaveLobby_Parms.LobbyId, &LobbyId, 0x8 );

	pFnLeaveLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLeaveLobby, &LeaveLobby_Parms, NULL );

	pFnLeaveLobby->FunctionFlags |= 0x400;

	return LeaveLobby_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearJoinLobbyCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinLobbyCompleteDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::ClearJoinLobbyCompleteDelegate ( struct FScriptDelegate JoinLobbyCompleteDelegate )
{
	static UFunction* pFnClearJoinLobbyCompleteDelegate = NULL;

	if ( ! pFnClearJoinLobbyCompleteDelegate )
		pFnClearJoinLobbyCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40978 ];

	UOnlineLobbyInterfaceSteamworks_execClearJoinLobbyCompleteDelegate_Parms ClearJoinLobbyCompleteDelegate_Parms;
	memcpy ( &ClearJoinLobbyCompleteDelegate_Parms.JoinLobbyCompleteDelegate, &JoinLobbyCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearJoinLobbyCompleteDelegate, &ClearJoinLobbyCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddJoinLobbyCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinLobbyCompleteDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::AddJoinLobbyCompleteDelegate ( struct FScriptDelegate JoinLobbyCompleteDelegate )
{
	static UFunction* pFnAddJoinLobbyCompleteDelegate = NULL;

	if ( ! pFnAddJoinLobbyCompleteDelegate )
		pFnAddJoinLobbyCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40976 ];

	UOnlineLobbyInterfaceSteamworks_execAddJoinLobbyCompleteDelegate_Parms AddJoinLobbyCompleteDelegate_Parms;
	memcpy ( &AddJoinLobbyCompleteDelegate_Parms.JoinLobbyCompleteDelegate, &JoinLobbyCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddJoinLobbyCompleteDelegate, &AddJoinLobbyCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerJoinLobbyCompleteDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// int                            LobbyIndex                     ( CPF_Parm )
// struct FUniqueNetId            LobbyUID                       ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::eventTriggerJoinLobbyCompleteDelegates ( unsigned long bWasSuccessful, int LobbyIndex, struct FUniqueNetId LobbyUID, struct FString Error )
{
	static UFunction* pFnTriggerJoinLobbyCompleteDelegates = NULL;

	if ( ! pFnTriggerJoinLobbyCompleteDelegates )
		pFnTriggerJoinLobbyCompleteDelegates = (UFunction*) UObject::GObjObjects()->Data[ 40966 ];

	UOnlineLobbyInterfaceSteamworks_eventTriggerJoinLobbyCompleteDelegates_Parms TriggerJoinLobbyCompleteDelegates_Parms;
	TriggerJoinLobbyCompleteDelegates_Parms.bWasSuccessful = bWasSuccessful;
	TriggerJoinLobbyCompleteDelegates_Parms.LobbyIndex = LobbyIndex;
	memcpy ( &TriggerJoinLobbyCompleteDelegates_Parms.LobbyUID, &LobbyUID, 0x8 );
	memcpy ( &TriggerJoinLobbyCompleteDelegates_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnTriggerJoinLobbyCompleteDelegates, &TriggerJoinLobbyCompleteDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnJoinLobbyComplete
// [0x00520000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// int                            LobbyIndex                     ( CPF_Parm )
// struct FUniqueNetId            LobbyUID                       ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FActiveLobbyInfo > LobbyList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::OnJoinLobbyComplete ( unsigned long bWasSuccessful, int LobbyIndex, struct FUniqueNetId LobbyUID, struct FString Error, TArray< struct FActiveLobbyInfo >* LobbyList )
{
	static UFunction* pFnOnJoinLobbyComplete = NULL;

	if ( ! pFnOnJoinLobbyComplete )
		pFnOnJoinLobbyComplete = (UFunction*) UObject::GObjObjects()->Data[ 40959 ];

	UOnlineLobbyInterfaceSteamworks_execOnJoinLobbyComplete_Parms OnJoinLobbyComplete_Parms;
	OnJoinLobbyComplete_Parms.bWasSuccessful = bWasSuccessful;
	OnJoinLobbyComplete_Parms.LobbyIndex = LobbyIndex;
	memcpy ( &OnJoinLobbyComplete_Parms.LobbyUID, &LobbyUID, 0x8 );
	memcpy ( &OnJoinLobbyComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnJoinLobbyComplete, &OnJoinLobbyComplete_Parms, NULL );

	if ( LobbyList )
		memcpy ( LobbyList, &OnJoinLobbyComplete_Parms.LobbyList, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.JoinLobby
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )

bool UOnlineLobbyInterfaceSteamworks::JoinLobby ( struct FUniqueNetId LobbyId )
{
	static UFunction* pFnJoinLobby = NULL;

	if ( ! pFnJoinLobby )
		pFnJoinLobby = (UFunction*) UObject::GObjObjects()->Data[ 40956 ];

	UOnlineLobbyInterfaceSteamworks_execJoinLobby_Parms JoinLobby_Parms;
	memcpy ( &JoinLobby_Parms.LobbyId, &LobbyId, 0x8 );

	pFnJoinLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinLobby, &JoinLobby_Parms, NULL );

	pFnJoinLobby->FunctionFlags |= 0x400;

	return JoinLobby_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearFindLobbiesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FindLobbiesCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::ClearFindLobbiesCompleteDelegate ( struct FScriptDelegate FindLobbiesCompleteDelegate )
{
	static UFunction* pFnClearFindLobbiesCompleteDelegate = NULL;

	if ( ! pFnClearFindLobbiesCompleteDelegate )
		pFnClearFindLobbiesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40953 ];

	UOnlineLobbyInterfaceSteamworks_execClearFindLobbiesCompleteDelegate_Parms ClearFindLobbiesCompleteDelegate_Parms;
	memcpy ( &ClearFindLobbiesCompleteDelegate_Parms.FindLobbiesCompleteDelegate, &FindLobbiesCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearFindLobbiesCompleteDelegate, &ClearFindLobbiesCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddFindLobbiesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FindLobbiesCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::AddFindLobbiesCompleteDelegate ( struct FScriptDelegate FindLobbiesCompleteDelegate )
{
	static UFunction* pFnAddFindLobbiesCompleteDelegate = NULL;

	if ( ! pFnAddFindLobbiesCompleteDelegate )
		pFnAddFindLobbiesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40951 ];

	UOnlineLobbyInterfaceSteamworks_execAddFindLobbiesCompleteDelegate_Parms AddFindLobbiesCompleteDelegate_Parms;
	memcpy ( &AddFindLobbiesCompleteDelegate_Parms.FindLobbiesCompleteDelegate, &FindLobbiesCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddFindLobbiesCompleteDelegate, &AddFindLobbiesCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerFindLobbiesCompleteDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineLobbyInterfaceSteamworks::eventTriggerFindLobbiesCompleteDelegates ( unsigned long bWasSuccessful )
{
	static UFunction* pFnTriggerFindLobbiesCompleteDelegates = NULL;

	if ( ! pFnTriggerFindLobbiesCompleteDelegates )
		pFnTriggerFindLobbiesCompleteDelegates = (UFunction*) UObject::GObjObjects()->Data[ 40944 ];

	UOnlineLobbyInterfaceSteamworks_eventTriggerFindLobbiesCompleteDelegates_Parms TriggerFindLobbiesCompleteDelegates_Parms;
	TriggerFindLobbiesCompleteDelegates_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnTriggerFindLobbiesCompleteDelegates, &TriggerFindLobbiesCompleteDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnFindLobbiesComplete
// [0x00520000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// TArray< struct FBasicLobbyInfo > LobbyList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::OnFindLobbiesComplete ( unsigned long bWasSuccessful, TArray< struct FBasicLobbyInfo >* LobbyList )
{
	static UFunction* pFnOnFindLobbiesComplete = NULL;

	if ( ! pFnOnFindLobbiesComplete )
		pFnOnFindLobbiesComplete = (UFunction*) UObject::GObjObjects()->Data[ 40940 ];

	UOnlineLobbyInterfaceSteamworks_execOnFindLobbiesComplete_Parms OnFindLobbiesComplete_Parms;
	OnFindLobbiesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnFindLobbiesComplete, &OnFindLobbiesComplete_Parms, NULL );

	if ( LobbyList )
		memcpy ( LobbyList, &OnFindLobbiesComplete_Parms.LobbyList, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.UpdateFoundLobbies
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            LobbyId                        ( CPF_OptionalParm | CPF_Parm )

bool UOnlineLobbyInterfaceSteamworks::UpdateFoundLobbies ( struct FUniqueNetId LobbyId )
{
	static UFunction* pFnUpdateFoundLobbies = NULL;

	if ( ! pFnUpdateFoundLobbies )
		pFnUpdateFoundLobbies = (UFunction*) UObject::GObjObjects()->Data[ 40937 ];

	UOnlineLobbyInterfaceSteamworks_execUpdateFoundLobbies_Parms UpdateFoundLobbies_Parms;
	memcpy ( &UpdateFoundLobbies_Parms.LobbyId, &LobbyId, 0x8 );

	pFnUpdateFoundLobbies->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateFoundLobbies, &UpdateFoundLobbies_Parms, NULL );

	pFnUpdateFoundLobbies->FunctionFlags |= 0x400;

	return UpdateFoundLobbies_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.FindLobbies
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            MaxResults                     ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FLobbyFilter >  Filters                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FLobbySortFilter > SortFilters                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            MinSlots                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  Distance                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineLobbyInterfaceSteamworks::FindLobbies ( int MaxResults, TArray< struct FLobbyFilter > Filters, TArray< struct FLobbySortFilter > SortFilters, int MinSlots, unsigned char Distance )
{
	static UFunction* pFnFindLobbies = NULL;

	if ( ! pFnFindLobbies )
		pFnFindLobbies = (UFunction*) UObject::GObjObjects()->Data[ 40928 ];

	UOnlineLobbyInterfaceSteamworks_execFindLobbies_Parms FindLobbies_Parms;
	FindLobbies_Parms.MaxResults = MaxResults;
	memcpy ( &FindLobbies_Parms.Filters, &Filters, 0xC );
	memcpy ( &FindLobbies_Parms.SortFilters, &SortFilters, 0xC );
	FindLobbies_Parms.MinSlots = MinSlots;
	FindLobbies_Parms.Distance = Distance;

	pFnFindLobbies->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindLobbies, &FindLobbies_Parms, NULL );

	pFnFindLobbies->FunctionFlags |= 0x400;

	return FindLobbies_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearCreateLobbyCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CreateLobbyCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::ClearCreateLobbyCompleteDelegate ( struct FScriptDelegate CreateLobbyCompleteDelegate )
{
	static UFunction* pFnClearCreateLobbyCompleteDelegate = NULL;

	if ( ! pFnClearCreateLobbyCompleteDelegate )
		pFnClearCreateLobbyCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40925 ];

	UOnlineLobbyInterfaceSteamworks_execClearCreateLobbyCompleteDelegate_Parms ClearCreateLobbyCompleteDelegate_Parms;
	memcpy ( &ClearCreateLobbyCompleteDelegate_Parms.CreateLobbyCompleteDelegate, &CreateLobbyCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearCreateLobbyCompleteDelegate, &ClearCreateLobbyCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddCreateLobbyCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CreateLobbyCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::AddCreateLobbyCompleteDelegate ( struct FScriptDelegate CreateLobbyCompleteDelegate )
{
	static UFunction* pFnAddCreateLobbyCompleteDelegate = NULL;

	if ( ! pFnAddCreateLobbyCompleteDelegate )
		pFnAddCreateLobbyCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40922 ];

	UOnlineLobbyInterfaceSteamworks_execAddCreateLobbyCompleteDelegate_Parms AddCreateLobbyCompleteDelegate_Parms;
	memcpy ( &AddCreateLobbyCompleteDelegate_Parms.CreateLobbyCompleteDelegate, &CreateLobbyCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddCreateLobbyCompleteDelegate, &AddCreateLobbyCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnCreateLobbyComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FUniqueNetId            LobbyId                        ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceSteamworks::OnCreateLobbyComplete ( unsigned long bWasSuccessful, struct FUniqueNetId LobbyId, struct FString Error )
{
	static UFunction* pFnOnCreateLobbyComplete = NULL;

	if ( ! pFnOnCreateLobbyComplete )
		pFnOnCreateLobbyComplete = (UFunction*) UObject::GObjObjects()->Data[ 40918 ];

	UOnlineLobbyInterfaceSteamworks_execOnCreateLobbyComplete_Parms OnCreateLobbyComplete_Parms;
	OnCreateLobbyComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnCreateLobbyComplete_Parms.LobbyId, &LobbyId, 0x8 );
	memcpy ( &OnCreateLobbyComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnCreateLobbyComplete, &OnCreateLobbyComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CreateLobby
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            MaxPlayers                     ( CPF_Parm )
// unsigned char                  Type                           ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FLobbyMetaData > InitialSettings                ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineLobbyInterfaceSteamworks::CreateLobby ( int MaxPlayers, unsigned char Type, TArray< struct FLobbyMetaData > InitialSettings )
{
	static UFunction* pFnCreateLobby = NULL;

	if ( ! pFnCreateLobby )
		pFnCreateLobby = (UFunction*) UObject::GObjObjects()->Data[ 40912 ];

	UOnlineLobbyInterfaceSteamworks_execCreateLobby_Parms CreateLobby_Parms;
	CreateLobby_Parms.MaxPlayers = MaxPlayers;
	CreateLobby_Parms.Type = Type;
	memcpy ( &CreateLobby_Parms.InitialSettings, &InitialSettings, 0xC );

	pFnCreateLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateLobby, &CreateLobby_Parms, NULL );

	pFnCreateLobby->FunctionFlags |= 0x400;

	return CreateLobby_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearAllDelegates ( )
{
	static UFunction* pFnClearAllDelegates = NULL;

	if ( ! pFnClearAllDelegates )
		pFnClearAllDelegates = (UFunction*) UObject::GObjObjects()->Data[ 42217 ];

	UOnlineSubsystemSteamworks_execClearAllDelegates_Parms ClearAllDelegates_Parms;

	this->ProcessEvent ( pFnClearAllDelegates, &ClearAllDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWriteSharedFileCompleteDelegate ( struct FScriptDelegate WriteSharedFileCompleteDelegate )
{
	static UFunction* pFnClearWriteSharedFileCompleteDelegate = NULL;

	if ( ! pFnClearWriteSharedFileCompleteDelegate )
		pFnClearWriteSharedFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 42214 ];

	UOnlineSubsystemSteamworks_execClearWriteSharedFileCompleteDelegate_Parms ClearWriteSharedFileCompleteDelegate_Parms;
	memcpy ( &ClearWriteSharedFileCompleteDelegate_Parms.WriteSharedFileCompleteDelegate, &WriteSharedFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearWriteSharedFileCompleteDelegate, &ClearWriteSharedFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWriteSharedFileCompleteDelegate ( struct FScriptDelegate WriteSharedFileCompleteDelegate )
{
	static UFunction* pFnAddWriteSharedFileCompleteDelegate = NULL;

	if ( ! pFnAddWriteSharedFileCompleteDelegate )
		pFnAddWriteSharedFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 42211 ];

	UOnlineSubsystemSteamworks_execAddWriteSharedFileCompleteDelegate_Parms AddWriteSharedFileCompleteDelegate_Parms;
	memcpy ( &AddWriteSharedFileCompleteDelegate_Parms.WriteSharedFileCompleteDelegate, &WriteSharedFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddWriteSharedFileCompleteDelegate, &AddWriteSharedFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        Contents                       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteSharedFile ( struct FString UserId, struct FString Filename, TArray< unsigned char >* Contents )
{
	static UFunction* pFnWriteSharedFile = NULL;

	if ( ! pFnWriteSharedFile )
		pFnWriteSharedFile = (UFunction*) UObject::GObjObjects()->Data[ 42205 ];

	UOnlineSubsystemSteamworks_execWriteSharedFile_Parms WriteSharedFile_Parms;
	memcpy ( &WriteSharedFile_Parms.UserId, &UserId, 0xC );
	memcpy ( &WriteSharedFile_Parms.Filename, &Filename, 0xC );

	pFnWriteSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteSharedFile, &WriteSharedFile_Parms, NULL );

	pFnWriteSharedFile->FunctionFlags |= 0x400;

	if ( Contents )
		memcpy ( Contents, &WriteSharedFile_Parms.Contents, 0xC );

	return WriteSharedFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SharedHandle                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnWriteSharedFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename, struct FString SharedHandle )
{
	static UFunction* pFnOnWriteSharedFileComplete = NULL;

	if ( ! pFnOnWriteSharedFileComplete )
		pFnOnWriteSharedFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 42200 ];

	UOnlineSubsystemSteamworks_execOnWriteSharedFileComplete_Parms OnWriteSharedFileComplete_Parms;
	OnWriteSharedFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnWriteSharedFileComplete_Parms.UserId, &UserId, 0xC );
	memcpy ( &OnWriteSharedFileComplete_Parms.Filename, &Filename, 0xC );
	memcpy ( &OnWriteSharedFileComplete_Parms.SharedHandle, &SharedHandle, 0xC );

	this->ProcessEvent ( pFnOnWriteSharedFileComplete, &OnWriteSharedFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadSharedFileCompleteDelegate ( struct FScriptDelegate ReadSharedFileCompleteDelegate )
{
	static UFunction* pFnClearReadSharedFileCompleteDelegate = NULL;

	if ( ! pFnClearReadSharedFileCompleteDelegate )
		pFnClearReadSharedFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 42197 ];

	UOnlineSubsystemSteamworks_execClearReadSharedFileCompleteDelegate_Parms ClearReadSharedFileCompleteDelegate_Parms;
	memcpy ( &ClearReadSharedFileCompleteDelegate_Parms.ReadSharedFileCompleteDelegate, &ReadSharedFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadSharedFileCompleteDelegate, &ClearReadSharedFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadSharedFileCompleteDelegate ( struct FScriptDelegate ReadSharedFileCompleteDelegate )
{
	static UFunction* pFnAddReadSharedFileCompleteDelegate = NULL;

	if ( ! pFnAddReadSharedFileCompleteDelegate )
		pFnAddReadSharedFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 42194 ];

	UOnlineSubsystemSteamworks_execAddReadSharedFileCompleteDelegate_Parms AddReadSharedFileCompleteDelegate_Parms;
	memcpy ( &AddReadSharedFileCompleteDelegate_Parms.ReadSharedFileCompleteDelegate, &ReadSharedFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadSharedFileCompleteDelegate, &AddReadSharedFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SharedHandle                   ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadSharedFile ( struct FString SharedHandle )
{
	static UFunction* pFnReadSharedFile = NULL;

	if ( ! pFnReadSharedFile )
		pFnReadSharedFile = (UFunction*) UObject::GObjObjects()->Data[ 42191 ];

	UOnlineSubsystemSteamworks_execReadSharedFile_Parms ReadSharedFile_Parms;
	memcpy ( &ReadSharedFile_Parms.SharedHandle, &SharedHandle, 0xC );

	pFnReadSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadSharedFile, &ReadSharedFile_Parms, NULL );

	pFnReadSharedFile->FunctionFlags |= 0x400;

	return ReadSharedFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 SharedHandle                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReadSharedFileComplete ( unsigned long bWasSuccessful, struct FString SharedHandle )
{
	static UFunction* pFnOnReadSharedFileComplete = NULL;

	if ( ! pFnOnReadSharedFileComplete )
		pFnOnReadSharedFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 42188 ];

	UOnlineSubsystemSteamworks_execOnReadSharedFileComplete_Parms OnReadSharedFileComplete_Parms;
	OnReadSharedFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadSharedFileComplete_Parms.SharedHandle, &SharedHandle, 0xC );

	this->ProcessEvent ( pFnOnReadSharedFileComplete, &OnReadSharedFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SharedHandle                   ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ClearSharedFile ( struct FString SharedHandle )
{
	static UFunction* pFnClearSharedFile = NULL;

	if ( ! pFnClearSharedFile )
		pFnClearSharedFile = (UFunction*) UObject::GObjObjects()->Data[ 42185 ];

	UOnlineSubsystemSteamworks_execClearSharedFile_Parms ClearSharedFile_Parms;
	memcpy ( &ClearSharedFile_Parms.SharedHandle, &SharedHandle, 0xC );

	pFnClearSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearSharedFile, &ClearSharedFile_Parms, NULL );

	pFnClearSharedFile->FunctionFlags |= 0x400;

	return ClearSharedFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::ClearSharedFiles ( )
{
	static UFunction* pFnClearSharedFiles = NULL;

	if ( ! pFnClearSharedFiles )
		pFnClearSharedFiles = (UFunction*) UObject::GObjObjects()->Data[ 42183 ];

	UOnlineSubsystemSteamworks_execClearSharedFiles_Parms ClearSharedFiles_Parms;

	pFnClearSharedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearSharedFiles, &ClearSharedFiles_Parms, NULL );

	pFnClearSharedFiles->FunctionFlags |= 0x400;

	return ClearSharedFiles_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SharedHandle                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetSharedFileContents ( struct FString SharedHandle, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetSharedFileContents = NULL;

	if ( ! pFnGetSharedFileContents )
		pFnGetSharedFileContents = (UFunction*) UObject::GObjObjects()->Data[ 42178 ];

	UOnlineSubsystemSteamworks_execGetSharedFileContents_Parms GetSharedFileContents_Parms;
	memcpy ( &GetSharedFileContents_Parms.SharedHandle, &SharedHandle, 0xC );

	pFnGetSharedFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSharedFileContents, &GetSharedFileContents_Parms, NULL );

	pFnGetSharedFileContents->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetSharedFileContents_Parms.FileContents, 0xC );

	return GetSharedFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearDeleteUserFileCompleteDelegate ( struct FScriptDelegate DeleteUserFileCompleteDelegate )
{
	static UFunction* pFnClearDeleteUserFileCompleteDelegate = NULL;

	if ( ! pFnClearDeleteUserFileCompleteDelegate )
		pFnClearDeleteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 42175 ];

	UOnlineSubsystemSteamworks_execClearDeleteUserFileCompleteDelegate_Parms ClearDeleteUserFileCompleteDelegate_Parms;
	memcpy ( &ClearDeleteUserFileCompleteDelegate_Parms.DeleteUserFileCompleteDelegate, &DeleteUserFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearDeleteUserFileCompleteDelegate, &ClearDeleteUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddDeleteUserFileCompleteDelegate ( struct FScriptDelegate DeleteUserFileCompleteDelegate )
{
	static UFunction* pFnAddDeleteUserFileCompleteDelegate = NULL;

	if ( ! pFnAddDeleteUserFileCompleteDelegate )
		pFnAddDeleteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 42172 ];

	UOnlineSubsystemSteamworks_execAddDeleteUserFileCompleteDelegate_Parms AddDeleteUserFileCompleteDelegate_Parms;
	memcpy ( &AddDeleteUserFileCompleteDelegate_Parms.DeleteUserFileCompleteDelegate, &DeleteUserFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddDeleteUserFileCompleteDelegate, &AddDeleteUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShouldCloudDelete             ( CPF_Parm )
// unsigned long                  bShouldLocallyDelete           ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DeleteUserFile ( struct FString UserId, struct FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete )
{
	static UFunction* pFnDeleteUserFile = NULL;

	if ( ! pFnDeleteUserFile )
		pFnDeleteUserFile = (UFunction*) UObject::GObjObjects()->Data[ 42166 ];

	UOnlineSubsystemSteamworks_execDeleteUserFile_Parms DeleteUserFile_Parms;
	memcpy ( &DeleteUserFile_Parms.UserId, &UserId, 0xC );
	memcpy ( &DeleteUserFile_Parms.Filename, &Filename, 0xC );
	DeleteUserFile_Parms.bShouldCloudDelete = bShouldCloudDelete;
	DeleteUserFile_Parms.bShouldLocallyDelete = bShouldLocallyDelete;

	pFnDeleteUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeleteUserFile, &DeleteUserFile_Parms, NULL );

	pFnDeleteUserFile->FunctionFlags |= 0x400;

	return DeleteUserFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnDeleteUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename )
{
	static UFunction* pFnOnDeleteUserFileComplete = NULL;

	if ( ! pFnOnDeleteUserFileComplete )
		pFnOnDeleteUserFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 42162 ];

	UOnlineSubsystemSteamworks_execOnDeleteUserFileComplete_Parms OnDeleteUserFileComplete_Parms;
	OnDeleteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnDeleteUserFileComplete_Parms.UserId, &UserId, 0xC );
	memcpy ( &OnDeleteUserFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnDeleteUserFileComplete, &OnDeleteUserFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWriteUserFileCompleteDelegate ( struct FScriptDelegate WriteUserFileCompleteDelegate )
{
	static UFunction* pFnClearWriteUserFileCompleteDelegate = NULL;

	if ( ! pFnClearWriteUserFileCompleteDelegate )
		pFnClearWriteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 42159 ];

	UOnlineSubsystemSteamworks_execClearWriteUserFileCompleteDelegate_Parms ClearWriteUserFileCompleteDelegate_Parms;
	memcpy ( &ClearWriteUserFileCompleteDelegate_Parms.WriteUserFileCompleteDelegate, &WriteUserFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearWriteUserFileCompleteDelegate, &ClearWriteUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWriteUserFileCompleteDelegate ( struct FScriptDelegate WriteUserFileCompleteDelegate )
{
	static UFunction* pFnAddWriteUserFileCompleteDelegate = NULL;

	if ( ! pFnAddWriteUserFileCompleteDelegate )
		pFnAddWriteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 42156 ];

	UOnlineSubsystemSteamworks_execAddWriteUserFileCompleteDelegate_Parms AddWriteUserFileCompleteDelegate_Parms;
	memcpy ( &AddWriteUserFileCompleteDelegate_Parms.WriteUserFileCompleteDelegate, &WriteUserFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddWriteUserFileCompleteDelegate, &AddWriteUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteUserFile ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnWriteUserFile = NULL;

	if ( ! pFnWriteUserFile )
		pFnWriteUserFile = (UFunction*) UObject::GObjObjects()->Data[ 42150 ];

	UOnlineSubsystemSteamworks_execWriteUserFile_Parms WriteUserFile_Parms;
	memcpy ( &WriteUserFile_Parms.UserId, &UserId, 0xC );
	memcpy ( &WriteUserFile_Parms.Filename, &Filename, 0xC );

	pFnWriteUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteUserFile, &WriteUserFile_Parms, NULL );

	pFnWriteUserFile->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &WriteUserFile_Parms.FileContents, 0xC );

	return WriteUserFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnWriteUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename )
{
	static UFunction* pFnOnWriteUserFileComplete = NULL;

	if ( ! pFnOnWriteUserFileComplete )
		pFnOnWriteUserFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 42146 ];

	UOnlineSubsystemSteamworks_execOnWriteUserFileComplete_Parms OnWriteUserFileComplete_Parms;
	OnWriteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnWriteUserFileComplete_Parms.UserId, &UserId, 0xC );
	memcpy ( &OnWriteUserFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnWriteUserFileComplete, &OnWriteUserFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadUserFileCompleteDelegate ( struct FScriptDelegate ReadUserFileCompleteDelegate )
{
	static UFunction* pFnClearReadUserFileCompleteDelegate = NULL;

	if ( ! pFnClearReadUserFileCompleteDelegate )
		pFnClearReadUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 42143 ];

	UOnlineSubsystemSteamworks_execClearReadUserFileCompleteDelegate_Parms ClearReadUserFileCompleteDelegate_Parms;
	memcpy ( &ClearReadUserFileCompleteDelegate_Parms.ReadUserFileCompleteDelegate, &ReadUserFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadUserFileCompleteDelegate, &ClearReadUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadUserFileCompleteDelegate ( struct FScriptDelegate ReadUserFileCompleteDelegate )
{
	static UFunction* pFnAddReadUserFileCompleteDelegate = NULL;

	if ( ! pFnAddReadUserFileCompleteDelegate )
		pFnAddReadUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 42140 ];

	UOnlineSubsystemSteamworks_execAddReadUserFileCompleteDelegate_Parms AddReadUserFileCompleteDelegate_Parms;
	memcpy ( &AddReadUserFileCompleteDelegate_Parms.ReadUserFileCompleteDelegate, &ReadUserFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadUserFileCompleteDelegate, &AddReadUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadUserFile ( struct FString UserId, struct FString Filename )
{
	static UFunction* pFnReadUserFile = NULL;

	if ( ! pFnReadUserFile )
		pFnReadUserFile = (UFunction*) UObject::GObjObjects()->Data[ 42136 ];

	UOnlineSubsystemSteamworks_execReadUserFile_Parms ReadUserFile_Parms;
	memcpy ( &ReadUserFile_Parms.UserId, &UserId, 0xC );
	memcpy ( &ReadUserFile_Parms.Filename, &Filename, 0xC );

	pFnReadUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadUserFile, &ReadUserFile_Parms, NULL );

	pFnReadUserFile->FunctionFlags |= 0x400;

	return ReadUserFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReadUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename )
{
	static UFunction* pFnOnReadUserFileComplete = NULL;

	if ( ! pFnOnReadUserFileComplete )
		pFnOnReadUserFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 42132 ];

	UOnlineSubsystemSteamworks_execOnReadUserFileComplete_Parms OnReadUserFileComplete_Parms;
	OnReadUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadUserFileComplete_Parms.UserId, &UserId, 0xC );
	memcpy ( &OnReadUserFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnReadUserFileComplete, &OnReadUserFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FEmsFile >      UserFiles                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::GetUserFileList ( struct FString UserId, TArray< struct FEmsFile >* UserFiles )
{
	static UFunction* pFnGetUserFileList = NULL;

	if ( ! pFnGetUserFileList )
		pFnGetUserFileList = (UFunction*) UObject::GObjObjects()->Data[ 42128 ];

	UOnlineSubsystemSteamworks_execGetUserFileList_Parms GetUserFileList_Parms;
	memcpy ( &GetUserFileList_Parms.UserId, &UserId, 0xC );

	pFnGetUserFileList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUserFileList, &GetUserFileList_Parms, NULL );

	pFnGetUserFileList->FunctionFlags |= 0x400;

	if ( UserFiles )
		memcpy ( UserFiles, &GetUserFileList_Parms.UserFiles, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearEnumerateUserFileCompleteDelegate ( struct FScriptDelegate EnumerateUserFileCompleteDelegate )
{
	static UFunction* pFnClearEnumerateUserFileCompleteDelegate = NULL;

	if ( ! pFnClearEnumerateUserFileCompleteDelegate )
		pFnClearEnumerateUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 42125 ];

	UOnlineSubsystemSteamworks_execClearEnumerateUserFileCompleteDelegate_Parms ClearEnumerateUserFileCompleteDelegate_Parms;
	memcpy ( &ClearEnumerateUserFileCompleteDelegate_Parms.EnumerateUserFileCompleteDelegate, &EnumerateUserFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearEnumerateUserFileCompleteDelegate, &ClearEnumerateUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddEnumerateUserFileCompleteDelegate ( struct FScriptDelegate EnumerateUserFileCompleteDelegate )
{
	static UFunction* pFnAddEnumerateUserFileCompleteDelegate = NULL;

	if ( ! pFnAddEnumerateUserFileCompleteDelegate )
		pFnAddEnumerateUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 42122 ];

	UOnlineSubsystemSteamworks_execAddEnumerateUserFileCompleteDelegate_Parms AddEnumerateUserFileCompleteDelegate_Parms;
	memcpy ( &AddEnumerateUserFileCompleteDelegate_Parms.EnumerateUserFileCompleteDelegate, &EnumerateUserFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddEnumerateUserFileCompleteDelegate, &AddEnumerateUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::EnumerateUserFiles ( struct FString UserId )
{
	static UFunction* pFnEnumerateUserFiles = NULL;

	if ( ! pFnEnumerateUserFiles )
		pFnEnumerateUserFiles = (UFunction*) UObject::GObjObjects()->Data[ 42120 ];

	UOnlineSubsystemSteamworks_execEnumerateUserFiles_Parms EnumerateUserFiles_Parms;
	memcpy ( &EnumerateUserFiles_Parms.UserId, &UserId, 0xC );

	pFnEnumerateUserFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnumerateUserFiles, &EnumerateUserFiles_Parms, NULL );

	pFnEnumerateUserFiles->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnEnumerateUserFilesComplete ( unsigned long bWasSuccessful, struct FString UserId )
{
	static UFunction* pFnOnEnumerateUserFilesComplete = NULL;

	if ( ! pFnOnEnumerateUserFilesComplete )
		pFnOnEnumerateUserFilesComplete = (UFunction*) UObject::GObjObjects()->Data[ 42117 ];

	UOnlineSubsystemSteamworks_execOnEnumerateUserFilesComplete_Parms OnEnumerateUserFilesComplete_Parms;
	OnEnumerateUserFilesComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnEnumerateUserFilesComplete_Parms.UserId, &UserId, 0xC );

	this->ProcessEvent ( pFnOnEnumerateUserFilesComplete, &OnEnumerateUserFilesComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ClearFile ( struct FString UserId, struct FString Filename )
{
	static UFunction* pFnClearFile = NULL;

	if ( ! pFnClearFile )
		pFnClearFile = (UFunction*) UObject::GObjObjects()->Data[ 42113 ];

	UOnlineSubsystemSteamworks_execClearFile_Parms ClearFile_Parms;
	memcpy ( &ClearFile_Parms.UserId, &UserId, 0xC );
	memcpy ( &ClearFile_Parms.Filename, &Filename, 0xC );

	pFnClearFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearFile, &ClearFile_Parms, NULL );

	pFnClearFile->FunctionFlags |= 0x400;

	return ClearFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ClearFiles ( struct FString UserId )
{
	static UFunction* pFnClearFiles = NULL;

	if ( ! pFnClearFiles )
		pFnClearFiles = (UFunction*) UObject::GObjObjects()->Data[ 42110 ];

	UOnlineSubsystemSteamworks_execClearFiles_Parms ClearFiles_Parms;
	memcpy ( &ClearFiles_Parms.UserId, &UserId, 0xC );

	pFnClearFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearFiles, &ClearFiles_Parms, NULL );

	pFnClearFiles->FunctionFlags |= 0x400;

	return ClearFiles_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetFileContents ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetFileContents = NULL;

	if ( ! pFnGetFileContents )
		pFnGetFileContents = (UFunction*) UObject::GObjObjects()->Data[ 42104 ];

	UOnlineSubsystemSteamworks_execGetFileContents_Parms GetFileContents_Parms;
	memcpy ( &GetFileContents_Parms.UserId, &UserId, 0xC );
	memcpy ( &GetFileContents_Parms.Filename, &Filename, 0xC );

	pFnGetFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFileContents, &GetFileContents_Parms, NULL );

	pFnGetFileContents->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetFileContents_Parms.FileContents, 0xC );

	return GetFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
// [0x00440401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteUserFileInternal ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnWriteUserFileInternal = NULL;

	if ( ! pFnWriteUserFileInternal )
		pFnWriteUserFileInternal = (UFunction*) UObject::GObjObjects()->Data[ 42098 ];

	UOnlineSubsystemSteamworks_execWriteUserFileInternal_Parms WriteUserFileInternal_Parms;
	memcpy ( &WriteUserFileInternal_Parms.UserId, &UserId, 0xC );
	memcpy ( &WriteUserFileInternal_Parms.Filename, &Filename, 0xC );

	pFnWriteUserFileInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteUserFileInternal, &WriteUserFileInternal_Parms, NULL );

	pFnWriteUserFileInternal->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &WriteUserFileInternal_Parms.FileContents, 0xC );

	return WriteUserFileInternal_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            FriendUID                      ( CPF_Parm )
// struct FString                 ServerURL                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 ServerUID                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetFriendJoinURL ( struct FUniqueNetId FriendUID, struct FString* ServerURL, struct FString* ServerUID )
{
	static UFunction* pFnGetFriendJoinURL = NULL;

	if ( ! pFnGetFriendJoinURL )
		pFnGetFriendJoinURL = (UFunction*) UObject::GObjObjects()->Data[ 42093 ];

	UOnlineSubsystemSteamworks_execGetFriendJoinURL_Parms GetFriendJoinURL_Parms;
	memcpy ( &GetFriendJoinURL_Parms.FriendUID, &FriendUID, 0x8 );

	pFnGetFriendJoinURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFriendJoinURL, &GetFriendJoinURL_Parms, NULL );

	pFnGetFriendJoinURL->FunctionFlags |= 0x400;

	if ( ServerURL )
		memcpy ( ServerURL, &GetFriendJoinURL_Parms.ServerURL, 0xC );

	if ( ServerUID )
		memcpy ( ServerUID, &GetFriendJoinURL_Parms.ServerUID, 0xC );

	return GetFriendJoinURL_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bMarkAsJoined                  ( CPF_Parm )
// struct FString                 ServerURL                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 ServerUID                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetCommandlineJoinURL ( unsigned long bMarkAsJoined, struct FString* ServerURL, struct FString* ServerUID )
{
	static UFunction* pFnGetCommandlineJoinURL = NULL;

	if ( ! pFnGetCommandlineJoinURL )
		pFnGetCommandlineJoinURL = (UFunction*) UObject::GObjObjects()->Data[ 42088 ];

	UOnlineSubsystemSteamworks_execGetCommandlineJoinURL_Parms GetCommandlineJoinURL_Parms;
	GetCommandlineJoinURL_Parms.bMarkAsJoined = bMarkAsJoined;

	pFnGetCommandlineJoinURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCommandlineJoinURL, &GetCommandlineJoinURL_Parms, NULL );

	pFnGetCommandlineJoinURL->FunctionFlags |= 0x400;

	if ( ServerURL )
		memcpy ( ServerURL, &GetCommandlineJoinURL_Parms.ServerURL, 0xC );

	if ( ServerUID )
		memcpy ( ServerUID, &GetCommandlineJoinURL_Parms.ServerUID, 0xC );

	return GetCommandlineJoinURL_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UIDString                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            OutUID                         ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::Int64ToUniqueNetId ( struct FString UIDString, struct FUniqueNetId* OutUID )
{
	static UFunction* pFnInt64ToUniqueNetId = NULL;

	if ( ! pFnInt64ToUniqueNetId )
		pFnInt64ToUniqueNetId = (UFunction*) UObject::GObjObjects()->Data[ 42084 ];

	UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Parms Int64ToUniqueNetId_Parms;
	memcpy ( &Int64ToUniqueNetId_Parms.UIDString, &UIDString, 0xC );

	pFnInt64ToUniqueNetId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInt64ToUniqueNetId, &Int64ToUniqueNetId_Parms, NULL );

	pFnInt64ToUniqueNetId->FunctionFlags |= 0x400;

	if ( OutUID )
		memcpy ( OutUID, &Int64ToUniqueNetId_Parms.OutUID, 0x8 );

	return Int64ToUniqueNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FUniqueNetId            Uid                            ( CPF_Const | CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemSteamworks::UniqueNetIdToInt64 ( struct FUniqueNetId* Uid )
{
	static UFunction* pFnUniqueNetIdToInt64 = NULL;

	if ( ! pFnUniqueNetIdToInt64 )
		pFnUniqueNetIdToInt64 = (UFunction*) UObject::GObjObjects()->Data[ 42081 ];

	UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Parms UniqueNetIdToInt64_Parms;

	pFnUniqueNetIdToInt64->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUniqueNetIdToInt64, &UniqueNetIdToInt64_Parms, NULL );

	pFnUniqueNetIdToInt64->FunctionFlags |= 0x400;

	if ( Uid )
		memcpy ( Uid, &UniqueNetIdToInt64_Parms.Uid, 0x8 );

	return UniqueNetIdToInt64_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetLobbyInterface
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 NewInterface                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::eventSetLobbyInterface ( class UObject* NewInterface )
{
	static UFunction* pFnSetLobbyInterface = NULL;

	if ( ! pFnSetLobbyInterface )
		pFnSetLobbyInterface = (UFunction*) UObject::GObjObjects()->Data[ 42077 ];

	UOnlineSubsystemSteamworks_eventSetLobbyInterface_Parms SetLobbyInterface_Parms;
	SetLobbyInterface_Parms.NewInterface = NewInterface;

	this->ProcessEvent ( pFnSetLobbyInterface, &SetLobbyInterface_Parms, NULL );

	return SetLobbyInterface_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UAudioComponent*         VOIPAudioComponent             ( CPF_Parm | CPF_EditInline )

void UOnlineSubsystemSteamworks::NotifyVOIPPlaybackFinished ( class UAudioComponent* VOIPAudioComponent )
{
	static UFunction* pFnNotifyVOIPPlaybackFinished = NULL;

	if ( ! pFnNotifyVOIPPlaybackFinished )
		pFnNotifyVOIPPlaybackFinished = (UFunction*) UObject::GObjObjects()->Data[ 42075 ];

	UOnlineSubsystemSteamworks_execNotifyVOIPPlaybackFinished_Parms NotifyVOIPPlaybackFinished_Parms;
	NotifyVOIPPlaybackFinished_Parms.VOIPAudioComponent = VOIPAudioComponent;

	pFnNotifyVOIPPlaybackFinished->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyVOIPPlaybackFinished, &NotifyVOIPPlaybackFinished_Parms, NULL );

	pFnNotifyVOIPPlaybackFinished->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// [0x00020002] 
// Parameters infos:
// class UAudioComponent*         AC                             ( CPF_Parm | CPF_EditInline )

void UOnlineSubsystemSteamworks::OnVOIPPlaybackFinished ( class UAudioComponent* AC )
{
	static UFunction* pFnOnVOIPPlaybackFinished = NULL;

	if ( ! pFnOnVOIPPlaybackFinished )
		pFnOnVOIPPlaybackFinished = (UFunction*) UObject::GObjObjects()->Data[ 42073 ];

	UOnlineSubsystemSteamworks_execOnVOIPPlaybackFinished_Parms OnVOIPPlaybackFinished_Parms;
	OnVOIPPlaybackFinished_Parms.AC = AC;

	this->ProcessEvent ( pFnOnVOIPPlaybackFinished, &OnVOIPPlaybackFinished_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 SubURL                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            PlayerUID                      ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowProfileUI ( unsigned char LocalUserNum, struct FString SubURL, struct FUniqueNetId PlayerUID )
{
	static UFunction* pFnShowProfileUI = NULL;

	if ( ! pFnShowProfileUI )
		pFnShowProfileUI = (UFunction*) UObject::GObjObjects()->Data[ 42068 ];

	UOnlineSubsystemSteamworks_execShowProfileUI_Parms ShowProfileUI_Parms;
	ShowProfileUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowProfileUI_Parms.SubURL, &SubURL, 0xC );
	memcpy ( &ShowProfileUI_Parms.PlayerUID, &PlayerUID, 0x8 );

	pFnShowProfileUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowProfileUI, &ShowProfileUI_Parms, NULL );

	pFnShowProfileUI->FunctionFlags |= 0x400;

	return ShowProfileUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FUniqueNetId            Uid                            ( CPF_Const | CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemSteamworks::UniqueNetIdToPlayerName ( struct FUniqueNetId* Uid )
{
	static UFunction* pFnUniqueNetIdToPlayerName = NULL;

	if ( ! pFnUniqueNetIdToPlayerName )
		pFnUniqueNetIdToPlayerName = (UFunction*) UObject::GObjObjects()->Data[ 42065 ];

	UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Parms UniqueNetIdToPlayerName_Parms;

	pFnUniqueNetIdToPlayerName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUniqueNetIdToPlayerName, &UniqueNetIdToPlayerName_Parms, NULL );

	pFnUniqueNetIdToPlayerName->FunctionFlags |= 0x400;

	if ( Uid )
		memcpy ( Uid, &UniqueNetIdToPlayerName_Parms.Uid, 0x8 );

	return UniqueNetIdToPlayerName_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            AchievementId                  ( CPF_Parm )
// int                            ProgressCount                  ( CPF_Parm )
// int                            MaxProgress                    ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DisplayAchievementProgress ( int AchievementId, int ProgressCount, int MaxProgress )
{
	static UFunction* pFnDisplayAchievementProgress = NULL;

	if ( ! pFnDisplayAchievementProgress )
		pFnDisplayAchievementProgress = (UFunction*) UObject::GObjObjects()->Data[ 42060 ];

	UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Parms DisplayAchievementProgress_Parms;
	DisplayAchievementProgress_Parms.AchievementId = AchievementId;
	DisplayAchievementProgress_Parms.ProgressCount = ProgressCount;
	DisplayAchievementProgress_Parms.MaxProgress = MaxProgress;

	pFnDisplayAchievementProgress->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisplayAchievementProgress, &DisplayAchievementProgress_Parms, NULL );

	pFnDisplayAchievementProgress->FunctionFlags |= 0x400;

	return DisplayAchievementProgress_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 LeaderboardName                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  SortType                       ( CPF_Parm )
// unsigned char                  DisplayFormat                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::CreateLeaderboard ( struct FString LeaderboardName, unsigned char SortType, unsigned char DisplayFormat )
{
	static UFunction* pFnCreateLeaderboard = NULL;

	if ( ! pFnCreateLeaderboard )
		pFnCreateLeaderboard = (UFunction*) UObject::GObjObjects()->Data[ 42055 ];

	UOnlineSubsystemSteamworks_execCreateLeaderboard_Parms CreateLeaderboard_Parms;
	memcpy ( &CreateLeaderboard_Parms.LeaderboardName, &LeaderboardName, 0xC );
	CreateLeaderboard_Parms.SortType = SortType;
	CreateLeaderboard_Parms.DisplayFormat = DisplayFormat;

	pFnCreateLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateLeaderboard, &CreateLeaderboard_Parms, NULL );

	pFnCreateLeaderboard->FunctionFlags |= 0x400;

	return CreateLeaderboard_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bResetAchievements             ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ResetStats ( unsigned long bResetAchievements )
{
	static UFunction* pFnResetStats = NULL;

	if ( ! pFnResetStats )
		pFnResetStats = (UFunction*) UObject::GObjObjects()->Data[ 42052 ];

	UOnlineSubsystemSteamworks_execResetStats_Parms ResetStats_Parms;
	ResetStats_Parms.bResetAchievements = bResetAchievements;

	pFnResetStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetStats, &ResetStats_Parms, NULL );

	pFnResetStats->FunctionFlags |= 0x400;

	return ResetStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 MessageTitle                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 NonEditableMessage             ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 EditableMessage                ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FUniqueNetId >  Recipients                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowCustomMessageUI ( unsigned char LocalUserNum, struct FString MessageTitle, struct FString NonEditableMessage, struct FString EditableMessage, TArray< struct FUniqueNetId >* Recipients )
{
	static UFunction* pFnShowCustomMessageUI = NULL;

	if ( ! pFnShowCustomMessageUI )
		pFnShowCustomMessageUI = (UFunction*) UObject::GObjObjects()->Data[ 42044 ];

	UOnlineSubsystemSteamworks_execShowCustomMessageUI_Parms ShowCustomMessageUI_Parms;
	ShowCustomMessageUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowCustomMessageUI_Parms.MessageTitle, &MessageTitle, 0xC );
	memcpy ( &ShowCustomMessageUI_Parms.NonEditableMessage, &NonEditableMessage, 0xC );
	memcpy ( &ShowCustomMessageUI_Parms.EditableMessage, &EditableMessage, 0xC );

	this->ProcessEvent ( pFnShowCustomMessageUI, &ShowCustomMessageUI_Parms, NULL );

	if ( Recipients )
		memcpy ( Recipients, &ShowCustomMessageUI_Parms.Recipients, 0xC );

	return ShowCustomMessageUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )

void UOnlineSubsystemSteamworks::ClearCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId )
{
	static UFunction* pFnClearCrossTitleProfileSettings = NULL;

	if ( ! pFnClearCrossTitleProfileSettings )
		pFnClearCrossTitleProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 42041 ];

	UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Parms ClearCrossTitleProfileSettings_Parms;
	ClearCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ClearCrossTitleProfileSettings_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnClearCrossTitleProfileSettings, &ClearCrossTitleProfileSettings_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// [0x00020000] 
// Parameters infos:
// class UOnlineProfileSettings*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId )
{
	static UFunction* pFnGetCrossTitleProfileSettings = NULL;

	if ( ! pFnGetCrossTitleProfileSettings )
		pFnGetCrossTitleProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 42037 ];

	UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Parms GetCrossTitleProfileSettings_Parms;
	GetCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	GetCrossTitleProfileSettings_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnGetCrossTitleProfileSettings, &GetCrossTitleProfileSettings_Parms, NULL );

	return GetCrossTitleProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadCrossTitleProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearReadCrossTitleProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearReadCrossTitleProfileSettingsCompleteDelegate )
		pFnClearReadCrossTitleProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 42034 ];

	UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Parms ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms;
	ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadCrossTitleProfileSettingsCompleteDelegate, &ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadCrossTitleProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddReadCrossTitleProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddReadCrossTitleProfileSettingsCompleteDelegate )
		pFnAddReadCrossTitleProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 42031 ];

	UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Parms AddReadCrossTitleProfileSettingsCompleteDelegate_Parms;
	AddReadCrossTitleProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadCrossTitleProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadCrossTitleProfileSettingsCompleteDelegate, &AddReadCrossTitleProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadCrossTitleProfileSettingsComplete ( unsigned char LocalUserNum, int TitleId, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadCrossTitleProfileSettingsComplete = NULL;

	if ( ! pFnOnReadCrossTitleProfileSettingsComplete )
		pFnOnReadCrossTitleProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 42027 ];

	UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Parms OnReadCrossTitleProfileSettingsComplete_Parms;
	OnReadCrossTitleProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadCrossTitleProfileSettingsComplete_Parms.TitleId = TitleId;
	OnReadCrossTitleProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadCrossTitleProfileSettingsComplete, &OnReadCrossTitleProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnReadCrossTitleProfileSettings = NULL;

	if ( ! pFnReadCrossTitleProfileSettings )
		pFnReadCrossTitleProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 42022 ];

	UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Parms ReadCrossTitleProfileSettings_Parms;
	ReadCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ReadCrossTitleProfileSettings_Parms.TitleId = TitleId;
	ReadCrossTitleProfileSettings_Parms.ProfileSettings = ProfileSettings;

	this->ProcessEvent ( pFnReadCrossTitleProfileSettings, &ReadCrossTitleProfileSettings_Parms, NULL );

	return ReadCrossTitleProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AvatarItemId                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnlockAvatarAward ( unsigned char LocalUserNum, int AvatarItemId )
{
	static UFunction* pFnUnlockAvatarAward = NULL;

	if ( ! pFnUnlockAvatarAward )
		pFnUnlockAvatarAward = (UFunction*) UObject::GObjObjects()->Data[ 42018 ];

	UOnlineSubsystemSteamworks_execUnlockAvatarAward_Parms UnlockAvatarAward_Parms;
	UnlockAvatarAward_Parms.LocalUserNum = LocalUserNum;
	UnlockAvatarAward_Parms.AvatarItemId = AvatarItemId;

	this->ProcessEvent ( pFnUnlockAvatarAward, &UnlockAvatarAward_Parms, NULL );

	return UnlockAvatarAward_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FSteamPlayerClanData > Results                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::GetSteamClanData ( TArray< struct FSteamPlayerClanData >* Results )
{
	static UFunction* pFnGetSteamClanData = NULL;

	if ( ! pFnGetSteamClanData )
		pFnGetSteamClanData = (UFunction*) UObject::GObjObjects()->Data[ 42015 ];

	UOnlineSubsystemSteamworks_execGetSteamClanData_Parms GetSteamClanData_Parms;

	pFnGetSteamClanData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSteamClanData, &GetSteamClanData_Parms, NULL );

	pFnGetSteamClanData->FunctionFlags |= 0x400;

	if ( Results )
		memcpy ( Results, &GetSteamClanData_Parms.Results, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate )
{
	static UFunction* pFnClearGetNumberOfCurrentPlayersCompleteDelegate = NULL;

	if ( ! pFnClearGetNumberOfCurrentPlayersCompleteDelegate )
		pFnClearGetNumberOfCurrentPlayersCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 42012 ];

	UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Parms ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms;
	memcpy ( &ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms.GetNumberOfCurrentPlayersCompleteDelegate, &GetNumberOfCurrentPlayersCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearGetNumberOfCurrentPlayersCompleteDelegate, &ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate )
{
	static UFunction* pFnAddGetNumberOfCurrentPlayersCompleteDelegate = NULL;

	if ( ! pFnAddGetNumberOfCurrentPlayersCompleteDelegate )
		pFnAddGetNumberOfCurrentPlayersCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 42009 ];

	UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Parms AddGetNumberOfCurrentPlayersCompleteDelegate_Parms;
	memcpy ( &AddGetNumberOfCurrentPlayersCompleteDelegate_Parms.GetNumberOfCurrentPlayersCompleteDelegate, &GetNumberOfCurrentPlayersCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddGetNumberOfCurrentPlayersCompleteDelegate, &AddGetNumberOfCurrentPlayersCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// [0x00120000] 
// Parameters infos:
// int                            TotalPlayers                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnGetNumberOfCurrentPlayersComplete ( int TotalPlayers )
{
	static UFunction* pFnOnGetNumberOfCurrentPlayersComplete = NULL;

	if ( ! pFnOnGetNumberOfCurrentPlayersComplete )
		pFnOnGetNumberOfCurrentPlayersComplete = (UFunction*) UObject::GObjObjects()->Data[ 42007 ];

	UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Parms OnGetNumberOfCurrentPlayersComplete_Parms;
	OnGetNumberOfCurrentPlayersComplete_Parms.TotalPlayers = TotalPlayers;

	this->ProcessEvent ( pFnOnGetNumberOfCurrentPlayersComplete, &OnGetNumberOfCurrentPlayersComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::GetNumberOfCurrentPlayers ( )
{
	static UFunction* pFnGetNumberOfCurrentPlayers = NULL;

	if ( ! pFnGetNumberOfCurrentPlayers )
		pFnGetNumberOfCurrentPlayers = (UFunction*) UObject::GObjObjects()->Data[ 42005 ];

	UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Parms GetNumberOfCurrentPlayers_Parms;

	pFnGetNumberOfCurrentPlayers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNumberOfCurrentPlayers, &GetNumberOfCurrentPlayers_Parms, NULL );

	pFnGetNumberOfCurrentPlayers->FunctionFlags |= 0x400;

	return GetNumberOfCurrentPlayers_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Const | CPF_Parm )
// int                            Size                           ( CPF_Parm )
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ReadOnlineAvatar ( struct FUniqueNetId PlayerNetId, int Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate )
{
	static UFunction* pFnReadOnlineAvatar = NULL;

	if ( ! pFnReadOnlineAvatar )
		pFnReadOnlineAvatar = (UFunction*) UObject::GObjObjects()->Data[ 42001 ];

	UOnlineSubsystemSteamworks_execReadOnlineAvatar_Parms ReadOnlineAvatar_Parms;
	memcpy ( &ReadOnlineAvatar_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	ReadOnlineAvatar_Parms.Size = Size;
	memcpy ( &ReadOnlineAvatar_Parms.ReadOnlineAvatarCompleteDelegate, &ReadOnlineAvatarCompleteDelegate, 0xC );

	pFnReadOnlineAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineAvatar, &ReadOnlineAvatar_Parms, NULL );

	pFnReadOnlineAvatar->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Const | CPF_Parm )
// class UTexture2D*              Avatar                         ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadOnlineAvatarComplete ( struct FUniqueNetId PlayerNetId, class UTexture2D* Avatar )
{
	static UFunction* pFnOnReadOnlineAvatarComplete = NULL;

	if ( ! pFnOnReadOnlineAvatarComplete )
		pFnOnReadOnlineAvatarComplete = (UFunction*) UObject::GObjObjects()->Data[ 41998 ];

	UOnlineSubsystemSteamworks_execOnReadOnlineAvatarComplete_Parms OnReadOnlineAvatarComplete_Parms;
	memcpy ( &OnReadOnlineAvatarComplete_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	OnReadOnlineAvatarComplete_Parms.Avatar = Avatar;

	this->ProcessEvent ( pFnOnReadOnlineAvatarComplete, &OnReadOnlineAvatarComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 Title                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Description                    ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowCustomPlayersUI ( unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnShowCustomPlayersUI = NULL;

	if ( ! pFnShowCustomPlayersUI )
		pFnShowCustomPlayersUI = (UFunction*) UObject::GObjObjects()->Data[ 41991 ];

	UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Parms ShowCustomPlayersUI_Parms;
	ShowCustomPlayersUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowCustomPlayersUI_Parms.Title, &Title, 0xC );
	memcpy ( &ShowCustomPlayersUI_Parms.Description, &Description, 0xC );

	pFnShowCustomPlayersUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowCustomPlayersUI, &ShowCustomPlayersUI_Parms, NULL );

	pFnShowCustomPlayersUI->FunctionFlags |= 0x400;

	if ( Players )
		memcpy ( Players, &ShowCustomPlayersUI_Parms.Players, 0xC );

	return ShowCustomPlayersUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FAchievementDetails > Achievements                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements )
{
	static UFunction* pFnGetAchievements = NULL;

	if ( ! pFnGetAchievements )
		pFnGetAchievements = (UFunction*) UObject::GObjObjects()->Data[ 41985 ];

	UOnlineSubsystemSteamworks_execGetAchievements_Parms GetAchievements_Parms;
	GetAchievements_Parms.LocalUserNum = LocalUserNum;
	GetAchievements_Parms.TitleId = TitleId;

	pFnGetAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAchievements, &GetAchievements_Parms, NULL );

	pFnGetAchievements->FunctionFlags |= 0x400;

	if ( Achievements )
		memcpy ( Achievements, &GetAchievements_Parms.Achievements, 0xC );

	return GetAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnClearReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnClearReadAchievementsCompleteDelegate )
		pFnClearReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41981 ];

	UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Parms ClearReadAchievementsCompleteDelegate_Parms;
	ClearReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnAddReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnAddReadAchievementsCompleteDelegate )
		pFnAddReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41977 ];

	UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Parms AddReadAchievementsCompleteDelegate_Parms;
	AddReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120000] 
// Parameters infos:
// int                            TitleId                        ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadAchievementsComplete ( int TitleId )
{
	static UFunction* pFnOnReadAchievementsComplete = NULL;

	if ( ! pFnOnReadAchievementsComplete )
		pFnOnReadAchievementsComplete = (UFunction*) UObject::GObjObjects()->Data[ 41975 ];

	UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Parms OnReadAchievementsComplete_Parms;
	OnReadAchievementsComplete_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadText                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadImages              ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages )
{
	static UFunction* pFnReadAchievements = NULL;

	if ( ! pFnReadAchievements )
		pFnReadAchievements = (UFunction*) UObject::GObjObjects()->Data[ 41969 ];

	UOnlineSubsystemSteamworks_execReadAchievements_Parms ReadAchievements_Parms;
	ReadAchievements_Parms.LocalUserNum = LocalUserNum;
	ReadAchievements_Parms.TitleId = TitleId;
	ReadAchievements_Parms.bShouldReadText = bShouldReadText;
	ReadAchievements_Parms.bShouldReadImages = bShouldReadImages;

	pFnReadAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadAchievements, &ReadAchievements_Parms, NULL );

	pFnReadAchievements->FunctionFlags |= 0x400;

	return ReadAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowPlayersUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowPlayersUI = NULL;

	if ( ! pFnShowPlayersUI )
		pFnShowPlayersUI = (UFunction*) UObject::GObjObjects()->Data[ 41966 ];

	UOnlineSubsystemSteamworks_execShowPlayersUI_Parms ShowPlayersUI_Parms;
	ShowPlayersUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowPlayersUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowPlayersUI, &ShowPlayersUI_Parms, NULL );

	pFnShowPlayersUI->FunctionFlags |= 0x400;

	return ShowPlayersUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowFriendsInviteUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnShowFriendsInviteUI = NULL;

	if ( ! pFnShowFriendsInviteUI )
		pFnShowFriendsInviteUI = (UFunction*) UObject::GObjObjects()->Data[ 41962 ];

	UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Parms ShowFriendsInviteUI_Parms;
	ShowFriendsInviteUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowFriendsInviteUI_Parms.PlayerID, &PlayerID, 0x8 );

	pFnShowFriendsInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsInviteUI, &ShowFriendsInviteUI_Parms, NULL );

	pFnShowFriendsInviteUI->FunctionFlags |= 0x400;

	return ShowFriendsInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowFriendsUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowFriendsUI = NULL;

	if ( ! pFnShowFriendsUI )
		pFnShowFriendsUI = (UFunction*) UObject::GObjObjects()->Data[ 41959 ];

	UOnlineSubsystemSteamworks_execShowFriendsUI_Parms ShowFriendsUI_Parms;
	ShowFriendsUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowFriendsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsUI, &ShowFriendsUI_Parms, NULL );

	pFnShowFriendsUI->FunctionFlags |= 0x400;

	return ShowFriendsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ProfileDataChangedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate )
{
	static UFunction* pFnClearProfileDataChangedDelegate = NULL;

	if ( ! pFnClearProfileDataChangedDelegate )
		pFnClearProfileDataChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41955 ];

	UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Parms ClearProfileDataChangedDelegate_Parms;
	ClearProfileDataChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearProfileDataChangedDelegate_Parms.ProfileDataChangedDelegate, &ProfileDataChangedDelegate, 0xC );

	this->ProcessEvent ( pFnClearProfileDataChangedDelegate, &ClearProfileDataChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ProfileDataChangedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate )
{
	static UFunction* pFnAddProfileDataChangedDelegate = NULL;

	if ( ! pFnAddProfileDataChangedDelegate )
		pFnAddProfileDataChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41951 ];

	UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Parms AddProfileDataChangedDelegate_Parms;
	AddProfileDataChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddProfileDataChangedDelegate_Parms.ProfileDataChangedDelegate, &ProfileDataChangedDelegate, 0xC );

	this->ProcessEvent ( pFnAddProfileDataChangedDelegate, &AddProfileDataChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnProfileDataChanged ( )
{
	static UFunction* pFnOnProfileDataChanged = NULL;

	if ( ! pFnOnProfileDataChanged )
		pFnOnProfileDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 41950 ];

	UOnlineSubsystemSteamworks_execOnProfileDataChanged_Parms OnProfileDataChanged_Parms;

	this->ProcessEvent ( pFnOnProfileDataChanged, &OnProfileDataChanged_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            PictureId                      ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnlockGamerPicture ( unsigned char LocalUserNum, int PictureId )
{
	static UFunction* pFnUnlockGamerPicture = NULL;

	if ( ! pFnUnlockGamerPicture )
		pFnUnlockGamerPicture = (UFunction*) UObject::GObjObjects()->Data[ 41946 ];

	UOnlineSubsystemSteamworks_execUnlockGamerPicture_Parms UnlockGamerPicture_Parms;
	UnlockGamerPicture_Parms.LocalUserNum = LocalUserNum;
	UnlockGamerPicture_Parms.PictureId = PictureId;

	pFnUnlockGamerPicture->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnlockGamerPicture, &UnlockGamerPicture_Parms, NULL );

	pFnUnlockGamerPicture->FunctionFlags |= 0x400;

	return UnlockGamerPicture_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnClearUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnClearUnlockAchievementCompleteDelegate )
		pFnClearUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41942 ];

	UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Parms ClearUnlockAchievementCompleteDelegate_Parms;
	ClearUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnAddUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnAddUnlockAchievementCompleteDelegate )
		pFnAddUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41938 ];

	UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Parms AddUnlockAchievementCompleteDelegate_Parms;
	AddUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnUnlockAchievementComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnlockAchievementComplete = NULL;

	if ( ! pFnOnUnlockAchievementComplete )
		pFnOnUnlockAchievementComplete = (UFunction*) UObject::GObjObjects()->Data[ 41936 ];

	UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Parms OnUnlockAchievementComplete_Parms;
	OnUnlockAchievementComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AchievementId                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnlockAchievement ( unsigned char LocalUserNum, int AchievementId )
{
	static UFunction* pFnUnlockAchievement = NULL;

	if ( ! pFnUnlockAchievement )
		pFnUnlockAchievement = (UFunction*) UObject::GObjObjects()->Data[ 41932 ];

	UOnlineSubsystemSteamworks_execUnlockAchievement_Parms UnlockAchievement_Parms;
	UnlockAchievement_Parms.LocalUserNum = LocalUserNum;
	UnlockAchievement_Parms.AchievementId = AchievementId;

	pFnUnlockAchievement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnlockAchievement, &UnlockAchievement_Parms, NULL );

	pFnUnlockAchievement->FunctionFlags |= 0x400;

	return UnlockAchievement_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            DeviceID                       ( CPF_Parm )
// int                            SizeNeeded                     ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::IsDeviceValid ( int DeviceID, int SizeNeeded )
{
	static UFunction* pFnIsDeviceValid = NULL;

	if ( ! pFnIsDeviceValid )
		pFnIsDeviceValid = (UFunction*) UObject::GObjObjects()->Data[ 41928 ];

	UOnlineSubsystemSteamworks_execIsDeviceValid_Parms IsDeviceValid_Parms;
	IsDeviceValid_Parms.DeviceID = DeviceID;
	IsDeviceValid_Parms.SizeNeeded = SizeNeeded;

	pFnIsDeviceValid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsDeviceValid, &IsDeviceValid_Parms, NULL );

	pFnIsDeviceValid->FunctionFlags |= 0x400;

	return IsDeviceValid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 DeviceName                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int UOnlineSubsystemSteamworks::GetDeviceSelectionResults ( unsigned char LocalUserNum, struct FString* DeviceName )
{
	static UFunction* pFnGetDeviceSelectionResults = NULL;

	if ( ! pFnGetDeviceSelectionResults )
		pFnGetDeviceSelectionResults = (UFunction*) UObject::GObjObjects()->Data[ 41924 ];

	UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Parms GetDeviceSelectionResults_Parms;
	GetDeviceSelectionResults_Parms.LocalUserNum = LocalUserNum;

	pFnGetDeviceSelectionResults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDeviceSelectionResults, &GetDeviceSelectionResults_Parms, NULL );

	pFnGetDeviceSelectionResults->FunctionFlags |= 0x400;

	if ( DeviceName )
		memcpy ( DeviceName, &GetDeviceSelectionResults_Parms.DeviceName, 0xC );

	return GetDeviceSelectionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         DeviceDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate )
{
	static UFunction* pFnClearDeviceSelectionDoneDelegate = NULL;

	if ( ! pFnClearDeviceSelectionDoneDelegate )
		pFnClearDeviceSelectionDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41920 ];

	UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Parms ClearDeviceSelectionDoneDelegate_Parms;
	ClearDeviceSelectionDoneDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearDeviceSelectionDoneDelegate_Parms.DeviceDelegate, &DeviceDelegate, 0xC );

	this->ProcessEvent ( pFnClearDeviceSelectionDoneDelegate, &ClearDeviceSelectionDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         DeviceDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate )
{
	static UFunction* pFnAddDeviceSelectionDoneDelegate = NULL;

	if ( ! pFnAddDeviceSelectionDoneDelegate )
		pFnAddDeviceSelectionDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41913 ];

	UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Parms AddDeviceSelectionDoneDelegate_Parms;
	AddDeviceSelectionDoneDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddDeviceSelectionDoneDelegate_Parms.DeviceDelegate, &DeviceDelegate, 0xC );

	this->ProcessEvent ( pFnAddDeviceSelectionDoneDelegate, &AddDeviceSelectionDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnDeviceSelectionComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDeviceSelectionComplete = NULL;

	if ( ! pFnOnDeviceSelectionComplete )
		pFnOnDeviceSelectionComplete = (UFunction*) UObject::GObjObjects()->Data[ 41911 ];

	UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Parms OnDeviceSelectionComplete_Parms;
	OnDeviceSelectionComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            SizeNeeded                     ( CPF_Parm )
// unsigned long                  bManageStorage                 ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowDeviceSelectionUI ( unsigned char LocalUserNum, int SizeNeeded, unsigned long bManageStorage )
{
	static UFunction* pFnShowDeviceSelectionUI = NULL;

	if ( ! pFnShowDeviceSelectionUI )
		pFnShowDeviceSelectionUI = (UFunction*) UObject::GObjObjects()->Data[ 41906 ];

	UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Parms ShowDeviceSelectionUI_Parms;
	ShowDeviceSelectionUI_Parms.LocalUserNum = LocalUserNum;
	ShowDeviceSelectionUI_Parms.SizeNeeded = SizeNeeded;
	ShowDeviceSelectionUI_Parms.bManageStorage = bManageStorage;

	pFnShowDeviceSelectionUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowDeviceSelectionUI, &ShowDeviceSelectionUI_Parms, NULL );

	pFnShowDeviceSelectionUI->FunctionFlags |= 0x400;

	return ShowDeviceSelectionUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowMembershipMarketplaceUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowMembershipMarketplaceUI = NULL;

	if ( ! pFnShowMembershipMarketplaceUI )
		pFnShowMembershipMarketplaceUI = (UFunction*) UObject::GObjObjects()->Data[ 41903 ];

	UOnlineSubsystemSteamworks_execShowMembershipMarketplaceUI_Parms ShowMembershipMarketplaceUI_Parms;
	ShowMembershipMarketplaceUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowMembershipMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowMembershipMarketplaceUI, &ShowMembershipMarketplaceUI_Parms, NULL );

	pFnShowMembershipMarketplaceUI->FunctionFlags |= 0x400;

	return ShowMembershipMarketplaceUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            CategoryMask                   ( CPF_OptionalParm | CPF_Parm )
// int                            OfferId                        ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowContentMarketplaceUI ( unsigned char LocalUserNum, int CategoryMask, int OfferId )
{
	static UFunction* pFnShowContentMarketplaceUI = NULL;

	if ( ! pFnShowContentMarketplaceUI )
		pFnShowContentMarketplaceUI = (UFunction*) UObject::GObjObjects()->Data[ 41898 ];

	UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Parms ShowContentMarketplaceUI_Parms;
	ShowContentMarketplaceUI_Parms.LocalUserNum = LocalUserNum;
	ShowContentMarketplaceUI_Parms.CategoryMask = CategoryMask;
	ShowContentMarketplaceUI_Parms.OfferId = OfferId;

	pFnShowContentMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowContentMarketplaceUI, &ShowContentMarketplaceUI_Parms, NULL );

	pFnShowContentMarketplaceUI->FunctionFlags |= 0x400;

	return ShowContentMarketplaceUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 InviteText                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText )
{
	static UFunction* pFnShowInviteUI = NULL;

	if ( ! pFnShowInviteUI )
		pFnShowInviteUI = (UFunction*) UObject::GObjObjects()->Data[ 41894 ];

	UOnlineSubsystemSteamworks_execShowInviteUI_Parms ShowInviteUI_Parms;
	ShowInviteUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowInviteUI_Parms.InviteText, &InviteText, 0xC );

	pFnShowInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowInviteUI, &ShowInviteUI_Parms, NULL );

	pFnShowInviteUI->FunctionFlags |= 0x400;

	return ShowInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowAchievementsUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowAchievementsUI = NULL;

	if ( ! pFnShowAchievementsUI )
		pFnShowAchievementsUI = (UFunction*) UObject::GObjObjects()->Data[ 41891 ];

	UOnlineSubsystemSteamworks_execShowAchievementsUI_Parms ShowAchievementsUI_Parms;
	ShowAchievementsUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowAchievementsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowAchievementsUI, &ShowAchievementsUI_Parms, NULL );

	pFnShowAchievementsUI->FunctionFlags |= 0x400;

	return ShowAchievementsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowMessagesUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowMessagesUI = NULL;

	if ( ! pFnShowMessagesUI )
		pFnShowMessagesUI = (UFunction*) UObject::GObjObjects()->Data[ 41888 ];

	UOnlineSubsystemSteamworks_execShowMessagesUI_Parms ShowMessagesUI_Parms;
	ShowMessagesUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowMessagesUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowMessagesUI, &ShowMessagesUI_Parms, NULL );

	pFnShowMessagesUI->FunctionFlags |= 0x400;

	return ShowMessagesUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowGamerCardUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnShowGamerCardUI = NULL;

	if ( ! pFnShowGamerCardUI )
		pFnShowGamerCardUI = (UFunction*) UObject::GObjObjects()->Data[ 41884 ];

	UOnlineSubsystemSteamworks_execShowGamerCardUI_Parms ShowGamerCardUI_Parms;
	ShowGamerCardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowGamerCardUI_Parms.PlayerID, &PlayerID, 0x8 );

	pFnShowGamerCardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowGamerCardUI, &ShowGamerCardUI_Parms, NULL );

	pFnShowGamerCardUI->FunctionFlags |= 0x400;

	return ShowGamerCardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowFeedbackUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnShowFeedbackUI = NULL;

	if ( ! pFnShowFeedbackUI )
		pFnShowFeedbackUI = (UFunction*) UObject::GObjObjects()->Data[ 41880 ];

	UOnlineSubsystemSteamworks_execShowFeedbackUI_Parms ShowFeedbackUI_Parms;
	ShowFeedbackUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowFeedbackUI_Parms.PlayerID, &PlayerID, 0x8 );

	pFnShowFeedbackUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFeedbackUI, &ShowFeedbackUI_Parms, NULL );

	pFnShowFeedbackUI->FunctionFlags |= 0x400;

	return ShowFeedbackUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            MessageIndex                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DeleteMessage ( unsigned char LocalUserNum, int MessageIndex )
{
	static UFunction* pFnDeleteMessage = NULL;

	if ( ! pFnDeleteMessage )
		pFnDeleteMessage = (UFunction*) UObject::GObjObjects()->Data[ 41876 ];

	UOnlineSubsystemSteamworks_execDeleteMessage_Parms DeleteMessage_Parms;
	DeleteMessage_Parms.LocalUserNum = LocalUserNum;
	DeleteMessage_Parms.MessageIndex = MessageIndex;

	this->ProcessEvent ( pFnDeleteMessage, &DeleteMessage_Parms, NULL );

	return DeleteMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnmuteAll ( unsigned char LocalUserNum )
{
	static UFunction* pFnUnmuteAll = NULL;

	if ( ! pFnUnmuteAll )
		pFnUnmuteAll = (UFunction*) UObject::GObjObjects()->Data[ 41873 ];

	UOnlineSubsystemSteamworks_execUnmuteAll_Parms UnmuteAll_Parms;
	UnmuteAll_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnUnmuteAll, &UnmuteAll_Parms, NULL );

	return UnmuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAllowFriends                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends )
{
	static UFunction* pFnMuteAll = NULL;

	if ( ! pFnMuteAll )
		pFnMuteAll = (UFunction*) UObject::GObjObjects()->Data[ 41866 ];

	UOnlineSubsystemSteamworks_execMuteAll_Parms MuteAll_Parms;
	MuteAll_Parms.LocalUserNum = LocalUserNum;
	MuteAll_Parms.bAllowFriends = bAllowFriends;

	this->ProcessEvent ( pFnMuteAll, &MuteAll_Parms, NULL );

	return MuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
// [0x00420000] 
// Parameters infos:
// TArray< struct FDouble >       Mus                            ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FDouble >       Sigmas                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FDouble                 OutAggregateMu                 ( CPF_Parm | CPF_OutParm )
// struct FDouble                 OutAggregateSigma              ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemSteamworks::CalcAggregateSkill ( TArray< struct FDouble > Mus, TArray< struct FDouble > Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma )
{
	static UFunction* pFnCalcAggregateSkill = NULL;

	if ( ! pFnCalcAggregateSkill )
		pFnCalcAggregateSkill = (UFunction*) UObject::GObjObjects()->Data[ 41859 ];

	UOnlineSubsystemSteamworks_execCalcAggregateSkill_Parms CalcAggregateSkill_Parms;
	memcpy ( &CalcAggregateSkill_Parms.Mus, &Mus, 0xC );
	memcpy ( &CalcAggregateSkill_Parms.Sigmas, &Sigmas, 0xC );

	this->ProcessEvent ( pFnCalcAggregateSkill, &CalcAggregateSkill_Parms, NULL );

	if ( OutAggregateMu )
		memcpy ( OutAggregateMu, &CalcAggregateSkill_Parms.OutAggregateMu, 0x8 );

	if ( OutAggregateSigma )
		memcpy ( OutAggregateSigma, &CalcAggregateSkill_Parms.OutAggregateSigma, 0x8 );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FString                 ClientStatGuid                 ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::RegisterStatGuid ( struct FUniqueNetId PlayerID, struct FString* ClientStatGuid )
{
	static UFunction* pFnRegisterStatGuid = NULL;

	if ( ! pFnRegisterStatGuid )
		pFnRegisterStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 41855 ];

	UOnlineSubsystemSteamworks_execRegisterStatGuid_Parms RegisterStatGuid_Parms;
	memcpy ( &RegisterStatGuid_Parms.PlayerID, &PlayerID, 0x8 );

	pFnRegisterStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterStatGuid, &RegisterStatGuid_Parms, NULL );

	pFnRegisterStatGuid->FunctionFlags |= 0x400;

	if ( ClientStatGuid )
		memcpy ( ClientStatGuid, &RegisterStatGuid_Parms.ClientStatGuid, 0xC );

	return RegisterStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemSteamworks::GetClientStatGuid ( )
{
	static UFunction* pFnGetClientStatGuid = NULL;

	if ( ! pFnGetClientStatGuid )
		pFnGetClientStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 41853 ];

	UOnlineSubsystemSteamworks_execGetClientStatGuid_Parms GetClientStatGuid_Parms;

	pFnGetClientStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetClientStatGuid, &GetClientStatGuid_Parms, NULL );

	pFnGetClientStatGuid->FunctionFlags |= 0x400;

	return GetClientStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearRegisterHostStatGuidCompleteDelegateDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate )
{
	static UFunction* pFnClearRegisterHostStatGuidCompleteDelegateDelegate = NULL;

	if ( ! pFnClearRegisterHostStatGuidCompleteDelegateDelegate )
		pFnClearRegisterHostStatGuidCompleteDelegateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41850 ];

	UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms;
	memcpy ( &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms.RegisterHostStatGuidCompleteDelegate, &RegisterHostStatGuidCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddRegisterHostStatGuidCompleteDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate )
{
	static UFunction* pFnAddRegisterHostStatGuidCompleteDelegate = NULL;

	if ( ! pFnAddRegisterHostStatGuidCompleteDelegate )
		pFnAddRegisterHostStatGuidCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41847 ];

	UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Parms AddRegisterHostStatGuidCompleteDelegate_Parms;
	memcpy ( &AddRegisterHostStatGuidCompleteDelegate_Parms.RegisterHostStatGuidCompleteDelegate, &RegisterHostStatGuidCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterHostStatGuidComplete = NULL;

	if ( ! pFnOnRegisterHostStatGuidComplete )
		pFnOnRegisterHostStatGuidComplete = (UFunction*) UObject::GObjObjects()->Data[ 41845 ];

	UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Parms OnRegisterHostStatGuidComplete_Parms;
	OnRegisterHostStatGuidComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 HostStatGuid                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::RegisterHostStatGuid ( struct FString* HostStatGuid )
{
	static UFunction* pFnRegisterHostStatGuid = NULL;

	if ( ! pFnRegisterHostStatGuid )
		pFnRegisterHostStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 41842 ];

	UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Parms RegisterHostStatGuid_Parms;

	pFnRegisterHostStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterHostStatGuid, &RegisterHostStatGuid_Parms, NULL );

	pFnRegisterHostStatGuid->FunctionFlags |= 0x400;

	if ( HostStatGuid )
		memcpy ( HostStatGuid, &RegisterHostStatGuid_Parms.HostStatGuid, 0xC );

	return RegisterHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemSteamworks::GetHostStatGuid ( )
{
	static UFunction* pFnGetHostStatGuid = NULL;

	if ( ! pFnGetHostStatGuid )
		pFnGetHostStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 41840 ];

	UOnlineSubsystemSteamworks_execGetHostStatGuid_Parms GetHostStatGuid_Parms;

	pFnGetHostStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHostStatGuid, &GetHostStatGuid_Parms, NULL );

	pFnGetHostStatGuid->FunctionFlags |= 0x400;

	return GetHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnClearFriendMessageReceivedDelegate = NULL;

	if ( ! pFnClearFriendMessageReceivedDelegate )
		pFnClearFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41836 ];

	UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Parms ClearFriendMessageReceivedDelegate_Parms;
	ClearFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnAddFriendMessageReceivedDelegate = NULL;

	if ( ! pFnAddFriendMessageReceivedDelegate )
		pFnAddFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41832 ];

	UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Parms AddFriendMessageReceivedDelegate_Parms;
	AddFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            SendingPlayer                  ( CPF_Parm )
// struct FString                 SendingNick                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message )
{
	static UFunction* pFnOnFriendMessageReceived = NULL;

	if ( ! pFnOnFriendMessageReceived )
		pFnOnFriendMessageReceived = (UFunction*) UObject::GObjObjects()->Data[ 41827 ];

	UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Parms OnFriendMessageReceived_Parms;
	OnFriendMessageReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendMessageReceived_Parms.SendingPlayer, &SendingPlayer, 0x8 );
	memcpy ( &OnFriendMessageReceived_Parms.SendingNick, &SendingNick, 0xC );
	memcpy ( &OnFriendMessageReceived_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnFriendMessageReceived, &OnFriendMessageReceived_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// [0x00420002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FOnlineFriendMessage > FriendMessages                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::GetFriendMessages ( unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages )
{
	static UFunction* pFnGetFriendMessages = NULL;

	if ( ! pFnGetFriendMessages )
		pFnGetFriendMessages = (UFunction*) UObject::GObjObjects()->Data[ 41822 ];

	UOnlineSubsystemSteamworks_execGetFriendMessages_Parms GetFriendMessages_Parms;
	GetFriendMessages_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetFriendMessages, &GetFriendMessages_Parms, NULL );

	if ( FriendMessages )
		memcpy ( FriendMessages, &GetFriendMessages_Parms.FriendMessages, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnClearJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinFriendGameCompleteDelegate )
		pFnClearJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41819 ];

	UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Parms ClearJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnAddJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinFriendGameCompleteDelegate )
		pFnAddJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41816 ];

	UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Parms AddJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &AddJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnJoinFriendGameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinFriendGameComplete = NULL;

	if ( ! pFnOnJoinFriendGameComplete )
		pFnOnJoinFriendGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 41814 ];

	UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Parms OnJoinFriendGameComplete_Parms;
	OnJoinFriendGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )

bool UOnlineSubsystemSteamworks::JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend )
{
	static UFunction* pFnJoinFriendGame = NULL;

	if ( ! pFnJoinFriendGame )
		pFnJoinFriendGame = (UFunction*) UObject::GObjObjects()->Data[ 41810 ];

	UOnlineSubsystemSteamworks_execJoinFriendGame_Parms JoinFriendGame_Parms;
	JoinFriendGame_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &JoinFriendGame_Parms.Friend, &Friend, 0x8 );

	pFnJoinFriendGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinFriendGame, &JoinFriendGame_Parms, NULL );

	pFnJoinFriendGame->FunctionFlags |= 0x400;

	return JoinFriendGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate )
{
	static UFunction* pFnClearReceivedGameInviteDelegate = NULL;

	if ( ! pFnClearReceivedGameInviteDelegate )
		pFnClearReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41806 ];

	UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Parms ClearReceivedGameInviteDelegate_Parms;
	ClearReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate )
{
	static UFunction* pFnAddReceivedGameInviteDelegate = NULL;

	if ( ! pFnAddReceivedGameInviteDelegate )
		pFnAddReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41802 ];

	UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Parms AddReceivedGameInviteDelegate_Parms;
	AddReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 InviterName                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName )
{
	static UFunction* pFnOnReceivedGameInvite = NULL;

	if ( ! pFnOnReceivedGameInvite )
		pFnOnReceivedGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 41799 ];

	UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Parms OnReceivedGameInvite_Parms;
	OnReceivedGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnReceivedGameInvite_Parms.InviterName, &InviterName, 0xC );

	this->ProcessEvent ( pFnOnReceivedGameInvite, &OnReceivedGameInvite_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FUniqueNetId >  Friends                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendGameInviteToFriends ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Friends, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriends = NULL;

	if ( ! pFnSendGameInviteToFriends )
		pFnSendGameInviteToFriends = (UFunction*) UObject::GObjObjects()->Data[ 41793 ];

	UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Parms SendGameInviteToFriends_Parms;
	SendGameInviteToFriends_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriends_Parms.Friends, &Friends, 0xC );
	memcpy ( &SendGameInviteToFriends_Parms.Text, &Text, 0xC );

	pFnSendGameInviteToFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameInviteToFriends, &SendGameInviteToFriends_Parms, NULL );

	pFnSendGameInviteToFriends->FunctionFlags |= 0x400;

	return SendGameInviteToFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendGameInviteToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriend = NULL;

	if ( ! pFnSendGameInviteToFriend )
		pFnSendGameInviteToFriend = (UFunction*) UObject::GObjObjects()->Data[ 41788 ];

	UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Parms SendGameInviteToFriend_Parms;
	SendGameInviteToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriend_Parms.Friend, &Friend, 0x8 );
	memcpy ( &SendGameInviteToFriend_Parms.Text, &Text, 0xC );

	pFnSendGameInviteToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameInviteToFriend, &SendGameInviteToFriend_Parms, NULL );

	pFnSendGameInviteToFriend->FunctionFlags |= 0x400;

	return SendGameInviteToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message )
{
	static UFunction* pFnSendMessageToFriend = NULL;

	if ( ! pFnSendMessageToFriend )
		pFnSendMessageToFriend = (UFunction*) UObject::GObjObjects()->Data[ 41783 ];

	UOnlineSubsystemSteamworks_execSendMessageToFriend_Parms SendMessageToFriend_Parms;
	SendMessageToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendMessageToFriend_Parms.Friend, &Friend, 0x8 );
	memcpy ( &SendMessageToFriend_Parms.Message, &Message, 0xC );

	pFnSendMessageToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendMessageToFriend, &SendMessageToFriend_Parms, NULL );

	pFnSendMessageToFriend->FunctionFlags |= 0x400;

	return SendMessageToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate )
{
	static UFunction* pFnClearFriendInviteReceivedDelegate = NULL;

	if ( ! pFnClearFriendInviteReceivedDelegate )
		pFnClearFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41779 ];

	UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Parms ClearFriendInviteReceivedDelegate_Parms;
	ClearFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate )
{
	static UFunction* pFnAddFriendInviteReceivedDelegate = NULL;

	if ( ! pFnAddFriendInviteReceivedDelegate )
		pFnAddFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41775 ];

	UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Parms AddFriendInviteReceivedDelegate_Parms;
	AddFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )
// struct FString                 RequestingNick                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message )
{
	static UFunction* pFnOnFriendInviteReceived = NULL;

	if ( ! pFnOnFriendInviteReceived )
		pFnOnFriendInviteReceived = (UFunction*) UObject::GObjObjects()->Data[ 41770 ];

	UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Parms OnFriendInviteReceived_Parms;
	OnFriendInviteReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendInviteReceived_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );
	memcpy ( &OnFriendInviteReceived_Parms.RequestingNick, &RequestingNick, 0xC );
	memcpy ( &OnFriendInviteReceived_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnFriendInviteReceived, &OnFriendInviteReceived_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnDenyFriendInvite = NULL;

	if ( ! pFnDenyFriendInvite )
		pFnDenyFriendInvite = (UFunction*) UObject::GObjObjects()->Data[ 41766 ];

	UOnlineSubsystemSteamworks_execDenyFriendInvite_Parms DenyFriendInvite_Parms;
	DenyFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &DenyFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );

	pFnDenyFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDenyFriendInvite, &DenyFriendInvite_Parms, NULL );

	pFnDenyFriendInvite->FunctionFlags |= 0x400;

	return DenyFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemSteamworks::AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnAcceptFriendInvite = NULL;

	if ( ! pFnAcceptFriendInvite )
		pFnAcceptFriendInvite = (UFunction*) UObject::GObjObjects()->Data[ 41762 ];

	UOnlineSubsystemSteamworks_execAcceptFriendInvite_Parms AcceptFriendInvite_Parms;
	AcceptFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );

	pFnAcceptFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptFriendInvite, &AcceptFriendInvite_Parms, NULL );

	pFnAcceptFriendInvite->FunctionFlags |= 0x400;

	return AcceptFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            FormerFriend                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend )
{
	static UFunction* pFnRemoveFriend = NULL;

	if ( ! pFnRemoveFriend )
		pFnRemoveFriend = (UFunction*) UObject::GObjObjects()->Data[ 41758 ];

	UOnlineSubsystemSteamworks_execRemoveFriend_Parms RemoveFriend_Parms;
	RemoveFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &RemoveFriend_Parms.FormerFriend, &FormerFriend, 0x8 );

	pFnRemoveFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveFriend, &RemoveFriend_Parms, NULL );

	pFnRemoveFriend->FunctionFlags |= 0x400;

	return RemoveFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate )
{
	static UFunction* pFnClearAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnClearAddFriendByNameCompleteDelegate )
		pFnClearAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41754 ];

	UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Parms ClearAddFriendByNameCompleteDelegate_Parms;
	ClearAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0xC );

	this->ProcessEvent ( pFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate )
{
	static UFunction* pFnAddAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnAddAddFriendByNameCompleteDelegate )
		pFnAddAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41749 ];

	UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Parms AddAddFriendByNameCompleteDelegate_Parms;
	AddAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0xC );

	this->ProcessEvent ( pFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnAddFriendByNameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnAddFriendByNameComplete = NULL;

	if ( ! pFnOnAddFriendByNameComplete )
		pFnOnAddFriendByNameComplete = (UFunction*) UObject::GObjObjects()->Data[ 41747 ];

	UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Parms OnAddFriendByNameComplete_Parms;
	OnAddFriendByNameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 FriendName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message )
{
	static UFunction* pFnAddFriendByName = NULL;

	if ( ! pFnAddFriendByName )
		pFnAddFriendByName = (UFunction*) UObject::GObjObjects()->Data[ 41742 ];

	UOnlineSubsystemSteamworks_execAddFriendByName_Parms AddFriendByName_Parms;
	AddFriendByName_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendByName_Parms.FriendName, &FriendName, 0xC );
	memcpy ( &AddFriendByName_Parms.Message, &Message, 0xC );

	pFnAddFriendByName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFriendByName, &AddFriendByName_Parms, NULL );

	pFnAddFriendByName->FunctionFlags |= 0x400;

	return AddFriendByName_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NewFriend                      ( CPF_Parm )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message )
{
	static UFunction* pFnAddFriend = NULL;

	if ( ! pFnAddFriend )
		pFnAddFriend = (UFunction*) UObject::GObjObjects()->Data[ 41737 ];

	UOnlineSubsystemSteamworks_execAddFriend_Parms AddFriend_Parms;
	AddFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriend_Parms.NewFriend, &NewFriend, 0x8 );
	memcpy ( &AddFriend_Parms.Message, &Message, 0xC );

	pFnAddFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFriend, &AddFriend_Parms, NULL );

	pFnAddFriend->FunctionFlags |= 0x400;

	return AddFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  bWasCanceled                   ( CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemSteamworks::GetKeyboardInputResults ( unsigned char* bWasCanceled )
{
	static UFunction* pFnGetKeyboardInputResults = NULL;

	if ( ! pFnGetKeyboardInputResults )
		pFnGetKeyboardInputResults = (UFunction*) UObject::GObjObjects()->Data[ 41732 ];

	UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Parms GetKeyboardInputResults_Parms;

	this->ProcessEvent ( pFnGetKeyboardInputResults, &GetKeyboardInputResults_Parms, NULL );

	if ( bWasCanceled )
		*bWasCanceled = GetKeyboardInputResults_Parms.bWasCanceled;

	return GetKeyboardInputResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnClearKeyboardInputDoneDelegate = NULL;

	if ( ! pFnClearKeyboardInputDoneDelegate )
		pFnClearKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41729 ];

	UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Parms ClearKeyboardInputDoneDelegate_Parms;
	memcpy ( &ClearKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0xC );

	this->ProcessEvent ( pFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnAddKeyboardInputDoneDelegate = NULL;

	if ( ! pFnAddKeyboardInputDoneDelegate )
		pFnAddKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41726 ];

	UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Parms AddKeyboardInputDoneDelegate_Parms;
	memcpy ( &AddKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0xC );

	this->ProcessEvent ( pFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnKeyboardInputComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnKeyboardInputComplete = NULL;

	if ( ! pFnOnKeyboardInputComplete )
		pFnOnKeyboardInputComplete = (UFunction*) UObject::GObjObjects()->Data[ 41724 ];

	UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Parms OnKeyboardInputComplete_Parms;
	OnKeyboardInputComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 TitleText                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DescriptionText                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsPassword                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldValidate                ( CPF_OptionalParm | CPF_Parm )
// struct FString                 DefaultText                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            MaxResultLength                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength )
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if ( ! pFnShowKeyboardUI )
		pFnShowKeyboardUI = (UFunction*) UObject::GObjObjects()->Data[ 41715 ];

	UOnlineSubsystemSteamworks_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowKeyboardUI_Parms.TitleText, &TitleText, 0xC );
	memcpy ( &ShowKeyboardUI_Parms.DescriptionText, &DescriptionText, 0xC );
	ShowKeyboardUI_Parms.bIsPassword = bIsPassword;
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	memcpy ( &ShowKeyboardUI_Parms.DefaultText, &DefaultText, 0xC );
	ShowKeyboardUI_Parms.MaxResultLength = MaxResultLength;

	pFnShowKeyboardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL );

	pFnShowKeyboardUI->FunctionFlags |= 0x400;

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            StatusId                       ( CPF_Parm )
// TArray< struct FLocalizedStringSetting > LocalizedStringSettings        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FSettingsProperty > Properties                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::SetOnlineStatus ( unsigned char LocalUserNum, int StatusId, TArray< struct FLocalizedStringSetting >* LocalizedStringSettings, TArray< struct FSettingsProperty >* Properties )
{
	static UFunction* pFnSetOnlineStatus = NULL;

	if ( ! pFnSetOnlineStatus )
		pFnSetOnlineStatus = (UFunction*) UObject::GObjObjects()->Data[ 41708 ];

	UOnlineSubsystemSteamworks_execSetOnlineStatus_Parms SetOnlineStatus_Parms;
	SetOnlineStatus_Parms.LocalUserNum = LocalUserNum;
	SetOnlineStatus_Parms.StatusId = StatusId;

	pFnSetOnlineStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOnlineStatus, &SetOnlineStatus_Parms, NULL );

	pFnSetOnlineStatus->FunctionFlags |= 0x400;

	if ( LocalizedStringSettings )
		memcpy ( LocalizedStringSettings, &SetOnlineStatus_Parms.LocalizedStringSettings, 0xC );

	if ( Properties )
		memcpy ( Properties, &SetOnlineStatus_Parms.Properties, 0xC );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FString >       Accounts                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetLocalAccountNames ( TArray< struct FString >* Accounts )
{
	static UFunction* pFnGetLocalAccountNames = NULL;

	if ( ! pFnGetLocalAccountNames )
		pFnGetLocalAccountNames = (UFunction*) UObject::GObjObjects()->Data[ 41704 ];

	UOnlineSubsystemSteamworks_execGetLocalAccountNames_Parms GetLocalAccountNames_Parms;

	this->ProcessEvent ( pFnGetLocalAccountNames, &GetLocalAccountNames_Parms, NULL );

	if ( Accounts )
		memcpy ( Accounts, &GetLocalAccountNames_Parms.Accounts, 0xC );

	return GetLocalAccountNames_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::DeleteLocalAccount ( struct FString UserName, struct FString Password )
{
	static UFunction* pFnDeleteLocalAccount = NULL;

	if ( ! pFnDeleteLocalAccount )
		pFnDeleteLocalAccount = (UFunction*) UObject::GObjObjects()->Data[ 41700 ];

	UOnlineSubsystemSteamworks_execDeleteLocalAccount_Parms DeleteLocalAccount_Parms;
	memcpy ( &DeleteLocalAccount_Parms.UserName, &UserName, 0xC );
	memcpy ( &DeleteLocalAccount_Parms.Password, &Password, 0xC );

	this->ProcessEvent ( pFnDeleteLocalAccount, &DeleteLocalAccount_Parms, NULL );

	return DeleteLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 NewUserName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 OldUserName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::RenameLocalAccount ( struct FString NewUserName, struct FString OldUserName, struct FString Password )
{
	static UFunction* pFnRenameLocalAccount = NULL;

	if ( ! pFnRenameLocalAccount )
		pFnRenameLocalAccount = (UFunction*) UObject::GObjObjects()->Data[ 41695 ];

	UOnlineSubsystemSteamworks_execRenameLocalAccount_Parms RenameLocalAccount_Parms;
	memcpy ( &RenameLocalAccount_Parms.NewUserName, &NewUserName, 0xC );
	memcpy ( &RenameLocalAccount_Parms.OldUserName, &OldUserName, 0xC );
	memcpy ( &RenameLocalAccount_Parms.Password, &Password, 0xC );

	this->ProcessEvent ( pFnRenameLocalAccount, &RenameLocalAccount_Parms, NULL );

	return RenameLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::CreateLocalAccount ( struct FString UserName, struct FString Password )
{
	static UFunction* pFnCreateLocalAccount = NULL;

	if ( ! pFnCreateLocalAccount )
		pFnCreateLocalAccount = (UFunction*) UObject::GObjObjects()->Data[ 41691 ];

	UOnlineSubsystemSteamworks_execCreateLocalAccount_Parms CreateLocalAccount_Parms;
	memcpy ( &CreateLocalAccount_Parms.UserName, &UserName, 0xC );
	memcpy ( &CreateLocalAccount_Parms.Password, &Password, 0xC );

	this->ProcessEvent ( pFnCreateLocalAccount, &CreateLocalAccount_Parms, NULL );

	return CreateLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         AccountCreateDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearCreateOnlineAccountCompletedDelegate ( struct FScriptDelegate AccountCreateDelegate )
{
	static UFunction* pFnClearCreateOnlineAccountCompletedDelegate = NULL;

	if ( ! pFnClearCreateOnlineAccountCompletedDelegate )
		pFnClearCreateOnlineAccountCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41688 ];

	UOnlineSubsystemSteamworks_execClearCreateOnlineAccountCompletedDelegate_Parms ClearCreateOnlineAccountCompletedDelegate_Parms;
	memcpy ( &ClearCreateOnlineAccountCompletedDelegate_Parms.AccountCreateDelegate, &AccountCreateDelegate, 0xC );

	this->ProcessEvent ( pFnClearCreateOnlineAccountCompletedDelegate, &ClearCreateOnlineAccountCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         AccountCreateDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddCreateOnlineAccountCompletedDelegate ( struct FScriptDelegate AccountCreateDelegate )
{
	static UFunction* pFnAddCreateOnlineAccountCompletedDelegate = NULL;

	if ( ! pFnAddCreateOnlineAccountCompletedDelegate )
		pFnAddCreateOnlineAccountCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41685 ];

	UOnlineSubsystemSteamworks_execAddCreateOnlineAccountCompletedDelegate_Parms AddCreateOnlineAccountCompletedDelegate_Parms;
	memcpy ( &AddCreateOnlineAccountCompletedDelegate_Parms.AccountCreateDelegate, &AccountCreateDelegate, 0xC );

	this->ProcessEvent ( pFnAddCreateOnlineAccountCompletedDelegate, &AddCreateOnlineAccountCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted
// [0x00120000] 
// Parameters infos:
// unsigned char                  ErrorStatus                    ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnCreateOnlineAccountCompleted ( unsigned char ErrorStatus )
{
	static UFunction* pFnOnCreateOnlineAccountCompleted = NULL;

	if ( ! pFnOnCreateOnlineAccountCompleted )
		pFnOnCreateOnlineAccountCompleted = (UFunction*) UObject::GObjObjects()->Data[ 41683 ];

	UOnlineSubsystemSteamworks_execOnCreateOnlineAccountCompleted_Parms OnCreateOnlineAccountCompleted_Parms;
	OnCreateOnlineAccountCompleted_Parms.ErrorStatus = ErrorStatus;

	this->ProcessEvent ( pFnOnCreateOnlineAccountCompleted, &OnCreateOnlineAccountCompleted_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 EmailAddress                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ProductKey                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::CreateOnlineAccount ( struct FString UserName, struct FString Password, struct FString EmailAddress, struct FString ProductKey )
{
	static UFunction* pFnCreateOnlineAccount = NULL;

	if ( ! pFnCreateOnlineAccount )
		pFnCreateOnlineAccount = (UFunction*) UObject::GObjObjects()->Data[ 41677 ];

	UOnlineSubsystemSteamworks_execCreateOnlineAccount_Parms CreateOnlineAccount_Parms;
	memcpy ( &CreateOnlineAccount_Parms.UserName, &UserName, 0xC );
	memcpy ( &CreateOnlineAccount_Parms.Password, &Password, 0xC );
	memcpy ( &CreateOnlineAccount_Parms.EmailAddress, &EmailAddress, 0xC );
	memcpy ( &CreateOnlineAccount_Parms.ProductKey, &ProductKey, 0xC );

	pFnCreateOnlineAccount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateOnlineAccount, &CreateOnlineAccount_Parms, NULL );

	pFnCreateOnlineAccount->FunctionFlags |= 0x400;

	return CreateOnlineAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetTitleFileState ( struct FString Filename )
{
	static UFunction* pFnGetTitleFileState = NULL;

	if ( ! pFnGetTitleFileState )
		pFnGetTitleFileState = (UFunction*) UObject::GObjObjects()->Data[ 41674 ];

	UOnlineSubsystemSteamworks_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy ( &GetTitleFileState_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnGetTitleFileState, &GetTitleFileState_Parms, NULL );

	return GetTitleFileState_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if ( ! pFnGetTitleFileContents )
		pFnGetTitleFileContents = (UFunction*) UObject::GObjObjects()->Data[ 41669 ];

	UOnlineSubsystemSteamworks_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy ( &GetTitleFileContents_Parms.Filename, &Filename, 0xC );

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL );

	pFnGetTitleFileContents->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetTitleFileContents_Parms.FileContents, 0xC );

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnClearReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnClearReadTitleFileCompleteDelegate )
		pFnClearReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41666 ];

	UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Parms ClearReadTitleFileCompleteDelegate_Parms;
	memcpy ( &ClearReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnAddReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnAddReadTitleFileCompleteDelegate )
		pFnAddReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41663 ];

	UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Parms AddReadTitleFileCompleteDelegate_Parms;
	memcpy ( &AddReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileToRead                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadTitleFile ( struct FString FileToRead )
{
	static UFunction* pFnReadTitleFile = NULL;

	if ( ! pFnReadTitleFile )
		pFnReadTitleFile = (UFunction*) UObject::GObjObjects()->Data[ 41660 ];

	UOnlineSubsystemSteamworks_execReadTitleFile_Parms ReadTitleFile_Parms;
	memcpy ( &ReadTitleFile_Parms.FileToRead, &FileToRead, 0xC );

	pFnReadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadTitleFile, &ReadTitleFile_Parms, NULL );

	pFnReadTitleFile->FunctionFlags |= 0x400;

	return ReadTitleFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename )
{
	static UFunction* pFnOnReadTitleFileComplete = NULL;

	if ( ! pFnOnReadTitleFileComplete )
		pFnOnReadTitleFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 41657 ];

	UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadTitleFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate )
{
	static UFunction* pFnClearStorageDeviceChangeDelegate = NULL;

	if ( ! pFnClearStorageDeviceChangeDelegate )
		pFnClearStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41655 ];

	UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Parms ClearStorageDeviceChangeDelegate_Parms;
	memcpy ( &ClearStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0xC );

	this->ProcessEvent ( pFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate )
{
	static UFunction* pFnAddStorageDeviceChangeDelegate = NULL;

	if ( ! pFnAddStorageDeviceChangeDelegate )
		pFnAddStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41653 ];

	UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Parms AddStorageDeviceChangeDelegate_Parms;
	memcpy ( &AddStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0xC );

	this->ProcessEvent ( pFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnStorageDeviceChange ( )
{
	static UFunction* pFnOnStorageDeviceChange = NULL;

	if ( ! pFnOnStorageDeviceChange )
		pFnOnStorageDeviceChange = (UFunction*) UObject::GObjObjects()->Data[ 41652 ];

	UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Parms OnStorageDeviceChange_Parms;

	this->ProcessEvent ( pFnOnStorageDeviceChange, &OnStorageDeviceChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineSubsystemSteamworks::GetLocale ( )
{
	static UFunction* pFnGetLocale = NULL;

	if ( ! pFnGetLocale )
		pFnGetLocale = (UFunction*) UObject::GObjObjects()->Data[ 41650 ];

	UOnlineSubsystemSteamworks_execGetLocale_Parms GetLocale_Parms;

	this->ProcessEvent ( pFnGetLocale, &GetLocale_Parms, NULL );

	return GetLocale_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemSteamworks::GetNATType ( )
{
	static UFunction* pFnGetNATType = NULL;

	if ( ! pFnGetNATType )
		pFnGetNATType = (UFunction*) UObject::GObjObjects()->Data[ 41648 ];

	UOnlineSubsystemSteamworks_execGetNATType_Parms GetNATType_Parms;

	pFnGetNATType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNATType, &GetNATType_Parms, NULL );

	pFnGetNATType->FunctionFlags |= 0x400;

	return GetNATType_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate )
{
	static UFunction* pFnClearConnectionStatusChangeDelegate = NULL;

	if ( ! pFnClearConnectionStatusChangeDelegate )
		pFnClearConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41645 ];

	UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Parms ClearConnectionStatusChangeDelegate_Parms;
	memcpy ( &ClearConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0xC );

	this->ProcessEvent ( pFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate )
{
	static UFunction* pFnAddConnectionStatusChangeDelegate = NULL;

	if ( ! pFnAddConnectionStatusChangeDelegate )
		pFnAddConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41642 ];

	UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Parms AddConnectionStatusChangeDelegate_Parms;
	memcpy ( &AddConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0xC );

	this->ProcessEvent ( pFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  ConnectionStatus               ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnConnectionStatusChange ( unsigned char ConnectionStatus )
{
	static UFunction* pFnOnConnectionStatusChange = NULL;

	if ( ! pFnOnConnectionStatusChange )
		pFnOnConnectionStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 41640 ];

	UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Parms OnConnectionStatusChange_Parms;
	OnConnectionStatusChange_Parms.ConnectionStatus = ConnectionStatus;

	this->ProcessEvent ( pFnOnConnectionStatusChange, &OnConnectionStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsControllerConnected ( int ControllerId )
{
	static UFunction* pFnIsControllerConnected = NULL;

	if ( ! pFnIsControllerConnected )
		pFnIsControllerConnected = (UFunction*) UObject::GObjObjects()->Data[ 41637 ];

	UOnlineSubsystemSteamworks_execIsControllerConnected_Parms IsControllerConnected_Parms;
	IsControllerConnected_Parms.ControllerId = ControllerId;

	pFnIsControllerConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsControllerConnected, &IsControllerConnected_Parms, NULL );

	pFnIsControllerConnected->FunctionFlags |= 0x400;

	return IsControllerConnected_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate )
{
	static UFunction* pFnClearControllerChangeDelegate = NULL;

	if ( ! pFnClearControllerChangeDelegate )
		pFnClearControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41634 ];

	UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Parms ClearControllerChangeDelegate_Parms;
	memcpy ( &ClearControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0xC );

	this->ProcessEvent ( pFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate )
{
	static UFunction* pFnAddControllerChangeDelegate = NULL;

	if ( ! pFnAddControllerChangeDelegate )
		pFnAddControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41631 ];

	UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Parms AddControllerChangeDelegate_Parms;
	memcpy ( &AddControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0xC );

	this->ProcessEvent ( pFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120000] 
// Parameters infos:
// int                            ControllerId                   ( CPF_Parm )
// unsigned long                  bIsConnected                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnControllerChange ( int ControllerId, unsigned long bIsConnected )
{
	static UFunction* pFnOnControllerChange = NULL;

	if ( ! pFnOnControllerChange )
		pFnOnControllerChange = (UFunction*) UObject::GObjObjects()->Data[ 41628 ];

	UOnlineSubsystemSteamworks_execOnControllerChange_Parms OnControllerChange_Parms;
	OnControllerChange_Parms.ControllerId = ControllerId;
	OnControllerChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent ( pFnOnControllerChange, &OnControllerChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  NewPos                         ( CPF_Parm )

void UOnlineSubsystemSteamworks::SetNetworkNotificationPosition ( unsigned char NewPos )
{
	static UFunction* pFnSetNetworkNotificationPosition = NULL;

	if ( ! pFnSetNetworkNotificationPosition )
		pFnSetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->Data[ 41626 ];

	UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Parms SetNetworkNotificationPosition_Parms;
	SetNetworkNotificationPosition_Parms.NewPos = NewPos;

	pFnSetNetworkNotificationPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Parms, NULL );

	pFnSetNetworkNotificationPosition->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemSteamworks::GetNetworkNotificationPosition ( )
{
	static UFunction* pFnGetNetworkNotificationPosition = NULL;

	if ( ! pFnGetNetworkNotificationPosition )
		pFnGetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->Data[ 41623 ];

	UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Parms GetNetworkNotificationPosition_Parms;

	this->ProcessEvent ( pFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Parms, NULL );

	return GetNetworkNotificationPosition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate )
{
	static UFunction* pFnClearExternalUIChangeDelegate = NULL;

	if ( ! pFnClearExternalUIChangeDelegate )
		pFnClearExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41621 ];

	UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Parms ClearExternalUIChangeDelegate_Parms;
	memcpy ( &ClearExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0xC );

	this->ProcessEvent ( pFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate )
{
	static UFunction* pFnAddExternalUIChangeDelegate = NULL;

	if ( ! pFnAddExternalUIChangeDelegate )
		pFnAddExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41619 ];

	UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Parms AddExternalUIChangeDelegate_Parms;
	memcpy ( &AddExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0xC );

	this->ProcessEvent ( pFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsOpening                     ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnExternalUIChange ( unsigned long bIsOpening )
{
	static UFunction* pFnOnExternalUIChange = NULL;

	if ( ! pFnOnExternalUIChange )
		pFnOnExternalUIChange = (UFunction*) UObject::GObjObjects()->Data[ 41617 ];

	UOnlineSubsystemSteamworks_execOnExternalUIChange_Parms OnExternalUIChange_Parms;
	OnExternalUIChange_Parms.bIsOpening = bIsOpening;

	this->ProcessEvent ( pFnOnExternalUIChange, &OnExternalUIChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate )
{
	static UFunction* pFnClearLinkStatusChangeDelegate = NULL;

	if ( ! pFnClearLinkStatusChangeDelegate )
		pFnClearLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41614 ];

	UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Parms ClearLinkStatusChangeDelegate_Parms;
	memcpy ( &ClearLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0xC );

	this->ProcessEvent ( pFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate )
{
	static UFunction* pFnAddLinkStatusChangeDelegate = NULL;

	if ( ! pFnAddLinkStatusChangeDelegate )
		pFnAddLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41611 ];

	UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Parms AddLinkStatusChangeDelegate_Parms;
	memcpy ( &AddLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0xC );

	this->ProcessEvent ( pFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsConnected                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLinkStatusChange ( unsigned long bIsConnected )
{
	static UFunction* pFnOnLinkStatusChange = NULL;

	if ( ! pFnOnLinkStatusChange )
		pFnOnLinkStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 41609 ];

	UOnlineSubsystemSteamworks_execOnLinkStatusChange_Parms OnLinkStatusChange_Parms;
	OnLinkStatusChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent ( pFnOnLinkStatusChange, &OnLinkStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::HasLinkConnection ( )
{
	static UFunction* pFnHasLinkConnection = NULL;

	if ( ! pFnHasLinkConnection )
		pFnHasLinkConnection = (UFunction*) UObject::GObjObjects()->Data[ 41607 ];

	UOnlineSubsystemSteamworks_execHasLinkConnection_Parms HasLinkConnection_Parms;

	pFnHasLinkConnection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasLinkConnection, &HasLinkConnection_Parms, NULL );

	pFnHasLinkConnection->FunctionFlags |= 0x400;

	return HasLinkConnection_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            UserIndex                      ( CPF_Parm )

struct FString UOnlineSubsystemSteamworks::eventGetPlayerNicknameFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerNicknameFromIndex = NULL;

	if ( ! pFnGetPlayerNicknameFromIndex )
		pFnGetPlayerNicknameFromIndex = (UFunction*) UObject::GObjObjects()->Data[ 41604 ];

	UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	GetPlayerNicknameFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL );

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// int                            LeaderboardId                  ( CPF_Parm )
// TArray< struct FOnlinePlayerScore > PlayerScores                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteOnlinePlayerScores ( struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores )
{
	static UFunction* pFnWriteOnlinePlayerScores = NULL;

	if ( ! pFnWriteOnlinePlayerScores )
		pFnWriteOnlinePlayerScores = (UFunction*) UObject::GObjObjects()->Data[ 41598 ];

	UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Parms WriteOnlinePlayerScores_Parms;
	memcpy ( &WriteOnlinePlayerScores_Parms.SessionName, &SessionName, 0x8 );
	WriteOnlinePlayerScores_Parms.LeaderboardId = LeaderboardId;

	pFnWriteOnlinePlayerScores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Parms, NULL );

	pFnWriteOnlinePlayerScores->FunctionFlags |= 0x400;

	if ( PlayerScores )
		memcpy ( PlayerScores, &WriteOnlinePlayerScores_Parms.PlayerScores, 0xC );

	return WriteOnlinePlayerScores_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate )
{
	static UFunction* pFnClearFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearFlushOnlineStatsCompleteDelegate )
		pFnClearFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41595 ];

	UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Parms ClearFlushOnlineStatsCompleteDelegate_Parms;
	memcpy ( &ClearFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, &FlushOnlineStatsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate )
{
	static UFunction* pFnAddFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddFlushOnlineStatsCompleteDelegate )
		pFnAddFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41592 ];

	UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Parms AddFlushOnlineStatsCompleteDelegate_Parms;
	memcpy ( &AddFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, &FlushOnlineStatsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnFlushOnlineStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnFlushOnlineStatsComplete = NULL;

	if ( ! pFnOnFlushOnlineStatsComplete )
		pFnOnFlushOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->Data[ 41589 ];

	UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Parms OnFlushOnlineStatsComplete_Parms;
	memcpy ( &OnFlushOnlineStatsComplete_Parms.SessionName, &SessionName, 0x8 );
	OnFlushOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemSteamworks::FlushOnlineStats ( struct FName SessionName )
{
	static UFunction* pFnFlushOnlineStats = NULL;

	if ( ! pFnFlushOnlineStats )
		pFnFlushOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 41586 ];

	UOnlineSubsystemSteamworks_execFlushOnlineStats_Parms FlushOnlineStats_Parms;
	memcpy ( &FlushOnlineStats_Parms.SessionName, &SessionName, 0x8 );

	pFnFlushOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushOnlineStats, &FlushOnlineStats_Parms, NULL );

	pFnFlushOnlineStats->FunctionFlags |= 0x400;

	return FlushOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            Player                         ( CPF_Parm )
// class UOnlineStatsWrite*       StatsWrite                     ( CPF_Parm )

bool UOnlineSubsystemSteamworks::WriteOnlineStats ( struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite )
{
	static UFunction* pFnWriteOnlineStats = NULL;

	if ( ! pFnWriteOnlineStats )
		pFnWriteOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 41581 ];

	UOnlineSubsystemSteamworks_execWriteOnlineStats_Parms WriteOnlineStats_Parms;
	memcpy ( &WriteOnlineStats_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &WriteOnlineStats_Parms.Player, &Player, 0x8 );
	WriteOnlineStats_Parms.StatsWrite = StatsWrite;

	pFnWriteOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteOnlineStats, &WriteOnlineStats_Parms, NULL );

	pFnWriteOnlineStats->FunctionFlags |= 0x400;

	return WriteOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

void UOnlineSubsystemSteamworks::FreeStats ( class UOnlineStatsRead* StatsRead )
{
	static UFunction* pFnFreeStats = NULL;

	if ( ! pFnFreeStats )
		pFnFreeStats = (UFunction*) UObject::GObjObjects()->Data[ 41579 ];

	UOnlineSubsystemSteamworks_execFreeStats_Parms FreeStats_Parms;
	FreeStats_Parms.StatsRead = StatsRead;

	pFnFreeStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFreeStats, &FreeStats_Parms, NULL );

	pFnFreeStats->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate )
{
	static UFunction* pFnClearReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearReadOnlineStatsCompleteDelegate )
		pFnClearReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41576 ];

	UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Parms ClearReadOnlineStatsCompleteDelegate_Parms;
	memcpy ( &ClearReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, &ReadOnlineStatsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate )
{
	static UFunction* pFnAddReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddReadOnlineStatsCompleteDelegate )
		pFnAddReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41573 ];

	UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Parms AddReadOnlineStatsCompleteDelegate_Parms;
	memcpy ( &AddReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, &ReadOnlineStatsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadOnlineStatsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadOnlineStatsComplete = NULL;

	if ( ! pFnOnReadOnlineStatsComplete )
		pFnOnReadOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->Data[ 41571 ];

	UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Parms OnReadOnlineStatsComplete_Parms;
	OnReadOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// int                            NumRows                        ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRankAroundPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows )
{
	static UFunction* pFnReadOnlineStatsByRankAroundPlayer = NULL;

	if ( ! pFnReadOnlineStatsByRankAroundPlayer )
		pFnReadOnlineStatsByRankAroundPlayer = (UFunction*) UObject::GObjObjects()->Data[ 41566 ];

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Parms ReadOnlineStatsByRankAroundPlayer_Parms;
	ReadOnlineStatsByRankAroundPlayer_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsByRankAroundPlayer_Parms.StatsRead = StatsRead;
	ReadOnlineStatsByRankAroundPlayer_Parms.NumRows = NumRows;

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Parms, NULL );

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRankAroundPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// int                            StartIndex                     ( CPF_OptionalParm | CPF_Parm )
// int                            NumToRead                      ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRank ( class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead )
{
	static UFunction* pFnReadOnlineStatsByRank = NULL;

	if ( ! pFnReadOnlineStatsByRank )
		pFnReadOnlineStatsByRank = (UFunction*) UObject::GObjObjects()->Data[ 41561 ];

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Parms ReadOnlineStatsByRank_Parms;
	ReadOnlineStatsByRank_Parms.StatsRead = StatsRead;
	ReadOnlineStatsByRank_Parms.StartIndex = StartIndex;
	ReadOnlineStatsByRank_Parms.NumToRead = NumToRead;

	pFnReadOnlineStatsByRank->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Parms, NULL );

	pFnReadOnlineStatsByRank->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRank_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatsForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead )
{
	static UFunction* pFnReadOnlineStatsForFriends = NULL;

	if ( ! pFnReadOnlineStatsForFriends )
		pFnReadOnlineStatsForFriends = (UFunction*) UObject::GObjObjects()->Data[ 41557 ];

	UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Parms ReadOnlineStatsForFriends_Parms;
	ReadOnlineStatsForFriends_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsForFriends_Parms.StatsRead = StatsRead;

	pFnReadOnlineStatsForFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Parms, NULL );

	pFnReadOnlineStatsForFriends->FunctionFlags |= 0x400;

	return ReadOnlineStatsForFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadOnlineStats ( class UOnlineStatsRead* StatsRead, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnReadOnlineStats = NULL;

	if ( ! pFnReadOnlineStats )
		pFnReadOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 41552 ];

	UOnlineSubsystemSteamworks_execReadOnlineStats_Parms ReadOnlineStats_Parms;
	ReadOnlineStats_Parms.StatsRead = StatsRead;

	pFnReadOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStats, &ReadOnlineStats_Parms, NULL );

	pFnReadOnlineStats->FunctionFlags |= 0x400;

	if ( Players )
		memcpy ( Players, &ReadOnlineStats_Parms.Players, 0xC );

	return ReadOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class USpeechRecognition*      SpeechRecogObj                 ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SetSpeechRecognitionObject ( unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj )
{
	static UFunction* pFnSetSpeechRecognitionObject = NULL;

	if ( ! pFnSetSpeechRecognitionObject )
		pFnSetSpeechRecognitionObject = (UFunction*) UObject::GObjObjects()->Data[ 41548 ];

	UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Parms SetSpeechRecognitionObject_Parms;
	SetSpeechRecognitionObject_Parms.LocalUserNum = LocalUserNum;
	SetSpeechRecognitionObject_Parms.SpeechRecogObj = SpeechRecogObj;

	pFnSetSpeechRecognitionObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Parms, NULL );

	pFnSetSpeechRecognitionObject->FunctionFlags |= 0x400;

	return SetSpeechRecognitionObject_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            VocabularyId                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SelectVocabulary ( unsigned char LocalUserNum, int VocabularyId )
{
	static UFunction* pFnSelectVocabulary = NULL;

	if ( ! pFnSelectVocabulary )
		pFnSelectVocabulary = (UFunction*) UObject::GObjObjects()->Data[ 41544 ];

	UOnlineSubsystemSteamworks_execSelectVocabulary_Parms SelectVocabulary_Parms;
	SelectVocabulary_Parms.LocalUserNum = LocalUserNum;
	SelectVocabulary_Parms.VocabularyId = VocabularyId;

	pFnSelectVocabulary->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectVocabulary, &SelectVocabulary_Parms, NULL );

	pFnSelectVocabulary->FunctionFlags |= 0x400;

	return SelectVocabulary_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate )
{
	static UFunction* pFnClearRecognitionCompleteDelegate = NULL;

	if ( ! pFnClearRecognitionCompleteDelegate )
		pFnClearRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41540 ];

	UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Parms ClearRecognitionCompleteDelegate_Parms;
	ClearRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0xC );

	this->ProcessEvent ( pFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate )
{
	static UFunction* pFnAddRecognitionCompleteDelegate = NULL;

	if ( ! pFnAddRecognitionCompleteDelegate )
		pFnAddRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41536 ];

	UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Parms AddRecognitionCompleteDelegate_Parms;
	AddRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0xC );

	this->ProcessEvent ( pFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnRecognitionComplete ( )
{
	static UFunction* pFnOnRecognitionComplete = NULL;

	if ( ! pFnOnRecognitionComplete )
		pFnOnRecognitionComplete = (UFunction*) UObject::GObjObjects()->Data[ 41535 ];

	UOnlineSubsystemSteamworks_execOnRecognitionComplete_Parms OnRecognitionComplete_Parms;

	this->ProcessEvent ( pFnOnRecognitionComplete, &OnRecognitionComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FSpeechRecognizedWord > Words                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetRecognitionResults ( unsigned char LocalUserNum, TArray< struct FSpeechRecognizedWord >* Words )
{
	static UFunction* pFnGetRecognitionResults = NULL;

	if ( ! pFnGetRecognitionResults )
		pFnGetRecognitionResults = (UFunction*) UObject::GObjObjects()->Data[ 41530 ];

	UOnlineSubsystemSteamworks_execGetRecognitionResults_Parms GetRecognitionResults_Parms;
	GetRecognitionResults_Parms.LocalUserNum = LocalUserNum;

	pFnGetRecognitionResults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetRecognitionResults, &GetRecognitionResults_Parms, NULL );

	pFnGetRecognitionResults->FunctionFlags |= 0x400;

	if ( Words )
		memcpy ( Words, &GetRecognitionResults_Parms.Words, 0xC );

	return GetRecognitionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::StopSpeechRecognition ( unsigned char LocalUserNum )
{
	static UFunction* pFnStopSpeechRecognition = NULL;

	if ( ! pFnStopSpeechRecognition )
		pFnStopSpeechRecognition = (UFunction*) UObject::GObjObjects()->Data[ 41527 ];

	UOnlineSubsystemSteamworks_execStopSpeechRecognition_Parms StopSpeechRecognition_Parms;
	StopSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStopSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopSpeechRecognition, &StopSpeechRecognition_Parms, NULL );

	pFnStopSpeechRecognition->FunctionFlags |= 0x400;

	return StopSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::StartSpeechRecognition ( unsigned char LocalUserNum )
{
	static UFunction* pFnStartSpeechRecognition = NULL;

	if ( ! pFnStartSpeechRecognition )
		pFnStartSpeechRecognition = (UFunction*) UObject::GObjObjects()->Data[ 41524 ];

	UOnlineSubsystemSteamworks_execStartSpeechRecognition_Parms StartSpeechRecognition_Parms;
	StartSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStartSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartSpeechRecognition, &StartSpeechRecognition_Parms, NULL );

	pFnStartSpeechRecognition->FunctionFlags |= 0x400;

	return StartSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::StopNetworkedVoice ( unsigned char LocalUserNum )
{
	static UFunction* pFnStopNetworkedVoice = NULL;

	if ( ! pFnStopNetworkedVoice )
		pFnStopNetworkedVoice = (UFunction*) UObject::GObjObjects()->Data[ 41522 ];

	UOnlineSubsystemSteamworks_execStopNetworkedVoice_Parms StopNetworkedVoice_Parms;
	StopNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStopNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopNetworkedVoice, &StopNetworkedVoice_Parms, NULL );

	pFnStopNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::StartNetworkedVoice ( unsigned char LocalUserNum )
{
	static UFunction* pFnStartNetworkedVoice = NULL;

	if ( ! pFnStartNetworkedVoice )
		pFnStartNetworkedVoice = (UFunction*) UObject::GObjObjects()->Data[ 41520 ];

	UOnlineSubsystemSteamworks_execStartNetworkedVoice_Parms StartNetworkedVoice_Parms;
	StartNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStartNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartNetworkedVoice, &StartNetworkedVoice_Parms, NULL );

	pFnStartNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnClearPlayerTalkingDelegate = NULL;

	if ( ! pFnClearPlayerTalkingDelegate )
		pFnClearPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41517 ];

	UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegate_Parms ClearPlayerTalkingDelegate_Parms;
	memcpy ( &ClearPlayerTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0xC );

	this->ProcessEvent ( pFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnAddPlayerTalkingDelegate = NULL;

	if ( ! pFnAddPlayerTalkingDelegate )
		pFnAddPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41513 ];

	UOnlineSubsystemSteamworks_execAddPlayerTalkingDelegate_Parms AddPlayerTalkingDelegate_Parms;
	memcpy ( &AddPlayerTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0xC );

	this->ProcessEvent ( pFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            Player                         ( CPF_Parm )
// unsigned long                  bIsTalking                     ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnPlayerTalkingStateChange ( struct FUniqueNetId Player, unsigned long bIsTalking )
{
	static UFunction* pFnOnPlayerTalkingStateChange = NULL;

	if ( ! pFnOnPlayerTalkingStateChange )
		pFnOnPlayerTalkingStateChange = (UFunction*) UObject::GObjObjects()->Data[ 41510 ];

	UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Parms OnPlayerTalkingStateChange_Parms;
	memcpy ( &OnPlayerTalkingStateChange_Parms.Player, &Player, 0x8 );
	OnPlayerTalkingStateChange_Parms.bIsTalking = bIsTalking;

	this->ProcessEvent ( pFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bIsSystemWide                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide )
{
	static UFunction* pFnUnmuteRemoteTalker = NULL;

	if ( ! pFnUnmuteRemoteTalker )
		pFnUnmuteRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 41505 ];

	UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Parms UnmuteRemoteTalker_Parms;
	UnmuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &UnmuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );
	UnmuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnUnmuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Parms, NULL );

	pFnUnmuteRemoteTalker->FunctionFlags |= 0x400;

	return UnmuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bIsSystemWide                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide )
{
	static UFunction* pFnMuteRemoteTalker = NULL;

	if ( ! pFnMuteRemoteTalker )
		pFnMuteRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 41500 ];

	UOnlineSubsystemSteamworks_execMuteRemoteTalker_Parms MuteRemoteTalker_Parms;
	MuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &MuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );
	MuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnMuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMuteRemoteTalker, &MuteRemoteTalker_Parms, NULL );

	pFnMuteRemoteTalker->FunctionFlags |= 0x400;

	return MuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// int                            Priority                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SetRemoteTalkerPriority ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority )
{
	static UFunction* pFnSetRemoteTalkerPriority = NULL;

	if ( ! pFnSetRemoteTalkerPriority )
		pFnSetRemoteTalkerPriority = (UFunction*) UObject::GObjObjects()->Data[ 41495 ];

	UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Parms SetRemoteTalkerPriority_Parms;
	SetRemoteTalkerPriority_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SetRemoteTalkerPriority_Parms.PlayerID, &PlayerID, 0x8 );
	SetRemoteTalkerPriority_Parms.Priority = Priority;

	pFnSetRemoteTalkerPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Parms, NULL );

	pFnSetRemoteTalkerPriority->FunctionFlags |= 0x400;

	return SetRemoteTalkerPriority_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsHeadsetPresent ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsHeadsetPresent = NULL;

	if ( ! pFnIsHeadsetPresent )
		pFnIsHeadsetPresent = (UFunction*) UObject::GObjObjects()->Data[ 41492 ];

	UOnlineSubsystemSteamworks_execIsHeadsetPresent_Parms IsHeadsetPresent_Parms;
	IsHeadsetPresent_Parms.LocalUserNum = LocalUserNum;

	pFnIsHeadsetPresent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsHeadsetPresent, &IsHeadsetPresent_Parms, NULL );

	pFnIsHeadsetPresent->FunctionFlags |= 0x400;

	return IsHeadsetPresent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsRemotePlayerTalking ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsRemotePlayerTalking = NULL;

	if ( ! pFnIsRemotePlayerTalking )
		pFnIsRemotePlayerTalking = (UFunction*) UObject::GObjObjects()->Data[ 41489 ];

	UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Parms IsRemotePlayerTalking_Parms;
	memcpy ( &IsRemotePlayerTalking_Parms.PlayerID, &PlayerID, 0x8 );

	pFnIsRemotePlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Parms, NULL );

	pFnIsRemotePlayerTalking->FunctionFlags |= 0x400;

	return IsRemotePlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsLocalPlayerTalking ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalPlayerTalking = NULL;

	if ( ! pFnIsLocalPlayerTalking )
		pFnIsLocalPlayerTalking = (UFunction*) UObject::GObjObjects()->Data[ 41486 ];

	UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Parms IsLocalPlayerTalking_Parms;
	IsLocalPlayerTalking_Parms.LocalUserNum = LocalUserNum;

	pFnIsLocalPlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Parms, NULL );

	pFnIsLocalPlayerTalking->FunctionFlags |= 0x400;

	return IsLocalPlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnregisterRemoteTalker ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterRemoteTalker = NULL;

	if ( ! pFnUnregisterRemoteTalker )
		pFnUnregisterRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 41483 ];

	UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Parms UnregisterRemoteTalker_Parms;
	memcpy ( &UnregisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );

	pFnUnregisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Parms, NULL );

	pFnUnregisterRemoteTalker->FunctionFlags |= 0x400;

	return UnregisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::RegisterRemoteTalker ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnRegisterRemoteTalker = NULL;

	if ( ! pFnRegisterRemoteTalker )
		pFnRegisterRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 41480 ];

	UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Parms RegisterRemoteTalker_Parms;
	memcpy ( &RegisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );

	pFnRegisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterRemoteTalker, &RegisterRemoteTalker_Parms, NULL );

	pFnRegisterRemoteTalker->FunctionFlags |= 0x400;

	return RegisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnregisterLocalTalker ( unsigned char LocalUserNum )
{
	static UFunction* pFnUnregisterLocalTalker = NULL;

	if ( ! pFnUnregisterLocalTalker )
		pFnUnregisterLocalTalker = (UFunction*) UObject::GObjObjects()->Data[ 41477 ];

	UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Parms UnregisterLocalTalker_Parms;
	UnregisterLocalTalker_Parms.LocalUserNum = LocalUserNum;

	pFnUnregisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterLocalTalker, &UnregisterLocalTalker_Parms, NULL );

	pFnUnregisterLocalTalker->FunctionFlags |= 0x400;

	return UnregisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::RegisterLocalTalker ( unsigned char LocalUserNum )
{
	static UFunction* pFnRegisterLocalTalker = NULL;

	if ( ! pFnRegisterLocalTalker )
		pFnRegisterLocalTalker = (UFunction*) UObject::GObjObjects()->Data[ 41474 ];

	UOnlineSubsystemSteamworks_execRegisterLocalTalker_Parms RegisterLocalTalker_Parms;
	RegisterLocalTalker_Parms.LocalUserNum = LocalUserNum;

	pFnRegisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterLocalTalker, &RegisterLocalTalker_Parms, NULL );

	pFnRegisterLocalTalker->FunctionFlags |= 0x400;

	return RegisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FOnlineFriend > Friends                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends )
{
	static UFunction* pFnGetFriendsList = NULL;

	if ( ! pFnGetFriendsList )
		pFnGetFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 41467 ];

	UOnlineSubsystemSteamworks_execGetFriendsList_Parms GetFriendsList_Parms;
	GetFriendsList_Parms.LocalUserNum = LocalUserNum;
	GetFriendsList_Parms.Count = Count;
	GetFriendsList_Parms.StartingAt = StartingAt;

	pFnGetFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFriendsList, &GetFriendsList_Parms, NULL );

	pFnGetFriendsList->FunctionFlags |= 0x400;

	if ( Friends )
		memcpy ( Friends, &GetFriendsList_Parms.Friends, 0xC );

	return GetFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate )
{
	static UFunction* pFnClearReadFriendsCompleteDelegate = NULL;

	if ( ! pFnClearReadFriendsCompleteDelegate )
		pFnClearReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41463 ];

	UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Parms ClearReadFriendsCompleteDelegate_Parms;
	ClearReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate )
{
	static UFunction* pFnAddReadFriendsCompleteDelegate = NULL;

	if ( ! pFnAddReadFriendsCompleteDelegate )
		pFnAddReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41459 ];

	UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Parms AddReadFriendsCompleteDelegate_Parms;
	AddReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadFriendsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadFriendsComplete = NULL;

	if ( ! pFnOnReadFriendsComplete )
		pFnOnReadFriendsComplete = (UFunction*) UObject::GObjObjects()->Data[ 41457 ];

	UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Parms OnReadFriendsComplete_Parms;
	OnReadFriendsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadFriendsComplete, &OnReadFriendsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt )
{
	static UFunction* pFnReadFriendsList = NULL;

	if ( ! pFnReadFriendsList )
		pFnReadFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 41452 ];

	UOnlineSubsystemSteamworks_execReadFriendsList_Parms ReadFriendsList_Parms;
	ReadFriendsList_Parms.LocalUserNum = LocalUserNum;
	ReadFriendsList_Parms.Count = Count;
	ReadFriendsList_Parms.StartingAt = StartingAt;

	pFnReadFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadFriendsList, &ReadFriendsList_Parms, NULL );

	pFnReadFriendsList->FunctionFlags |= 0x400;

	return ReadFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearWritePlayerStorageCompleteDelegate )
		pFnClearWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41448 ];

	UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Parms ClearWritePlayerStorageCompleteDelegate_Parms;
	ClearWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddWritePlayerStorageCompleteDelegate )
		pFnAddWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41444 ];

	UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Parms AddWritePlayerStorageCompleteDelegate_Parms;
	AddWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWritePlayerStorageComplete = NULL;

	if ( ! pFnOnWritePlayerStorageComplete )
		pFnOnWritePlayerStorageComplete = (UFunction*) UObject::GObjObjects()->Data[ 41441 ];

	UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Parms OnWritePlayerStorageComplete_Parms;
	OnWritePlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnWritePlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID )
{
	static UFunction* pFnWritePlayerStorage = NULL;

	if ( ! pFnWritePlayerStorage )
		pFnWritePlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 41436 ];

	UOnlineSubsystemSteamworks_execWritePlayerStorage_Parms WritePlayerStorage_Parms;
	WritePlayerStorage_Parms.LocalUserNum = LocalUserNum;
	WritePlayerStorage_Parms.PlayerStorage = PlayerStorage;
	WritePlayerStorage_Parms.DeviceID = DeviceID;

	this->ProcessEvent ( pFnWritePlayerStorage, &WritePlayerStorage_Parms, NULL );

	return WritePlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020002] 
// Parameters infos:
// class UOnlinePlayerStorage*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlinePlayerStorage* UOnlineSubsystemSteamworks::GetPlayerStorage ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerStorage = NULL;

	if ( ! pFnGetPlayerStorage )
		pFnGetPlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 41432 ];

	UOnlineSubsystemSteamworks_execGetPlayerStorage_Parms GetPlayerStorage_Parms;
	GetPlayerStorage_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerStorage, &GetPlayerStorage_Parms, NULL );

	return GetPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageForNetIdCompleteDelegate )
		pFnClearReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41428 ];

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms ClearReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x8 );
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageForNetIdCompleteDelegate )
		pFnAddReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41424 ];

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms AddReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x8 );
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageForNetIdComplete = NULL;

	if ( ! pFnOnReadPlayerStorageForNetIdComplete )
		pFnOnReadPlayerStorageForNetIdComplete = (UFunction*) UObject::GObjObjects()->Data[ 41421 ];

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Parms OnReadPlayerStorageForNetIdComplete_Parms;
	memcpy ( &OnReadPlayerStorageForNetIdComplete_Parms.NetId, &NetId, 0x8 );
	OnReadPlayerStorageForNetIdComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage )
{
	static UFunction* pFnReadPlayerStorageForNetId = NULL;

	if ( ! pFnReadPlayerStorageForNetId )
		pFnReadPlayerStorageForNetId = (UFunction*) UObject::GObjObjects()->Data[ 41416 ];

	UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Parms ReadPlayerStorageForNetId_Parms;
	ReadPlayerStorageForNetId_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ReadPlayerStorageForNetId_Parms.NetId, &NetId, 0x8 );
	ReadPlayerStorageForNetId_Parms.PlayerStorage = PlayerStorage;

	this->ProcessEvent ( pFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Parms, NULL );

	return ReadPlayerStorageForNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageCompleteDelegate )
		pFnClearReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41412 ];

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Parms ClearReadPlayerStorageCompleteDelegate_Parms;
	ClearReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageCompleteDelegate )
		pFnAddReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41408 ];

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Parms AddReadPlayerStorageCompleteDelegate_Parms;
	AddReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageComplete = NULL;

	if ( ! pFnOnReadPlayerStorageComplete )
		pFnOnReadPlayerStorageComplete = (UFunction*) UObject::GObjObjects()->Data[ 41405 ];

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Parms OnReadPlayerStorageComplete_Parms;
	OnReadPlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadPlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID )
{
	static UFunction* pFnReadPlayerStorage = NULL;

	if ( ! pFnReadPlayerStorage )
		pFnReadPlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 41400 ];

	UOnlineSubsystemSteamworks_execReadPlayerStorage_Parms ReadPlayerStorage_Parms;
	ReadPlayerStorage_Parms.LocalUserNum = LocalUserNum;
	ReadPlayerStorage_Parms.PlayerStorage = PlayerStorage;
	ReadPlayerStorage_Parms.DeviceID = DeviceID;

	this->ProcessEvent ( pFnReadPlayerStorage, &ReadPlayerStorage_Parms, NULL );

	return ReadPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearWriteProfileSettingsCompleteDelegate )
		pFnClearWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41396 ];

	UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Parms ClearWriteProfileSettingsCompleteDelegate_Parms;
	ClearWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddWriteProfileSettingsCompleteDelegate )
		pFnAddWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41392 ];

	UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Parms AddWriteProfileSettingsCompleteDelegate_Parms;
	AddWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWriteProfileSettingsComplete = NULL;

	if ( ! pFnOnWriteProfileSettingsComplete )
		pFnOnWriteProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 41389 ];

	UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Parms OnWriteProfileSettingsComplete_Parms;
	OnWriteProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnWriteProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemSteamworks::WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnWriteProfileSettings = NULL;

	if ( ! pFnWriteProfileSettings )
		pFnWriteProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 41385 ];

	UOnlineSubsystemSteamworks_execWriteProfileSettings_Parms WriteProfileSettings_Parms;
	WriteProfileSettings_Parms.LocalUserNum = LocalUserNum;
	WriteProfileSettings_Parms.ProfileSettings = ProfileSettings;

	pFnWriteProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteProfileSettings, &WriteProfileSettings_Parms, NULL );

	pFnWriteProfileSettings->FunctionFlags |= 0x400;

	return WriteProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020002] 
// Parameters infos:
// class UOnlineProfileSettings*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetProfileSettings ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetProfileSettings = NULL;

	if ( ! pFnGetProfileSettings )
		pFnGetProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 41381 ];

	UOnlineSubsystemSteamworks_execGetProfileSettings_Parms GetProfileSettings_Parms;
	GetProfileSettings_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetProfileSettings, &GetProfileSettings_Parms, NULL );

	return GetProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearReadProfileSettingsCompleteDelegate )
		pFnClearReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41377 ];

	UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Parms ClearReadProfileSettingsCompleteDelegate_Parms;
	ClearReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddReadProfileSettingsCompleteDelegate )
		pFnAddReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41371 ];

	UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Parms AddReadProfileSettingsCompleteDelegate_Parms;
	AddReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadProfileSettingsComplete = NULL;

	if ( ! pFnOnReadProfileSettingsComplete )
		pFnOnReadProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 41368 ];

	UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Parms OnReadProfileSettingsComplete_Parms;
	OnReadProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnReadProfileSettings = NULL;

	if ( ! pFnReadProfileSettings )
		pFnReadProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 41364 ];

	UOnlineSubsystemSteamworks_execReadProfileSettings_Parms ReadProfileSettings_Parms;
	ReadProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ReadProfileSettings_Parms.ProfileSettings = ProfileSettings;

	pFnReadProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadProfileSettings, &ReadProfileSettings_Parms, NULL );

	pFnReadProfileSettings->FunctionFlags |= 0x400;

	return ReadProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate )
{
	static UFunction* pFnClearFriendsChangeDelegate = NULL;

	if ( ! pFnClearFriendsChangeDelegate )
		pFnClearFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41360 ];

	UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Parms ClearFriendsChangeDelegate_Parms;
	ClearFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate )
{
	static UFunction* pFnAddFriendsChangeDelegate = NULL;

	if ( ! pFnAddFriendsChangeDelegate )
		pFnAddFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41356 ];

	UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Parms AddFriendsChangeDelegate_Parms;
	AddFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnClearMutingChangeDelegate = NULL;

	if ( ! pFnClearMutingChangeDelegate )
		pFnClearMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41353 ];

	UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Parms ClearMutingChangeDelegate_Parms;
	memcpy ( &ClearMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0xC );

	this->ProcessEvent ( pFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnAddMutingChangeDelegate = NULL;

	if ( ! pFnAddMutingChangeDelegate )
		pFnAddMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41350 ];

	UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Parms AddMutingChangeDelegate_Parms;
	memcpy ( &AddMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0xC );

	this->ProcessEvent ( pFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnClearLoginCancelledDelegate = NULL;

	if ( ! pFnClearLoginCancelledDelegate )
		pFnClearLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41348 ];

	UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Parms ClearLoginCancelledDelegate_Parms;
	memcpy ( &ClearLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnAddLoginCancelledDelegate = NULL;

	if ( ! pFnAddLoginCancelledDelegate )
		pFnAddLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41346 ];

	UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Parms AddLoginCancelledDelegate_Parms;
	memcpy ( &AddLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnClearLoginStatusChangeDelegate = NULL;

	if ( ! pFnClearLoginStatusChangeDelegate )
		pFnClearLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41343 ];

	UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Parms ClearLoginStatusChangeDelegate_Parms;
	memcpy ( &ClearLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0xC );
	ClearLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnAddLoginStatusChangeDelegate = NULL;

	if ( ! pFnAddLoginStatusChangeDelegate )
		pFnAddLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41340 ];

	UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Parms AddLoginStatusChangeDelegate_Parms;
	memcpy ( &AddLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0xC );
	AddLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  NewStatus                      ( CPF_Parm )
// struct FUniqueNetId            NewId                          ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId )
{
	static UFunction* pFnOnLoginStatusChange = NULL;

	if ( ! pFnOnLoginStatusChange )
		pFnOnLoginStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 41337 ];

	UOnlineSubsystemSteamworks_execOnLoginStatusChange_Parms OnLoginStatusChange_Parms;
	OnLoginStatusChange_Parms.NewStatus = NewStatus;
	memcpy ( &OnLoginStatusChange_Parms.NewId, &NewId, 0x8 );

	this->ProcessEvent ( pFnOnLoginStatusChange, &OnLoginStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnClearLoginChangeDelegate = NULL;

	if ( ! pFnClearLoginChangeDelegate )
		pFnClearLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41334 ];

	UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Parms ClearLoginChangeDelegate_Parms;
	memcpy ( &ClearLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnAddLoginChangeDelegate = NULL;

	if ( ! pFnAddLoginChangeDelegate )
		pFnAddLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41331 ];

	UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Parms AddLoginChangeDelegate_Parms;
	memcpy ( &AddLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsMuted = NULL;

	if ( ! pFnIsMuted )
		pFnIsMuted = (UFunction*) UObject::GObjObjects()->Data[ 41325 ];

	UOnlineSubsystemSteamworks_execIsMuted_Parms IsMuted_Parms;
	IsMuted_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsMuted_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnIsMuted, &IsMuted_Parms, NULL );

	return IsMuted_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FFriendsQuery > Query                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AreAnyFriends ( unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query )
{
	static UFunction* pFnAreAnyFriends = NULL;

	if ( ! pFnAreAnyFriends )
		pFnAreAnyFriends = (UFunction*) UObject::GObjObjects()->Data[ 41320 ];

	UOnlineSubsystemSteamworks_execAreAnyFriends_Parms AreAnyFriends_Parms;
	AreAnyFriends_Parms.LocalUserNum = LocalUserNum;

	pFnAreAnyFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAreAnyFriends, &AreAnyFriends_Parms, NULL );

	pFnAreAnyFriends->FunctionFlags |= 0x400;

	if ( Query )
		memcpy ( Query, &AreAnyFriends_Parms.Query, 0xC );

	return AreAnyFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsFriend = NULL;

	if ( ! pFnIsFriend )
		pFnIsFriend = (UFunction*) UObject::GObjObjects()->Data[ 41316 ];

	UOnlineSubsystemSteamworks_execIsFriend_Parms IsFriend_Parms;
	IsFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsFriend_Parms.PlayerID, &PlayerID, 0x8 );

	pFnIsFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsFriend, &IsFriend_Parms, NULL );

	pFnIsFriend->FunctionFlags |= 0x400;

	return IsFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanShowPresenceInformation ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->Data[ 41313 ];

	UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanViewPlayerProfiles ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->Data[ 41310 ];

	UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanPurchaseContent ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->Data[ 41307 ];

	UOnlineSubsystemSteamworks_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanDownloadUserContent ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanDownloadUserContent = NULL;

	if ( ! pFnCanDownloadUserContent )
		pFnCanDownloadUserContent = (UFunction*) UObject::GObjObjects()->Data[ 41304 ];

	UOnlineSubsystemSteamworks_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;
	CanDownloadUserContent_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, NULL );

	return CanDownloadUserContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanCommunicate ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanCommunicate = NULL;

	if ( ! pFnCanCommunicate )
		pFnCanCommunicate = (UFunction*) UObject::GObjObjects()->Data[ 41301 ];

	UOnlineSubsystemSteamworks_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.LocalUserNum = LocalUserNum;

	pFnCanCommunicate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicate, &CanCommunicate_Parms, NULL );

	pFnCanCommunicate->FunctionFlags |= 0x400;

	return CanCommunicate_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanPlayOnline ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->Data[ 41298 ];

	UOnlineSubsystemSteamworks_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.LocalUserNum = LocalUserNum;

	pFnCanPlayOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );

	pFnCanPlayOnline->FunctionFlags |= 0x400;

	return CanPlayOnline_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

struct FString UOnlineSubsystemSteamworks::GetPlayerNickname ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerNickname = NULL;

	if ( ! pFnGetPlayerNickname )
		pFnGetPlayerNickname = (UFunction*) UObject::GObjObjects()->Data[ 41294 ];

	UOnlineSubsystemSteamworks_execGetPlayerNickname_Parms GetPlayerNickname_Parms;
	GetPlayerNickname_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerNickname, &GetPlayerNickname_Parms, NULL );

	return GetPlayerNickname_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID )
{
	static UFunction* pFnGetUniquePlayerId = NULL;

	if ( ! pFnGetUniquePlayerId )
		pFnGetUniquePlayerId = (UFunction*) UObject::GObjObjects()->Data[ 41289 ];

	UOnlineSubsystemSteamworks_execGetUniquePlayerId_Parms GetUniquePlayerId_Parms;
	GetUniquePlayerId_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetUniquePlayerId, &GetUniquePlayerId_Parms, NULL );

	if ( PlayerID )
		memcpy ( PlayerID, &GetUniquePlayerId_Parms.PlayerID, 0x8 );

	return GetUniquePlayerId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsLocalLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalLogin = NULL;

	if ( ! pFnIsLocalLogin )
		pFnIsLocalLogin = (UFunction*) UObject::GObjObjects()->Data[ 41286 ];

	UOnlineSubsystemSteamworks_execIsLocalLogin_Parms IsLocalLogin_Parms;
	IsLocalLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsLocalLogin, &IsLocalLogin_Parms, NULL );

	return IsLocalLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsGuestLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsGuestLogin = NULL;

	if ( ! pFnIsGuestLogin )
		pFnIsGuestLogin = (UFunction*) UObject::GObjObjects()->Data[ 41283 ];

	UOnlineSubsystemSteamworks_execIsGuestLogin_Parms IsGuestLogin_Parms;
	IsGuestLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsGuestLogin, &IsGuestLogin_Parms, NULL );

	return IsGuestLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::GetLoginStatus ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->Data[ 41280 ];

	UOnlineSubsystemSteamworks_execGetLoginStatus_Parms GetLoginStatus_Parms;
	GetLoginStatus_Parms.LocalUserNum = LocalUserNum;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );

	pFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate )
{
	static UFunction* pFnClearLogoutCompletedDelegate = NULL;

	if ( ! pFnClearLogoutCompletedDelegate )
		pFnClearLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41276 ];

	UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Parms ClearLogoutCompletedDelegate_Parms;
	ClearLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0xC );

	this->ProcessEvent ( pFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate )
{
	static UFunction* pFnAddLogoutCompletedDelegate = NULL;

	if ( ! pFnAddLogoutCompletedDelegate )
		pFnAddLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41272 ];

	UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Parms AddLogoutCompletedDelegate_Parms;
	AddLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0xC );

	this->ProcessEvent ( pFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLogoutCompleted ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnLogoutCompleted = NULL;

	if ( ! pFnOnLogoutCompleted )
		pFnOnLogoutCompleted = (UFunction*) UObject::GObjObjects()->Data[ 41270 ];

	UOnlineSubsystemSteamworks_execOnLogoutCompleted_Parms OnLogoutCompleted_Parms;
	OnLogoutCompleted_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnLogoutCompleted, &OnLogoutCompleted_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::Logout ( unsigned char LocalUserNum )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = (UFunction*) UObject::GObjObjects()->Data[ 41267 ];

	UOnlineSubsystemSteamworks_execLogout_Parms Logout_Parms;
	Logout_Parms.LocalUserNum = LocalUserNum;

	pFnLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );

	pFnLogout->FunctionFlags |= 0x400;

	return Logout_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginFailedDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate )
{
	static UFunction* pFnClearLoginFailedDelegate = NULL;

	if ( ! pFnClearLoginFailedDelegate )
		pFnClearLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41263 ];

	UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Parms ClearLoginFailedDelegate_Parms;
	ClearLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLoginFailedDelegate_Parms.LoginFailedDelegate, &LoginFailedDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginFailedDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate )
{
	static UFunction* pFnAddLoginFailedDelegate = NULL;

	if ( ! pFnAddLoginFailedDelegate )
		pFnAddLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41259 ];

	UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Parms AddLoginFailedDelegate_Parms;
	AddLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLoginFailedDelegate_Parms.LoginFailedDelegate, &LoginFailedDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ErrorCode                      ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode )
{
	static UFunction* pFnOnLoginFailed = NULL;

	if ( ! pFnOnLoginFailed )
		pFnOnLoginFailed = (UFunction*) UObject::GObjObjects()->Data[ 41256 ];

	UOnlineSubsystemSteamworks_execOnLoginFailed_Parms OnLoginFailed_Parms;
	OnLoginFailed_Parms.LocalUserNum = LocalUserNum;
	OnLoginFailed_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnLoginFailed, &OnLoginFailed_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::AutoLogin ( )
{
	static UFunction* pFnAutoLogin = NULL;

	if ( ! pFnAutoLogin )
		pFnAutoLogin = (UFunction*) UObject::GObjObjects()->Data[ 41254 ];

	UOnlineSubsystemSteamworks_execAutoLogin_Parms AutoLogin_Parms;

	pFnAutoLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAutoLogin, &AutoLogin_Parms, NULL );

	pFnAutoLogin->FunctionFlags |= 0x400;

	return AutoLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 LoginName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWantsLocalOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = (UFunction*) UObject::GObjObjects()->Data[ 41248 ];

	UOnlineSubsystemSteamworks_execLogin_Parms Login_Parms;
	Login_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &Login_Parms.LoginName, &LoginName, 0xC );
	memcpy ( &Login_Parms.Password, &Password, 0xC );
	Login_Parms.bWantsLocalOnly = bWantsLocalOnly;

	pFnLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );

	pFnLogin->FunctionFlags |= 0x400;

	return Login_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bShowOnlineOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowLoginUI ( unsigned long bShowOnlineOnly )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->Data[ 41245 ];

	UOnlineSubsystemSteamworks_execShowLoginUI_Parms ShowLoginUI_Parms;
	ShowLoginUI_Parms.bShowOnlineOnly = bShowOnlineOnly;

	pFnShowLoginUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );

	pFnShowLoginUI->FunctionFlags |= 0x400;

	return ShowLoginUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnFriendsChange ( )
{
	static UFunction* pFnOnFriendsChange = NULL;

	if ( ! pFnOnFriendsChange )
		pFnOnFriendsChange = (UFunction*) UObject::GObjObjects()->Data[ 41244 ];

	UOnlineSubsystemSteamworks_execOnFriendsChange_Parms OnFriendsChange_Parms;

	this->ProcessEvent ( pFnOnFriendsChange, &OnFriendsChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnMutingChange ( )
{
	static UFunction* pFnOnMutingChange = NULL;

	if ( ! pFnOnMutingChange )
		pFnOnMutingChange = (UFunction*) UObject::GObjObjects()->Data[ 41243 ];

	UOnlineSubsystemSteamworks_execOnMutingChange_Parms OnMutingChange_Parms;

	this->ProcessEvent ( pFnOnMutingChange, &OnMutingChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnLoginCancelled ( )
{
	static UFunction* pFnOnLoginCancelled = NULL;

	if ( ! pFnOnLoginCancelled )
		pFnOnLoginCancelled = (UFunction*) UObject::GObjObjects()->Data[ 41242 ];

	UOnlineSubsystemSteamworks_execOnLoginCancelled_Parms OnLoginCancelled_Parms;

	this->ProcessEvent ( pFnOnLoginCancelled, &OnLoginCancelled_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLoginChange ( unsigned char LocalUserNum )
{
	static UFunction* pFnOnLoginChange = NULL;

	if ( ! pFnOnLoginChange )
		pFnOnLoginChange = (UFunction*) UObject::GObjObjects()->Data[ 41240 ];

	UOnlineSubsystemSteamworks_execOnLoginChange_Parms OnLoginChange_Parms;
	OnLoginChange_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnOnLoginChange, &OnLoginChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::eventExit ( )
{
	static UFunction* pFnExit = NULL;

	if ( ! pFnExit )
		pFnExit = (UFunction*) UObject::GObjObjects()->Data[ 41239 ];

	UOnlineSubsystemSteamworks_eventExit_Parms Exit_Parms;

	pFnExit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnExit, &Exit_Parms, NULL );

	pFnExit->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::eventInit ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 41237 ];

	UOnlineSubsystemSteamworks_eventInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;

	return Init_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif