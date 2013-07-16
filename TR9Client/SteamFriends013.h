// **********************************************
// Project: TR9Client
// Start dev time: 15/07/2013 -- 10:35 PM (Pacific Hour)
// Developer: CinamonHole
// **********************************************

#include "stdafx.h"

class SteamFriends013 : public ISteamFriends013
{
	const char *GetPersonaName()
	{
		return "CinamonHole";
	}

	SteamAPICall_t SetPersonaName(const char *pchPersonaName)
	{
		return 0;
	}

	EPersonaState GetPersonaState()
	{
		return k_EPersonaStateOnline;
	}

	int GetFriendCount(int iFriendFlags)
	{
		return 0;
	}

	CSteamID GetFriendByIndex(int iFriend, int iFriendFlags)
	{
		return GameSteamID;
	}

	EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend)
	{
		return k_EFriendRelationshipFriend;
	}

	EPersonaState GetFriendPersonaState(CSteamID steamIDFriend)
	{
		// He's fapping... ;p
		return k_EPersonaStateBusy;
	}

	const char *GetFriendPersonaName(CSteamID steamIDFriend)
	{
		return "Pomp";
	}

	bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
	{
		return false;
	}

	const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)
	{
		return "Pomp";
	}

	bool HasFriend(CSteamID steamIDFriend, int iFriendFlags)
	{
		return true;
	}

	int GetClanCount()
	{
		return 1;
	}

	CSteamID GetClanByIndex(int iClan)
	{
		return ClanSteamID;
	}

	const char *GetClanName(CSteamID steamIDClan)
	{
		return "FaZeClan";
	}

	const char *GetClanTag(CSteamID steamIDClan)
	{
		return "FaZe";
	}

	bool GetClanActivityCounts(CSteamID steamID, int *pnOnline, int *pnInGame, int *pnChatting)
	{
		return false;
	}

	SteamAPICall_t DownloadClanActivityCounts(CSteamID groupIDs [], int nIds)
	{
		return 0;
	}

	int GetFriendCountFromSource(CSteamID steamIDSource)
	{
		return 0;
	}

	CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)
	{
		return GameSteamID;
	}

	bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)
	{
		return false;
	}

	void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)
	{

	}

	void ActivateGameOverlay(const char *pchDialog)
	{
		if (pchDialog = "LobbyInvite")
		{
			MessageBox(0, TEXT("Friends system is not implemented."), L"Warning", MB_OK | MB_ICONWARNING);
		}
	}

	void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)
	{

	}

	void ActivateGameOverlayToWebPage(const char *pchURL)
	{

	}

	void ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag)
	{

	}

	void SetPlayedWith(CSteamID steamIDUserPlayedWith)
	{

	}

	void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)
	{

	}

	int GetSmallFriendAvatar(CSteamID steamIDFriend)
	{
		return 0;
	}

	int GetMediumFriendAvatar(CSteamID steamIDFriend)
	{
		return 0;
	}

	int GetLargeFriendAvatar(CSteamID steamIDFriend)
	{
		return 0;
	}

	bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly)
	{
		return false;
	}

	SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan)
	{
		return 0;
	}
		
	CSteamID GetClanOwner(CSteamID steamIDClan)
	{
		return GameSteamID;
	}

	int GetClanOfficerCount(CSteamID steamIDClan)
	{
		return 0;
	}

	CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer)
	{
		return GameSteamID;
	}

	EUserRestriction GetUserRestrictions()
	{
		return k_nUserRestrictionNone;
	}

	bool SetRichPresence(const char *pchKey, const char *pchValue)
	{
		return false;
	}

	void ClearRichPresence()
	{

	}

	const char *GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey)
	{
		return "";
	}

	int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend)
	{
		return 0;
	}

	const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey)
	{
		return "";
	}

	void RequestFriendRichPresence(CSteamID steamIDFriend)
	{

	}

	bool InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString)
	{
		return false;
	}

	int GetCoplayFriendCount()
	{
		return 0;
	}

	CSteamID GetCoplayFriend(int iCoplayFriend)
	{
		return GameSteamID;
	}

	int GetFriendCoplayTime(CSteamID steamIDFriend)
	{
		return 0;
	}

	AppId_t GetFriendCoplayGame(CSteamID steamIDFriend)
	{
		return GameAppID;
	}

	SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan)
	{
		return 0;
	}

	bool LeaveClanChatRoom(CSteamID steamIDClan)
	{
		return false;
	}

	int GetClanChatMemberCount(CSteamID steamIDClan)
	{
		return 0;
	}

	CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int iUser)
	{
		return GameSteamID;
	}

	bool SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText)
	{
		return false;
	}

	int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter)
	{
		return 0;
	}

	bool IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser)
	{
		return false;
	}

	bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat)
	{
		return false;
	}

	bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat)
	{
		return false;
	}

	bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat)
	{
		return false;
	}

	bool SetListenForFriendsMessages(bool bInterceptEnabled)
	{
		return false;
	}

	bool ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend)
	{
		return false;
	}

	int GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)
	{
		return 0;
	}

	SteamAPICall_t GetFollowerCount(CSteamID steamID)
	{
		return 0;
	}

	SteamAPICall_t IsFollowing(CSteamID steamID)
	{
		return 0;
	}

	SteamAPICall_t EnumerateFollowingList(uint32 unStartIndex)
	{
		return 0;
	}
};