// **********************************************
// Project: TR9Client
// Start dev time: 15/07/2013 -- 10:35 PM (Pacific Hour)
// Developer: CinamonHole
// **********************************************

#include "stdafx.h"
#include <time.h>

bool isLogging = false;

void setColor(unsigned int color)
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(screen, color);
}

void Logger(unsigned int lvl, char* caller, char* logline, ...)
{
	// Check if debug is turned on
	if (lvl == lDEBUG && DEBUG == 0)
		return;

	while (isLogging)
	{
		Sleep(10);
	}

	isLogging = true;
	FILE *file;
	file = fopen("steamAPI.log", "a+");
	char timeStr[9];
	char logOut[1024];
	_strtime(timeStr);
	setColor(DARKGREY);
	printf("[%s] ", timeStr);
	fprintf(file, "[%s] ", timeStr);
	setColor(LIGHTGREY);
	printf("%s: ", caller);
	fprintf(file, "%s: ", caller);

	if (lvl == lINFO)
		setColor(WHITE);
	else if (lvl == lWARN)
		setColor(YELLOW);
	else if (lvl == lERROR)
		setColor(RED);
	else if (lvl == lSAPI)
		setColor(LIGHTCYAN);
	else if (lvl == lDEBUG)
		setColor(GREEN);

	va_list argList;
	va_start(argList, logline);
	vsnprintf(logOut, 1024, logline, argList);
	va_end(argList);
	printf("%s\n", logOut);
	fprintf(file, "%s\n", logOut);
	fclose(file);
	isLogging = false;
}