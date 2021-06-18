#pragma once

#include "../headers/config.h"


void OverlayCFG::Init() {
    fpath = g_ctx_dll.GetFolder() + "\\overlay_config.ini";

    score.height = static_cast<float>(Load("Overlay", "ScoreHeight", 48));
    score.x_margin = static_cast<float>(Load("Overlay", "ScoreXMargin", 0));
    score.y_margin = static_cast<float>(Load("Overlay", "ScoreYMargin", 5));

    score.auto_update = Load("Overlay", "AutoUpdateScore", 1) == 1;
    score.team1_name = Load("Overlay", "Team1", "Team Bad Guys");
    score.team2_name = Load("Overlay", "Team2", "Team Good Guys");

    playerbar.width = static_cast<float>(Load("PlayerBar", "Width", 260));
    playerbar.height = static_cast<float>(Load("PlayerBar", "Height", 48));
    playerbar.x_margin = static_cast<float>(Load("PlayerBar", "XMargin", 10));
    playerbar.y_margin = static_cast<float>(Load("PlayerBar", "YMargin", 120));
    playerbar.spacing = static_cast<float>(Load("PlayerBar", "Spacing", 2));
    playerbar.hp_height_perc = static_cast<float>(Load("PlayerBar", "HPHeight", 50)) / 100.0f;
    playerbar.arm_height_perc = static_cast<float>(Load("PlayerBar", "ArmHeight", 15)) / 100.0f;
    playerbar.extra_text_width = static_cast<float>(Load("PlayerBar", "ExtraTextWidth", 2));

    misc.weapon_texture_scale = static_cast<float>(Load("Misc", "WeaponTextureScale", 20)) / 10.0f;
    misc.max_players = Load("Misc", "MaxPlayers", 32);
    
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

void OverlayCFG::Save(char* szSection, char* szKey, float fValue, float mul) {
    int iValue = static_cast<int>(fValue * mul);
    Save(szSection, szKey, iValue);
}

void OverlayCFG::Save(char* szSection, char* szKey, const char* sValue) {
    WritePrivateProfileString(szSection, szKey, sValue, fpath.c_str());
}
void OverlayCFG::Save(char* szSection, char* szKey, std::string sValue) {
    Save(szSection, szKey, sValue.c_str());
}


OverlayCFG g_OverlayCFG;