#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct DeathIconDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_DeathIcon_New)(DeathIcon* pThis); // [New at 0x5C9261] [0x10] ()i
    int(__cdecl* m_DeathIcon_Delete)(DeathIcon* pThis); // [Delete at 0x5C9299] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Create)(float a1, float a2, int a3); // [Create at 0x5C92A7] [0x30] (f,f,i)i
    int(__cdecl* fn_Update)(); // [Update at 0x5C92E6] [0x34] ()i
    int(__cdecl* fn_FreeAll)(); // [FreeAll at 0x5C9373] [0x38] ()i
};


// 4 members
struct DeathIcon {
    DeathIconDecl* decl; // 0x0
    int    refs;  // 0x4
    float m_X; // 0x8 <type_f>
    float m_Y; // 0xC <type_f>
    int m_team; // 0x10 <type_i>
    float m_time; // 0x14 <type_f>
};


