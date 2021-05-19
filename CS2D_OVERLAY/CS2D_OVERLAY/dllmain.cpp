// dllmain.cpp : Defines the entry point for the DLL application.
#pragma once

#include "headers/dllmain.h"
#include "headers/logger.h"
#include "headers/d3d9hook.h"
#include "headers/sdk.h"
#include "headers/config.h"
#include "headers/features.h"


void EjectDLL(HMODULE hModule) {
    logger.Write(LOG_INFO, "Ejecting...");
    Sleep(100);
    d3d9hook::DeleteDirectXHooks();

    bNoFlash = false;
    Features::changeNoFlash();

    bNoFOW = false;
    Features::changeNoFOW();

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
    iTransparency = config::Load("Overlay", "Transparency", 1);
    iBorderedText = config::Load("Overlay", "BorderedText", 1);
    team1 = config::iniLoadString("Teams", "Team1", "TT");
    team2 = config::iniLoadString("Teams", "Team2", "CT");
}

DWORD WINAPI mainFunc(LPVOID lpModule)
{
    Sleep(200);

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
    logger.Write(LOG_INFO, "Injected");
    logger.Write(LOG_INFO,
        "Proc: <%s> BaseAddr: 0x%08lX, EndAddr: 0x%08lX (Size: 0x%08lX)",
        module_name_c,
        mod_base_addr,
        mod_end,
        mod_size
    );

    loadConfig();
    CreateDXHook();

    //Features
    Features::changeNoFlash();
    Features::changeNoFOW();

    // Process input
    logger.Write(LOG_INFO, "Start main loop");
    for (;;) {
        Sleep(50);
        if (GetAsyncKeyState(VK_END)) {
            Sleep(1000);
            break;
        }

        if (GetAsyncKeyState(VK_MENU) & 1) {
            ShowOverlay = !ShowOverlay;

            ShowOverlay ? logger.Write(LOG_INFO, "ShowOverlay = true") : logger.Write(LOG_INFO, "ShowOverlay = false");
        }

        if (GetAsyncKeyState(VK_F6) & 1) {
            scoreTT += 1;
        }

        if (GetAsyncKeyState(VK_F7) & 1) {
            scoreCT += 1;
        }

        if (GetAsyncKeyState(VK_F8) & 1) {
            Team1Score = 0;
            Team2Score = 0;
            scoreTT = 0;
            scoreCT = 0;
            bScoreSaved = false;
        }

        if (GetAsyncKeyState(VK_F9) & 1) {
            ShowMenu = !ShowMenu;

            CPlayer* localPlayer = CPlayer::GetLocalPlayer();

#ifndef _DEBUG
            if (CPlayer::is_valid((DWORD)localPlayer)) {
                logger.Write(
                    LOG_INFO,
                    "localPlayer 0x%08lX",
                    localPlayer
                );

                logger.Write(LOG_INFO, "usgn: %d, ", localPlayer->USGN_ID);
                logger.Write(LOG_INFO, "hp: %d", localPlayer->pHP->getValue());

                PlayerEntityList* pEntList = PlayerEntityList::GetFirst();

                logger.Write(
                    LOG_INFO,
                    "pEntList 0x%08lX",
                    pEntList
                );
            }
            else {
                logger.Write(
                    LOG_INFO,
                    "Invalid - localPlayer 0x%08lX",
                    localPlayer
                );
            }
#endif



            ShowMenu ? logger.Write(LOG_INFO, "ShowMenu = true") : logger.Write(LOG_INFO, "ShowMenu = false");
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