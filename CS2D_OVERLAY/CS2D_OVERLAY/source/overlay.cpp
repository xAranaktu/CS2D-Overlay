#pragma once
#include "../headers/overlay.h"

Overlay::Overlay() {

}

Overlay::~Overlay()
{
}

void Overlay::Init() {
    imgui_ini = g_ctx_dll.GetFolder() + "\\imgui.ini";



}

void Overlay::HandleDraw() {
    if (!can_draw) return;
    
    ImGui::GetIO().MouseDrawCursor = show_menu;

    if (show_menu) ShowMenu(&show_menu);
    if (show_demo) ImGui::ShowDemoWindow(&show_demo);

    if (show_overlay)   DrawOverlay();
}

void Overlay::ShowMenu(bool* p_open) {
    ImGuiIO& io = ImGui::GetIO();
    ImGui::SetNextWindowPos(ImVec2(io.DisplaySize.x * 0.5f, io.DisplaySize.y * 0.5f), ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.5f));
    ImGui::SetNextWindowSize(ImVec2(250, 350), ImGuiCond_FirstUseEver);

    ImGui::Begin(APP_NAME, p_open, 0);
    ImGui::BeginGroup();
#ifdef _DEBUG
    if (ImGui::Button("Show Demo")) {
        show_demo = !show_demo;
    }
#endif
    if (ImGui::CollapsingHeader("Config")) {
        ImGui::SliderFloat("x", &g_OverlayCFG.playerbar.x, 0, 400, "%.0f");
        ImGui::SliderFloat("padding", &g_OverlayCFG.playerbar.padding, 0, 100, "%.0f");
        ImGui::SliderFloat("scale", &g_OverlayCFG.weapon_texture_scale, 0.5f, 5.0f, "%.1f");
    }
    if (ImGui::CollapsingHeader("Settings")) {
        ImGui::Checkbox("Show Overlay", &show_overlay);
    }
    if (ImGui::CollapsingHeader("Hotkeys")) {
        ImGui::Text("Show Menu - [F9]");
        ImGui::Text("Show Overlay - [ALT]");
    }

    ImGui::EndGroup();
    ImGui::End();
}

void Overlay::TransparentText(const char* text, ImVec2 win_pos, ImVec2 win_size, int id, ImFont* f) {
    
    ImGuiIO& io = ImGui::GetIO();

    ImGuiWindowFlags flags = 0;
    flags |= ImGuiWindowFlags_NoMove;
    flags |= ImGuiWindowFlags_NoDecoration;
    flags |= ImGuiWindowFlags_NoBackground;
    //flags |= ImGuiWindowFlags_AlwaysAutoResize;
    flags |= ImGuiWindowFlags_NoSavedSettings;
    flags |= ImGuiWindowFlags_NoFocusOnAppearing;
    flags |= ImGuiWindowFlags_NoNav;

    ImGui::SetNextWindowBgAlpha(0.0f);
    ImGui::SetNextWindowPos(win_pos, ImGuiCond_Always);
    ImGui::SetNextWindowSize(win_size, ImGuiCond_Always);

    char window_title[255];
    sprintf(window_title, "TransparentText%d", id);

    ImGui::Begin(text, &show_overlay, flags);

    if (f) ImGui::PushFont(f);
    ImGui::Text(text);
    if (f) ImGui::PopFont();

    ImGui::End();
}

