// **********************************************
// Project: TR9Client
// Start dev time: 15/07/2013 -- 10:35 PM (Pacific Hour)
// Developer: CinamonHole
// **********************************************

#include "stdafx.h"

class SteamMatchmaking009 : public ISteamMatchmaking009
{
	int GetFavoriteGameCount()
	{
		return 0;
	}

	bool GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
	{
		return false;
	}

	int AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
	{
		return 0;
	}

	bool RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
	{
		return false;
	}

	SteamAPICall_t RequestLobbyList()
	{
		return 0;
	}

	void AddRequestLobbyListStringFilter(const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType)
	{

	}

	void AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
	{

	}

	void AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)
	{

	}

	void AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable)
	{

	}

	void AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter eLobbyDistanceFilter)
	{

	}

	void AddRequestLobbyListResultCountFilter(int cMaxResults)
	{

	}

	void AddRequestLobbyListCompatibleMembersFilter(CSteamID steamID)
	{

	}

	CSteamID GetLobbyByIndex(int iLobby)
	{
		return GameSteamID;
	}

	SteamAPICall_t CreateLobby(ELobbyType eLobbyType, int cMaxMembers)
	{
		return 0;
	}

	SteamAPICall_t JoinLobby(CSteamID steamIDLobby)
	{
		return 0;
	}

	void LeaveLobby(CSteamID steamIDLobby)
	{

	}

	bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
	{
		return false;
	}

	int GetNumLobbyMembers(CSteamID steamIDLobby)
	{
		return 0;
	}

	CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
	{
		return GameSteamID;
	}

	const char *GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
	{
		return "";
	}

	bool SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
	{
		return false;
	}

	int GetLobbyDataCount(CSteamID steamIDLobby)
	{
		return 0;
	}

	bool GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize)
	{
		return false;
	}

	bool DeleteLobbyData(CSteamID steamIDLobby, const char *pchKey)
	{
		return false;
	}

	const char *GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
	{
		return "";
	}

	void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
	{

	}

	bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
	{
		return false;
	}

	int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
	{
		return 0;
	}

	bool RequestLobbyData(CSteamID steamIDLobby)
	{
		return false;
	}

	void SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
	{

	}

	bool GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
	{
		return false;
	}

	bool SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
	{
		return false;
	}

	int GetLobbyMemberLimit(CSteamID steamIDLobby)
	{
		return 0;
	}

	bool SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)
	{
		return false;
	}

	bool SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable)
	{
		return false;
	}

	CSteamID GetLobbyOwner(CSteamID steamIDLobby)
	{
		return GameSteamID;
	}

	bool SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner)
	{
		return false;
	}

	bool SetLinkedLobby(CSteamID steamIDLobby, CSteamID steamIDLobby2)
	{
		return false;
	}
};