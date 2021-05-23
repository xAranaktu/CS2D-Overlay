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
    if (ImGui::CollapsingHeader("Overlay")) {
        ImGui::Checkbox("Show Overlay", &show_overlay);
    }
    if (ImGui::CollapsingHeader("Settings")) {
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

    if (id > 0) ImGui::PushID(id);
    
    ImGui::Begin(text, &show_overlay, flags);

    if (f) ImGui::PushFont(f);
    ImGui::Text(text);
    if (f) ImGui::PopFont();

    ImGui::End();

    if (id > 0) ImGui::PopID();
}

void Overlay::DrawOverlay() {
    TransparentText("Test", ImVec2(200.0f, 200.0f), ImVec2(250.0f, 45.0f));
    TransparentText("Test2", ImVec2(400.0f, 400.0f), ImVec2(250.0f, 45.0f), 0, csp_small);
    TransparentText("Test3", ImVec2(600.0f, 600.0f), ImVec2(250.0f, 45.0f), 0, csp_big);

}

Overlay g_Overlay;