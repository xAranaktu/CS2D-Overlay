#pragma once
#include <Shlobj.h>
#include <../imgui/imgui.h>
#include "dllmain.h"

class OverlayCFG {
public:
    std::string fpath = "overlay_config.ini";

    int transparency = 1;
    int bordered_text = 1;

    struct FontSize {
        float score = 26.0f;
        float bars = 14.0f;
        float menu = 16.0f;
    } fontsize;

    struct PlayerBar {
        float x_margin = 10.0f;
        float y_margin = 120.0f;
        float width = 260.0f;
        float height = 48.0f;

        float hp_height_perc = 0.5f;
        float arm_height_perc = 0.15f;

        float spacing = 2.0f;

        float extra_text_width = 10.0f;

        ImVec2 hp_text_sz = ImVec2(0.0f, 0.0f);
        ImVec2 money_text_size = ImVec2(0.0f, 0.0f);
    } playerbar;

    struct Score {
        float x_margin = 0.0f;
        float y_margin = 5.0f;
        float height = 48.0f;
        float container_width = 60.0f;

        bool auto_update = true;
        std::string team1_name = "Team Bad Guys";
        std::string team2_name = "Team Good Guys";
    } score;

    struct ESP {
        float timer_box_rounding = 20.0f;
        float timer_box_sz = 35.0f;
        float timer_x_offset = -25.0f;
        float timer_y_offset = -25.0f;
        float timertext_x_offset = 8.0f;
        float timertext_y_offset = 10.0f;
    } ESP;

    struct Misc {
        int max_players = 32;
        float weapon_texture_scale = 2.0f;
    } misc;

    struct Tester {
        float box_rounding = 20.0f;
        float timer_box_sz = 35.0f;
        float timer_x_offset = -25.0f;
        float timer_y_offset = -25.0f;
        float timertext_x_offset = 8.0f;
        float timertext_y_offset = 10.0f;
    } tester;



    void Init();

    int Load(char* szSection, char* szKey, int iDefaultValue);
    std::string Load(char* szSection, char* szKey, const char* iDefaultValue);
    void Save(char* szSection, char* szKey, int iValue);
    void Save(char* szSection, char* szKey, float fValue, float mul = 1.0f);
    void Save(char* szSection, char* szKey, const char* sValue);
    void Save(char* szSection, char* szKey, std::string sValue);
private:
    const int str_max_size = 512;
};

extern OverlayCFG g_OverlayCFG;