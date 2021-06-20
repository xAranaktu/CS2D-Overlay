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

#ifndef _DEBUG
    Tpl* localPlayer = PlayerManager::GetLocalPlayer();
    if (Validator::ObjIsValid(localPlayer)) {
        if (localPlayer->m_team != TEAM::TEAM_SPECTATOR) {
            g_FeatureManager.SetSpecMode(0);
            g_FeatureManager.bNoFlash = false;
            g_FeatureManager.ChangeNoFlash();
            g_FeatureManager.bNoFow = false;
            g_FeatureManager.ChangeNoFOW();

            return;
        }
    }
    else {
        return;
    }
#endif
    
    ImGui::GetIO().MouseDrawCursor = show_menu;

    if (show_menu) ShowMenu(&show_menu);
    if (show_demo) ImGui::ShowDemoWindow(&show_demo);

    if (show_overlay)   DrawOverlay();

    if (g_FeatureManager.bESPPlayer)            DrawESPPlayers();
    if (g_FeatureManager.bESPItem)              DrawESPItems();
    if (g_FeatureManager.bESPProjectiles)       DrawESPProjectiles();

    if (show_debug)     DrawDebug();
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

        if (ImGui::TreeNode("Score")) {
            if (ImGui::InputFloat("Height", &g_OverlayCFG.score.height, 1.0f, 480, "%.0f")) {
                g_OverlayCFG.Save("Overlay", "ScoreHeight", g_OverlayCFG.score.height);
            }
            if (ImGui::InputFloat("X margin", &g_OverlayCFG.score.x_margin, 1.0f, 600, "%.0f")) {
                g_OverlayCFG.Save("Overlay", "ScoreXMargin", g_OverlayCFG.score.x_margin);
            }
            if (ImGui::InputFloat("Y margin", &g_OverlayCFG.score.y_margin, 1.0f, 600, "%.0f")) {
                g_OverlayCFG.Save("Overlay", "ScoreYMargin", g_OverlayCFG.score.y_margin);
            }

            if (ImGui::InputText("Team Name TT", &g_OverlayCFG.score.team1_name)) {
                g_OverlayCFG.Save("Overlay", "Team1", g_OverlayCFG.score.team1_name);
            }
            if (ImGui::InputText("Team Name CT", &g_OverlayCFG.score.team2_name)) {
                g_OverlayCFG.Save("Overlay", "Team2", g_OverlayCFG.score.team2_name);
            }

            if (ImGui::Checkbox("Auto Update Score", &g_OverlayCFG.score.auto_update)) {
                g_OverlayCFG.Save("Overlay", "AutoUpdateScore", static_cast<int>(g_OverlayCFG.score.auto_update));
            }

            ImGui::TreePop();
        }

        if (ImGui::TreeNode("Player Bar")) {
            if (ImGui::InputFloat("Width", &g_OverlayCFG.playerbar.width, 1.0f, 2000, "%.0f")) {
                g_OverlayCFG.Save("PlayerBar", "Width", g_OverlayCFG.playerbar.width);
            }
            if (ImGui::InputFloat("Height", &g_OverlayCFG.playerbar.height, 1.0f, 480, "%.0f")) {
                g_OverlayCFG.Save("PlayerBar", "Height", g_OverlayCFG.playerbar.height);
            }
            if (ImGui::InputFloat("X margin", &g_OverlayCFG.playerbar.x_margin, 1.0f, 600, "%.0f")) {
                g_OverlayCFG.Save("PlayerBar", "XMargin", g_OverlayCFG.playerbar.x_margin);
            }
            if (ImGui::InputFloat("Y margin", &g_OverlayCFG.playerbar.y_margin, 1.0f, 600, "%.0f")) {
                g_OverlayCFG.Save("PlayerBar", "YMargin", g_OverlayCFG.playerbar.y_margin);

            }

            if (ImGui::InputFloat("Spacing", &g_OverlayCFG.playerbar.spacing, 1.0f, 30, "%.0f")) {
                g_OverlayCFG.Save("PlayerBar", "Spacing", g_OverlayCFG.playerbar.spacing);
            }

            if (ImGui::InputFloat("HP Height (%)", &g_OverlayCFG.playerbar.hp_height_perc, 0.01f, 0.1f, "%.2f")) {
                g_OverlayCFG.Save("PlayerBar", "HPHeight", g_OverlayCFG.playerbar.hp_height_perc, 100.0f);
            }
            if (ImGui::InputFloat("Arm Height (% of HP)", &g_OverlayCFG.playerbar.arm_height_perc, 0.01f, 0.1f, "%.2f")) {
                g_OverlayCFG.Save("PlayerBar", "ArmHeight", g_OverlayCFG.playerbar.arm_height_perc, 100.0f);
            }

            if (ImGui::InputFloat("Text Extra Width", &g_OverlayCFG.playerbar.extra_text_width, 1.0f, 5.0f, "%.0f")) {
                g_OverlayCFG.Save("PlayerBar", "ExtraTextWidth", g_OverlayCFG.playerbar.extra_text_width);
            }
            ImGui::TreePop();
        }

        if (ImGui::TreeNode("Misc")) {
            if (ImGui::InputFloat("Weapon Scale", &g_OverlayCFG.misc.weapon_texture_scale, 0.1f, 1.0f, "%.1f")) {
                g_OverlayCFG.Save("Misc", "WeaponTextureScale", g_OverlayCFG.misc.weapon_texture_scale, 10.0f);
            }
            if (ImGui::InputInt("Max Players", &g_OverlayCFG.misc.max_players)) {
                g_OverlayCFG.Save("Misc", "MaxPlayers", g_OverlayCFG.misc.max_players);
            }
            ImGui::TreePop();
        }
    }
    if (ImGui::CollapsingHeader("Settings")) {
        if (ImGui::TreeNode("Score")) {
            ImGui::InputInt("Bonus Score TT", &bonus_score_tt);
            ImGui::InputInt("Bonus Score CT", &bonus_score_ct);

            ImGui::TreePop();
        }
        ImGui::Checkbox("Show Overlay", &show_overlay);
        ImGui::Checkbox("Show Debug", &show_debug);
    }
    if (ImGui::CollapsingHeader("Extra Features")) {
        if (ImGui::BeginCombo("Spec Mode", g_FeatureManager.specmodes.at(g_FeatureManager.current_specmode).c_str())) {
            int items_count = static_cast<int>(g_FeatureManager.specmodes.size());
            for (int n = 0; n < items_count; n++) {
                const bool is_selected = (g_FeatureManager.current_specmode == n);
                auto specmode_name = g_FeatureManager.specmodes.at(n).c_str();
                if (ImGui::Selectable(specmode_name, is_selected)) {
                    g_FeatureManager.current_specmode = n;
                    g_FeatureManager.SetSpecMode(n);
                }
            }
            ImGui::EndCombo();
        }

        if (ImGui::Checkbox("No Flash", &g_FeatureManager.bNoFlash))
            g_FeatureManager.ChangeNoFlash();
        if (ImGui::Checkbox("No FOW",   &g_FeatureManager.bNoFow))
            g_FeatureManager.ChangeNoFOW();

        if (ImGui::TreeNode("ESP")) {
            ImGui::Checkbox("Players", &g_FeatureManager.bESPPlayer);
            ImGui::Checkbox("Items", &g_FeatureManager.bESPItem);
            ImGui::Checkbox("Projectiles", &g_FeatureManager.bESPProjectiles);

            ImGui::TreePop();
        }
    
    }
    if (ImGui::CollapsingHeader("Hotkeys")) {
        ImGui::Text("Increase TT Bonus Score - [F6]");
        ImGui::Text("Increase CT Bonus Score - [F7]");
        ImGui::Text("Reset Both Teams Bonus Score - [F8]");
        ImGui::Text("Show Menu - [F9]");
        ImGui::Text("Swap Team Names - [F10]");
        ImGui::Text("Swap Bonus Score - [F11]");
        ImGui::Text("Show Overlay - [ALT]");
        ImGui::Text("Eject DLL - [END]");
    }

    ImGui::EndGroup();
    ImGui::End();
}


