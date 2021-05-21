#pragma once

#include "../headers/config.h"


void OverlayCFG::Init() {
    fpath = g_ctx_dll.GetFolder() + "\\overlay_config.ini";

    transparency = Load("Overlay", "Transparency", 1);
    bordered_text = Load("Overlay", "BorderedText", 1);
    auto_update_score = Load("Overlay", "AutoUpdateScore", 1);
    team1_name = Load("Teams", "Team1", "TT");
    team2_name = Load("Teams", "Team2", "CT");
}

int OverlayCFG::Load(char* szSection, char* szKey, int iDefaultValue) {
    return GetPrivateProfileInt(szSection, szKey, iDefaultValue, fpath.c_str());
}
std::string OverlayCFG::Load(char* szSection, char* szKey, const char* iDefaultValue){
    char* szResult = new char[str_max_size];
    memset(szResult, 0x00, str_max_size);
    GetPrivateProfileString(szSection, szKey, iDefaultValue, szResult, str_max_size, fpath.c_str());

    std::string result = std::string(szResult);

    delete[] szResult;

    return result;
}
void OverlayCFG::Save(char* szSection, char* szKey, int iValue){
    char szValue[255];
    sprintf_s(szValue, "%d", iValue);
    WritePrivateProfileString(szSection, szKey, szValue, fpath.c_str());
}
void OverlayCFG::Save(char* szSection, char* szKey, const char* sValue) {
    WritePrivateProfileString(szSection, szKey, sValue, fpath.c_str());
}
void OverlayCFG::Save(char* szSection, char* szKey, std::string sValue) {
    Save(szSection, szKey, sValue.c_str());
}

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

OverlayCFG g_OverlayCFG;