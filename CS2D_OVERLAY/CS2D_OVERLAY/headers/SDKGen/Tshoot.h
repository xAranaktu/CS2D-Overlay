#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct TshootDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_Tshoot_New)(Tshoot* pThis); // [New at 0x67D04E] [0x10] ()i
    int(__cdecl* m_Tshoot_Delete)(Tshoot* pThis); // [Delete at 0x67D070] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Shoot)(Tpl* a1, Tdo* a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9, int a10); // [Shoot at 0x67D07E] [0x30] (:Tpl,:Tdo,f,f,f,i,i,i,i,i)i
    int(__cdecl* fn_WallImpactFx)(float a1, float a2, float a3, float a4, float a5, int a6); // [WallImpactFx at 0x682A95] [0x34] (f,f,f,f,f,i)i
    int(__cdecl* fn_SpawnSparks)(float a1, float a2, float a3, float a4, float a5); // [SpawnSparks at 0x682D3A] [0x38] (f,f,f,f,f)i
};


// 0 members
struct Tshoot {
    TshootDecl* decl; // 0x0
    int    refs;  // 0x4
};