void Overlay::DrawESPPlayers() {
    auto pPlayersList = PlayerManager::GetPlayersList();
    auto type_enum = pPlayersList->decl->m_TList_ObjectEnumerator(pPlayersList);

    // No players
    if (!type_enum->decl->m_TListEnum_HasNext(type_enum)) return;

    ImGuiIO& io = ImGui::GetIO();
    auto displaysz_x = io.DisplaySize.x;
    auto displaysz_y = io.DisplaySize.y;

    auto draw_list = ImGui::GetBackgroundDrawList();

    auto draw_box = true;
    auto box_color = ImGui::GetColorU32(IM_COL32(0, 125, 255, 230));
    auto box_thickness = 4.0f;

    ImVec2 box_size = ImVec2(64.0f + box_thickness, 64.0f + box_thickness);

    while (type_enum->decl->m_TListEnum_HasNext(type_enum)) {
        Object* next_object = type_enum->decl->m_TListEnum_NextObject(type_enum);
        if (!Validator::ObjIsValid(next_object))
            continue;

        Tpl* pPlayer = reinterpret_cast<Tpl*>(next_object);

        auto hp = PlayerManager::GetHP(pPlayer);

        if (hp == 0)
            continue;

        if (draw_box) {
            Vector2 tmp_w2s_pos = Camera::W2S(Vector2(pPlayer->m_x, pPlayer->m_y));
            ImVec2 w2s_pos = ImVec2(tmp_w2s_pos.x, tmp_w2s_pos.y);

            float offset_center = (box_size.x / 2) - (box_thickness / 2);

            ImVec2 box_pos = ImVec2(
                w2s_pos.x - offset_center,
                w2s_pos.y - offset_center
            );

            draw_list->AddRect(
                box_pos,
                ImVec2(box_pos.x + box_size.x, box_pos.y + box_size.y),
                box_color,
                0.0f,
                0,
                box_thickness
            );
        }
    }

}
void Overlay::DrawESPItems() {
    auto pItemsList = ItemManager::GetItemsList();
    auto type_enum = pItemsList->decl->m_TList_ObjectEnumerator(pItemsList);

    ImGuiIO& io = ImGui::GetIO();
    auto displaysz_x = io.DisplaySize.x;
    auto displaysz_y = io.DisplaySize.y;

    auto draw_list = ImGui::GetBackgroundDrawList();

    auto draw_box = true;
    auto box_color = ImGui::GetColorU32(IM_COL32(186, 92, 9, 230));
    auto box_thickness = 4.0f;
    ImVec2 box_size = ImVec2(64.0f + box_thickness, 64.0f + box_thickness);

    while (type_enum->decl->m_TListEnum_HasNext(type_enum)) {
        Object* next_object = type_enum->decl->m_TListEnum_NextObject(type_enum);
        if (!Validator::ObjIsValid(next_object))
            continue;

        Titem* pItem = reinterpret_cast<Titem*>(next_object);

        if (pItem->m_visible != 1)
            continue;

        if (draw_box) {
            Vector2 tmp_w2s_pos = Camera::W2S(Vector2(
                static_cast<float>(32 * pItem->m_x + 16), 
                static_cast<float>(32 * pItem->m_y + 16)
            ));
            ImVec2 w2s_pos = ImVec2(tmp_w2s_pos.x, tmp_w2s_pos.y);

            float offset_center = (box_size.x / 2) - (box_thickness / 2);

            ImVec2 box_pos = ImVec2(
                w2s_pos.x - offset_center,
                w2s_pos.y - offset_center
            );

            draw_list->AddRect(
                box_pos,
                ImVec2(box_pos.x + box_size.x, box_pos.y + box_size.y),
                box_color,
                0.0f,
                0,
                box_thickness
            );
        }
    }
}

