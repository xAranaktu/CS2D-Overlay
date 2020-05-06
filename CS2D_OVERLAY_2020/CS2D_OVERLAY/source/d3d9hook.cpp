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

        // init vars
        int maxPlayers = 32;

        int countCT = 0;
        int countTT = 0;

        DWORD HPColor;
        DWORD BarColor = HPBarBorder;

        int bar_width = 230;
        int bar_x = 10;
        int bar_y = (int)screenCenterY + 250;
        int bar_height = 46;
        int bar_thickness = 3;

        int recalc_bar_x = bar_x;
        int recalc_bar_y = bar_y;

        int curHP_x = 0;
        int curHP_y = 0;

        PlayerEntityList* pPlayerEntity = PlayerEntityList::GetFirst();
        //PlayerEntityList* pNextPlayerEntity = pPlayerEntity->nextEntity;

        int curHP = 0;
        for (int i = 1; i <= maxPlayers; i++) {
            CPlayer* pPlayer = pPlayerEntity->ptrPlayer;

            if ((DWORD)pPlayer == (DWORD)pPlayerEntity) {
                break;
            }
            pPlayerEntity = pPlayerEntity->nextEntity;

            curHP = pPlayer->pHP->getValue();

            if (curHP <= 0) continue;

            if (pPlayer->teamID == 1) {
                // TT
                countTT += 1;
                DrawPlayerBar(pDevice, pPlayer, countTT);
            } else if (pPlayer->teamID == 2) {
                // CT
                countCT += 1;
                DrawPlayerBar(pDevice, pPlayer, countCT);
            }
        }



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

    void DrawHealthbar(LPDIRECT3DDEVICE9 pD3Ddev, int PosX, int PosY, int Value, int ValArm, int width, int height, int thickness, DWORD cBorder, DWORD cBar, bool isCT)
    {
        int bar_width = 230;
        if (Value > 0)
        {
            // border
            int width_arm, PosX_arm = PosX;

            DrawRectangle(pD3Ddev, (float)(PosX - thickness), (float)(PosY - thickness), (float)(width), (float)(height), cBorder);

            if (ValArm > 0)
            {
                width_arm = (int)((ValArm * ((float)width / 100)) - (thickness * 2));
                if (isCT) PosX_arm = PosX + ((bar_width - (thickness * 2)) - width_arm);// invert drawing	
            }

            width = (int)((Value * ((float)width / 100)) - (thickness * 2));

            if (isCT) PosX = PosX + ((bar_width - (thickness * 2)) - width);// invert drawing	


            DrawRectangle(pD3Ddev, (float)(PosX), (float)(PosY), (float)(width), (float)((height / 2) - thickness), cBar);
            if (ValArm > 0) DrawRectangle(pD3Ddev, (float)(PosX_arm), (float)(PosY), (float)(width_arm), 3.0, Cyan);

        }
    }

    void DrawPlayerBar(LPDIRECT3DDEVICE9 pD3Ddev, CPlayer* pPlayer, int idx) {
        int HP = pPlayer->pHP->getValue();

        if (HP <= 0) return;

        bool isCT = (pPlayer->teamID == 2);

        // Background
        int iY = Viewport.Height - playerBar.margin_bottom;
        iY = (iY - ((playerBar.height + (playerBar.thickness * 2) + 3) * idx));


        int iX = playerBar.margin_left_right;
        if (isCT) {
            iX = Viewport.Width - (playerBar.margin_left_right + playerBar.width);
        }
        
        DrawRectangle(pD3Ddev, (float)iX, (float)(iY), (float)playerBar.width, (float)playerBar.height, HPBarBorder);

        int row_1 = iY + playerBar.thickness;

        // Health
        int hpWidth = (int)(HP * ((float)playerBar.width / 100) - (playerBar.thickness * 2));
        int hpHeight = (playerBar.height / 2) - (playerBar.thickness * 2);

        std::string sHP = std::to_string(HP);
        if (isCT) {
            int hpx = iX + (playerBar.width - playerBar.thickness - hpWidth);
            int shpx = iX + (playerBar.width - playerBar.thickness - 3);
            DrawRectangle(pD3Ddev, (float)(hpx), (float)(row_1), (float)hpWidth, (float)hpHeight, CTBar);
            TextWithBorder(guiFont, shpx, row_1, White, (char*)sHP.c_str(), alignRight);
        }
        else {
            DrawRectangle(pD3Ddev, (float)(iX + playerBar.thickness), (float)(row_1), (float)hpWidth, (float)hpHeight, TTBar);
            TextWithBorder(guiFont, iX + playerBar.thickness + 3, row_1, White, (char*)sHP.c_str(), alignLeft);
        }

        // Armor
        int arm = pPlayer->pArmor->getValue();
        if (arm > 0) {
            int armWidth = (int)(arm * ((float)playerBar.width / 100) - (playerBar.thickness * 2));

            if (isCT) {
                int armx = iX + (playerBar.width - playerBar.thickness - armWidth);
                DrawRectangle(pD3Ddev, (float)(armx), (float)(row_1 + hpHeight), (float)armWidth, 3.0, Cyan);
            }
            else {
                DrawRectangle(pD3Ddev, (float)(iX + playerBar.thickness), (float)(row_1 + hpHeight), (float)armWidth, 3.0, Cyan);
            } 
        }

        //Nickname
        size_t nameSize = pPlayer->ptrCname->NicknameLen + 1;
        size_t convertedChars = 0;
        char* pName = new char[nameSize];
        wcstombs_s(&convertedChars, pName, nameSize, pPlayer->ptrCname->Nickname, pPlayer->ptrCname->NicknameLen);
        
        if (isCT) {
            int nx = iX + (playerBar.width - playerBar.thickness - 30);
            TextWithBorder(guiFont, nx, row_1, White, pName, alignRight);
        } else {
            TextWithBorder(guiFont, iX + 30, row_1, White, pName, alignLeft);
        }
        delete[] pName;

        //Money
        int row_2 = row_1 + hpHeight + playerBar.thickness + 5;
        std::string sMoney = "$" + std::to_string(pPlayer->pMoney->getValue());
        if (isCT) {
            int mx = iX + playerBar.thickness + 50;
            TextWithBorder(guiFont, mx, row_2, Gold, (char*)sMoney.c_str(), alignRight);
        }
        else {
            TextWithBorder(guiFont, iX + playerBar.width - 50, row_2, Gold, (char*)sMoney.c_str(), alignLeft);
        }
        
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
