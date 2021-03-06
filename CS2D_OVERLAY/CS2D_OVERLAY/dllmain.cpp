// dllmain.cpp : Defines the entry point for the DLL application.
#pragma once

#include "headers/dllmain.h"
#include "headers/misc.h"
#include "headers/overlay.h"
#include "headers/logger.h"
#include "headers/d3d9hook.h"
#include "headers/manager.h"
#include "headers/config.h"
#include "headers/SDKGen/Tpl.h"


void EjectDLL(HMODULE hModule) {
    logger.Write(LOG_INFO, "Ejecting...");

#ifdef _DEBUG
    LMAO::RestoreOrgIsDebuggerPresent();
#endif
    Sleep(100);
    d3d9hook::DeleteDirectXHooks();

    Sleep(1000);
    logger.Write(LOG_INFO, "Ejected...");

    FreeLibraryAndExitThread(hModule, EXIT_SUCCESS);
}

void SetupLogger() {
    const std::string logPath = g_ctx_dll.GetFolder() + "\\" + "Logs";
    if (!fs::is_directory(logPath) || !fs::exists(logPath)) {
        fs::create_directory(logPath);
    }

    SYSTEMTIME currTimeLog;
    GetLocalTime(&currTimeLog);
    std::ostringstream ssLogFile;
    ssLogFile << "log_" <<
        std::setw(2) << std::setfill('0') << currTimeLog.wDay << "-" <<
        std::setw(2) << std::setfill('0') << currTimeLog.wMonth << "-" <<
        std::setw(4) << std::setfill('0') << currTimeLog.wYear << ".txt";
    const std::string logFile = logPath + "\\" + ssLogFile.str();
    logger.SetFile(logFile);
}

void CreateDXHook() {
    logger.Write(LOG_INFO, "Hooking DirectX...");

    d3d9hook::GetPresent();
    d3d9hook::SetupDirectXHooks();
}


void loadConfig() {
    logger.Write(LOG_INFO, "loadConfig...");

}

DWORD WINAPI mainFunc(LPVOID lpModule)
{
    Sleep(200);

#ifdef _DEBUG
    LMAO::PatchIsDebuggerPresent();
#endif

    // Attached to
    g_ctx_proc.Update(GetModuleHandle(NULL));

    std::string const module_name = g_ctx_proc.m_ModuleContext.m_Name;
    const char* module_name_c = const_cast<LPSTR>(module_name.c_str());
    unsigned long long mod_base_addr = g_ctx_proc.m_ModuleContext.m_Base;
    unsigned long long mod_size = g_ctx_proc.m_ModuleContext.m_Size;
    unsigned long long mod_end = mod_base_addr + mod_size;

    // Our DLL
    g_ctx_dll.Update(reinterpret_cast<HMODULE>(lpModule));

    // Setup all kind of logs
    SetupLogger();
    logger.Write(LOG_INFO, "========== [ %s ] ==========", APP_NAME);
    logger.Write(LOG_INFO,
        "Proc: <%s> BaseAddr: 0x%08lX, EndAddr: 0x%08lX (Size: 0x%08lX)",
        module_name_c,
        mod_base_addr,
        mod_end,
        mod_size
    );

    g_OverlayCFG.Init();
    g_Overlay.Init();
    g_FeatureManager.Init();

    CreateDXHook();

    // Process input
    logger.Write(LOG_INFO, "Start main loop");
    for (;;) {
        Sleep(50);
        if (GetAsyncKeyState(VK_END)) {
            g_Overlay.can_draw = false;
            Sleep(250);
            break;
        }

        if (GetAsyncKeyState(VK_MENU) & 1) {
            g_Overlay.show_overlay = !g_Overlay.show_overlay;
        }

        if (GetAsyncKeyState(VK_F6) & 1) {
            g_Overlay.bonus_score_tt += 1;
        }

        if (GetAsyncKeyState(VK_F7) & 1) {
            g_Overlay.bonus_score_ct += 1;
        }

        if (GetAsyncKeyState(VK_F8) & 1) {
            g_Overlay.bonus_score_tt = 0;
            g_Overlay.bonus_score_ct = 0;
        }

        if (GetAsyncKeyState(VK_F9) & 1) {
            g_Overlay.show_menu = !g_Overlay.show_menu;
        }

        if (GetAsyncKeyState(VK_F10) & 1) {
            auto tmp_teamname = g_OverlayCFG.score.team1_name;
            g_OverlayCFG.score.team1_name = g_OverlayCFG.score.team2_name;
            g_OverlayCFG.score.team2_name = tmp_teamname;
        }

        if (GetAsyncKeyState(VK_F11) & 1) {
            auto tmp_score = g_Overlay.bonus_score_tt;
            g_Overlay.bonus_score_tt = g_Overlay.bonus_score_ct;
            g_Overlay.bonus_score_ct = tmp_score;
        }

    }

    EjectDLL(reinterpret_cast<HMODULE>(lpModule));
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        //DisableThreadLibraryCalls(hModule);
        CreateThread(NULL, 0, mainFunc, hModule, NULL, NULL);
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}