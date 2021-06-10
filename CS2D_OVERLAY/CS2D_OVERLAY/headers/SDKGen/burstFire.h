#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct burstFireDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_burstFire_New)(burstFire* pThis); // [New at 0x6C74D0] [0x10] ()i
    int(__cdecl* m_burstFire_Delete)(burstFire* pThis); // [Delete at 0x6C751F] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Create)(tpl* a1, int a2, float a3, float a4, float a5); // [Create at 0x6C7541] [0x30] (:tpl,i,f,f,f)i
    int(__cdecl* fn_Update)(); // [Update at 0x6C75CA] [0x34] ()i
};


// 7 members
struct burstFire {
    burstFireDecl* decl; // 0x0
    int    refs;  // 0x4
    Tpl* m_p; // 0x8 <type_:Tpl>
    int m_style; // 0xC <type_i>
    float m_angle; // 0x10 <type_f>
    float m_time; // 0x14 <type_f>
    float m_starttime; // 0x18 <type_f>
    float m_damage; // 0x1C <type_f>
    int m_wpn; // 0x20 <type_i>
};


