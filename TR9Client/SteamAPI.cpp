// **********************************************
// Project: TR9Client
// Start dev time: 15/07/2013 -- 10:35 PM (Pacific Hour)
// Developer: CinamonHole
// **********************************************

#include "stdafx.h"
#include "GamePatches.h"

#include "SteamFriends013.h"
#include "SteamMatchmaking009.h"
#include "SteamUser016.h"
#include "SteamMatchmakingServers002.h"

CSteamID GameSteamID = CSteamID(122424, 0x40000, k_EUniversePublic, k_EAccountTypeAnonUser);
CSteamID DediSteamID = CSteamID(122421, 0x40000, k_EUniversePublic, k_EAccountTypeAnonGameServer);
CSteamID ClanSteamID = CSteamID(122423, 0x40000, k_EUniversePublic, k_EAccountTypeClan);
AppId_t GameAppID = 203160;

SteamFriends013*					SteamFriendsEmu =					new SteamFriends013;
SteamMatchmaking009*				SteamMatchmakingEmu =				new SteamMatchmaking009;
SteamUser016*						SteamUserEmu =						new SteamUser016;
SteamMatchmakingServers002*			SteamMatchmakingServersEmu =		new SteamMatchmakingServers002;

bool IsLoggerInited()
{
	return false;
}

int InitLogger()
{
	// Create the console
	AllocConsole();
	AttachConsole(GetCurrentProcessId());
	freopen("CON", "w", stdout);
	SetConsoleTitle(L"Logger Console");

	// Re-size the console
	COORD coord = { 80, 32766 };
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleScreenBufferSize(handle, coord);

	return 0;
}

