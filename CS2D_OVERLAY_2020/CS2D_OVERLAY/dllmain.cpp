// dllmain.cpp : Defines the entry point for the DLL application.
#pragma once
#include "headers/dllmain.h"

DWORD WINAPI mainFunc(LPVOID lpModule)
{
    Sleep(200);
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