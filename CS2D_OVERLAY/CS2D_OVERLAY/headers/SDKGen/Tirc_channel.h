#pragma once

#include "defines.h"

// 6 methods, 1 functions
struct Tirc_channelDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_Tirc_channel_New)(Tirc_channel* pThis); // [New at 0x783BDF] [0x10] ()i
    int(__cdecl* m_Tirc_channel_Delete)(Tirc_channel* pThis); // [Delete at 0x783C17] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Tirc_channel_adduser)(Tirc_channel* pThis, BBString* a1); // [adduser at 0x783C4C] [0x30] ($)i
    int(__cdecl* m_Tirc_channel_freeuser)(Tirc_channel* pThis, BBString* a1); // [freeuser at 0x783ED7] [0x34] ($)i
    int(__cdecl* m_Tirc_channel_changenick)(Tirc_channel* pThis, BBString* a1, BBString* a2); // [changenick at 0x783F60] [0x38] ($,$)i
    int(__cdecl* m_Tirc_channel_createuserlist)(Tirc_channel* pThis); // [createuserlist at 0x784079] [0x3C] ()i
    BBString*(__cdecl* fn_getrandomuser)(Tirc_server* a1, BBString* a2); // [getrandomuser at 0x784169] [0x40] (:Tirc_server,$)$
};


// 2 members
struct Tirc_channel {
    Tirc_channelDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_name; // 0x8 <type_$>
    TList* m_users; // 0xC <type_:TList>
};