void Overlay::DrawESPProjectiles() {
    auto pProjectilesList = ProjectileManager::GetGroundProjectilesList();
    auto type_enum = pProjectilesList->decl->m_TList_ObjectEnumerator(pProjectilesList);

    ImGuiIO& io = ImGui::GetIO();
    auto displaysz_x = io.DisplaySize.x;
    auto displaysz_y = io.DisplaySize.y;

    auto draw_list = ImGui::GetBackgroundDrawList();

    auto draw_box = true;
    auto box_color = ImGui::GetColorU32(IM_COL32(128, 0, 0, 230));
    auto move_color = ImGui::GetColorU32(IM_COL32(128, 0, 128, 230));
    auto text_color = ImGui::GetColorU32(IM_COL32(66, 245, 236, 255));
    auto box_thickness = 4.0f;
    ImVec2 box_size = ImVec2(64.0f + box_thickness, 64.0f + box_thickness);

    while (type_enum->decl->m_TListEnum_HasNext(type_enum)) {
        Object* next_object = type_enum->decl->m_TListEnum_NextObject(type_enum);
        if (!Validator::ObjIsValid(next_object))
            continue;

        Tpro* pProjectile = reinterpret_cast<Tpro*>(next_object);

        //char aaa[256];
        //sprintf(
        //    aaa, "%d moveto(%0.f, %0.f), xy(%0.f, %0.f)", 
        //    pProjectile->m_domove, 
        //    pProjectile->m_movetox, pProjectile->m_movetoy,
        //    pProjectile->m_x, pProjectile->m_y
        //);
        //draw_list->AddText(csp_small, g_OverlayCFG.fontsize.menu, ImVec2(20.0f, 120.0f), text_color, aaa, 0, 0.0f, 0);

        if (draw_box) {
            Vector2 tmp_w2s_pos = Camera::W2S(Vector2(
                pProjectile->m_x,
                pProjectile->m_y
            ));
            ImVec2 w2s_pos = ImVec2(tmp_w2s_pos.x, tmp_w2s_pos.y);

            float offset_center = (box_size.x / 2) - (box_thickness / 2);

            ImVec2 box_pos = ImVec2(
                w2s_pos.x - offset_center,
                w2s_pos.y - offset_center
            );

            draw_list->AddRect(
                box_pos,
                ImVec2(box_pos.x + box_size.x, box_pos.y + box_size.y),
                box_color,
                0.0f,
                0,
                box_thickness
            );

            auto m_typ = pProjectile->m_typ;

            // Draw timer if Smoke or Flare or Gas or Molotov
            if (m_typ == 53 || m_typ == 54 || m_typ == 72 || m_typ == 73) {
                char time_text[16];
                sprintf(time_text, "%0.f", pProjectile->m_time);
                draw_list->AddText(csp_small, g_OverlayCFG.fontsize.menu, ImVec2(box_pos.x + 5.0f, box_pos.y + 5.0f), text_color, time_text, 0, 0.0f, 0);
            }
        }
    }


    pProjectilesList = ProjectileManager::GetFlyingProjectilesList();
    type_enum = pProjectilesList->decl->m_TList_ObjectEnumerator(pProjectilesList);

    while (type_enum->decl->m_TListEnum_HasNext(type_enum)) {
        Object* next_object = type_enum->decl->m_TListEnum_NextObject(type_enum);
        if (!Validator::ObjIsValid(next_object))
            continue;

        Tpro* pProjectile = reinterpret_cast<Tpro*>(next_object);

        if (draw_box) {
            Vector2 tmp_w2s_pos = Camera::W2S(Vector2(
                pProjectile->m_x,
                pProjectile->m_y
            ));
            ImVec2 w2s_pos = ImVec2(tmp_w2s_pos.x, tmp_w2s_pos.y);

            float offset_center = (box_size.x / 2) - (box_thickness / 2);

            ImVec2 box_pos = ImVec2(
                w2s_pos.x - offset_center,
                w2s_pos.y - offset_center
            );

            draw_list->AddRect(
                box_pos,
                ImVec2(box_pos.x + box_size.x, box_pos.y + box_size.y),
                box_color,
                0.0f,
                0,
                box_thickness
            );
        }
    }
}

