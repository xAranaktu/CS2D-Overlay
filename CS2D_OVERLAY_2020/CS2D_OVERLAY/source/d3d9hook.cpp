#pragma once
#include <windows.h>

#include "../headers/d3d9hook.h"
#include "dllmain.h"

namespace d3d9hook {

    HRESULT Present_Hook(IDirect3DDevice9* pDevice, CONST RECT* pSrcRect, CONST RECT* pDestRect, HWND hDestWindow, CONST RGNDATA* pDirtyRegion) {
        //logger.Write(LOG_INFO, "[DX9] Present Called");
        if (pDevice == nullptr) return Present_orig(pDevice, pSrcRect, pDestRect, hDestWindow, pDirtyRegion);

        if (!hook_initialized) {
            logger.Write(LOG_INFO, "[DX9] Init present hook");

            setScreenCenter(pDevice);

            MenuPosX = Viewport.Width - 200;
            MenuPosY = 40;

            logger.Write(LOG_INFO, "[DX9] Init present hook done");
            hook_initialized = true;
        }

        // Create Fonts
        if (!guiFont) {
            if (D3DXCreateFont(pDevice, 16, 0, FW_BOLD, 0, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, TEXT("Arial"), &guiFont) != D3D_OK) {
                logger.Write(LOG_ERROR, "[DirectX] Failed to create guiFont");
                return Present_orig(pDevice, pSrcRect, pDestRect, hDestWindow, pDirtyRegion);
            }
        }

        if (!symbolFont) {
            if (D3DXCreateFont(pDevice, 32, 0, FW_BOLD, 0, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, TEXT("csp_text"), &symbolFont) != D3D_OK) {
                logger.Write(LOG_ERROR, "[DirectX] Failed to create symbolFont");
                return Present_orig(pDevice, pSrcRect, pDestRect, hDestWindow, pDirtyRegion);
            }
        }

        if (!scoreFont) {
            if (D3DXCreateFont(pDevice, 26, 0, FW_BOLD, 0, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, TEXT("csp_text"), &scoreFont) != D3D_OK) {
                logger.Write(LOG_ERROR, "[DirectX] Failed to create scoreFont");
                return Present_orig(pDevice, pSrcRect, pDestRect, hDestWindow, pDirtyRegion);
            }
        }

        if (ShowOverlay) BuildOverlay(pDevice);
        if (ShowMenu) BuildMenu(pDevice);
        

        return Present_orig(pDevice, pSrcRect, pDestRect, hDestWindow, pDirtyRegion);
    }

    HRESULT APIENTRY Reset_hook(IDirect3DDevice9* pDevice, D3DPRESENT_PARAMETERS* pPresentationParameters)
    {
        DeleteSurfaces();
        if (guiFont) guiFont->OnLostDevice();
        if (symbolFont) symbolFont->OnLostDevice();
        if (scoreFont) scoreFont->OnLostDevice();

        HRESULT ResetReturn = Reset_orig(pDevice, pPresentationParameters);

        if (SUCCEEDED(ResetReturn))
        {
            if (guiFont) guiFont->OnResetDevice();
            if (symbolFont) symbolFont->OnResetDevice();
            if (scoreFont) scoreFont->OnResetDevice();
        }

        return ResetReturn;
    }

    void BuildOverlay(LPDIRECT3DDEVICE9 pDevice) {

    };

    void BuildMenu(LPDIRECT3DDEVICE9 pDevice) {
        DrawRectangle(pDevice, (FLOAT)MenuPosX, (FLOAT)MenuPosY, 200, 240, Black);
        TextWithBorder(guiFont, MenuPosX + 100, MenuPosY + 5, LightYellow, "[Overlay Menu]", alignCenter);
    };

    void setScreenCenter(LPDIRECT3DDEVICE9 pDevice) {
        pDevice->GetViewport(&Viewport);
        screenCenterX = (float)(Viewport.Width / 2);
        screenCenterY = (float)(Viewport.Height / 2);
    }

