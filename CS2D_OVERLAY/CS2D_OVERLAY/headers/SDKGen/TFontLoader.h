#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TFontLoaderDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TFontLoader_New)(TFontLoader* pThis); // [New at 0x7AC54A] [0x10] ()i
    int(__cdecl* m_TFontLoader_Delete)(TFontLoader* pThis); // [Delete at 0x7AC577] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TFont*(__cdecl* m_TFontLoader_LoadFont)(TFontLoader* pThis, Object* a1, int a2, int a3); // [LoadFont at 0x7B6004] [0x30] (:Object,i,i):TFont
};


// 1 members
struct TFontLoader {
    TFontLoaderDecl* decl; // 0x0
    int    refs;  // 0x4
    TFontLoader* m__succ; // 0x8 <type_:TFontLoader>
};