void Overlay::TextCenter(std::string text) {
    auto avail = ImGui::GetContentRegionAvail();
    auto text_sz = ImGui::CalcTextSize(text.c_str());

    ImVec2 txt_center = ImVec2(text_sz.x / 2, text_sz.y / 2);
    ImVec2 window_center = ImVec2(avail.x / 2, avail.y / 2);

    //ImGui::SetCursorPos(ImVec2(
    //    window_center.x - txt_center.x,
    //    window_center.y - txt_center.y
    //));
    ImGui::SetCursorPosX(window_center.x - txt_center.x);

    ImGui::Text(text.c_str());
}

void Overlay::DrawOverlay() {
    auto pPlayersList = PlayerManager::GetPlayersList();
    auto type_enum = pPlayersList->decl->m_TList_ObjectEnumerator(pPlayersList);

    // No players
    if (!type_enum->decl->m_TListEnum_HasNext(type_enum)) return;

    //
    int countCT = 0;
    int countTT = 0;

    // Window titles
    char window_title_container[30];
    char window_title_hp[30];
    char window_title_armor[30];
    char window_title_text[30];
    char window_title_weapon[30];

    char sHP[5];
    char sAmmo[16];
    char sMoney[16];
    char sKDA[24];

    // Colors
    auto ContainerBGColor = ImGui::GetColorU32(IM_COL32(37, 48, 52, 100));
    auto TTBarColor = ImGui::GetColorU32(IM_COL32(255, 50, 50, 230));
    auto CTBarColor = ImGui::GetColorU32(IM_COL32(0, 125, 255, 230));

    auto ArmorBarColor = ImGui::GetColorU32(IM_COL32(0, 255, 255, 230));
    auto HPBarColor = TTBarColor;

    // Transparent window flags
    ImGuiWindowFlags window_flags = 0;
    window_flags |= ImGuiWindowFlags_NoMove;
    window_flags |= ImGuiWindowFlags_NoDecoration;
    window_flags |= ImGuiWindowFlags_NoBackground;
    window_flags |= ImGuiWindowFlags_NoSavedSettings;
    window_flags |= ImGuiWindowFlags_NoFocusOnAppearing;
    window_flags |= ImGuiWindowFlags_NoNav;

    //
    ImGuiIO& io = ImGui::GetIO();
    auto displaysz_x = io.DisplaySize.x;
    auto displaysz_y = io.DisplaySize.y;

    ImGuiStyle& style = ImGui::GetStyle();
    auto style_pad_x = style.WindowPadding.x;
    auto style_pad_y = style.WindowPadding.y;

    auto style_pad_x_half = style_pad_x / 2;
    auto style_pad_y_half = style_pad_y / 2;

    // Load CFG
    auto misc_cfg = g_OverlayCFG.misc;
    int max_players = misc_cfg.max_players;

    auto bar_cfg = g_OverlayCFG.playerbar;
    auto bar_x_margin = bar_cfg.x_margin;
    auto bar_w = bar_cfg.width;
    auto bar_h = bar_cfg.height;

    auto y_margin = displaysz_y - bar_cfg.y_margin;
    auto spacing = bar_cfg.spacing + bar_h;

    auto extra_text_width = bar_cfg.extra_text_width;
    auto hp_text_sz = bar_cfg.hp_text_sz;
    auto money_text_size = bar_cfg.money_text_size;
    auto hp_height_perc = bar_cfg.hp_height_perc;
    auto arm_height_perc = bar_cfg.arm_height_perc;

    auto score_cfg = g_OverlayCFG.score;
    auto score_h = score_cfg.height;
    auto score_x_margin = score_cfg.x_margin;
    auto score_y_margin = score_cfg.y_margin;
    auto score_container_width = score_cfg.container_width;
    bool score_auto_update = score_cfg.auto_update;
    std::string team1_name = score_cfg.team1_name;
    std::string team2_name = score_cfg.team2_name;

    ImGui::PushFont(csp_small);

    float kda_text_width = 0.0f;
    float ammo_text_width = 0.0f;

    if (hp_text_sz.x == 0.0f) {
        hp_text_sz = ImGui::CalcTextSize("100");
        hp_text_sz.x += extra_text_width;
    }

    if (money_text_size.x == 0.0f) {
        money_text_size = ImGui::CalcTextSize("$16000");
        money_text_size.x += extra_text_width;
    }

    ImVec2 score_win_size = ImVec2(displaysz_x/2, score_h);
    ImVec2 score_tt_win_pos = ImVec2(score_x_margin, score_y_margin);
    ImVec2 score_ct_win_pos = ImVec2(score_x_margin + score_win_size.x, score_y_margin);
    

    ImVec2 bar_win_size = ImVec2(bar_w, bar_h);
    ImVec2 bar_win_max = ImVec2(bar_w, bar_h);
    ImVec2 bar_win_pos = ImVec2(0.0f, 0.0f);

    ImVec2 hp_pos = ImVec2(0.0f, 0.0f);
    ImVec2 hp_bar_size = ImVec2(0.0f, 0.0f);
    float hp_bar_height = floor(bar_cfg.height * hp_height_perc);
    float hpbar_offset = 0.0f;

    ImVec2 arm_pos = ImVec2(0.0f, 0.0f);
    ImVec2 armor_bar_size = ImVec2(0.0f, 0.0f);
    float armor_bar_height = floor(hp_bar_height * arm_height_perc);
    float armbar_offset = 0.0f;

    ImVec2 weapon_win_pos = ImVec2(0.0f, 0.0f);
    ImVec2 weapon_win_size = ImVec2(0.0f, 0.0f);

    ImVec2 row1_size = ImVec2(bar_w - style_pad_x, hp_bar_height - style_pad_y);
    ImVec2 row2_size = ImVec2(bar_w - style_pad_x, bar_h - hp_bar_height - style_pad_y);
    ImVec2 ico_size = ImVec2(row2_size.y - 2.0f, row2_size.y - 2.0f);

    ImVec2 cur_pos = ImVec2(0.0f, 0.0f);
    ImDrawList* draw_list = nullptr;

    // Score
    int scoreTT = bonus_score_tt;
    int scoreCT = bonus_score_ct;

    if (score_auto_update) {
        scoreTT += ScoreManager::GetScoreTT();
        scoreCT += ScoreManager::GetScoreCT();
    }


    // Draw Score
    ImGui::PushFont(csp_big);
    ImGui::SetNextWindowPos(score_tt_win_pos, ImGuiCond_Always);
    ImGui::SetNextWindowSize(score_win_size, ImGuiCond_Always);
    ImGui::Begin("ScoreTT", &show_overlay, window_flags);

    cur_pos = ImGui::GetCursorPos();
    TextCenter(team1_name);

    ImGui::SetCursorPos(ImVec2(
        cur_pos.x + score_win_size.x - score_container_width - style_pad_x,
        cur_pos.y
    ));
    ImGui::BeginChild("score_container", ImVec2(score_container_width, score_h));

    TextCenter(std::to_string(scoreTT));
    ImGui::EndChild();

    ImGui::End();

    ImGui::SetNextWindowPos(score_ct_win_pos, ImGuiCond_Always);
    ImGui::SetNextWindowSize(score_win_size, ImGuiCond_Always);
    ImGui::Begin("ScoreCT", &show_overlay, window_flags);

    cur_pos = ImGui::GetCursorPos();
    TextCenter(team2_name);

    ImGui::SetCursorPos(ImVec2(
        cur_pos.x - style_pad_x,
        cur_pos.y
    ));

    ImGui::BeginChild("score_container", ImVec2(score_container_width, score_h));
    TextCenter(std::to_string(scoreCT));
    ImGui::EndChild();

    ImGui::End();

    ImGui::PopFont();

    // Draw Player Bars
    while (type_enum->decl->m_TListEnum_HasNext(type_enum)) {
        Object* next_object = type_enum->decl->m_TListEnum_NextObject(type_enum);
        if (!Validator::ObjIsValid(next_object))
            continue;

        Tpl* pPlayer = reinterpret_cast<Tpl*>(next_object);

        auto hp = PlayerManager::GetHP(pPlayer);

        if (hp == 0)
            continue;

        auto playerid = pPlayer->m_id;
        std::string player_name = PlayerManager::GetName(pPlayer);

        // Unique Window names
        sprintf(window_title_container, "PBarCont%d", playerid);
        sprintf(window_title_hp, "PBarHP%d", playerid);
        sprintf(window_title_armor, "PBarArmor%d", playerid);
        sprintf(window_title_text, "PBarText%d", playerid);
        sprintf(window_title_weapon, "PWeapTex%d", playerid);

        // Convert HP
        float fhp = static_cast<float>(hp);
        sprintf(sHP, "%d", hp);

        // Convert Armor
        auto armor = PlayerManager::GetArmor(pPlayer);
        float farmor = static_cast<float>(armor);

        // Convert Ammo
        auto ammo = PlayerManager::GetAmmo(pPlayer);
        sprintf(sAmmo, "%s", ammo.c_str());

        // Convert Money
        auto money = PlayerManager::GetMoney(pPlayer);
        sprintf(sMoney, "$%d", money);

        // Convert KDA
        auto kda = PlayerManager::GetKDA(pPlayer);
        sprintf(sKDA, "%s", kda.c_str());

        auto m_team = pPlayer->m_team;
        if (m_team == TEAM::TEAM_TT) {
            bar_win_pos.x = bar_x_margin;
            bar_win_pos.y = y_margin - (spacing * countTT);

            weapon_win_pos = ImVec2(bar_win_pos.x + bar_w, bar_win_pos.y - style_pad_y + 1.0f);
            weapon_win_size = ImVec2(bar_w, bar_h + style_pad_y);

            HPBarColor = TTBarColor;
            countTT += 1;
        }
        else if (m_team == TEAM::TEAM_CT) {
            bar_win_pos.x = displaysz_x - bar_x_margin - bar_cfg.width;
            bar_win_pos.y = y_margin - (spacing * countCT);

            weapon_win_pos = ImVec2(bar_win_pos.x - bar_w, bar_win_pos.y - style_pad_y + 1.0f);
            weapon_win_size = ImVec2(bar_w, bar_h + style_pad_y);

            HPBarColor = CTBarColor;
            countCT += 1;
        }
        hp_pos = bar_win_pos;
        arm_pos = bar_win_pos;
        bar_win_max = ImVec2(bar_win_pos.x + bar_w, bar_win_pos.y + bar_h);

        // Container
        ImGui::SetNextWindowPos(bar_win_pos, ImGuiCond_Always);
        ImGui::SetNextWindowSize(bar_win_size, ImGuiCond_Always);
        ImGui::Begin(window_title_container, &show_overlay, window_flags);
        draw_list = ImGui::GetWindowDrawList();
        draw_list->AddRectFilled(
            bar_win_pos,
            bar_win_max,
            ContainerBGColor
        );

        ImGui::End();

        // HP 
        hp_bar_size = ImVec2(
            bar_win_pos.x + fhp * (bar_w / 100),
            bar_win_pos.y + hp_bar_height
        );

        ImGui::SetNextWindowPos(bar_win_pos, ImGuiCond_Always);
        ImGui::SetNextWindowSize(bar_win_size, ImGuiCond_Always);
        ImGui::Begin(window_title_hp, &show_overlay, window_flags);

        draw_list = ImGui::GetWindowDrawList();
        if (m_team == TEAM::TEAM_CT) {
            hpbar_offset = bar_win_pos.x + (bar_w - hp_bar_size.x);
            hp_pos.x += hpbar_offset;
            hp_bar_size.x += hpbar_offset;
        };

        draw_list->AddRectFilled(
            hp_pos,
            hp_bar_size,
            HPBarColor
        );

        ImGui::End();

        // Armor
        armor_bar_size = ImVec2(
            bar_win_pos.x + farmor * (bar_w / 100),
            bar_win_pos.y + armor_bar_height
        );
        ImGui::SetNextWindowPos(bar_win_pos, ImGuiCond_Always);
        ImGui::SetNextWindowSize(bar_win_size, ImGuiCond_Always);
        ImGui::Begin(window_title_armor, &show_overlay, window_flags);
        draw_list = ImGui::GetWindowDrawList();
        if (m_team == TEAM::TEAM_CT) {
            armbar_offset = bar_win_pos.x + (bar_w - armor_bar_size.x);
            arm_pos.x += armbar_offset;
            armor_bar_size.x += armbar_offset;
        };
        draw_list->AddRectFilled(
            arm_pos,
            armor_bar_size,
            ArmorBarColor
        );
        ImGui::End();

        // Text
        ImGui::SetNextWindowPos(bar_win_pos, ImGuiCond_Always);
        ImGui::SetNextWindowSize(bar_win_size, ImGuiCond_Always);
        ImGui::Begin(window_title_text, &show_overlay, window_flags);

        ImGui::BeginGroup();
        ImGui::BeginChild("row1", row1_size);

        cur_pos = ImGui::GetCursorPos();
        if (m_team == TEAM::TEAM_TT) {
            ImGui::Text(sHP);
            ImGui::SetCursorPos(ImVec2(cur_pos.x + hp_text_sz.x, cur_pos.y));
            ImGui::Text(player_name.c_str());
        }
        else if (m_team == TEAM::TEAM_CT) {
            //auto ct_hp_sz = ImGui::CalcTextSize(sHP);
            //ct_hp_sz.x += extra_text_width;
            ImGui::SetCursorPos(ImVec2(cur_pos.x + bar_w - hp_text_sz.x - style_pad_x, cur_pos.y));
            ImGui::Text(sHP);

            auto name_size = ImGui::CalcTextSize(player_name.c_str());
            ImGui::SetCursorPos(ImVec2(cur_pos.x + bar_w - hp_text_sz.x - name_size.x - style_pad_x - 10.0f, cur_pos.y));
            ImGui::Text(player_name.c_str());
        }
        ImGui::EndChild();
        ImGui::EndGroup();

        ImGui::BeginGroup();
        ImGui::BeginChild("row2", row2_size);

        cur_pos = ImGui::GetCursorPos();
        if (m_team == TEAM::TEAM_TT) {
            // Has Bomb
            if (pPlayer->m_bomb > 0) {
                ImGui::Image(texIcoC4, ico_size);
            }

            // Money
            ImGui::SetCursorPos(ImVec2(cur_pos.x + ico_size.x + style_pad_x, cur_pos.y));
            ImGui::Text(sMoney);

            // KDA
            ImGui::SetCursorPos(ImVec2(cur_pos.x + ico_size.x + money_text_size.x + style_pad_x, cur_pos.y));
            ImGui::Text(sKDA);
        }
        else if (m_team == TEAM::TEAM_CT) {
            if (pPlayer->m_defuse > 0) {
                ImGui::SetCursorPos(ImVec2(cur_pos.x + row2_size.x - ico_size.x - style_pad_x, cur_pos.y));
                ImGui::Image(texIcoDef, ico_size);
            }

            // Money
            ImGui::SetCursorPos(ImVec2(cur_pos.x + row2_size.x - ico_size.x - money_text_size.x - style_pad_x_half, cur_pos.y));
            ImGui::Text(sMoney);

            // KDA
            kda_text_width = ImGui::CalcTextSize(sKDA).x + extra_text_width;
            ImGui::SetCursorPos(ImVec2(cur_pos.x + row2_size.x - ico_size.x - money_text_size.x - kda_text_width - style_pad_x_half, cur_pos.y));
            ImGui::Text(sKDA);
        }

        ImGui::EndChild();
        ImGui::EndGroup();

        ImGui::End();

        // Weapon
        ImGui::SetNextWindowPos(weapon_win_pos, ImGuiCond_Always);
        ImGui::SetNextWindowSize(weapon_win_size, ImGuiCond_Always);
        ImGui::Begin(window_title_weapon, &show_overlay, window_flags);

        DrawWeapon(pPlayer, m_team);

        cur_pos = ImGui::GetCursorPos();

       if (m_team == TEAM::TEAM_CT) {
            ammo_text_width = ImGui::CalcTextSize(sAmmo).x + extra_text_width;
            ImGui::SetCursorPosX(cur_pos.x + weapon_win_size.x - ammo_text_width - style_pad_x_half + 2.0f);
        }
        ImGui::Text(sAmmo);
        
        ImGui::End();
    }

    ImGui::PopFont();
}