extern "C"
{
	__declspec(dllexport) HSteamPipe __cdecl GetHSteamPipe()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_GetHSteamPipe");

		return 0;
	}

	__declspec(dllexport) HSteamUser __cdecl GetHSteamUser()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_GetHSteamUser");

		return 0;
	}

	__declspec(dllexport) HSteamPipe __cdecl SteamAPI_GetHSteamPipe()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_GetHSteamPipe");

		return 0;
	}

	__declspec(dllexport) HSteamUser __cdecl SteamAPI_GetHSteamUser()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_GetHSteamUser");

		return 0;
	}

	__declspec(dllexport) const char* __cdecl SteamAPI_GetSteamInstallPath()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_GetSteamInstallPath");

		return "";
	}

	__declspec(dllexport) bool __cdecl SteamAPI_Init()
	{
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE) InitLogger, 0, 0, 0);
		
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_Init");

		// Initialize game patches
		//GamePatches::Init();

		LoadLibrary(L"C:\Program Files (x86)\Steam\GameOverlayRenderer.dll");
		LoadLibrary(L"C:\Program Files (x86)\Steam\Steam.dll");
		LoadLibrary(L"C:\Program Files (x86)\Steam\Steamclient.dll");
		LoadLibrary(L"C:\Program Files (x86)\Steam\Steamclient64.dll");
		LoadLibrary(L"C:\Program Files (x86)\Steam\SteamUI.dll");
		LoadLibrary(L"C:\Program Files (x86)\Steam\SteamConsole.dll");

		return true;
	}

	__declspec(dllexport) bool __cdecl SteamAPI_InitSafe()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_InitSafe");

		return true;
	}

	__declspec(dllexport) bool __cdecl SteamAPI_IsSteamRunning()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_IsSteamRunning");

		return true;
	}

	__declspec(dllexport) void __cdecl SteamAPI_RegisterCallResult(CCallbackBase* pResult, SteamAPICall_t APICall)
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_RegisterCallResult");
	}

	__declspec(dllexport) void __cdecl SteamAPI_RegisterCallback(CCallbackBase *pCallback, int iCallback)
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_RegisterCallback");
	}

	__declspec(dllexport) char __cdecl SteamAPI_RestartAppIfNecessary()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_RestartAppIfNecessary");

		return 0;
	}

	__declspec(dllexport) void __cdecl SteamAPI_RunCallbacks()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_RunCallbacks");
	}

	__declspec(dllexport) void __cdecl SteamAPI_SetBreakpadAppID()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_SetBreakpadAppID");
	}

	__declspec(dllexport) void __cdecl SteamAPI_SetMiniDumpComment(const char *pchMsg)
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_SetMiniDumpComment");
	}

	__declspec(dllexport) bool __cdecl SteamAPI_SetTryCatchCallbacks(bool bUnknown)
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_SetTryCatchCallbacks");

		return bUnknown;
	}

	__declspec(dllexport) void __cdecl SteamAPI_Shutdown()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_Shutdown");
	}

	__declspec(dllexport) void __cdecl SteamAPI_UnregisterCallResult(CCallbackBase* pResult, SteamAPICall_t APICall)
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_UnregisterCallResult");
	}

	__declspec(dllexport) void __cdecl SteamAPI_UnregisterCallback(CCallbackBase *pCallback, int iCallback)
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_UnregisterCallback");
	}

	__declspec(dllexport) void __cdecl SteamAPI_UseBreakpadCrashHandler()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_UseBreakpadCrashHandler");
	}

	__declspec(dllexport) int __cdecl SteamAPI_WriteMiniDump()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_WriteMiniDump");

		return 0;
	}

	__declspec(dllexport) ISteamApps* __cdecl SteamApps()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamApps");

		return 0;
	}

	__declspec(dllexport) ISteamClient* __cdecl SteamClient()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamClient");

		return 0;
	}

	__declspec(dllexport) ISteamContentServer* __cdecl SteamContentServer()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamContentServer");

		return 0;
	}

	__declspec(dllexport) ISteamUtils* __cdecl SteamContentServerUtils()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamUtils");

		return 0;
	}

	__declspec(dllexport) bool __cdecl SteamContentServer_Init(unsigned int uLocalIP, unsigned short usPort)
	{
		Logger(lSAPI, "SteamAPIExports", "SteamAPI_");

		return 0;
	}

	__declspec(dllexport) void __cdecl SteamContentServer_RunCallbacks()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamContentServer_RunCallbacks");
	}

	__declspec(dllexport) void __cdecl SteamContentServer_Shutdown()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamContentServer_Shutdown");
	}

	__declspec(dllexport) ISteamFriends* __cdecl SteamFriends()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamFriends");

		return (ISteamFriends*) SteamFriendsEmu;
	}

	__declspec(dllexport) ISteamGameServer* __cdecl SteamGameServer()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamGameServer");

		return 0;
	}

	__declspec(dllexport) ISteamApps* __cdecl SteamGameServerApps()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamGameServerApps");

		return 0;
	}

	__declspec(dllexport) ISteamHTTP* __cdecl SteamGameServerHTTP()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamGameServerHTTP");

		return 0;
	}

	__declspec(dllexport) ISteamUserStats* __cdecl SteamGameServerStats()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamGameServerStats");

		return 0;
	}

	__declspec(dllexport) ISteamUtils* __cdecl SteamGameServerUtils()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamUtils");

		return 0;
	}

	__declspec(dllexport) bool __cdecl SteamGameServer_BSecure()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamGameServer_BSecure");

		return true;
	}

	__declspec(dllexport) HSteamPipe __cdecl SteamGameServer_GetHSteamPipe()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamGameServer_GetHSteamPipe");

		return 0;
	}

	__declspec(dllexport) HSteamUser __cdecl SteamGameServer_GetHSteamUser()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamGameServer_GetHSteamUser");

		return 0;
	}

	__declspec(dllexport) int32 __cdecl SteamGameServer_GetIPCCallCount()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamGameServer_GetIPCCallCount");

		return 0;
	}

	__declspec(dllexport) uint64 __cdecl SteamGameServer_GetSteamID()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamGameServer_GetSteamID");

		return 0;
	}

	__declspec(dllexport) bool __cdecl SteamGameServer_Init(uint32 unIP, uint16 usPort, uint16 usGamePort, EServerMode eServerMode, int nGameAppId, const char *pchGameDir, const char *pchVersionString)
	{
		Logger(lSAPI, "SteamAPIExports", "SteamGameServer_Init");

		return true;
	}

	__declspec(dllexport) bool __cdecl SteamGameServer_InitSafe(uint32 unIP, uint16 usPort, uint16 usGamePort, EServerMode eServerMode, int nGameAppId, const char *pchGameDir, const char *pchVersionString, unsigned long dongs)
	{
		Logger(lSAPI, "SteamAPIExports", "SteamGameServer_InitSafe");

		return true;
	}

	__declspec(dllexport) void __cdecl SteamGameServer_RunCallbacks()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamGameServer_RunCallbacks");
	}

	__declspec(dllexport) void __cdecl SteamGameServer_Shutdown()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamGameServer_Shutdown");
	}

	__declspec(dllexport) void __cdecl SteamHTTP()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamHTTP");
	}
	
	__declspec(dllexport) ISteamMatchmaking* __cdecl SteamMatchmaking()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamMatchmaking");

		return (ISteamMatchmaking*) SteamMatchmakingEmu;
	}

	__declspec(dllexport) ISteamMatchmakingServers* __cdecl SteamMatchmakingServers()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamMatchmakingServers");

		return (ISteamMatchmakingServers*) SteamMatchmakingServersEmu;
	}

	__declspec(dllexport) ISteamNetworking* __cdecl SteamNetworking()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamNetworking");

		return 0;
	}

	__declspec(dllexport) ISteamRemoteStorage* __cdecl SteamRemoteStorage()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamRemoteStorage");

		return 0;
	}

	__declspec(dllexport) ISteamUser* __cdecl SteamUser()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamUser");

		return (ISteamUser*) SteamUserEmu;
	}

	__declspec(dllexport) ISteamUserStats* __cdecl SteamUserStats()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamUserStats");

		return 0;
	}

	__declspec(dllexport) ISteamUtils* __cdecl SteamUtils()
	{
		Logger(lSAPI, "SteamAPIExports", "SteamUtils");

		return 0;
	}

	__declspec(dllexport) HSteamUser __cdecl Steam_GetHSteamUserCurrent()
	{
		Logger(lSAPI, "SteamAPIExports", "Steam_GetHSteamUserCurrent");

		return 0;
	}

	__declspec(dllexport) void __cdecl Steam_RegisterInterfaceFuncs(void *hModule)
	{
		Logger(lSAPI, "SteamAPIExports", "Steam_RegisterInterfaceFuncs");
	}

	__declspec(dllexport) void __cdecl Steam_RunCallbacks(HSteamPipe hSteamPipe, bool bGameServerCallbacks)
	{
		Logger(lSAPI, "SteamAPIExports", "Steam_RunCallbacks");
	}

	__declspec(dllexport) void *g_pSteamClientGameServer = 0;
}