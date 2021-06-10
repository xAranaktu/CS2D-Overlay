#pragma once

#include "defines.h"

// 10 methods, 2 functions
struct TD3D7GraphicsDecl {
    void* pSuper;  // 0x0 0x8F9BF4
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 40(0x28)
    int(__cdecl* m_TD3D7Graphics_New)(TD3D7Graphics* pThis); // [New at 0x7A0266] [0x10] ()i
    int(__cdecl* m_TD3D7Graphics_Delete)(TD3D7Graphics* pThis); // [Delete at 0x7A02C0] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    TGraphicsDriver*(__cdecl* m_TD3D7Graphics_Driver)(TD3D7Graphics* pThis); // [Driver at 0x7A02E0] [0x34] ():TGraphicsDriver
    int(__cdecl* m_TD3D7Graphics_GetSettings)(TD3D7Graphics* pThis, void* a1, void* a2, void* a3, void* a4, void* a5); // [GetSettings at 0x7A02EE] [0x38] (*i,*i,*i,*i,*i)i
    int(__cdecl* m_TD3D7Graphics_Close)(TD3D7Graphics* pThis); // [Close at 0x7A032D] [0x3C] ()i
    int(__cdecl* m_TD3D7Graphics_Flip)(TD3D7Graphics* pThis, int a1); // [Flip at 0x7A0390] [0x40] (i)i
    IDirectDrawSurface7*(__cdecl* m_TD3D7Graphics_RenderSurface)(TD3D7Graphics* pThis); // [RenderSurface at 0x7A04FF] [0x44] ():IDirectDrawSurface7
    IDirectDrawSurface7*(__cdecl* m_TD3D7Graphics_CreateRenderSurface)(TD3D7Graphics* pThis); // [CreateRenderSurface at 0x7A0519] [0x48] ():IDirectDrawSurface7
    int(__cdecl* m_TD3D7Graphics_DestroyRenderSurface)(TD3D7Graphics* pThis); // [DestroyRenderSurface at 0x7A0776] [0x4C] ()i
    TD3D7Graphics*(__cdecl* fn_Attach)(int a1, int a2); // [Attach at 0x7A0847] [0x50] (i,i):TD3D7Graphics
    TD3D7Graphics*(__cdecl* fn_Create)(int a1, int a2, int a3, int a4, int a5); // [Create at 0x7A08A3] [0x54] (i,i,i,i,i):TD3D7Graphics
    int(__cdecl* m_TD3D7Graphics_ValidateSize)(TD3D7Graphics* pThis); // [ValidateSize at 0x7A0C3D] [0x58] ()i
};


// Super: 0x8F9BF4
// 8 members
struct TD3D7Graphics {
    TD3D7GraphicsDecl* decl; // 0x0
    int    refs;  // 0x4
    int m__width; // 0x8 <type_i>
    int m__height; // 0xC <type_i>
    int m__depth; // 0x10 <type_i>
    int m__hertz; // 0x14 <type_i>
    int m__flags; // 0x18 <type_i>
    int m__hwnd; // 0x1C <type_i>
    void* m__clipper; // 0x20 <type_?IDirectDrawClipper>
    void* m__renderSurf; // 0x24 <type_?IDirectDrawSurface7>
};