void Overlay::DrawOverlay() {
    //TransparentText("Test", ImVec2(200.0f, 200.0f), ImVec2(250.0f, 45.0f));
    //TransparentText("Test2", ImVec2(400.0f, 400.0f), ImVec2(250.0f, 45.0f), 0, csp_small);
    //TransparentText("Test3", ImVec2(600.0f, 600.0f), ImVec2(250.0f, 45.0f), 0, csp_big);

    size_t nameSize = 0;
    size_t convertedChars = 0;
    int countCT = 0;
    int countTT = 0;

    char window_title_container[30];
    char window_title_hp[30];
    char window_title_armor[30];
    char window_title_text[30];
    char window_title_weapon[30];
    char sHP[5];
    char sName[256];

    auto ContainerBGColor = ImGui::GetColorU32(IM_COL32(37, 48, 52, 100));
    auto TTBarColor = ImGui::GetColorU32(IM_COL32(255, 50, 50, 230));
    auto CTBarColor = ImGui::GetColorU32(IM_COL32(0, 125, 255, 230));

    auto ArmorBarColor = ImGui::GetColorU32(IM_COL32(0, 255, 255, 230));
    auto HPBarColor = TTBarColor;

    ImGuiWindowFlags window_flags = 0;
    window_flags |= ImGuiWindowFlags_NoMove;
    window_flags |= ImGuiWindowFlags_NoDecoration;
    window_flags |= ImGuiWindowFlags_NoBackground;
    window_flags |= ImGuiWindowFlags_NoSavedSettings;
    window_flags |= ImGuiWindowFlags_NoFocusOnAppearing;
    window_flags |= ImGuiWindowFlags_NoNav;

    auto bar_cfg = g_OverlayCFG.playerbar;
    auto padding = g_OverlayCFG.playerbar.padding;
    ImGuiIO& io = ImGui::GetIO();

    ImVec2 textSize = ImVec2(0.0f, 0.0f);
    if (textSize.x == 0.0f) {
        textSize = ImGui::CalcTextSize("100");
        textSize.x += 5.0f;
    }

    ImVec2 win_size = ImVec2(bar_cfg.width, bar_cfg.height);

    ImVec2 win_pos = ImVec2(0.0f, 0.0f);
    ImVec2 container_bar_size = ImVec2(0.0f, 0.0f);

    ImVec2 hp_bar_size = ImVec2(0.0f, 0.0f);
    float hp_bar_height = bar_cfg.height / 2;

    ImVec2 armor_bar_size = ImVec2(0.0f, 0.0f);
    float armor_bar_height = 3.0f;

    ImDrawList* draw_list = nullptr;

    auto pPlayersList = PlayerManager::GetPlayersList();
    TLink* pPlayerEntity = pPlayersList->m__head->m__succ;
    for (int i = 1; i <= g_OverlayCFG.max_players; i++) {
        if (!Validator::ObjIsValid(pPlayerEntity))
            break;

        Tpl* pPlayer = reinterpret_cast<Tpl*>(pPlayerEntity->m__value);

        pPlayerEntity = pPlayerEntity->decl->m_TLink_NextLink(pPlayerEntity);
        if (!Validator::ObjIsValid(pPlayer))
            continue;

        auto hp = PlayerManager::GetHP(pPlayer);

        if (hp == 0)
            continue;


        auto playerid = pPlayer->m_id;
        

        // Convert HP
        float fhp = static_cast<float>(hp);
        sprintf(sHP, "%d", hp);

        // Convert Armor
        auto armor = PlayerManager::GetArmor(pPlayer);
        float farmor = static_cast<float>(armor);

        // Convert Name
        nameSize = pPlayer->m_name->length + 1;
        wcstombs_s(&convertedChars, sName, nameSize, pPlayer->m_name->buf, pPlayer->m_name->length);

        auto m_team = pPlayer->m_team;
        if (m_team == TEAM::TEAM_TT) {
            win_pos.x = bar_cfg.x;
            win_pos.y = io.DisplaySize.y - bar_cfg.first_y - (bar_cfg.margin_bottom * countTT);

            HPBarColor = TTBarColor;
            countTT += 1;
        }
        else if (m_team == TEAM::TEAM_CT) {
            win_pos.x = io.DisplaySize.x - bar_cfg.x - bar_cfg.width;
            win_pos.y = io.DisplaySize.y - bar_cfg.first_y - (bar_cfg.margin_bottom * countCT);

            HPBarColor = CTBarColor;
            countCT += 1;
        }

        // Windows
        container_bar_size = ImVec2(win_pos.x + win_size.x, win_pos.y + win_size.y);
        sprintf(window_title_container, "PBarCont%d", playerid);
        sprintf(window_title_hp, "PBarHP%d", playerid);
        sprintf(window_title_armor, "PBarArmor%d", playerid);
        sprintf(window_title_text, "PBarText%d", playerid);
        sprintf(window_title_weapon, "PWeapTex%d", playerid);

        // Container
        ImGui::SetNextWindowPos(win_pos, ImGuiCond_Always);
        ImGui::SetNextWindowSize(win_size, ImGuiCond_Always);
        ImGui::Begin(window_title_container, &show_overlay, window_flags);
        draw_list = ImGui::GetWindowDrawList();
        draw_list->AddRectFilled(
            win_pos,
            container_bar_size,
            ContainerBGColor
        );

        ImGui::End();

        // HP
        hp_bar_size = ImVec2(
            win_pos.x + fhp * (win_size.x / 100),
            win_pos.y + hp_bar_height
        );
        ImGui::SetNextWindowPos(win_pos, ImGuiCond_Always);
        ImGui::SetNextWindowSize(win_size, ImGuiCond_Always);
        ImGui::Begin(window_title_hp, &show_overlay, window_flags);
        draw_list = ImGui::GetWindowDrawList();
        draw_list->AddRectFilled(
            win_pos,
            hp_bar_size,
            HPBarColor
        );
        ImGui::End();

        // Armor
        armor_bar_size = ImVec2(
            win_pos.x + farmor * (win_size.x / 100),
            win_pos.y + armor_bar_height
        );
        ImGui::SetNextWindowPos(win_pos, ImGuiCond_Always);
        ImGui::SetNextWindowSize(win_size, ImGuiCond_Always);
        ImGui::Begin(window_title_armor, &show_overlay, window_flags);
        draw_list = ImGui::GetWindowDrawList();
        draw_list->AddRectFilled(
            win_pos,
            armor_bar_size,
            ArmorBarColor
        );
        ImGui::End();

        // Text
        ImGui::SetNextWindowPos(win_pos, ImGuiCond_Always);
        ImGui::SetNextWindowSize(win_size, ImGuiCond_Always);
        ImGui::Begin(window_title_text, &show_overlay, window_flags);
        ImGui::BeginGroup();
        ImGui::BeginChild("row1", win_size);
        ImGui::PushFont(csp_small);

        auto cur = ImGui::GetCursorPos();

        ImGui::Text(sHP);
        ImGui::SetCursorPos(ImVec2(cur.x + textSize.x, cur.y));
        ImGui::Text(sName);

        ImGui::PopFont();
        ImGui::EndChild();
        ImGui::EndGroup();
        ImGui::End();

        // Weapon
        win_pos.x = win_pos.x + win_size.x;
        ImGui::SetNextWindowPos(win_pos, ImGuiCond_Always);
        ImGui::SetNextWindowSize(win_size, ImGuiCond_Always);
        ImGui::Begin(window_title_weapon, &show_overlay, window_flags);

        DrawWeapon(pPlayer, m_team);

        ImGui::End();

    }
}

