#pragma once
#include "dllmain.h"
#include "../MinHook/include/MinHook.h"
#include "sdk.h"
#include "fonts.h"
#include "IconsFontAwesome5.h"
#include "sprites.h"
#include "../imgui/imgui.h"
#include "../imgui/imgui_impl_dx9.h"
#include "../imgui/imgui_impl_win32.h"
#pragma warning(disable: 4996)

#ifndef GWL_WNDPROC
#define GWL_WNDPROC GWLP_WNDPROC
#endif
IMGUI_IMPL_API LRESULT  ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
namespace d3d9hook {
    #define alignCenter     DT_NOCLIP | DT_CENTER
    #define alignLeft       DT_NOCLIP | DT_LEFT
    #define alignRight      DT_NOCLIP | DT_RIGHT

    // colors
    #define Green           D3DCOLOR_ARGB(255, 000, 255, 000)
    #define Red             D3DCOLOR_ARGB(255, 255, 000, 000)
    #define Blue            D3DCOLOR_ARGB(255, 000, 000, 255)
    #define Orange          D3DCOLOR_ARGB(255, 255, 165, 000)
    #define Yellow          D3DCOLOR_ARGB(255, 255, 255, 000)
    #define Pink            D3DCOLOR_ARGB(255, 255, 192, 203)
    #define Cyan            D3DCOLOR_ARGB(255, 000, 255, 255)
    #define Purple          D3DCOLOR_ARGB(255, 160, 032, 240)
    #define Black           D3DCOLOR_ARGB(255, 000, 000, 000) 
    #define White           D3DCOLOR_ARGB(255, 255, 255, 255)
    #define SteelBlue       D3DCOLOR_ARGB(255, 033, 104, 140)
    #define LightSteelBlue  D3DCOLOR_ARGB(255, 201, 255, 255)
    #define LightBlue       D3DCOLOR_ARGB(255, 026, 140, 306)
    #define Salmon          D3DCOLOR_ARGB(255, 196, 112, 112)
    #define Brown           D3DCOLOR_ARGB(255, 168, 099, 020)
    #define Teal            D3DCOLOR_ARGB(255, 038, 140, 140)
    #define Lime            D3DCOLOR_ARGB(255, 050, 205, 050)
    #define ElectricLime    D3DCOLOR_ARGB(255, 204, 255, 000)
    #define Gold            D3DCOLOR_ARGB(255, 255, 215, 000)
    #define OrangeRed       D3DCOLOR_ARGB(255, 255, 69, 0)
    #define GreenYellow     D3DCOLOR_ARGB(255, 173, 255, 047)
    #define AquaMarine      D3DCOLOR_ARGB(255, 127, 255, 212)
    #define SkyBlue         D3DCOLOR_ARGB(255, 000, 191, 255)
    #define SlateBlue       D3DCOLOR_ARGB(255, 132, 112, 255)
    #define Crimson         D3DCOLOR_ARGB(255, 220, 020, 060)
    #define DarkOliveGreen  D3DCOLOR_ARGB(255, 188, 238, 104)
    #define PaleGreen       D3DCOLOR_ARGB(255, 154, 255, 154)
    #define DarkGoldenRod   D3DCOLOR_ARGB(255, 255, 185, 015)
    #define FireBrick       D3DCOLOR_ARGB(255, 255, 048, 048)
    #define DarkBlue        D3DCOLOR_ARGB(255, 000, 000, 204)
    #define DarkerBlue      D3DCOLOR_ARGB(255, 000, 000, 153)
    #define DarkYellow      D3DCOLOR_ARGB(255, 255, 204, 000)
    #define LightYellow     D3DCOLOR_ARGB(255, 255, 255, 153)
    #define DarkOutline     D3DCOLOR_ARGB(255, 37,  48,  52)

    #define TBlack          D3DCOLOR_ARGB(135, 000, 000, 000)
    #define Grey            D3DCOLOR_ARGB(115, 80, 80, 80)
    #define HPBarBorder     D3DCOLOR_ARGB(145, 20, 22, 24)
    #define TTBar           D3DCOLOR_ARGB(230, 255, 50, 50) 
    #define CTBar           D3DCOLOR_ARGB(230, 0, 125, 255) 

    #define ItemColorOn Green
    #define ItemColorOff Red
    #define ItemCurrent White

    inline bool hook_initialized = false;
    

    // vtable
    inline DWORD* dVtable = NULL;

