#pragma once

#include "defines.h"

// 3 methods, 13 functions
struct Thud_msgDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 64(0x40)
    int(__cdecl* m_Thud_msg_New)(Thud_msg* pThis); // [New at 0x7455D3] [0x10] ()i
    int(__cdecl* m_Thud_msg_Delete)(Thud_msg* pThis); // [Delete at 0x7456A1] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_freeall)(); // [freeall at 0x74572B] [0x30] ()i
    int(__cdecl* fn_shadetxt)(float a1, float a2, BBString* a3, int a4, int a5, int a6); // [shadetxt at 0x7458F5] [0x34] (f,f,$,i,i,i)i
    int(__cdecl* fn_add_center)(BBString* a1, int a2, int a3, int a4, int a5, int a6); // [add_center at 0x745963] [0x38] ($,i,i,i,i,i)i
    int(__cdecl* fn_draw_center)(); // [draw_center at 0x745C3A] [0x3C] ()i
    int(__cdecl* fn_add_action)(BBString* a1, int a2, int a3, int a4, int a5); // [add_action at 0x7461B2] [0x40] ($,i,i,i,i)i
    int(__cdecl* fn_draw_action)(); // [draw_action at 0x7462E5] [0x44] ()i
    int(__cdecl* fn_add_kill)(int a1, int a2, int a3, int a4, int a5, BBString* a6); // [add_kill at 0x74669E] [0x48] (i,i,i,i,i,$)i
    int(__cdecl* fn_draw_kill)(); // [draw_kill at 0x746BFB] [0x4C] ()i
    Thud_msg*(__cdecl* fn_add_chat)(int a1, BBString* a2, int a3, int a4, int a5, int a6); // [add_chat at 0x747E5F] [0x50] (i,$,i,i,i,i):Thud_msg
    int(__cdecl* fn_draw_chat)(); // [draw_chat at 0x74848B] [0x54] ()i
    Thud_msg*(__cdecl* fn_add_money)(int a1, int a2); // [add_money at 0x749854] [0x58] (i,i):Thud_msg
    int(__cdecl* fn_draw_money)(); // [draw_money at 0x749953] [0x5C] ()i
    int(__cdecl* fn_draw_csm)(); // [draw_csm at 0x749C1A] [0x60] ()i
    int(__cdecl* m_Thud_msg_tintTeamColor)(Thud_msg* pThis, int a1, Tpl* a2); // [tintTeamColor at 0x74A03B] [0x64] (i,:Tpl)i
};


// 14 members
struct Thud_msg {
    Thud_msgDecl* decl; // 0x0
    int    refs;  // 0x4
    void* m_txt; // 0x8 <type_[]$>
    void* m_r; // 0xC <type_[]i>
    void* m_g; // 0x10 <type_[]i>
    void* m_b; // 0x14 <type_[]i>
    void* m_wpnimg; // 0x18 <type_[]i>
    int m_extra; // 0x1C <type_i>
    int m_advanced; // 0x20 <type_i>
    TImage* m_img; // 0x24 <type_:TImage>
    int m_timer; // 0x28 <type_i>
    int m_show; // 0x2C <type_i>
    float m_fade; // 0x30 <type_f>
    float m_offset; // 0x34 <type_f>
    int m_team; // 0x38 <type_i>
    tpl* m_player; // 0x3C <type_:tpl>
};


