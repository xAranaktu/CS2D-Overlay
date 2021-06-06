#pragma once

#include <../imgui/imgui.h>
#include <dllmain.h>
#include <globals.h>
#include <logger.h>
#include <config.h>
#include <manager.h>

class Overlay {
public:
    std::string imgui_ini = "imgui.ini";

    ImFont* csp_small = nullptr;
    ImFont* csp_big = nullptr;

    bool can_draw = false;
    bool show_menu = false;
    bool show_demo = false;

    bool show_overlay = false;

    class WeaponInfo {
    public:
        std::string name;
        float width;
        float height;
        LPDIRECT3DTEXTURE9 ptex = nullptr;

        WeaponInfo(std::string n, float w, float h) {
            name = n;
            width = w;
            height = h;
        }
    };

    
    std::map<int, WeaponInfo> weapons_info = {
        {0,  WeaponInfo("NONE", 32.0f, 32.0f)},

        {1,  WeaponInfo("USP", 16.0f, 12.0f)},
        {2,  WeaponInfo("Glock", 18.0f, 13.0f)},
        {3,  WeaponInfo("Deagle", 18.0f, 12.0f)},
        {4,  WeaponInfo("P228", 14.0f, 12.0f)},
        {5,  WeaponInfo("Elite", 17.0f, 12.0f)},
        {6,  WeaponInfo("Five-Seven", 16.0f, 12.0f)},
        {10, WeaponInfo("M3", 33.0f, 12.0f)},
        {11, WeaponInfo("XM1014", 36.0f, 12.0f)},
        {20, WeaponInfo("MP5", 24.0f, 12.0f)},
        {21, WeaponInfo("TMP", 25.0f, 12.0f)},
        {22, WeaponInfo("P90", 23.0f, 12.0f)},
        {23, WeaponInfo("Mac 10", 18.0f, 12.0f)},
        {24, WeaponInfo("UMP45", 24.0f, 12.0f)},
        {30, WeaponInfo("AK-47", 32.0f, 12.0f)},
        {31, WeaponInfo("SG552", 30.0f, 12.0f)},
        {32, WeaponInfo("M4A1", 30.0f, 12.0f)},
        {33, WeaponInfo("Aug", 29.0f, 12.0f)},
        {34, WeaponInfo("Scout", 38.0f, 12.0f)},
        {35, WeaponInfo("AWP", 41.0f, 12.0f)},
        {36, WeaponInfo("G3SG1", 37.0f, 12.0f)},
        {37, WeaponInfo("SG550", 35.0f, 12.0f)},
        {38, WeaponInfo("Galil", 31.0f, 12.0f)},
        {39, WeaponInfo("Famas", 31.0f, 12.0f)},
        {40, WeaponInfo("M249", 28.0f, 12.0f)},
        {41, WeaponInfo("Tactical Shield", 12.0f, 12.0f)},
        {45, WeaponInfo("Laser", 27.0f, 12.0f)},
        {46, WeaponInfo("Flamethrower", 15.0f, 12.0f)},
        {47, WeaponInfo("RPG Launcher", 45.0f, 11.0f)},
        {48, WeaponInfo("Rocket Launcher", 24.0f, 12.0f)},
        {49, WeaponInfo("Grenade Launcher", 16.0f, 11.0f)},
        {50, WeaponInfo("Knife", 28.0f, 9.0f)},
        {51, WeaponInfo("HE", 12.0f, 12.0f)},
        {52, WeaponInfo("FB", 12.0f, 12.0f)},
        {53, WeaponInfo("Smoke", 12.0f, 12.0f)},
        {54, WeaponInfo("Flare", 12.0f, 12.0f)},
        {55, WeaponInfo("C4", 12.0f, 12.0f)},
        {69, WeaponInfo("Machete", 13.0f, 10.0f)},
        // {88, "Portal Gun"},
        {90, WeaponInfo("M134", 31.0f, 12.0f)},
        {91, WeaponInfo("FN F2000", 27.0f, 12.0f)}
    };

    LPDIRECT3DTEXTURE9 texIcoC4 = nullptr;
    LPDIRECT3DTEXTURE9 texIcoDef = nullptr;

    Overlay();
    ~Overlay();

    void Init();
    void HandleDraw();

    void ShowMenu(bool* p_open);

    void TransparentText(const char* text, ImVec2 win_pos, ImVec2 win_size, int id = 0, ImFont* f = nullptr);

    void DrawOverlay();
private:
    WeaponInfo GetWeaponInfo(int weapon_id);

    void DrawWeapon(Tpl* pPlayer, int team = -1);

};

extern Overlay g_Overlay;