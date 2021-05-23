#pragma once

#include <../imgui/imgui.h>
#include <dllmain.h>
#include <globals.h>
#include <logger.h>

class Overlay {
public:
    std::string imgui_ini = "imgui.ini";

    ImFont* csp_small = nullptr;
    ImFont* csp_big = nullptr;

    bool can_draw = false;
    bool show_menu = false;
    bool show_demo = false;

    bool show_overlay = false;

    Overlay();
    ~Overlay();

    void Init();
    void HandleDraw();

    void ShowMenu(bool* p_open);

    void TransparentText(const char* text, ImVec2 win_pos, ImVec2 win_size, int id = 0, ImFont* f = nullptr);

    void DrawOverlay();
};

extern Overlay g_Overlay;