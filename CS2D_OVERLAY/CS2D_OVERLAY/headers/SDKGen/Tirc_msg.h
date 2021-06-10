#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct Tirc_msgDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 52(0x34)
    int(__cdecl* m_Tirc_msg_New)(Tirc_msg* pThis); // [New at 0x783A8B] [0x10] ()i
    int(__cdecl* m_Tirc_msg_Delete)(Tirc_msg* pThis); // [Delete at 0x783B22] [0x14] ()i
};


// 11 members
struct Tirc_msg {
    Tirc_msgDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_arrival; // 0x8 <type_i>
    BBString* m_msg; // 0xC <type_$>
    BBString* m_head; // 0x10 <type_$>
    BBString* m_body; // 0x14 <type_$>
    BBString* m_nick; // 0x18 <type_$>
    BBString* m_host; // 0x1C <type_$>
    BBString* m_cmd; // 0x20 <type_$>
    BBString* m_p1; // 0x24 <type_$>
    BBString* m_p2; // 0x28 <type_$>
    BBString* m_p3; // 0x2C <type_$>
    BBString* m_chan; // 0x30 <type_$>
};


