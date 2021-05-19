#pragma once
#include <windows.h>

#include "../headers/d3d9hook.h"
#include "../headers/features.h"
#include "dllmain.h"


namespace d3d9hook {

    HRESULT Present_Hook(IDirect3DDevice9* pDevice, CONST RECT* pSrcRect, CONST RECT* pDestRect, HWND hDestWindow, CONST RGNDATA* pDirtyRegion) {
        //logger.Write(LOG_INFO, "[DX9] Present Called");
        if (pDevice == nullptr) return Present_orig(pDevice, pSrcRect, pDestRect, hDestWindow, pDirtyRegion);

        if (!hook_initialized) {
            logger.Write(LOG_INFO, "[DX9] Init present hook");

            setScreenCenter(pDevice);

            MenuPosX = Viewport.Width - 210;
            MenuPosY = 65;

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

        // Create Textures
        if (!tex_created) CreateTextures(pDevice);

        // Create Sprites
        if (!sprites_created) CreateSprites(pDevice);

        if (ShowOverlay) BuildOverlay(pDevice);
        if (ShowMenu) BuildMenu(pDevice);
        
        // Required on full screen
        // If not executed we will lose font and textures when window will change state
        DeleteSurfaces();

        HRESULT present_return = Present_orig(pDevice, pSrcRect, pDestRect, hDestWindow, pDirtyRegion);

        return present_return;
    }

    HRESULT APIENTRY Reset_hook(IDirect3DDevice9* pDevice, D3DPRESENT_PARAMETERS* pPresentationParameters)
    {
        logger.Write(LOG_INFO, "[DX9] Reset_hook, %d");
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

        DrawScore(pDevice);
        // init vars
        int maxPlayers = 32;

        int countCT = 0;
        int countTT = 0;

        DWORD HPColor = HPBarBorder;
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

            if (!(CPlayer::is_valid((DWORD)pPlayer))) {
                continue;
            }

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
        if (GetAsyncKeyState(VK_UP) & 1)	MenuSelection--;
        if (GetAsyncKeyState(VK_DOWN) & 1)	MenuSelection++;


        // 30px per item
        DrawRectangle(pDevice, (FLOAT)MenuPosX, (FLOAT)MenuPosY, 200, 300, Black);
        TextWithBorder(guiFont, MenuPosX + 100, MenuPosY + 5, LightYellow, "[F9] - [Overlay Menu]", alignCenter);
        
        Current = 1;
        int iShowOverlay = ShowOverlay ? 1 : 0;
        int iswapTeamNames = swapTeamNames;
        int iNoFlash = bNoFlash ? 1 : 0;
        int iNoFOW = bNoFOW ? 1 : 0;

        AddItem(pDevice, " [ALT] Overlay", iShowOverlay, opt_OnOff, 1);
        AddItem(pDevice, " No Flash", iNoFlash, opt_OnOff, 1);
        AddItem(pDevice, " No Fog", iNoFOW, opt_OnOff, 1);
        AddItem(pDevice, " SpecMode", iSpecMode, opt_SpecMode, 2);
        AddItem(pDevice, " Transparency", iTransparency, opt_OnOff, 1);
        AddItem(pDevice, " Text Border", iBorderedText, opt_OnOff, 1);
        AddItem(pDevice, " Swap names", iswapTeamNames, opt_OnOff, 1);
        AddItem(pDevice, " Extra TT score", scoreTT, opt_Val, 999);
        AddItem(pDevice, " Extra CT score", scoreCT, opt_Val, 999);
        AddItem(pDevice, " MR", mr, opt_Val, 999);

        if (MenuSelection >= Current)
            MenuSelection = 1;

        if (MenuSelection < 1)
            MenuSelection = Current;

        ShowOverlay = iShowOverlay;

        if (iswapTeamNames != swapTeamNames)
        {
            std::string tmp;
            tmp = team1;
            team1 = team2;
            team2 = tmp;
            swapTeamNames = iswapTeamNames;
        }

        if ((int)bNoFlash != iNoFlash)
        {
            bNoFlash = iNoFlash;
            Features::changeNoFlash();
        }

        if ((int)bNoFOW != iNoFOW)
        {
            bNoFOW = iNoFOW;
            Features::changeNoFOW();
        }

        if (oldSpecMode != iSpecMode) {
            oldSpecMode = iSpecMode;
            Features::changeSpecMode(iSpecMode);
        }
    };

    void CreateTextures(LPDIRECT3DDEVICE9 pDevice) {
        // logger.Write(LOG_INFO, "DirectX9 - CreateTextures");

        HRESULT hr;
        hr = D3DXCreateTextureFromFileInMemoryEx(pDevice, &ICC_LOGO, sizeof(ICC_LOGO), 197 / 2, 173 / 2, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, 0, NULL, NULL, &texLogo);
        if (FAILED(hr))
        {
            tex_created = false;
            logger.Write(LOG_ERROR, "D3DXCreateTextureFromFileInMemoryEx - ICC_LOGO failed");
            return;
        }

        D3DXCreateTextureFromFileInMemoryEx(pDevice, &symbol_Armor, sizeof(symbol_Armor), 32, 32, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texSymArm);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &symbol_HP, sizeof(symbol_HP), 32, 32, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texSymHP);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &icons_c4, sizeof(icons_c4), 18, 18, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texIcoC4);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &icons_defuser, sizeof(icons_defuser), 18, 18, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texIcoDef);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_usp, sizeof(weapon_usp), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texUSP);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_glock, sizeof(weapon_glock), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texGlock);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_deagle, sizeof(weapon_deagle), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texDeagle);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_p228, sizeof(weapon_p228), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texP228);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_elite, sizeof(weapon_elite), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texElite);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_fiveseven, sizeof(weapon_fiveseven), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texFiveSeven);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_m3, sizeof(weapon_m3), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texM3);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_xm1014, sizeof(weapon_xm1014), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texXM1014);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_mp5, sizeof(weapon_mp5), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texMP5);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_tmp, sizeof(weapon_tmp), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texTMP);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_p90, sizeof(weapon_p90), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texP90);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_mac10, sizeof(weapon_mac10), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texMAC10);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_ump, sizeof(weapon_ump), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texUMP);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_ak47, sizeof(weapon_ak47), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texAK47);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_sg552, sizeof(weapon_sg552), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texSG552);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_m4a1, sizeof(weapon_m4a1), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texM4A1);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_aug, sizeof(weapon_aug), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texAUG);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_scout, sizeof(weapon_scout), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texScout);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_awp, sizeof(weapon_awp), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texAWP);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_g3sg1, sizeof(weapon_g3sg1), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texG3SG1);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_sg550, sizeof(weapon_sg550), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texSG550);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_galil, sizeof(weapon_galil), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texGalil);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_famas, sizeof(weapon_famas), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texFamas);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_m249, sizeof(weapon_m249), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texM249);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_tacticalshield, sizeof(weapon_tacticalshield), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texTactShield);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_laser, sizeof(weapon_laser), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texLaser);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_flamethrower, sizeof(weapon_flamethrower), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texFlame);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_rpglauncher, sizeof(weapon_rpglauncher), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texRPG);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_rocketlauncher, sizeof(weapon_rocketlauncher), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texRocket);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_grenadelauncher, sizeof(weapon_grenadelauncher), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texGrenade);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_knife, sizeof(weapon_knife), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texKnife);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_HE, sizeof(weapon_HE), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texHE);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_flash, sizeof(weapon_flash), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texFB);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_smoke, sizeof(weapon_smoke), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texSmoke);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_flare, sizeof(weapon_flare), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texFlare);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_bomb, sizeof(weapon_bomb), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texBomb);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_machete, sizeof(weapon_machete), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texMachete);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_m134, sizeof(weapon_m134), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texM134);
        D3DXCreateTextureFromFileInMemoryEx(pDevice, &weapon_fnf2000, sizeof(weapon_fnf2000), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &texFNF2000);
        tex_created = true;
    }

    void CreateSprites(LPDIRECT3DDEVICE9 pDevice) {
        // logger.Write(LOG_INFO, "DirectX9 - CreateSprites");

        HRESULT hr;

        hr = D3DXCreateSprite(pDevice, &sprWep1);
        if (FAILED(hr))
        {
            logger.Write(LOG_ERROR, "D3DXCreateSprite - sprWep1 failed");
            sprites_created = false;
            return;
        }

        D3DXCreateSprite(pDevice, &sprWep2);
        D3DXCreateSprite(pDevice, &sprIcon);
        D3DXCreateSprite(pDevice, &sprLogo);

        sprites_created = true;
    }

    void setScreenCenter(LPDIRECT3DDEVICE9 pDevice) {
        pDevice->GetViewport(&Viewport);
        screenCenterX = (float)(Viewport.Width / 2);
        screenCenterY = (float)(Viewport.Height / 2);
    }

    void DeleteSurfaces()
    {
        SAFE_RELEASE(guiFont);
        SAFE_RELEASE(symbolFont);
        SAFE_RELEASE(scoreFont);

        SAFE_RELEASE(sprWep1);
        SAFE_RELEASE(sprWep2);
        SAFE_RELEASE(sprIcon);
        SAFE_RELEASE(sprLogo);

        SAFE_RELEASE(texLogo);
        SAFE_RELEASE(texSymArm);
        SAFE_RELEASE(texSymHP);
        SAFE_RELEASE(texIcoC4);
        SAFE_RELEASE(texIcoDef);
        SAFE_RELEASE(texUSP);
        SAFE_RELEASE(texGlock);
        SAFE_RELEASE(texDeagle);
        SAFE_RELEASE(texP228);
        SAFE_RELEASE(texElite);
        SAFE_RELEASE(texFiveSeven);
        SAFE_RELEASE(texM3);
        SAFE_RELEASE(texXM1014);
        SAFE_RELEASE(texMP5);
        SAFE_RELEASE(texTMP);
        SAFE_RELEASE(texP90);
        SAFE_RELEASE(texMAC10);
        SAFE_RELEASE(texUMP);
        SAFE_RELEASE(texAK47);
        SAFE_RELEASE(texSG552);
        SAFE_RELEASE(texM4A1);
        SAFE_RELEASE(texAUG);
        SAFE_RELEASE(texScout);
        SAFE_RELEASE(texAWP);
        SAFE_RELEASE(texG3SG1);
        SAFE_RELEASE(texSG550);
        SAFE_RELEASE(texGalil);
        SAFE_RELEASE(texFamas);
        SAFE_RELEASE(texM249);
        SAFE_RELEASE(texTactShield);
        SAFE_RELEASE(texLaser);
        SAFE_RELEASE(texFlame);
        SAFE_RELEASE(texRPG);
        SAFE_RELEASE(texRocket);
        SAFE_RELEASE(texGrenade);
        SAFE_RELEASE(texKnife);
        SAFE_RELEASE(texHE);
        SAFE_RELEASE(texFB);
        SAFE_RELEASE(texSmoke);
        SAFE_RELEASE(texFlare);
        SAFE_RELEASE(texBomb);
        SAFE_RELEASE(texMachete);
        SAFE_RELEASE(texM134);
        SAFE_RELEASE(texFNF2000);

        tex_created = false;
        sprites_created = false;
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

    void DrawTexture(int x, int y, LPDIRECT3DTEXTURE9 ldTexture, LPD3DXSPRITE sprite, bool rotate)
    {

        if (sprite == NULL || ldTexture == NULL) return;

        if (rotate)
        {
            D3DSURFACE_DESC desc;
            ldTexture->GetLevelDesc(0, &desc);
            float scallingX = 1.0f;
            float scallingY = 1.0f;

            D3DXVECTOR2 vCenter((float)(desc.Width / 2), (float)(desc.Height / 2));
            D3DXVECTOR2 vPosition((float)(x), (float)(y));
            D3DXVECTOR2 scaling(scallingX, scallingY);

            scaling.x *= -1;
            vCenter.x -= (float)(desc.Width);
            //vPosition.x += (float)(desc.Width);
            D3DXMATRIX matrix;
            D3DXMatrixTransformation2D(&matrix, NULL, 0.0f, &scaling, &vCenter, 0.0f, &vPosition);
            sprite->SetTransform(&matrix);
            sprite->Draw(ldTexture, NULL, NULL, NULL, 0xFFFFFFFF);
        }
        else {
            sprite->Draw(ldTexture, NULL, NULL, &D3DXVECTOR3((float)(x), (float)(y), 0.0f), 0xFFFFFFFF);
        }
    }

    void DrawWeapon(LPDIRECT3DDEVICE9 pDevice, int x, int y, int TeamID, int WeaponID)
    {
        if (WeaponID <= 0 || WeaponID >= 92 || !sprites_created || !tex_created) return;

        bool rotate = 0;
        LPDIRECT3DTEXTURE9 WepTex = NULL;
        int weapon_sizeof = 0;

        switch (WeaponID) {
        case 1:
            weapon_sizeof = sizeof(weapon_usp);
            WepTex = texUSP;
            break;
        case 2:
            weapon_sizeof = sizeof(weapon_glock);
            WepTex = texGlock;
            break;
        case 3:
            weapon_sizeof = sizeof(weapon_deagle);
            WepTex = texDeagle;
            break;
        case 4:
            weapon_sizeof = sizeof(weapon_p228);
            WepTex = texP228;
            break;
        case 5:
            weapon_sizeof = sizeof(weapon_elite);
            WepTex = texElite;
            break;
        case 6:
            weapon_sizeof = sizeof(weapon_fiveseven);
            WepTex = texFiveSeven;
            break;
        case 10:
            weapon_sizeof = sizeof(weapon_m3);
            WepTex = texM3;
            break;
        case 11:
            weapon_sizeof = sizeof(weapon_xm1014);
            WepTex = texXM1014;
            break;
        case 20:
            weapon_sizeof = sizeof(weapon_mp5);
            WepTex = texMP5;
            break;
        case 21:
            weapon_sizeof = sizeof(weapon_tmp);
            WepTex = texTMP;
            break;
        case 22:
            weapon_sizeof = sizeof(weapon_p90);
            WepTex = texP90;
            break;
        case 23:
            weapon_sizeof = sizeof(weapon_mac10);
            WepTex = texMAC10;
            break;
        case 24:
            weapon_sizeof = sizeof(weapon_ump);
            WepTex = texUMP;
            break;
        case 30:
            weapon_sizeof = sizeof(weapon_ak47);
            WepTex = texAK47;
            break;
        case 31:
            weapon_sizeof = sizeof(weapon_sg552);
            WepTex = texSG552;
            break;
        case 32:
            weapon_sizeof = sizeof(weapon_m4a1);
            WepTex = texM4A1;
            break;
        case 33:
            weapon_sizeof = sizeof(weapon_aug);
            WepTex = texAUG;
            break;
        case 34:
            weapon_sizeof = sizeof(weapon_scout);
            WepTex = texScout;
            break;
        case 35:
            weapon_sizeof = sizeof(weapon_awp);
            WepTex = texAWP;
            break;
        case 36:
            weapon_sizeof = sizeof(weapon_g3sg1);
            WepTex = texG3SG1;
            break;
        case 37:
            weapon_sizeof = sizeof(weapon_sg550);
            WepTex = texSG550;
            break;
        case 38:
            weapon_sizeof = sizeof(weapon_galil);
            WepTex = texGalil;
            break;
        case 39:
            weapon_sizeof = sizeof(weapon_famas);
            WepTex = texFamas;
            break;
        case 40:
            weapon_sizeof = sizeof(weapon_m249);
            WepTex = texM249;
            break;
        case 41:
            weapon_sizeof = sizeof(weapon_tacticalshield);
            WepTex = texTactShield;
            break;
        case 45:
            weapon_sizeof = sizeof(weapon_laser);
            WepTex = texLaser;
            break;
        case 46:
            weapon_sizeof = sizeof(weapon_flamethrower);
            WepTex = texFlame;
            break;
        case 47:
            weapon_sizeof = sizeof(weapon_rpglauncher);
            WepTex = texRPG;
            break;
        case 48:
            weapon_sizeof = sizeof(weapon_rocketlauncher);
            WepTex = texRocket;
            break;
        case 49:
            weapon_sizeof = sizeof(weapon_grenadelauncher);
            WepTex = texGrenade;
            break;
        case 50:
            weapon_sizeof = sizeof(weapon_knife);
            WepTex = texKnife;
            break;
        case 51:
            weapon_sizeof = sizeof(weapon_HE);
            WepTex = texHE;
            break;
        case 52:
            weapon_sizeof = sizeof(weapon_flash);
            WepTex = texFB;
            break;
        case 53:
            weapon_sizeof = sizeof(weapon_smoke);
            WepTex = texSmoke;
            break;
        case 54:
            weapon_sizeof = sizeof(weapon_flare);
            WepTex = texFlare;
            break;
        case 55:
            /*weapon_sizeof = sizeof(weapon_bomb);
            WepTex = texBomb;*/

            weapon_sizeof = sizeof(icons_c4);
            WepTex = texIcoC4;
            break;
        case 69:
            weapon_sizeof = sizeof(weapon_machete);
            WepTex = texMachete;
            break;
        case 90:
            weapon_sizeof = sizeof(weapon_m134);
            WepTex = texM134;
            break;
        case 91:
            weapon_sizeof = sizeof(weapon_fnf2000);
            WepTex = texFNF2000;
            break;
        default:
            WepTex = NULL;
            weapon_sizeof = 0;
            break;
        }


        if (TeamID == 2)
        {
            rotate = 1;
            sprWep1->Begin(D3DXSPRITE_ALPHABLEND);
            DrawTexture(x, y, WepTex, sprWep1, rotate);
            sprWep1->End();
        }
        else if (TeamID == 1) {
            sprWep2->Begin(D3DXSPRITE_ALPHABLEND);
            DrawTexture(x, y, WepTex, sprWep2, rotate);
            sprWep2->End();
        }

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
        int row_2 = row_1 + hpHeight + (playerBar.thickness*2);
        std::string sMoney = "$" + std::to_string(pPlayer->pMoney->getValue());
        if (isCT) {
            int mx = iX + 50;
            TextWithBorder(guiFont, mx, row_2, Gold, (char*)sMoney.c_str(), alignRight);
        }
        else {
            TextWithBorder(guiFont, iX + playerBar.width - 50, row_2, Gold, (char*)sMoney.c_str(), alignLeft);
        }

        // Score
        std::string kda = CPlayer::getKDA(pPlayer);
        if (isCT) {
            int mx = iX + 105;
            TextWithBorder(guiFont, mx, row_2, White, (char*)kda.c_str(), alignRight);
        }
        else {
            TextWithBorder(guiFont, iX + (playerBar.width - 105), row_2, White, (char*)kda.c_str(), alignLeft);
        }

        //Weapon
        if (sprites_created && tex_created) {
            std::string sAmmo = CWeapon::getAmmo(pPlayer->CWeapon);
            if (isCT) {
                int weapon_x = iX - 10;
                DrawWeapon(pD3Ddev, weapon_x, iY+3, pPlayer->teamID, pPlayer->CWeapon->WeaponID);
                TextWithBorder(guiFont, weapon_x + 5, row_2+3, Gold, (char*)sAmmo.c_str(), alignRight);

                // Has Defuse kit
                if (pPlayer->hasDefuser) {
                    int dx = iX + (playerBar.width - (playerBar.thickness*2) - 15);
                    sprIcon->Begin(D3DXSPRITE_ALPHABLEND);
                    DrawTexture(dx, row_2, texIcoDef, sprIcon, FALSE);
                    sprIcon->End();
                }
            }
            else {
                int weapon_x = iX + playerBar.width + 10;
                DrawWeapon(pD3Ddev, weapon_x, iY+3, pPlayer->teamID, pPlayer->CWeapon->WeaponID);
                TextWithBorder(guiFont, weapon_x - 5, row_2+3, Gold, (char*)sAmmo.c_str(), alignLeft);

                // Bomb holder
                if (pPlayer->hasBomb) {
                    /*std::string ttt = "Has BOMB";
                    TextWithBorder(guiFont, 500, 500, Gold, (char*)ttt.c_str(), alignRight);*/

                    sprIcon->Begin(D3DXSPRITE_ALPHABLEND);
                    DrawTexture(iX + playerBar.thickness, row_2, texIcoC4, sprIcon, FALSE);
                    sprIcon->End();
                }
            }
        }
        
    }

    void DrawScore(LPDIRECT3DDEVICE9 pD3Ddev) {
        int currentTTScore = *(int*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.ttRounds);
        int currentCTScore = *(int*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.ctRounds);

        if (currentTTScore + currentCTScore == mr && bScoreSaved == false && Team1Score == 0 && Team2Score == 0)
        {
            int tmp[32] = { 0 };
            /*Team1Score += currentTTScore;
            Team2Score += currentCTScore;*/

            //std::copy(iPlayersScore, iPlayersScore + 32, iSavedPlayersScore);
            //std::copy(iPlayersDeaths, iPlayersDeaths + 32, iSavedPlayersDeaths);

            //std::copy(iDmgDealtTotal, iDmgDealtTotal + 32, iDmgDealtTotalSaved); // saved dmg total before swap
            //std::copy(tmp, tmp + 32, iDmgDealtTotal); // clear dmg total

            //memcpy(iSavedPlayersScore, iPlayersScore, 32 * sizeof(int));
            //memcpy(iSavedPlayersDeaths, iPlayersDeaths, 32 * sizeof(int));
            /*
            for (int i = 0; i < 32; i++)
            {
                iSavedPlayersScore[i] = iPlayersScore[i];
                iSavedPlayersDeaths[i] = iPlayersDeaths[i];
            }
            */
            bScoreSaved = true;
        }

        if (Team1Score + Team2Score >= mr && currentTTScore + currentCTScore == 0 && bScoreSaved == true)
        {
            bSwap = !bSwap;
            bScoreSaved = false;
        }

        float h = 65.0f;
        int score_y = 17;
        DrawRectangle(pD3Ddev, screenCenterX - 60.0f, 0, 120.0f, h, D3DCOLOR_ARGB(255, 100, 100, 100));
        TextWithBorder(scoreFont, (int)(screenCenterX), score_y, White, "SCORE", alignCenter);
        DrawRectangle(pD3Ddev, screenCenterX - 68.0f, 0, 8.0f, h, OrangeRed);
        DrawRectangle(pD3Ddev, screenCenterX + 60.0f, 0, 8.0f, h, Blue);

        if (bSwap) {
            currentTTScore += Team2Score;
            currentCTScore += Team1Score;

            TextWithBorder(scoreFont, (int)((screenCenterX)-(screenCenterX / 2)), score_y, White, (char*)team2.c_str(), alignCenter);
            TextWithBorder(scoreFont, (int)((screenCenterX)+(screenCenterX / 2)), score_y, White, (char*)team1.c_str(), alignCenter);
        }
        else {
            TextWithBorder(scoreFont, (int)((screenCenterX)-(screenCenterX / 2)), score_y, White, (char*)team1.c_str(), alignCenter);
            TextWithBorder(scoreFont, (int)((screenCenterX)+(screenCenterX / 2)), score_y, White, (char*)team2.c_str(), alignCenter);
        }

        TextWithBorder(scoreFont, (int)screenCenterX - 100, score_y, White, (char*)std::to_string(currentTTScore + scoreTT).c_str(), alignCenter);
        TextWithBorder(scoreFont, (int)screenCenterX + 100, score_y, White, (char*)std::to_string(currentCTScore + scoreCT).c_str(), alignCenter);

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

    int CheckTabs(int x, int y, int w, int h)
    {
        if (ShowMenu)
        {
            GetCursorPos(&cPos);
            ScreenToClient(GetForegroundWindow(), &cPos);
            if (cPos.x > x&& cPos.x < x + w && cPos.y > y&& cPos.y < y + h)
            {
                if (GetAsyncKeyState(VK_LBUTTON) & 1)
                {
                    //return 1; //mouse selection OFF
                }
                return 2;
            }
        }
        return 0;
    }

    void AddItem(LPDIRECT3DDEVICE9 pDevice, char* text, int& var, char** opt, int MaxValue)
    {
        int yPos = MenuPosY + 40 + ( (Current-1) * 25);
        if (ShowMenu)
        {
            int Check = CheckTabs(MenuPosX, yPos, 190, 10);
            DWORD ColorText;

            if (var)
            {
                //DrawBox(pDevice, PosX, PosY + (Current * 15), 10, 10, Green);
                ColorText = ItemColorOn;
            }
            if (var == 0)
            {
                //DrawBox(pDevice, PosX, PosY + (Current * 15), 10, 10, Red);
                ColorText = ItemColorOff;
            }

            if (Check == 1)
            {
                var++;
                if (var > MaxValue)
                    var = 0;
            }

            if (Check == 2)
                ColorText = ItemCurrent;

            if (MenuSelection == Current)
            {
                if (GetAsyncKeyState(VK_RIGHT) & 1)
                {
                    var++;
                    if (var > MaxValue)
                        var = 0;
                }
                else if (GetAsyncKeyState(VK_LEFT) & 1)
                {
                    var--;
                    if (var < 0)
                        var = MaxValue;
                }
            }

            if (MenuSelection == Current)
                ColorText = ItemCurrent;

            TextWithBorder(guiFont, MenuPosX + 10, yPos, ColorText, text, alignLeft);

            if (MaxValue == 999) {
                TextWithBorder(guiFont, MenuPosX + 190, yPos, ColorText, (char*)std::to_string(var).c_str(), alignRight);
            }
            else {
                TextWithBorder(guiFont, MenuPosX + 190, yPos, ColorText, opt[var], alignRight);
            }
            
            Current++;
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

            SAFE_RELEASE(d3d);
            SAFE_RELEASE(d3ddev);

            DestroyWindow(tmpWnd);
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
        if (MH_DisableHook((DWORD_PTR*)dVtable[17]) != MH_OK) {
            logger.Write(LOG_ERROR, "[MinHook] Failed to Disable Present_Hook");
            return;
        }

        if (MH_RemoveHook((DWORD_PTR*)dVtable[17]) != MH_OK) {
            logger.Write(LOG_ERROR, "[MinHook] Failed to Remove Present_Hook");
            return;
        }

        if (MH_Uninitialize() != MH_OK) {
            logger.Write(LOG_ERROR, "[MinHook] MH_Uninitialize Failed");
            return;
        }

        DeleteSurfaces();
    }
}