    //viewport
    inline D3DVIEWPORT9 Viewport; //use this viewport
    inline float screenCenterX = NULL;
    inline float screenCenterY = NULL;

    //font
    inline LPD3DXFONT guiFont, symbolFont, scoreFont = NULL; 

    //textures
    inline bool sprites_created = false;
    inline bool tex_created = false;
    inline LPD3DXSPRITE sprWep1 = NULL, sprWep2 = NULL, sprIcon = NULL, sprLogo = NULL;
    inline LPDIRECT3DTEXTURE9 texLogo, texSymArm, texSymHP, texIcoC4, texIcoDef, texUSP, texGlock, texDeagle, texP228, texElite, texFiveSeven, texM3, texXM1014, texMP5, texTMP, texP90, texMAC10, texUMP, texAK47, texSG552, texM4A1, texAUG, texScout, texAWP, texG3SG1, texSG550, texGalil, texFamas, texM249, texTactShield, texLaser, texFlame, texRPG, texRocket, texGrenade, texKnife, texHE, texFB, texSmoke, texFlare, texBomb, texMachete, texM134, texFNF2000 = NULL;


    // menu & overlay
  
    inline int MenuSelection = 1;
    inline int Current = 1;
    inline int swapTeamNames = 0;
    inline int MenuPosX = 0;
    inline int MenuPosY = 0;
    inline int iBorderedText = 0;

    inline char* opt_OnOff[] = { "[OFF]", "[ON]" };
    inline char* opt_SpecMode[] = { "[WAR]", "[ALL]", "[TEAM]" };
    inline char* opt_Val[] = { "" };
    inline POINT cPos;

    struct PlayerBar {
        int width = 230;
        int height = 46;
        int margin_left_right = 10;
        int margin_bottom = 70;
        int thickness = 3;
    } inline playerBar;

    inline WNDPROC oWndProc;
    LRESULT __stdcall newWndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

    // hook
    typedef HRESULT(APIENTRY* Present) (IDirect3DDevice9*, CONST RECT*, CONST RECT*, HWND, CONST RGNDATA*);
    inline HRESULT APIENTRY Present_hook(IDirect3DDevice9*, CONST RECT*, CONST RECT*, HWND, CONST RGNDATA*);
    inline Present Present_orig = 0;

    typedef HRESULT(APIENTRY* Reset)(IDirect3DDevice9*, D3DPRESENT_PARAMETERS*);
    inline HRESULT APIENTRY Reset_hook(IDirect3DDevice9*, D3DPRESENT_PARAMETERS*);
    inline Reset Reset_orig = 0;

    void GetPresent();
    void SetupDirectXHooks();
    void DeleteDirectXHooks();

    // Draw helpers
    void WriteText(LPD3DXFONT pFont, int x, int y, DWORD color, char* text, DWORD format);
    void TextWithBorder(LPD3DXFONT pFont, int x, int y, DWORD color, char* text, DWORD align);
    void FillRGB(LPDIRECT3DDEVICE9 pDevice, int x, int y, int w, int h, D3DCOLOR color);
    HRESULT DrawRectangle(LPDIRECT3DDEVICE9 Device, FLOAT x, FLOAT y, FLOAT w, FLOAT h, DWORD Color);
    void DrawTexture(int x, int y, LPDIRECT3DTEXTURE9 ldTexture, LPD3DXSPRITE sprite, bool rotate);
    void DrawWeapon(LPDIRECT3DDEVICE9 pDevice, int x, int y, int TeamID, int WeaponID);
    void DrawPlayerBar(LPDIRECT3DDEVICE9 pD3Ddev, CPlayer* pPlayer, int idx);
    void DrawScore(LPDIRECT3DDEVICE9 pD3Ddev);

    // Helpers
    void CreateSprites(LPDIRECT3DDEVICE9 pDevice);
    void CreateTextures(LPDIRECT3DDEVICE9 pDevice);
    void setScreenCenter(LPDIRECT3DDEVICE9 pDevice);
    void DeleteSurfaces();

    // Menu
    int CheckTabs(int x, int y, int w, int h);
    void AddItem(LPDIRECT3DDEVICE9 pDevice, char* text, int& var, char** opt, int MaxValue);
    
    void BuildMenu(LPDIRECT3DDEVICE9 pDevice);

    // Overlay
    void BuildOverlay(LPDIRECT3DDEVICE9 pDevice);
}