Overlay::WeaponInfo Overlay::GetWeaponInfo(int weapon_id) {
    // None
    if (weapons_info.count(weapon_id) != 1) return  weapons_info.at(0);

    return weapons_info.at(weapon_id);
}

void Overlay::DrawWeapon(Tpl* pPlayer, int team) {
    if (team == -1) return;

    auto weapon_id = pPlayer->m_weapon->m_typ;

    // Unknown weapon
    if (weapons_info.count(weapon_id) != 1) return;

    auto weapon_info = weapons_info.at(weapon_id);

    auto weapon_texture_scale = g_OverlayCFG.misc.weapon_texture_scale;

    auto weapon_texture_size = ImVec2(
        weapon_info.width * weapon_texture_scale,
        weapon_info.height * weapon_texture_scale
    );

    LPDIRECT3DTEXTURE9  ptexture    = weapon_info.ptex;

    if (!ptexture)  return;

    if (team == TEAM::TEAM_TT) {
        ImGui::Image(ptexture, weapon_texture_size);
    }
    else {
        auto avail_space = ImGui::GetContentRegionAvail();
        auto cur = ImGui::GetCursorPos();
        ImGui::SetCursorPos(ImVec2(cur.x + avail_space.x - weapon_texture_size.x, cur.y));
        ImGui::Image(ptexture, weapon_texture_size, ImVec2(1, 0), ImVec2(0, 1));
    }

}

