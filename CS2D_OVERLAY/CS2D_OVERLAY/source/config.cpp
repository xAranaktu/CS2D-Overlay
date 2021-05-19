#pragma once

#include "../headers/config.h"

namespace config {
	char* GetDirectoryFile(char* filename)
	{
		char my_documents[MAX_PATH];
		static char path[320];
		SHGetSpecialFolderPath(0, my_documents, CSIDL_PERSONAL, FALSE);
		strcpy_s(path, my_documents);
		strcat_s(path, filename);
		return path;
	}

	int Load(char* szSection, char* szKey, int iDefaultValue)
	{
		LPCSTR file = GetDirectoryFile("\\CS2D_Overlay\\settings.ini");
		int iResult = GetPrivateProfileInt(szSection, szKey, iDefaultValue, file);
		return iResult;
	}

	char* iniLoadString(char* szSection, char* szKey, const char* iDefaultValue)
	{
		char* file = GetDirectoryFile("\\CS2D_Overlay\\settings.ini");
		char* szResult = new char[255];
		memset(szResult, 0x00, 255);
		GetPrivateProfileString(szSection, szKey, iDefaultValue, szResult, 255, file);
		return szResult;
	}

	void Save(char* szSection, char* szKey, int iValue)
	{
		LPCSTR file = GetDirectoryFile("\\CS2D_Overlay\\settings.ini");
		char szValue[255];
		sprintf_s(szValue, "%d", iValue);
		WritePrivateProfileString(szSection, szKey, szValue, file);
	}
}