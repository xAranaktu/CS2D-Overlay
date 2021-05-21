#pragma once
#include <Shlobj.h>
#include "dllmain.h"

class OverlayCFG {
public:
    std::string fpath = "overlay_config.ini";

    int transparency = 1;
    int bordered_text = 1;
    int auto_update_score = 1;
    std::string team1_name = "TT";
    std::string team2_name = "CT";

    void Init();

    int Load(char* szSection, char* szKey, int iDefaultValue);
    std::string Load(char* szSection, char* szKey, const char* iDefaultValue);
    void Save(char* szSection, char* szKey, int iValue);
    void Save(char* szSection, char* szKey, const char* sValue);
    void Save(char* szSection, char* szKey, std::string sValue);
private:
    const int str_max_size = 512;
};

extern OverlayCFG g_OverlayCFG;