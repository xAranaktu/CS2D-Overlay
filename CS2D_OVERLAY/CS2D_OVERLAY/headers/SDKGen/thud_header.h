#pragma once

#include "defines.h"

// 2 methods, 6 functions
struct thud_headerDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_thud_header_New)(thud_header* pThis); // [New at 0x74ADC4] [0x10] ()i
    int(__cdecl* m_thud_header_Delete)(thud_header* pThis); // [Delete at 0x74ADE6] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Draw)(); // [Draw at 0x74ADF4] [0x30] ()i
    int(__cdecl* fn_DrawRectangleText)(BBString* a1, int a2, int a3, int a4, int a5, BBString* a6); // [DrawRectangleText at 0x74B4A5] [0x34] ($,i,i,i,i,$)i
    int(__cdecl* fn_DrawRectangleText2)(BBString* a1, int a2, int a3, int a4, int a5); // [DrawRectangleText2 at 0x74B625] [0x38] ($,i,i,i,i)i
    int(__cdecl* fn_DrawRectanglePlayer)(tpl* a1, int a2, int a3, int a4, int a5); // [DrawRectanglePlayer at 0x74B79F] [0x3C] (:tpl,i,i,i,i)i
    int(__cdecl* fn_DrawLongImage)(TImage* a1, int a2, int a3, int a4, int a5, int a6); // [DrawLongImage at 0x74BCB3] [0x40] (:TImage,i,i,i,i,i)i
    int(__cdecl* fn_DrawSmoothText)(BBString* a1, int a2, int a3); // [DrawSmoothText at 0x74BD37] [0x44] ($,i,i)i
};


// 0 members
struct thud_header {
    thud_headerDecl* decl; // 0x0
    int    refs;  // 0x4
};


