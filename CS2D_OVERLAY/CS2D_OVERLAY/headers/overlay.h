#pragma once

#include <../imgui/imgui.h>
#include <dllmain.h>
#include <globals.h>
#include <logger.h>
#include <config.h>
#include <manager.h>

struct WeaponTexture {
    std::string name = "";
    float w = 32.0f;
    float h = 32.0f;
    float scale = 1.0f;
    LPDIRECT3DTEXTURE9  p = nullptr;
};

class Overlay {
public:
    std::string imgui_ini = "imgui.ini";

    ImFont* csp_small = nullptr;
    ImFont* csp_big = nullptr;

    bool can_draw = false;
    bool show_menu = false;
    bool show_demo = false;

    bool show_overlay = false;

    std::map<int, std::string>  weapon_names = {
        {1, "USP"},
        {2, "Glock"},
        {3, "Deagle"},
        {4, "P228"},
        {5, "Elite"},
        {6, "Five-Seven"},
        {10, "M3"},
        {11, "XM1014"},
        {20, "MP5"},
        {21, "TMP"},
        {22, "P90"},
        {23, "Mac 10"},
        {24, "UMP45"},
        {30, "AK-47"},
        {31, "SG552"},
        {32, "M4A1"},
        {33, "Aug"},
        {34, "Scout"},
        {35, "AWP"},
        {36, "G3SG1"},
        {37, "SG550"},
        {38, "Galil"},
        {39, "Famas"},
        {40, "M249"},
        {41, "Tactical Shield"},
        {45, "Laser"},
        {46, "Flamethrower"},
        {47, "RPG Launcher"},
        {48, "Rocket Launcher"},
        {49, "Grenade Launcher"},
        {50, "Knife"},
        {51, "HE"},
        {52, "FB"},
        {53, "Smoke"},
        {54, "Flare"},
        {55, "C4"},
        {69, "Machete"},   // HEHE
        // {88, "Portal Gun"},
        {90, "M134"},
        {91, "FN F2000"}
    };

    std::map<int, ImVec2>       weapon_sizes = {
        {1, ImVec2(16.0f, 12.0f)},
        {2, ImVec2(18.0f, 13.0f)},
        {3, ImVec2(18.0f, 12.0f)},
        {4, ImVec2(14.0f, 12.0f)},
        {5, ImVec2(17.0f, 12.0f)},
        {6, ImVec2(16.0f, 12.0f)},
        {10, ImVec2(33.0f, 12.0f)},
        {11, ImVec2(36.0f, 12.0f)},
        {20, ImVec2(24.0f, 12.0f)},
        {21, ImVec2(25.0f, 12.0f)},
        {22, ImVec2(23.0f, 12.0f)},
        {23, ImVec2(18.0f, 12.0f)},
        {24, ImVec2(24.0f, 12.0f)},
        {30, ImVec2(32.0f, 12.0f)},
        {31, ImVec2(30.0f, 12.0f)},
        {32, ImVec2(30.0f, 12.0f)},
        {33, ImVec2(29.0f, 12.0f)},
        {34, ImVec2(38.0f, 12.0f)},
        {35, ImVec2(41.0f, 12.0f)},
        {36, ImVec2(37.0f, 12.0f)},
        {37, ImVec2(35.0f, 12.0f)},
        {38, ImVec2(31.0f, 12.0f)},
        {39, ImVec2(31.0f, 12.0f)},
        {40, ImVec2(28.0f, 12.0f)},
        {41, ImVec2(32.0f, 32.0f)},
        {45, ImVec2(27.0f, 12.0f)},
        {46, ImVec2(15.0f, 12.0f)},
        {47, ImVec2(45.0f, 11.0f)},
        {48, ImVec2(24.0f, 12.0f)},
        {49, ImVec2(16.0f, 11.0f)},
        {50, ImVec2(28.0f, 9.0f)},
        {51, ImVec2(16.0f, 16.0f)},
        {52, ImVec2(16.0f, 16.0f)},
        {53, ImVec2(16.0f, 16.0f)},
        {54, ImVec2(16.0f, 16.0f)},
        {55, ImVec2(16.0f, 16.0f)},
        {69, ImVec2(13.0f, 10.0f)},   // HEHE
        //{88, "Portal Gun"},
        {90, ImVec2(31.0f, 12.0f)},
        {91, ImVec2(27.0f, 12.0f)}
    };

    LPDIRECT3DTEXTURE9 texLogo, texSymArm, texSymHP, texIcoC4, texIcoDef, texUSP, texGlock, texDeagle, texP228, texElite, texFiveSeven, texM3, texXM1014, texMP5, texTMP, texP90, texMAC10, texUMP, texAK47, texSG552, texM4A1, texAUG, texScout, texAWP, texG3SG1, texSG550, texGalil, texFamas, texM249, texTactShield, texLaser, texFlame, texRPG, texRocket, texGrenade, texKnife, texHE, texFB, texSmoke, texFlare, texBomb, texMachete, texM134, texFNF2000 = NULL;

    Overlay();
    ~Overlay();

    void Init();
    void HandleDraw();

    void ShowMenu(bool* p_open);

    void TransparentText(const char* text, ImVec2 win_pos, ImVec2 win_size, int id = 0, ImFont* f = nullptr);

    void DrawOverlay();
private:
    void DrawBarText(Tpl* pPlayer, ImVec2 win_pos, ImVec2 win_size);
    void DrawHPBar(int playerid, int team, float hp, ImVec2 win_pos, ImVec2 win_size);
    void DrawPlayerBar(Tpl* pPlayer, int idx, int team = -1, int hp = -1);
    void DrawWeapon(Tpl* pPlayer, int team = -1);
};

extern Overlay g_Overlay;