#pragma once

#include "defines.h"

// 2 methods, 22 functions
struct TitemDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 64(0x40)
    int(__cdecl* m_Titem_New)(Titem* pThis); // [New at 0x671976] [0x10] ()i
    int(__cdecl* m_Titem_Delete)(Titem* pThis); // [Delete at 0x6719F6] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Titem*(__cdecl* fn_add)(int a1, int a2, int a3, int a4); // [add at 0x671A04] [0x30] (i,i,i,i):Titem
    int(__cdecl* fn_getnextfreeid)(); // [getnextfreeid at 0x671AB7] [0x34] ()i
    int(__cdecl* fn_freeall)(); // [freeall at 0x671B4C] [0x38] ()i
    int(__cdecl* fn_freealltype)(int a1); // [freealltype at 0x671BB0] [0x3C] (i)i
    int(__cdecl* fn_freedropped)(int a1); // [freedropped at 0x671CC2] [0x40] (i)i
    int(__cdecl* fn_droppedcount)(); // [droppedcount at 0x671D57] [0x44] ()i
    Titem*(__cdecl* fn_give)(int a1, int a2, int a3, int a4); // [give at 0x671DBE] [0x48] (i,i,i,i):Titem
    int(__cdecl* fn_free)(int a1); // [free at 0x672BA3] [0x4C] (i)i
    int(__cdecl* fn_freeatplayer)(int a1, int a2); // [freeatplayer at 0x672C1E] [0x50] (i,i)i
    int(__cdecl* fn_draw)(); // [draw at 0x672C9A] [0x54] ()i
    int(__cdecl* fn_countatplayer)(int a1, int a2); // [countatplayer at 0x67336A] [0x58] (i,i)i
    int(__cdecl* fn_counttypeatplayer)(int a1, int a2); // [counttypeatplayer at 0x673405] [0x5C] (i,i)i
    int(__cdecl* fn_counttypeammoinatplayer)(int a1, int a2); // [counttypeammoinatplayer at 0x67347C] [0x60] (i,i)i
    int(__cdecl* fn_refillammo)(int a1, int a2, int a3); // [refillammo at 0x6734F3] [0x64] (i,i,i)i
    Titem*(__cdecl* fn_get)(int a1); // [get at 0x6735AD] [0x68] (i):Titem
    int(__cdecl* fn_getattile)(int a1, int a2, int a3); // [getattile at 0x673613] [0x6C] (i,i,i)i
    int(__cdecl* fn_countAtTile)(int a1, int a2, int a3); // [countAtTile at 0x6736C2] [0x70] (i,i,i)i
    Titem*(__cdecl* fn_gettype)(int a1); // [gettype at 0x673775] [0x74] (i):Titem
    int(__cdecl* fn_removeone)(int a1, int a2); // [removeone at 0x6737FC] [0x78] (i,i)i
    int(__cdecl* fn_fadeout)(int a1); // [fadeout at 0x67393D] [0x7C] (i)i
    int(__cdecl* fn_dropoldarmor)(Tpl* a1); // [dropoldarmor at 0x673C0F] [0x80] (:Tpl)i
    int(__cdecl* fn_GetTypeID)(BBString* a1); // [GetTypeID at 0x673D5D] [0x84] ($)i
};


// 14 members
struct Titem {
    TitemDecl* decl; // 0x0
    unsigned int    kind;  // 0x4 DebugeclCodes (?)
    int m_id; // 0x8 <type_i>
    int m_typ; // 0xC <type_i>
    int m_player; // 0x10 <type_i>
    int m_ammo; // 0x14 <type_i>
    int m_ammoin; // 0x18 <type_i>
    int m_mode; // 0x1C <type_i>
    int m_x; // 0x20 <type_i>
    int m_y; // 0x24 <type_i>
    float m_rot; // 0x28 <type_f>
    int m_water; // 0x2C <type_i>
    float m_watertimer; // 0x30 <type_f>
    int m_dropped; // 0x34 <type_i>
    int m_droptimer; // 0x38 <type_i>
    int m_visible; // 0x3C <type_i>
};