void Overlay::DrawDebug() {
    auto draw = ImGui::GetBackgroundDrawList();

    std::string observed_player_name = PlayerManager::GetName(
        PlayerManager::GetPlayerByID(PlayerManager::GetObservedPlayerID())
    );

    std::string first_name = PlayerManager::GetName(
        PlayerManager::GetPlayerByID(1)
    );

    std::string invalid_name = PlayerManager::GetName(
        PlayerManager::GetPlayerByID(127)
    );

    // Debug text
    ImVec2 debug_text_pos = ImVec2(10.0f, 60.0f);
    auto debug_text_color = ImGui::GetColorU32(IM_COL32(66, 245, 236, 255));
    float next_row = g_OverlayCFG.fontsize.menu + 4.0f;

    char debugtext1[255];
    sprintf(debugtext1, "Camera %d, %d", Camera::GetX(), Camera::GetY());
    draw->AddText(csp_small, g_OverlayCFG.fontsize.menu, debug_text_pos, debug_text_color, debugtext1, 0, 0.0f, 0);
    debug_text_pos.y += next_row;

    char debugtext2[255];
    sprintf(debugtext2, "Cursor %0.f, %0.f", Screen::GetCursorX(), Screen::GetCursorY());
    draw->AddText(csp_small, g_OverlayCFG.fontsize.menu, debug_text_pos, debug_text_color, debugtext2, 0, 0.0f, 0);
    debug_text_pos.y += next_row;

    Tpl* p2 = PlayerManager::GetPlayerByID(2);
    Tpl* p3 = PlayerManager::GetPlayerByID(3);

    if (!Validator::ObjIsValid(p2) || !Validator::ObjIsValid(p3)) {
        return;
    }

    Vector2 tmp = Camera::W2S(Vector2(p2->m_x, p2->m_y));
    ImVec2 p2_poss = ImVec2(tmp.x, tmp.y);

    tmp = Camera::W2S(Vector2(p3->m_x, p3->m_y));
    ImVec2 p3_poss = ImVec2(tmp.x, tmp.y);

    char debugtext3[255];
    sprintf(debugtext3, "P2 Pos: %.0f, %.0f", p2->m_x, p2->m_y);
    draw->AddText(csp_small, g_OverlayCFG.fontsize.menu, debug_text_pos, debug_text_color, debugtext3, 0, 0.0f, 0);
    debug_text_pos.y += next_row;

    char debugtext4[255];
    sprintf(debugtext4, "P3: %.0f, %.0f", p3_poss.x, p3_poss.y);
    draw->AddText(csp_small, g_OverlayCFG.fontsize.menu, debug_text_pos, debug_text_color, debugtext4, 0, 0.0f, 0);
    debug_text_pos.y += next_row;
}

Overlay g_Overlay;