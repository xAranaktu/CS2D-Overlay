#pragma once
#include <windows.h>

#include "../headers/d3d9hook.h"
#include "dllmain.h"

namespace d3d9hook {

    HRESULT Present_Hook(IDirect3DDevice9* pDevice, CONST RECT* pSrcRect, CONST RECT* pDestRect, HWND hDestWindow, CONST RGNDATA* pDirtyRegion) {
        //logger.Write(LOG_INFO, "[DX9] Present Called");
        if (pDevice == nullptr) return Present_orig(pDevice, pSrcRect, pDestRect, hDestWindow, pDirtyRegion);

        return Present_orig(pDevice, pSrcRect, pDestRect, hDestWindow, pDirtyRegion);
    }

    void GetPresent() {
        logger.Write(LOG_INFO, "DirectX9 - GetPresent");
        while (GetModuleHandle("d3d9.dll") == 0)
        {
            Sleep(100);
        }
        
        logger.Write(LOG_INFO, "d3d9.dll - ok");
        
        core::Context d3d9DLL;
        d3d9DLL.Update(GetModuleHandle("d3d9.dll"));
        IDirect3D9* d3d = NULL;
        IDirect3DDevice9* d3ddev = NULL;
        HWND tmpWnd = NULL;

        DWORD TableAddress = d3d9DLL.getAddr("DX9_TableAddress");
        if (TableAddress) {
            dVtable = (DWORD*)(TableAddress + 2);
            dVtable = (DWORD*)dVtable[0]; // == *d3ddev
        }
        else {
            tmpWnd = CreateWindowA("BUTTON", "Temp Window", WS_SYSMENU | WS_MINIMIZEBOX, CW_USEDEFAULT, CW_USEDEFAULT, 300, 300, NULL, NULL, GetModuleHandle(NULL), NULL);
            if (tmpWnd == NULL)
            {
                logger.Write(LOG_ERROR, "[DirectX] Failed to create temp window");
                return;
            }

            d3d = Direct3DCreate9(D3D_SDK_VERSION);
            if (d3d == NULL)
            {
                DestroyWindow(tmpWnd);
                logger.Write(LOG_ERROR, "[DirectX] Failed to create temp Direct3D interface");
                return;
            }

            D3DPRESENT_PARAMETERS d3dpp;
            ZeroMemory(&d3dpp, sizeof(d3dpp));
            d3dpp.Windowed = TRUE;
            d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
            d3dpp.hDeviceWindow = tmpWnd;
            d3dpp.BackBufferFormat = D3DFMT_UNKNOWN;

            HRESULT result = d3d->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, tmpWnd, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &d3ddev);

            if (result != D3D_OK)
            {
                d3d->Release();
                DestroyWindow(tmpWnd);
                logger.Write(LOG_ERROR, "[DirectX] Failed to create temp Direct3D device");
                return;
            }

            dVtable = (DWORD*)d3ddev;
            dVtable = (DWORD*)dVtable[0]; // == *d3ddev
        }

        Present_orig = (Present)dVtable[17];
    }
    void SetupDirectXHooks() {
        if (MH_Initialize() != MH_OK) {
            logger.Write(LOG_ERROR, "[MinHook] Failed to Initialize");
            return;
        }

        if (MH_CreateHook((DWORD_PTR*)dVtable[17], &Present_Hook, reinterpret_cast<void**>(&Present_orig)) != MH_OK) {
            logger.Write(LOG_ERROR, "[MinHook] Failed to Create Present_Hook");
            return;
        }
        if (MH_EnableHook((DWORD_PTR*)dVtable[17]) != MH_OK) {
            logger.Write(LOG_ERROR, "[MinHook] Failed to Enable Present_Hook");
            return;
        }
        logger.Write(LOG_INFO, "[MinHook] DX9 Funcs hooked.");

    }
    void DeleteDirectXHooks() {

    }
}
