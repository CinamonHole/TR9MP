// **********************************************
// Project: TR9Client
// Start dev time: 15/07/2013 -- 10:35 PM (Pacific Hour)
// Developer: CinamonHole
// **********************************************

#include "stdafx.h"
#include "GamePatches.h"

void GamePatches::Init()
{
	// Detects if we are running the correct version
	/*if (!strcpy((char*) 0x400000, "1"))
	{
		// Un-protect the game memory
		DWORD oldp;
		VirtualProtect((void*) 0x4010000, 0x4000000, 0x40, &oldp);

		// Changes the game window title -- not sure
		strcpy((char*) 0xDD26D8, "Tomb Raider 9 - Modified by CinamonHole");
	}
	else
	{
		MessageBox(0, TEXT("The game version you are trying to run is imcompatible with the client one."), L"Error", MB_OK | MB_ICONHAND);
		ExitProcess(0xDEAD);
	}*/

	// Un-protect the game memory
	DWORD oldp;
	VirtualProtect((void*) 0x4010000, 0x4000000, 0x40, &oldp);

	// Changes the game window title -- not sure
	strcpy((char*) 0xDD26D8, "Tomb Raider 9 - Modified by CinamonHole");

	Logger(lSAPI, "GamePatches", "Init");
}