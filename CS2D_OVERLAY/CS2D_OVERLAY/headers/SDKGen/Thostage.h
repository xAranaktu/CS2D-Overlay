#pragma once

#include "defines.h"

// 5 methods, 9 functions
struct ThostageDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 96(0x60)
    int(__cdecl* m_Thostage_New)(Thostage* pThis); // [New at 0x65B966] [0x10] ()i
    int(__cdecl* m_Thostage_Delete)(Thostage* pThis); // [Delete at 0x65BA1C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_freeall)(); // [freeall at 0x65BA2A] [0x30] ()i
    Thostage*(__cdecl* fn_get)(int a1); // [get at 0x65BA8E] [0x34] (i):Thostage
    Thostage*(__cdecl* fn_add)(int a1); // [add at 0x65BAF4] [0x38] (i):Thostage
    int(__cdecl* fn_draw)(); // [draw at 0x65BC05] [0x3C] ()i
    int(__cdecl* fn_use)(int a1, int a2, int a3); // [use at 0x65C474] [0x40] (i,i,i)i
    int(__cdecl* m_Thostage_findtarget)(Thostage* pThis); // [findtarget at 0x65C73A] [0x44] ()i
    int(__cdecl* m_Thostage_damage)(Thostage* pThis, int a1, int a2); // [damage at 0x65CB04] [0x48] (i,i)i
    int(__cdecl* m_Thostage_rescue)(Thostage* pThis); // [rescue at 0x65D09A] [0x4C] ()i
    int(__cdecl* fn_rescueAchievement)(Tpl* a1); // [rescueAchievement at 0x65D3AD] [0x50] (:Tpl)i
    int(__cdecl* fn_livingcount)(); // [livingcount at 0x65D402] [0x54] ()i
    Thostage*(__cdecl* fn_getrandom)(int a1); // [getrandom at 0x65D469] [0x58] (i):Thostage
    Thostage*(__cdecl* fn_getclose)(Tpl* a1); // [getclose at 0x65D604] [0x5C] (:Tpl):Thostage
};


// 22 members
struct Thostage {
    ThostageDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_id; // 0x8 <type_i>
    int m_health; // 0xC <type_i>
    int m_follow; // 0x10 <type_i>
    int m_used; // 0x14 <type_i>
    int m_look; // 0x18 <type_i>
    float m_x; // 0x1C <type_f>
    float m_y; // 0x20 <type_f>
    float m_rot; // 0x24 <type_f>
    int m_movedframe; // 0x28 <type_i>
    int m_lastmove; // 0x2C <type_i>
    int m_laststep; // 0x30 <type_i>
    int m_feetframe; // 0x34 <type_i>
    int m_feettimer; // 0x38 <type_i>
    int m_feetrot; // 0x3C <type_i>
    int m_rotoffset; // 0x40 <type_i>
    int m_blocked; // 0x44 <type_i>
    int m_tx; // 0x48 <type_i>
    int m_ty; // 0x4C <type_i>
    int m_tilex; // 0x50 <type_i>
    int m_tiley; // 0x54 <type_i>
    int m_temp; // 0x58 <type_i>
    int m_fog; // 0x5C <type_i>
};


