#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct TImageFrameDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TImageFrame_New)(TImageFrame* pThis); // [New at 0x7ABD23] [0x10] ()i
    int(__cdecl* m_TImageFrame_Delete)(TImageFrame* pThis); // [Delete at 0x7ABD45] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TImageFrame_Draw)(TImageFrame* pThis, float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10); // [Draw at 0x7B6004] [0x30] (f,f,f,f,f,f,f,f,f,f)i
};


// 0 members
struct TImageFrame {
    TImageFrameDecl* decl; // 0x0
    int    refs;  // 0x4
};


