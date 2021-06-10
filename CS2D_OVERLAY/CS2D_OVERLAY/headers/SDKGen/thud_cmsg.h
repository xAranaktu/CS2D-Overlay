#pragma once

#include "defines.h"

// 3 methods, 3 functions
struct thud_cmsgDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_thud_cmsg_New)(thud_cmsg* pThis); // [New at 0x74A082] [0x10] ()i
    int(__cdecl* m_thud_cmsg_Delete)(thud_cmsg* pThis); // [Delete at 0x74A0D0] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Clear)(); // [Clear at 0x74A105] [0x30] ()i
    thud_cmsg*(__cdecl* fn_Create)(tpl* a1, BBString* a2, int a3); // [Create at 0x74A121] [0x34] (:tpl,$,i):thud_cmsg
    int(__cdecl* m_thud_cmsg_Draw)(thud_cmsg* pThis); // [Draw at 0x74A1AF] [0x38] ()i
    int(__cdecl* fn_DrawAll)(); // [DrawAll at 0x74AD67] [0x3C] ()i
};


// 6 members
struct thud_cmsg {
    thud_cmsgDecl* decl; // 0x0
    int    refs;  // 0x4
    float m_fade; // 0x8 <type_f>
    float m_time; // 0xC <type_f>
    float m_alpha; // 0x10 <type_f>
    BBString* m_mvpMessage; // 0x14 <type_$>
    int m_team; // 0x18 <type_i>
    tpl* m_mvp; // 0x1C <type_:tpl>
};


