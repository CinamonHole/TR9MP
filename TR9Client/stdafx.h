// **********************************************
// Project: TR9Client
// Start dev time: 15/07/2013 -- 10:35 PM (Pacific Hour)
// Developer: CinamonHole
// **********************************************

#define _CRT_SECURE_NO_WARNINGS

// C and C++ headers
#include <Windows.h>
#include <map>
#include <vector>

// OSW headers
#include "osw\CCallback.h"
#include "osw\ISteamFriends013.h"
#include "osw\ISteamMatchmaking009.h"
#include "osw\ISteamUser016.h"
#include "osw\ISteamMatchmakingServers002.h"
#include "osw\ISteamNetworking005.h"
#include "osw\ISteamClient012.h"
#include "osw\ISteamContentServer002.h"
#include "osw\ISteamGameServerStats001.h"
#include "osw\ISteamGameServer011.h"

extern CSteamID GameSteamID;
extern CSteamID DediSteamID;
extern CSteamID ClanSteamID;
extern AppId_t GameAppID;

void Logger(unsigned int lvl, char* caller, char* logline, ...);

#define lINFO 0
#define lWARN 1
#define lERROR 2
#define lSAPI 3
#define lDEBUG 4
#define DEBUG 1
#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGREY 7
#define DARKGREY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15
#define BLINK 128