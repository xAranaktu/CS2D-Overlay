#pragma once
#include <windows.h>
#include "dllmain.h"
#include "../imgui/imgui.h"
#include "../imgui/imgui_impl_dx9.h"
#include "../imgui/imgui_impl_win32.h"
#include "../headers/d3d9hook.h"
#include "../headers/overlay.h"



namespace d3d9hook {

    LRESULT __stdcall newWndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

        if (g_Overlay.show_menu) {
            ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);
            return true;
        }

        return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
    }

    HRESULT Present_Hook(IDirect3DDevice9* pDevice, CONST RECT* pSrcRect, CONST RECT* pDestRect, HWND hDestWindow, CONST RGNDATA* pDirtyRegion) {
        //logger.Write(LOG_INFO, "[DX9] Present Called");
        if (pDevice == nullptr) return Present_orig(pDevice, pSrcRect, pDestRect, hDestWindow, pDirtyRegion);

        if (!hook_initialized) {
            logger.Write(LOG_INFO, "[DX9] Init present hook");

            logger.Write(LOG_INFO, "[DX9] Setup ImGUI");
            ImGui::CreateContext();
            ImGuiIO& io = ImGui::GetIO(); (void)io;

            io.IniFilename = g_Overlay.imgui_ini.c_str();
            io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
            ImGui::StyleColorsDark();

            ImGuiStyle& style = ImGui::GetStyle();
            style.WindowPadding = ImVec2(6.0f, 6.0f);

            auto font_config = g_OverlayCFG.fontsize;

            ImFont* font;
 
            ImFontConfig font_cfg = ImFontConfig();
            font_cfg.SizePixels = font_config.menu;
            if (font_cfg.Name[0] == '\0') {
                std::string font_name = "FiraMono - Regular.ttf, " + std::to_string(font_cfg.SizePixels) + "px";
                strcpy(font_cfg.Name, font_name.c_str());
            }
            font_cfg.OversampleH = font_cfg.OversampleV = 1;
            font_cfg.PixelSnapH = true;
            font_cfg.EllipsisChar = (ImWchar)0x0085;
            static const ImWchar chars_ranges[] = {
                0x0020, 0x00FF,
                0x0100, 0x01FF,
                0x0180, 0x027F,
                0
            };
            font = io.Fonts->AddFontFromMemoryCompressedTTF(FiraMono_compressed_data, FiraMono_compressed_size, font_cfg.SizePixels, &font_cfg, chars_ranges);
            g_Overlay.csp_small = io.Fonts->AddFontFromMemoryCompressedTTF(csp_text_compressed_data, csp_text_compressed_size, font_config.bars, &font_cfg, chars_ranges);
            g_Overlay.csp_big = io.Fonts->AddFontFromMemoryCompressedTTF(csp_text_compressed_data, csp_text_compressed_size, font_config.score, &font_cfg, chars_ranges);
            font_cfg.MergeMode = true;

            static const ImWchar icons_ranges[] = { ICON_MIN_FA, ICON_MAX_FA, 0 };
            io.Fonts->AddFontFromMemoryCompressedTTF(fa_solid_900_compressed_data, fa_solid_900_compressed_size, font_cfg.SizePixels, &font_cfg, icons_ranges);

            io.Fonts->Build();

            logger.Write(LOG_INFO, "[DX9] Setup ImGUI Done");

            HWND window = FindWindowA("BBDX9Device Window Class", nullptr);
            if (!window) {
                DWORD e = GetLastError();
                logger.Write(LOG_ERROR, "Can't Find BBDX9Device Window Class. Err: %d", e);
                Sleep(2000);
                return Present_orig(pDevice, pSrcRect, pDestRect, hDestWindow, pDirtyRegion);
            }
            oWndProc = (WNDPROC)SetWindowLongPtrA(window, GWL_WNDPROC, (LONG_PTR)newWndProc);

            IDirect3DSwapChain9* pChain = nullptr;
            D3DPRESENT_PARAMETERS pp = {};
            D3DDEVICE_CREATION_PARAMETERS param = {};
            pDevice->GetCreationParameters(&param);
            pDevice->GetSwapChain(0, &pChain);
            if (pChain)
                pChain->GetPresentParameters(&pp);

            ImGui_ImplWin32_Init(window);
            ImGui_ImplDX9_Init(pDevice);

            CreateTextures(pDevice, pp);

            logger.Write(LOG_INFO, "[DX9] Init present hook done");
            hook_initialized = true;
            g_Overlay.can_draw = true;
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

        // Create Sprites
        if (!sprites_created) CreateSprites(pDevice);

        DWORD colorwrite, srgbwrite;
        pDevice->GetRenderState(D3DRS_COLORWRITEENABLE, &colorwrite);
        pDevice->GetRenderState(D3DRS_SRGBWRITEENABLE, &srgbwrite);

        pDevice->SetRenderState(D3DRS_COLORWRITEENABLE, 0xffffffff);
        pDevice->SetRenderState(D3DRS_SRGBWRITEENABLE, false);

        ImGui_ImplDX9_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();

        g_Overlay.HandleDraw();
        
        ImGui::EndFrame();
        ImGui::Render();
        ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());

        pDevice->SetRenderState(D3DRS_COLORWRITEENABLE, colorwrite);
        pDevice->SetRenderState(D3DRS_SRGBWRITEENABLE, srgbwrite);

        // Required on full screen
        // If not executed we will lose font and textures when window will change state
        //DeleteSurfaces();
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

        //DrawScore(pDevice);
        //// init vars
        //int maxPlayers = 32;

        //int countCT = 0;
        //int countTT = 0;

        //DWORD HPColor = HPBarBorder;
        //DWORD BarColor = HPBarBorder;

        //int bar_width = 230;
        //int bar_x = 10;
        //int bar_y = (int)screenCenterY + 250;
        //int bar_height = 46;
        //int bar_thickness = 3;

        //int recalc_bar_x = bar_x;
        //int recalc_bar_y = bar_y;

        //int curHP_x = 0;
        //int curHP_y = 0;

        //TList* pPlayersList = CPlayer::GetPlayersList();
        //
        //TLink* pPlayerEntity = TList::GetFirstLink(pPlayersList);

        //int curHP = 0;
        //for (int i = 1; i <= maxPlayers; i++) {
        //    CPlayer* pPlayer = reinterpret_cast<CPlayer*>(TLink::Get(pPlayerEntity));

        //    if (!Validator::ObjIsValid(pPlayer)) {
        //        continue;
        //    }

        //    if ((DWORD)pPlayer == (DWORD)pPlayerEntity) {
        //        break;
        //    }
        //    
        //    pPlayerEntity = TLink::Next(pPlayerEntity);

        //    curHP = cInt::Get(pPlayer->m_health);

        //    if (curHP <= 0) continue;

        //    if (pPlayer->m_team == 1) {
        //        // TT
        //        countTT += 1;
        //        DrawPlayerBar(pDevice, pPlayer, countTT);
        //    } else if (pPlayer->m_team == 2) {
        //        // CT
        //        countCT += 1;
        //        DrawPlayerBar(pDevice, pPlayer, countCT);
        //    }
        //}
    };

    void BuildMenu(LPDIRECT3DDEVICE9 pDevice) {
        //if (GetAsyncKeyState(VK_UP) & 1)	MenuSelection--;
        //if (GetAsyncKeyState(VK_DOWN) & 1)	MenuSelection++;


        //// 30px per item
        //DrawRectangle(pDevice, (FLOAT)MenuPosX, (FLOAT)MenuPosY, 200, 300, Black);
        //TextWithBorder(guiFont, MenuPosX + 100, MenuPosY + 5, LightYellow, "[F9] - [Overlay Menu]", alignCenter);
        //
        //Current = 1;
        //int iShowOverlay = ShowOverlay ? 1 : 0;
        //int iswapTeamNames = swapTeamNames;
        //int iNoFlash = bNoFlash ? 1 : 0;
        //int iNoFOW = bNoFOW ? 1 : 0;

        //AddItem(pDevice, " [ALT] Overlay", iShowOverlay, opt_OnOff, 1);
        //AddItem(pDevice, " No Flash", iNoFlash, opt_OnOff, 1);
        //AddItem(pDevice, " No Fog", iNoFOW, opt_OnOff, 1);
        //AddItem(pDevice, " SpecMode", iSpecMode, opt_SpecMode, 2);
        //AddItem(pDevice, " Transparency", iTransparency, opt_OnOff, 1);
        //AddItem(pDevice, " Text Border", iBorderedText, opt_OnOff, 1);
        //AddItem(pDevice, " Swap names", iswapTeamNames, opt_OnOff, 1);
        //AddItem(pDevice, " Extra TT score", scoreTT, opt_Val, 999);
        //AddItem(pDevice, " Extra CT score", scoreCT, opt_Val, 999);
        //AddItem(pDevice, " MR", mr, opt_Val, 999);

        //if (MenuSelection >= Current)
        //    MenuSelection = 1;

        //if (MenuSelection < 1)
        //    MenuSelection = Current;

        //ShowOverlay = iShowOverlay;

        //if (iswapTeamNames != swapTeamNames)
        //{
        //    std::string tmp;
        //    tmp = team1;
        //    team1 = team2;
        //    team2 = tmp;
        //    swapTeamNames = iswapTeamNames;
        //}

        //if ((int)bNoFlash != iNoFlash)
        //{
        //    bNoFlash = iNoFlash;
        //    Features::changeNoFlash();
        //}

        //if ((int)bNoFOW != iNoFOW)
        //{
        //    bNoFOW = iNoFOW;
        //    Features::changeNoFOW();
        //}

        //if (oldSpecMode != iSpecMode) {
        //    oldSpecMode = iSpecMode;
        //    Features::changeSpecMode(iSpecMode);
        //}
    };

    void CreateTextures(LPDIRECT3DDEVICE9 pDevice, D3DPRESENT_PARAMETERS pp) {
        logger.Write(LOG_INFO, "DirectX9 - CreateTextures");

        HRESULT hr;
        hr = D3DXCreateTextureFromFileInMemoryEx(pDevice, &icons_c4, sizeof(icons_c4), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &g_Overlay.texIcoC4);
        if (FAILED(hr))
        {
            tex_created = false;
            logger.Write(LOG_ERROR, "D3DXCreateTextureFromFileInMemoryEx - icons_c4 failed");
            return;
        }

        D3DXCreateTextureFromFileInMemoryEx(pDevice, &icons_defuser, sizeof(icons_defuser), D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &g_Overlay.texIcoDef);
        
        std::map<int, MemFile>::iterator it = weapon_mem_files.begin();
        while (it != weapon_mem_files.end())
        {
            int weapon_id = it->first;
            MemFile mem_f = it->second;

            D3DXCreateTextureFromFileInMemoryEx(pDevice, mem_f.content, mem_f.sz, D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_FILTER_LINEAR, D3DX_FILTER_LINEAR, D3DCOLOR_ARGB(255, 00, 00, 00), NULL, NULL, &g_Overlay.weapons_info.at(weapon_id).ptex);
            it++;
        }
        
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

    void DeleteSurfaces()
    {
        SAFE_RELEASE(guiFont);
        SAFE_RELEASE(symbolFont);
        SAFE_RELEASE(scoreFont);

        SAFE_RELEASE(sprWep1);
        SAFE_RELEASE(sprWep2);
        SAFE_RELEASE(sprIcon);
        SAFE_RELEASE(sprLogo);

        SAFE_RELEASE(g_Overlay.texIcoC4);
        SAFE_RELEASE(g_Overlay.texIcoDef);

        std::map<int, Overlay::WeaponInfo>::iterator it = g_Overlay.weapons_info.begin();
        while (it != g_Overlay.weapons_info.end())
        {
            auto weap_info = it->second;

            SAFE_RELEASE(weap_info.ptex);


            it++;
        }
        


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
        //if (iTransparency == 0)
        //{
        //    FillRGB(Device, (int)x, (int)y, (int)w, (int)h, Color);
        //    return hRet;
        //}

        //const DWORD D3D_FVF = (D3DFVF_XYZRHW | D3DFVF_DIFFUSE);

        //struct Vertex
        //{
        //    float x, y, z, ht;
        //    DWORD vcolor;
        //}
        //V[4] =
        //{
        //    { x, (y + h), 0.0f, 0.0f, Color },
        //    { x, y, 0.0f, 0.0f, Color },
        //    { (x + w), (y + h), 0.0f, 0.0f, Color },
        //    { (x + w), y, 0.0f, 0.0f, Color }
        //};


        //hRet = D3D_OK;
        //if (SUCCEEDED(hRet))
        //{
        //    //Old fvf
        //    LPDIRECT3DSTATEBLOCK9 pStateBlock = NULL;
        //    Device->CreateStateBlock(D3DSBT_ALL, &pStateBlock);
        //    pStateBlock->Capture();
        //    DWORD fvf;
        //    Device->GetFVF(&fvf);

        //    Device->SetPixelShader(0); //fix black color
        //    Device->SetRenderState(D3DRS_ALPHABLENDENABLE, true);
        //    Device->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
        //    Device->SetFVF(D3D_FVF);
        //    Device->SetTexture(0, NULL);
        //    hRet = Device->DrawPrimitiveUP(D3DPT_TRIANGLESTRIP, 2, V, sizeof(Vertex));
        //    Device->SetFVF(fvf); // Restore Old FVF
        //    pStateBlock->Apply();   // apply old states
        //    pStateBlock->Release(); // delete
        //}

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
        //if (WeaponID <= 0 || WeaponID >= 92 || !sprites_created || !tex_created) return;

        //bool rotate = 0;
        //LPDIRECT3DTEXTURE9 WepTex = NULL;
        //int weapon_sizeof = 0;




        //if (TeamID == 2)
        //{
        //    rotate = 1;
        //    sprWep1->Begin(D3DXSPRITE_ALPHABLEND);
        //    DrawTexture(x, y, WepTex, sprWep1, rotate);
        //    sprWep1->End();
        //}
        //else if (TeamID == 1) {
        //    sprWep2->Begin(D3DXSPRITE_ALPHABLEND);
        //    DrawTexture(x, y, WepTex, sprWep2, rotate);
        //    sprWep2->End();
        //}

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

    //void DrawPlayerBar(LPDIRECT3DDEVICE9 pD3Ddev, CPlayer* pPlayer, int idx) {
    //    int HP = 0;//cInt::Get(pPlayer->m_health);

    //    if (HP <= 0) return;

    //    bool isCT = (pPlayer->m_team == 2);

    //    // Background
    //    int iY = Viewport.Height - playerBar.margin_bottom;
    //    iY = (iY - ((playerBar.height + (playerBar.thickness * 2) + 3) * idx));


    //    int iX = playerBar.margin_left_right;
    //    if (isCT) {
    //        iX = Viewport.Width - (playerBar.margin_left_right + playerBar.width);
    //    }
    //    
    //    DrawRectangle(pD3Ddev, (float)iX, (float)(iY), (float)playerBar.width, (float)playerBar.height, HPBarBorder);

    //    int row_1 = iY + playerBar.thickness;

    //    // Health
    //    int hpWidth = (int)(HP * ((float)playerBar.width / 100) - (playerBar.thickness * 2));
    //    int hpHeight = (playerBar.height / 2) - (playerBar.thickness * 2);

    //    std::string sHP = std::to_string(HP);
    //    if (isCT) {
    //        int hpx = iX + (playerBar.width - playerBar.thickness - hpWidth);
    //        int shpx = iX + (playerBar.width - playerBar.thickness - 3);
    //        DrawRectangle(pD3Ddev, (float)(hpx), (float)(row_1), (float)hpWidth, (float)hpHeight, CTBar);
    //        TextWithBorder(guiFont, shpx, row_1, White, (char*)sHP.c_str(), alignRight);
    //    }
    //    else {
    //        DrawRectangle(pD3Ddev, (float)(iX + playerBar.thickness), (float)(row_1), (float)hpWidth, (float)hpHeight, TTBar);
    //        TextWithBorder(guiFont, iX + playerBar.thickness + 3, row_1, White, (char*)sHP.c_str(), alignLeft);
    //    }

    //    // Armor
    //    int arm = 0; // cInt::Get(pPlayer->m_armor);
    //    if (arm > 0) {
    //        int armWidth = (int)(arm * ((float)playerBar.width / 100) - (playerBar.thickness * 2));

    //        if (isCT) {
    //            int armx = iX + (playerBar.width - playerBar.thickness - armWidth);
    //            DrawRectangle(pD3Ddev, (float)(armx), (float)(row_1 + hpHeight), (float)armWidth, 3.0, Cyan);
    //        }
    //        else {
    //            DrawRectangle(pD3Ddev, (float)(iX + playerBar.thickness), (float)(row_1 + hpHeight), (float)armWidth, 3.0, Cyan);
    //        } 
    //    }

    //    //Nickname
    //    size_t nameSize = pPlayer->m_name->length + 1;
    //    size_t convertedChars = 0;
    //    char* pName = new char[nameSize];
    //    wcstombs_s(&convertedChars, pName, nameSize, pPlayer->m_name->buf, pPlayer->m_name->length);
    //    
    //    if (isCT) {
    //        int nx = iX + (playerBar.width - playerBar.thickness - 30);
    //        TextWithBorder(guiFont, nx, row_1, White, pName, alignRight);
    //    } else {
    //        TextWithBorder(guiFont, iX + 30, row_1, White, pName, alignLeft);
    //    }
    //    delete[] pName;

    //    //Money
    //    int row_2 = row_1 + hpHeight + (playerBar.thickness*2);
    //    std::string sMoney = "";// "$" + std::to_string(cInt::Get(pPlayer->m_money));
    //    if (isCT) {
    //        int mx = iX + 50;
    //        TextWithBorder(guiFont, mx, row_2, Gold, (char*)sMoney.c_str(), alignRight);
    //    }
    //    else {
    //        TextWithBorder(guiFont, iX + playerBar.width - 50, row_2, Gold, (char*)sMoney.c_str(), alignLeft);
    //    }

    //    // Score
    //    std::string kda = CPlayer::KDA(pPlayer);
    //    if (isCT) {
    //        int mx = iX + 105;
    //        TextWithBorder(guiFont, mx, row_2, White, (char*)kda.c_str(), alignRight);
    //    }
    //    else {
    //        TextWithBorder(guiFont, iX + (playerBar.width - 105), row_2, White, (char*)kda.c_str(), alignLeft);
    //    }

    //    //Weapon
    //    if (Validator::ObjIsValid(pPlayer->m_weapon) && sprites_created && tex_created) {
    //        std::string sAmmo = CPlayer::GetAmmo(pPlayer);
    //        if (isCT) {
    //            int weapon_x = iX - 10;
    //            DrawWeapon(pD3Ddev, weapon_x, iY+3, pPlayer->m_team, pPlayer->m_weapon->m_typ);
    //            TextWithBorder(guiFont, weapon_x + 5, row_2+3, Gold, (char*)sAmmo.c_str(), alignRight);

    //            // Has Defuse kit
    //            if (pPlayer->m_defuse > 0) {
    //                int dx = iX + (playerBar.width - (playerBar.thickness*2) - 15);
    //                sprIcon->Begin(D3DXSPRITE_ALPHABLEND);
    //                DrawTexture(dx, row_2, texIcoDef, sprIcon, FALSE);
    //                sprIcon->End();
    //            }
    //        }
    //        else {
    //            int weapon_x = iX + playerBar.width + 10;
    //            DrawWeapon(pD3Ddev, weapon_x, iY+3, pPlayer->m_team, pPlayer->m_weapon->m_typ);
    //            TextWithBorder(guiFont, weapon_x - 5, row_2+3, Gold, (char*)sAmmo.c_str(), alignLeft);

    //            // Bomb holder
    //            if (pPlayer->m_bomb > 0) {
    //                /*std::string ttt = "Has BOMB";
    //                TextWithBorder(guiFont, 500, 500, Gold, (char*)ttt.c_str(), alignRight);*/

    //                sprIcon->Begin(D3DXSPRITE_ALPHABLEND);
    //                DrawTexture(iX + playerBar.thickness, row_2, texIcoC4, sprIcon, FALSE);
    //                sprIcon->End();
    //            }
    //        }
    //    }
    //    
    //}

    void DrawScore(LPDIRECT3DDEVICE9 pD3Ddev) {
        //int currentTTScore = 0;
        //int currentCTScore = 0;

        //if (iAutoUpdateScore == 1) {
        //    currentTTScore = *(int*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.ttRounds);
        //    currentCTScore = *(int*)(g_ctx_proc.m_ModuleContext.m_Base + gameOffsets.ctRounds);
        //}

        //if (currentTTScore + currentCTScore == mr && bScoreSaved == false && Team1Score == 0 && Team2Score == 0)
        //{
        //    int tmp[32] = { 0 };
        //    /*Team1Score += currentTTScore;
        //    Team2Score += currentCTScore;*/

        //    //std::copy(iPlayersScore, iPlayersScore + 32, iSavedPlayersScore);
        //    //std::copy(iPlayersDeaths, iPlayersDeaths + 32, iSavedPlayersDeaths);

        //    //std::copy(iDmgDealtTotal, iDmgDealtTotal + 32, iDmgDealtTotalSaved); // saved dmg total before swap
        //    //std::copy(tmp, tmp + 32, iDmgDealtTotal); // clear dmg total

        //    //memcpy(iSavedPlayersScore, iPlayersScore, 32 * sizeof(int));
        //    //memcpy(iSavedPlayersDeaths, iPlayersDeaths, 32 * sizeof(int));
        //    /*
        //    for (int i = 0; i < 32; i++)
        //    {
        //        iSavedPlayersScore[i] = iPlayersScore[i];
        //        iSavedPlayersDeaths[i] = iPlayersDeaths[i];
        //    }
        //    */
        //    bScoreSaved = true;
        //}

        //if (Team1Score + Team2Score >= mr && currentTTScore + currentCTScore == 0 && bScoreSaved == true)
        //{
        //    bSwap = !bSwap;
        //    bScoreSaved = false;
        //}

        //float h = 65.0f;
        //int score_y = 17;
        //DrawRectangle(pD3Ddev, screenCenterX - 60.0f, 0, 120.0f, h, D3DCOLOR_ARGB(255, 100, 100, 100));
        //TextWithBorder(scoreFont, (int)(screenCenterX), score_y, White, "SCORE", alignCenter);
        //DrawRectangle(pD3Ddev, screenCenterX - 68.0f, 0, 8.0f, h, OrangeRed);
        //DrawRectangle(pD3Ddev, screenCenterX + 60.0f, 0, 8.0f, h, Blue);

        //if (bSwap) {
        //    currentTTScore += Team2Score;
        //    currentCTScore += Team1Score;

        //    TextWithBorder(scoreFont, (int)((screenCenterX)-(screenCenterX / 2)), score_y, White, (char*)team2.c_str(), alignCenter);
        //    TextWithBorder(scoreFont, (int)((screenCenterX)+(screenCenterX / 2)), score_y, White, (char*)team1.c_str(), alignCenter);
        //}
        //else {
        //    TextWithBorder(scoreFont, (int)((screenCenterX)-(screenCenterX / 2)), score_y, White, (char*)team1.c_str(), alignCenter);
        //    TextWithBorder(scoreFont, (int)((screenCenterX)+(screenCenterX / 2)), score_y, White, (char*)team2.c_str(), alignCenter);
        //}

        //TextWithBorder(scoreFont, (int)screenCenterX - 100, score_y, White, (char*)std::to_string(currentTTScore + scoreTT).c_str(), alignCenter);
        //TextWithBorder(scoreFont, (int)screenCenterX + 100, score_y, White, (char*)std::to_string(currentCTScore + scoreCT).c_str(), alignCenter);

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

        int timeout = 15; // 15s
        int x = 0;
        while (GetModuleHandle("d3d9.dll") == 0)
        {
            if (x > timeout) {
                MessageBox(NULL, "Timeout. Can't find DirectX9 module. Run game in DirectX mode?", "Timeout", MB_OK);
                return;
            }

            Sleep(1000);
            x += 1;
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
        HWND window = FindWindowA("BBDX9Device Window Class", nullptr);
        SetWindowLongPtrA(window, GWL_WNDPROC, (LONG_PTR)oWndProc);

        Sleep(100);
        if (MH_DisableHook((DWORD_PTR*)dVtable[17]) != MH_OK) {
            logger.Write(LOG_ERROR, "[MinHook] Failed to Disable Present_Hook");
            return;
        }
        Sleep(100);
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
