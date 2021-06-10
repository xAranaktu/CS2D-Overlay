#pragma once

#include "defines.h"

// 20 methods, 1 functions
struct TD3D7GraphicsDriverDecl {
    void* pSuper;  // 0x0 0x8F9E30
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 48(0x30)
    int(__cdecl* m_TD3D7GraphicsDriver_New)(TD3D7GraphicsDriver* pThis); // [New at 0x7A0CF8] [0x10] ()i
    int(__cdecl* m_TD3D7GraphicsDriver_Delete)(TD3D7GraphicsDriver* pThis); // [Delete at 0x7A0D80] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void*(__cdecl* m_TD3D7GraphicsDriver_GraphicsModes)(TD3D7GraphicsDriver* pThis); // [GraphicsModes at 0x7A0DE6] [0x30] ()[]:TGraphicsMode
    TD3D7Graphics*(__cdecl* m_TD3D7GraphicsDriver_AttachGraphics)(TD3D7GraphicsDriver* pThis, int a1, int a2); // [AttachGraphics at 0x7A0DF5] [0x34] (i,i):TD3D7Graphics
    TD3D7Graphics*(__cdecl* m_TD3D7GraphicsDriver_CreateGraphics)(TD3D7GraphicsDriver* pThis, int a1, int a2, int a3, int a4, int a5); // [CreateGraphics at 0x7A0E40] [0x38] (i,i,i,i,i):TD3D7Graphics
    int(__cdecl* m_TD3D7GraphicsDriver_SetGraphics)(TD3D7GraphicsDriver* pThis, TGraphics* a1); // [SetGraphics at 0x7A0F6B] [0x3C] (:TGraphics)i
    int(__cdecl* m_TD3D7GraphicsDriver_Flip)(TD3D7GraphicsDriver* pThis, int a1); // [Flip at 0x7A0FC4] [0x40] (i)i
    int(__cdecl* m_TD3D7GraphicsDriver_CloseGraphics)(TD3D7GraphicsDriver* pThis, TD3D7Graphics* a1); // [CloseGraphics at 0x7A0EF6] [0x44] (:TD3D7Graphics)i
    TD3D7Graphics*(__cdecl* m_TD3D7GraphicsDriver_Graphics)(TD3D7GraphicsDriver* pThis); // [Graphics at 0x7A0FB5] [0x48] ():TD3D7Graphics
    IDirectDraw7*(__cdecl* m_TD3D7GraphicsDriver_DirectDraw7)(TD3D7GraphicsDriver* pThis); // [DirectDraw7 at 0x7A100E] [0x4C] ():IDirectDraw7
    IDirect3D7*(__cdecl* m_TD3D7GraphicsDriver_Direct3D7)(TD3D7GraphicsDriver* pThis); // [Direct3D7 at 0x7A101D] [0x50] ():IDirect3D7
    IDirect3DDevice7*(__cdecl* m_TD3D7GraphicsDriver_Direct3DDevice7)(TD3D7GraphicsDriver* pThis); // [Direct3DDevice7 at 0x7A102C] [0x54] ():IDirect3DDevice7
    int(__cdecl* m_TD3D7GraphicsDriver_BeginScene)(TD3D7GraphicsDriver* pThis); // [BeginScene at 0x7A103B] [0x58] ()i
    int(__cdecl* m_TD3D7GraphicsDriver_EndScene)(TD3D7GraphicsDriver* pThis); // [EndScene at 0x7A106B] [0x5C] ()i
    IDirectDrawSurface7*(__cdecl* m_TD3D7GraphicsDriver_CreateSurface)(TD3D7GraphicsDriver* pThis, DDSURFACEDESC2* a1); // [CreateSurface at 0x7A109B] [0x60] (:DDSURFACEDESC2):IDirectDrawSurface7
    int(__cdecl* m_TD3D7GraphicsDriver_DestroySurface)(TD3D7GraphicsDriver* pThis, IDirectDrawSurface7* a1); // [DestroySurface at 0x7A112F] [0x64] (:IDirectDrawSurface7)i
    int(__cdecl* m_TD3D7GraphicsDriver__ValidateGraphics)(TD3D7GraphicsDriver* pThis); // [_ValidateGraphics at 0x7A11D8] [0x68] ()i
    int(__cdecl* m_TD3D7GraphicsDriver_ValidateGraphics)(TD3D7GraphicsDriver* pThis, int a1); // [ValidateGraphics at 0x7A1356] [0x6C] (i)i
    TD3D7GraphicsDriver*(__cdecl* fn_Create)(); // [Create at 0x7A1421] [0x70] ():TD3D7GraphicsDriver
    TD3D7GraphicsDriver*(__cdecl* m_TD3D7GraphicsDriver__Create)(TD3D7GraphicsDriver* pThis); // [_Create at 0x7A158C] [0x74] ():TD3D7GraphicsDriver
    TD3D7GraphicsDriver*(__cdecl* m_TD3D7GraphicsDriver__Destroy)(TD3D7GraphicsDriver* pThis); // [_Destroy at 0x7A169B] [0x78] ():TD3D7GraphicsDriver
};


// Super: 0x8F9E30
// 10 members
struct TD3D7GraphicsDriver {
    TD3D7GraphicsDriverDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m__modes; // 0x8 <type_[]:TGraphicsMode>
    void* m__dd7; // 0xC <type_?IDirectDraw7>
    void* m__d3d7; // 0x10 <type_?IDirect3D7>
    void* m__d3ddev7; // 0x14 <type_?IDirect3DDevice7>
    TD3D7Graphics* m__graphics; // 0x18 <type_:TD3D7Graphics>
    int m__n_graphics; // 0x1C <type_i>
    int m__n_fullscreen; // 0x20 <type_i>
    int m__inScene; // 0x24 <type_i>
    TList* m__surfaces; // 0x28 <type_:TList>
    TList* m__graphicss; // 0x2C <type_:TList>
};