void Overlay::DrawHPBar(int playerid, int team, float hp, ImVec2 win_pos, ImVec2 win_size) {
    auto HPBarColor = ImGui::GetColorU32(IM_COL32(209, 119, 41, 255));

    auto bar_size = ImVec2(
        win_pos.x + hp * (win_size.x / 100),
        win_pos.y + win_size.y
    );
    
    ImGuiIO& io = ImGui::GetIO();

    ImGuiWindowFlags flags = 0;
    flags |= ImGuiWindowFlags_NoMove;
    flags |= ImGuiWindowFlags_NoDecoration;
    flags |= ImGuiWindowFlags_NoBackground;
    flags |= ImGuiWindowFlags_NoSavedSettings;
    flags |= ImGuiWindowFlags_NoFocusOnAppearing;
    flags |= ImGuiWindowFlags_NoNav;

    ImGui::SetNextWindowPos(win_pos, ImGuiCond_Always);
    ImGui::SetNextWindowSize(win_size, ImGuiCond_Always);

    char window_title[18];
    sprintf(window_title, "PlayerBarHP%d", playerid);

    ImGui::Begin(window_title, &show_overlay, flags);
    //ImGui::SetCursorPos(win_pos);
    ImDrawList* draw_list = ImGui::GetWindowDrawList();
    draw_list->AddRectFilled(
        win_pos,
        bar_size,
        HPBarColor
    );
    ImGui::End();
}

