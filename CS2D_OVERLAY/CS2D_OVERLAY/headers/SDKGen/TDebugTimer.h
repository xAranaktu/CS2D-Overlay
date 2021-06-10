#pragma once

#include "defines.h"

// 6 methods, 1 functions
struct TDebugTimerDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_TDebugTimer_New)(TDebugTimer* pThis); // [New at 0x5BA998] [0x10] ()i
    int(__cdecl* m_TDebugTimer_Delete)(TDebugTimer* pThis); // [Delete at 0x5BA9DD] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TDebugTimer*(__cdecl* fn_Create)(); // [Create at 0x5BA9EB] [0x30] ():TDebugTimer
    int(__cdecl* m_TDebugTimer_Begin)(TDebugTimer* pThis); // [Begin at 0x5BAA01] [0x34] ()i
    int(__cdecl* m_TDebugTimer_Stop)(TDebugTimer* pThis); // [Stop at 0x5BAA46] [0x38] ()i
    int(__cdecl* m_TDebugTimer_Get)(TDebugTimer* pThis); // [Get at 0x5BAA6A] [0x3C] ()i
    int(__cdecl* m_TDebugTimer_GetInSec)(TDebugTimer* pThis); // [GetInSec at 0x5BAA79] [0x40] ()i
};


// 5 members
struct TDebugTimer {
    TDebugTimerDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_start; // 0x8 <type_i>
    int m_result; // 0xC <type_i>
    int m_secStart; // 0x10 <type_i>
    int m_secProgress; // 0x14 <type_i>
    int m_secResult; // 0x18 <type_i>
};


