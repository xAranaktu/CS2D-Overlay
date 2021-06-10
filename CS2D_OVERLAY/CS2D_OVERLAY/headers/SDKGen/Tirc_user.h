#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct Tirc_userDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_Tirc_user_New)(Tirc_user* pThis); // [New at 0x7842ED] [0x10] ()i
    int(__cdecl* m_Tirc_user_Delete)(Tirc_user* pThis); // [Delete at 0x78434C] [0x14] ()i
};


// 7 members
struct Tirc_user {
    Tirc_userDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_name; // 0x8 <type_$>
    BBString* m_host; // 0xC <type_$>
    BBString* m_dname; // 0x10 <type_$>
    int m_o; // 0x14 <type_i>
    int m_v; // 0x18 <type_i>
    int m_lastmsg; // 0x1C <type_i>
    int m_lastquery; // 0x20 <type_i>
};