void Overlay::DrawBarText(Tpl* pPlayer, ImVec2 win_pos, ImVec2 win_size) {
    auto playerid = pPlayer->m_id;
    auto hp = PlayerManager::GetHP(pPlayer);

    auto sHP = new char[4];
    sprintf(sHP, "%d", hp);

    size_t nameSize = pPlayer->m_name->length + 1;
    size_t convertedChars = 0;
    char* pName = new char[nameSize];
    wcstombs_s(&convertedChars, pName, nameSize, pPlayer->m_name->buf, pPlayer->m_name->length);

    ImGuiWindowFlags flags = 0;
    flags |= ImGuiWindowFlags_NoMove;
    flags |= ImGuiWindowFlags_NoDecoration;
    flags |= ImGuiWindowFlags_NoBackground;
    flags |= ImGuiWindowFlags_NoSavedSettings;
    flags |= ImGuiWindowFlags_NoFocusOnAppearing;
    flags |= ImGuiWindowFlags_NoNav;

    ImGui::SetNextWindowPos(win_pos, ImGuiCond_Always);
    ImGui::SetNextWindowSize(win_size, ImGuiCond_Always);

    char window_title[20];
    sprintf(window_title, "PlayerBarText%d", playerid);

    ImGui::Begin(window_title, &show_overlay, flags);
    ImGui::BeginGroup();
    ImGui::BeginChild("playername", win_size);
    ImGui::PushFont(csp_small);
    ImVec2 textSize = ImGui::CalcTextSize("100");

    auto cur = ImGui::GetCursorPos();

    ImGui::Text(sHP);
    ImGui::SetCursorPos(ImVec2(cur.x + textSize.x + 5.0f, cur.y));
    ImGui::Text(pName);

    ImGui::PopFont();
    ImGui::EndChild();
    ImGui::EndGroup();
    ImGui::End();

    delete[] pName;
    delete[] sHP;
}

void Overlay::DrawPlayerBar(Tpl* pPlayer, int idx, int team, int hp) {
    if (hp < 0) {
        // Get hp if not passed in param
        hp = PlayerManager::GetHP(pPlayer);
    }

    // Player is Dead
    if (hp == 0) return;

    if (team < 0) {
        // Get team if not passed in param
        team = pPlayer->m_team;
    }
    auto playerid = pPlayer->m_id;

    ImGuiIO& io = ImGui::GetIO();
    auto bar_cfg = g_OverlayCFG.playerbar;
    auto padding = g_OverlayCFG.playerbar.padding;
    
    float win_x = 0.0f;
    float win_y = io.DisplaySize.y - bar_cfg.first_y - (bar_cfg.margin_bottom * idx);

    float win_width = 0.0f;
    float win_height = 0.0f;

    if (team == TEAM::TEAM_TT) {
        win_x = bar_cfg.x;
    }
    else {
        win_x = io.DisplaySize.x - bar_cfg.x - bar_cfg.width;
    }

    ImVec2 win_pos = ImVec2(win_x, win_y);
    ImVec2 win_size = ImVec2(bar_cfg.width, bar_cfg.height);

    ImGuiWindowFlags flags = 0;
    flags |= ImGuiWindowFlags_NoMove;
    flags |= ImGuiWindowFlags_NoDecoration;
    //flags |= ImGuiWindowFlags_NoBackground;
    flags |= ImGuiWindowFlags_NoSavedSettings;
    flags |= ImGuiWindowFlags_NoFocusOnAppearing;
    flags |= ImGuiWindowFlags_NoNav;

    ImGui::SetNextWindowPos(win_pos, ImGuiCond_Always);
    ImGui::SetNextWindowSize(win_size, ImGuiCond_Always);

    char window_title[20];
    sprintf(window_title, "PlayerBarContainer%d", playerid);

    ImGui::Begin(window_title, &show_overlay, flags);

    ImGui::End();

    DrawHPBar(
        playerid, 
        team, 
        static_cast<float>(hp), 
        ImVec2(win_pos.x - 3.0f + padding, win_pos.y + padding),
        ImVec2(win_size.x, bar_cfg.height / 2)
    );
    DrawBarText(pPlayer, win_pos, win_size);
}

