#pragma once

#include "defines.h"

// 9 methods, 0 functions
struct TD3D9GraphicsDriverDecl {
    void* pSuper;  // 0x0 0x8F9E30
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TD3D9GraphicsDriver_New)(TD3D9GraphicsDriver* pThis); // [New at 0x79FA14] [0x10] ()i
    int(__cdecl* m_TD3D9GraphicsDriver_Delete)(TD3D9GraphicsDriver* pThis); // [Delete at 0x79FA36] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void*(__cdecl* m_TD3D9GraphicsDriver_GraphicsModes)(TD3D9GraphicsDriver* pThis); // [GraphicsModes at 0x79FC8D] [0x30] ()[]:TGraphicsMode
    TD3D9Graphics*(__cdecl* m_TD3D9GraphicsDriver_AttachGraphics)(TD3D9GraphicsDriver* pThis, int a1, int a2); // [AttachGraphics at 0x79FC9B] [0x34] (i,i):TD3D9Graphics
    TD3D9Graphics*(__cdecl* m_TD3D9GraphicsDriver_CreateGraphics)(TD3D9GraphicsDriver* pThis, int a1, int a2, int a3, int a4, int a5); // [CreateGraphics at 0x79FCC6] [0x38] (i,i,i,i,i):TD3D9Graphics
    int(__cdecl* m_TD3D9GraphicsDriver_SetGraphics)(TD3D9GraphicsDriver* pThis, TGraphics* a1); // [SetGraphics at 0x79FCFD] [0x3C] (:TGraphics)i
    int(__cdecl* m_TD3D9GraphicsDriver_Flip)(TD3D9GraphicsDriver* pThis, int a1); // [Flip at 0x79FD3C] [0x40] (i)i
    TD3D9GraphicsDriver*(__cdecl* m_TD3D9GraphicsDriver_Create)(TD3D9GraphicsDriver* pThis); // [Create at 0x79FA56] [0x44] ():TD3D9GraphicsDriver
    IDirect3D9*(__cdecl* m_TD3D9GraphicsDriver_GetDirect3D)(TD3D9GraphicsDriver* pThis); // [GetDirect3D at 0x79FD57] [0x48] ():IDirect3D9
};


// Super: 0x8F9E30
// 0 members
struct TD3D9GraphicsDriver {
    TD3D9GraphicsDriverDecl* decl; // 0x0
    int    refs;  // 0x4
};


