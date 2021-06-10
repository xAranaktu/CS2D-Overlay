#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TGraphicsModeDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_TGraphicsMode_New)(TGraphicsMode* pThis); // [New at 0x7AC6FC] [0x10] ()i
    int(__cdecl* m_TGraphicsMode_Delete)(TGraphicsMode* pThis); // [Delete at 0x7AC73A] [0x14] ()i
    BBString*(__cdecl* m_TGraphicsMode_ToString)(TGraphicsMode* pThis); // [ToString at 0x7AC748] [0x18] ()$
};


// 4 members
struct TGraphicsMode {
    TGraphicsModeDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_width; // 0x8 <type_i>
    int m_height; // 0xC <type_i>
    int m_depth; // 0x10 <type_i>
    int m_hertz; // 0x14 <type_i>
};


