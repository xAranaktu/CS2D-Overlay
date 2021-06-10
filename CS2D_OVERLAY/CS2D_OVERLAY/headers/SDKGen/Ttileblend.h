#pragma once

#include "defines.h"

// 2 methods, 4 functions
struct TtileblendDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_Ttileblend_New)(Ttileblend* pThis); // [New at 0x628B76] [0x10] ()i
    int(__cdecl* m_Ttileblend_Delete)(Ttileblend* pThis); // [Delete at 0x628BB7] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_freeall)(); // [freeall at 0x628BD9] [0x30] ()i
    int(__cdecl* fn_ini)(int a1); // [ini at 0x628C6A] [0x34] (i)i
    int(__cdecl* fn_updatetile)(int a1, int a2); // [updatetile at 0x628CD3] [0x38] (i,i)i
    TImage*(__cdecl* fn_addblend)(char a1, char a2, char a3); // [addblend at 0x6291A1] [0x3C] (b,b,b):TImage
};


// 6 members
struct Ttileblend {
    TtileblendDecl* decl; // 0x0
    int    refs;  // 0x4
    char m_gradient; // 0x8 <type_b>
    char m_tile1; // 0x9 <type_b>
    char m_tile2; // 0xA <type_b>
    char m_modifier1; // 0xB <type_b>
    char m_modifier2; // 0xC <type_b>
    TImage* m_img; // 0x10 <type_:TImage>
};