    void DeleteSurfaces()
    {
        //if (sprWep1) {
        //    SAFE_RELEASE(sprWep1);
        //    SAFE_RELEASE(sprWep2);
        //    SAFE_RELEASE(sprIcon);
        //    SAFE_RELEASE(sprLogo);
        //}
        //bSpritesCreated = false;
    }

    void FillRGB(LPDIRECT3DDEVICE9 pDevice, int x, int y, int w, int h, D3DCOLOR color)
    {
        D3DRECT rec = { x, y, x + w, y + h };
        pDevice->Clear(1, &rec, D3DCLEAR_TARGET, color, 0, 0);
    }

    HRESULT DrawRectangle(LPDIRECT3DDEVICE9 Device, FLOAT x, FLOAT y, FLOAT w, FLOAT h, DWORD Color)
    {

        HRESULT hRet = D3D_OK;
        if (iTransparency == 0)
        {
            FillRGB(Device, (int)x, (int)y, (int)w, (int)h, Color);
            return hRet;
        }

        const DWORD D3D_FVF = (D3DFVF_XYZRHW | D3DFVF_DIFFUSE);

        struct Vertex
        {
            float x, y, z, ht;
            DWORD vcolor;
        }
        V[4] =
        {
            { x, (y + h), 0.0f, 0.0f, Color },
            { x, y, 0.0f, 0.0f, Color },
            { (x + w), (y + h), 0.0f, 0.0f, Color },
            { (x + w), y, 0.0f, 0.0f, Color }
        };


        hRet = D3D_OK;
        if (SUCCEEDED(hRet))
        {
            //Old fvf
            LPDIRECT3DSTATEBLOCK9 pStateBlock = NULL;
            Device->CreateStateBlock(D3DSBT_ALL, &pStateBlock);
            pStateBlock->Capture();
            DWORD fvf;
            Device->GetFVF(&fvf);

            Device->SetPixelShader(0); //fix black color
            Device->SetRenderState(D3DRS_ALPHABLENDENABLE, true);
            Device->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
            Device->SetFVF(D3D_FVF);
            Device->SetTexture(0, NULL);
            hRet = Device->DrawPrimitiveUP(D3DPT_TRIANGLESTRIP, 2, V, sizeof(Vertex));
            Device->SetFVF(fvf); // Restore Old FVF
            pStateBlock->Apply();   // apply old states
            pStateBlock->Release(); // delete
        }

        return hRet;
    }

    void WriteText(LPD3DXFONT pFont, int x, int y, DWORD color, char* text, DWORD format)
    {
        RECT rect;
        SetRect(&rect, x, y, x, y);
        pFont->DrawText(0, text, -1, &rect, format, color);
    }

    void TextWithBorder(LPD3DXFONT pFont, int x, int y, DWORD color, char* text, DWORD align)
    {
        if (pFont) {
            if (iBorderedText == 1) {
                WriteText(pFont, x, y - 1, TBlack, text, align);
                WriteText(pFont, x, y + 1, TBlack, text, align);
                WriteText(pFont, x - 1, y, TBlack, text, align);
                WriteText(pFont, x + 1, y, TBlack, text, align);
            }
            WriteText(pFont, x, y, color, text, align);
        }
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
        if (MH_Uninitialize() != MH_OK) { 
            logger.Write(LOG_ERROR, "[MinHook] MH_Uninitialize Failed");
            return; 
        }

        if (MH_DisableHook((DWORD_PTR*)dVtable[17]) != MH_OK) {
            logger.Write(LOG_ERROR, "[MinHook] Failed to Disable Present_Hook");
            return;
        }

        if (MH_RemoveHook((DWORD_PTR*)dVtable[17]) != MH_OK) {
            logger.Write(LOG_ERROR, "[MinHook] Failed to Remove Present_Hook");
            return;
        }
    }
}
