// **********************************************
// Project: TR9Client
// Start dev time: 15/07/2013 -- 10:35 PM (Pacific Hour)
// Developer: CinamonHole
// **********************************************

#include "stdafx.h"

class SteamUser016 : public ISteamUser016
{
	HSteamUser GetHSteamUser()
	{
		return 0;
	}

	bool BLoggedOn()
	{
		return true;
	}

	CSteamID GetSteamID()
	{
		Logger(lSAPI, "SteamUser", "GetSteamID");

		return GameSteamID;
	}

	int InitiateGameConnection(void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
	{
		return 0;
	}

	void TerminateGameConnection(uint32 unIPServer, uint16 usPortServer)
	{

	}

	void TrackAppUsageEvent(CGameID gameID, EAppUsageEvent eAppUsageEvent, const char *pchExtraInfo)
	{

	}

	bool GetUserDataFolder(char *pchBuffer, int cubBuffer)
	{
		return false;
	}

	void StartVoiceRecording()
	{

	}

	void StopVoiceRecording()
	{

	}

	EVoiceResult GetAvailableVoice(uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate)
	{
		return k_EVoiceResultOK;
	}

	EVoiceResult GetVoice(bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate)
	{
		return k_EVoiceResultOK;
	}

	EVoiceResult DecompressVoice(const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
	{
		return k_EVoiceResultOK;
	}

	uint32 GetVoiceOptimalSampleRate()
	{
		return 0;
	}

	HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
	{
		return 0;
	}

	EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
	{
		return k_EBeginAuthSessionResultOK;
	}

	void EndAuthSession(CSteamID steamID)
	{

	}

	void CancelAuthTicket(HAuthTicket hAuthTicket)
	{

	}

	EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID)
	{
		return k_EUserHasLicenseResultHasLicense;
	}

	bool BIsBehindNAT()
	{
		return true;
	}

	void AdvertiseGame(CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
	{

	}

	SteamAPICall_t RequestEncryptedAppTicket(void *pDataToInclude, int cbDataToInclude)
	{
		return 0;
	}

	bool GetEncryptedAppTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
	{
		return false;
	}
};