void Overlay::DrawWeapon(Tpl* pPlayer, int team) {
    if (team == -1) return;

    auto weapon_id = pPlayer->m_weapon->m_typ;

    // Unknown weapon
    if (weapon_names.count(weapon_id) != 1) return;

    auto weapon_texture_size = weapon_sizes.at(weapon_id);

    auto weapon_texture_scale = g_OverlayCFG.weapon_texture_scale;

    weapon_texture_size = ImVec2(
        weapon_texture_size.x * weapon_texture_scale,
        weapon_texture_size.y * weapon_texture_scale
    );

    LPDIRECT3DTEXTURE9  ptexture    = nullptr;
    
    switch (weapon_id) {
    case 1:
        ptexture = texUSP;
        break;
    case 2:
        ptexture = texGlock;
        break;
    case 3:
        ptexture = texDeagle;
        break;
    case 4:
        ptexture = texP228;
        break;
    case 5:
        ptexture = texElite;
        break;
    case 6:
        ptexture = texFiveSeven;
        break;
    case 10:
        ptexture = texM3;
        break;
    case 11:
        ptexture = texXM1014;
        break;
    case 20:
        ptexture = texMP5;
        break;
    case 21:
        ptexture = texTMP;
        break;
    case 22:
        ptexture = texP90;
        break;
    case 23:
        ptexture = texMAC10;
        break;
    case 24:
        ptexture = texUMP;
        break;
    case 30:
        ptexture = texAK47;
        break;
    case 31:
        ptexture = texSG552;
        break;
    case 32:
        ptexture = texM4A1;
        break;
    case 33:
        ptexture = texAUG;
        break;
    case 34:
        ptexture = texScout;
        break;
    case 35:
        ptexture = texAWP;
        break;
    case 36:
        ptexture = texG3SG1;
        break;
    case 37:
        ptexture = texSG550;
        break;
    case 38:
        ptexture = texGalil;
        break;
    case 39:
        ptexture = texFamas;
        break;
    case 40:
        ptexture = texM249;
        break;
    case 41:
        ptexture = texTactShield;
        break;
    case 45:
        ptexture = texLaser;
        break;
    case 46:
        ptexture = texFlame;
        break;
    case 47:
        ptexture = texRPG;
        break;
    case 48:
        ptexture = texRocket;
        break;
    case 49:
        ptexture = texGrenade;
        break;
    case 50:
        ptexture = texKnife;
        break;
    case 51:
        ptexture = texHE;
        break;
    case 52:
        ptexture = texFB;
        break;
    case 53:
        ptexture = texSmoke;
        break;
    case 54:
        ptexture = texFlare;
        break;
    case 55:
        ptexture = texIcoC4;
        break;
    case 69:
        ptexture = texMachete;
        break;
    case 90:
        ptexture = texM134;
        break;
    case 91:
        ptexture = texFNF2000;
        break;
    default:
        ptexture = nullptr;
        break;
    }


    if (!ptexture)  return;

    if (team == TEAM::TEAM_TT) {
        ImGui::Image(ptexture, weapon_texture_size);
    }
    else {
        ImGui::Image(ptexture, weapon_texture_size, ImVec2(1, 0), ImVec2(0, 1));
    }

}

Overlay g_Overlay;