#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TFreeTypeFontLoaderDecl {
    void* pSuper;  // 0x0 0x8F9AF0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TFreeTypeFontLoader_New)(TFreeTypeFontLoader* pThis); // [New at 0x79B5DA] [0x10] ()i
    int(__cdecl* m_TFreeTypeFontLoader_Delete)(TFreeTypeFontLoader* pThis); // [Delete at 0x79B5FC] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TFreeTypeFont*(__cdecl* m_TFreeTypeFontLoader_LoadFont)(TFreeTypeFontLoader* pThis, Object* a1, int a2, int a3); // [LoadFont at 0x79B61C] [0x30] (:Object,i,i):TFreeTypeFont
};


// Super: 0x8F9AF0
// 0 members
struct TFreeTypeFontLoader {
    TFreeTypeFontLoaderDecl* decl; // 0x0
    int    refs;  // 0x4
};


