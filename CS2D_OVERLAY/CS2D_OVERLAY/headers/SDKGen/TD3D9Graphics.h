#pragma once

#include "defines.h"

// 12 methods, 0 functions
struct TD3D9GraphicsDecl {
    void* pSuper;  // 0x0 0x8F9BF4
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_TD3D9Graphics_New)(TD3D9Graphics* pThis); // [New at 0x79F392] [0x10] ()i
    int(__cdecl* m_TD3D9Graphics_Delete)(TD3D9Graphics* pThis); // [Delete at 0x79F3E5] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    TGraphicsDriver*(__cdecl* m_TD3D9Graphics_Driver)(TD3D9Graphics* pThis); // [Driver at 0x79F8C5] [0x34] ():TGraphicsDriver
    int(__cdecl* m_TD3D9Graphics_GetSettings)(TD3D9Graphics* pThis, void* a1, void* a2, void* a3, void* a4, void* a5); // [GetSettings at 0x79F8D3] [0x38] (*i,*i,*i,*i,*i)i
    int(__cdecl* m_TD3D9Graphics_Close)(TD3D9Graphics* pThis); // [Close at 0x79F91D] [0x3C] ()i
    TD3D9Graphics*(__cdecl* m_TD3D9Graphics_Attach)(TD3D9Graphics* pThis, int a1, int a2); // [Attach at 0x79F405] [0x40] (i,i):TD3D9Graphics
    TD3D9Graphics*(__cdecl* m_TD3D9Graphics_Create)(TD3D9Graphics* pThis, int a1, int a2, int a3, int a4, int a5); // [Create at 0x79F48C] [0x44] (i,i,i,i,i):TD3D9Graphics
    IDirect3DDevice9*(__cdecl* m_TD3D9Graphics_GetDirect3DDevice)(TD3D9Graphics* pThis); // [GetDirect3DDevice at 0x79F677] [0x48] ():IDirect3DDevice9
    int(__cdecl* m_TD3D9Graphics_ValidateSize)(TD3D9Graphics* pThis); // [ValidateSize at 0x79F685] [0x4C] ()i
    int(__cdecl* m_TD3D9Graphics_Flip)(TD3D9Graphics* pThis, int a1); // [Flip at 0x79F751] [0x50] (i)i
    int(__cdecl* m_TD3D9Graphics_AutoRelease)(TD3D9Graphics* pThis, IUnknown* a1); // [AutoRelease at 0x79F95B] [0x54] (:IUnknown)i
    int(__cdecl* m_TD3D9Graphics_ReleaseNow)(TD3D9Graphics* pThis, IUnknown* a1); // [ReleaseNow at 0x79F98E] [0x58] (:IUnknown)i
};


// Super: 0x8F9BF4
// 7 members
struct TD3D9Graphics {
    TD3D9GraphicsDecl* decl; // 0x0
    int    refs;  // 0x4
    int m__hwnd; // 0x8 <type_i>
    int m__width; // 0xC <type_i>
    int m__height; // 0x10 <type_i>
    int m__depth; // 0x14 <type_i>
    int m__hertz; // 0x18 <type_i>
    int m__flags; // 0x1C <type_i>
    int m__attached; // 0x20 <type_i>
};


