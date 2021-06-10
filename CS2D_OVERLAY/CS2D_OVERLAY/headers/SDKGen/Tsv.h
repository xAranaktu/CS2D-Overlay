#pragma once

#include "defines.h"

// 3 methods, 4 functions
struct TsvDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 124(0x7C)
    int(__cdecl* m_Tsv_New)(Tsv* pThis); // [New at 0x728288] [0x10] ()i
    int(__cdecl* m_Tsv_Delete)(Tsv* pThis); // [Delete at 0x72838B] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Tsv*(__cdecl* fn_get)(int a1, int a2, TList* a3); // [get at 0x7283D1] [0x30] (i,i,:TList):Tsv
    Tsv*(__cdecl* fn_add)(int a1, int a2, TList* a3, int a4); // [add at 0x728445] [0x34] (i,i,:TList,i):Tsv
    Tsv*(__cdecl* fn_addNoCheck)(int a1, int a2, TList* a3, int a4); // [addNoCheck at 0x728481] [0x38] (i,i,:TList,i):Tsv
    int(__cdecl* m_Tsv_refresh)(Tsv* pThis); // [refresh at 0x7284FD] [0x3C] ()i
    int(__cdecl* fn_copy)(Tsv* a1, Tsv* a2); // [copy at 0x728571] [0x40] (:Tsv,:Tsv)i
};


// 29 members
struct Tsv {
    TsvDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_ip; // 0x8 <type_i>
    int m_port; // 0xC <type_i>
    int m_active; // 0x10 <type_i>
    int m_inforeqstate; // 0x14 <type_i>
    int m_inforeqs; // 0x18 <type_i>
    int m_pw; // 0x1C <type_i>
    int m_user; // 0x20 <type_i>
    int m_fog; // 0x24 <type_i>
    int m_light; // 0x28 <type_i>
    int m_dynrecoil; // 0x2C <type_i>
    int m_offScreenDamage; // 0x30 <type_i>
    int m_hasTransfers; // 0x34 <type_i>
    BBString* m_name; // 0x38 <type_$>
    BBString* m_map; // 0x3C <type_$>
    int m_pl; // 0x40 <type_i>
    int m_plmax; // 0x44 <type_i>
    int m_existingmap; // 0x48 <type_i>
    int m_ff; // 0x4C <type_i>
    int m_version; // 0x50 <type_i>
    int m_gmode; // 0x54 <type_i>
    int m_lua; // 0x58 <type_i>
    int m_bots; // 0x5C <type_i>
    int m_ping; // 0x60 <type_i>
    void* m_pings; // 0x64 <type_[]i>
    int m_pingt; // 0x68 <type_i>
    int m_pingc; // 0x6C <type_i>
    int m_gotping; // 0x70 <type_i>
    int m_pingblend; // 0x74 <type_i>
    int m_lan; // 0x78 <type_i>
};


