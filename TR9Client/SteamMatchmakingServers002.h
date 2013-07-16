// **********************************************
// Project: TR9Client
// Start dev time: 15/07/2013 -- 10:35 PM (Pacific Hour)
// Developer: CinamonHole
// **********************************************

#include "stdafx.h"

class SteamMatchmakingServers002 : public ISteamMatchmakingServers002
{
	HServerListRequest RequestInternetServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)
	{
		return 0;
	}

	HServerListRequest RequestLANServerList(AppId_t iApp, ISteamMatchmakingServerListResponse *pRequestServersResponse)
	{
		return 0;
	}

	HServerListRequest RequestFriendsServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)
	{
		return 0;
	}

	HServerListRequest RequestFavoritesServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)
	{
		return 0;
	}

	HServerListRequest RequestHistoryServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)
	{
		return 0;
	}

	HServerListRequest RequestSpectatorServerList(AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse *pRequestServersResponse)
	{
		return 0;
	}

	void ReleaseRequest(HServerListRequest hServerListRequest)
	{

	}

	gameserveritem_t *GetServerDetails(HServerListRequest hRequest, int iServer)
	{
		return 0;
	}

	void CancelQuery(HServerListRequest hRequest)
	{

	}

	void RefreshQuery(HServerListRequest hRequest)
	{

	}

	bool IsRefreshing(HServerListRequest hRequest)
	{
		return false;
	}

	int GetServerCount(HServerListRequest hRequest)
	{
		return 0;
	}

	void RefreshServer(HServerListRequest hRequest, int iServer)
	{

	}

	HServerQuery PingServer(uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse *pRequestServersResponse)
	{
		return 0;
	}

	HServerQuery PlayerDetails(uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse *pRequestServersResponse)
	{
		return 0;
	}

	HServerQuery ServerRules(uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse *pRequestServersResponse)
	{
		return 0;
	}

	void CancelServerQuery(HServerQuery hServerQuery)
	{

	}
};