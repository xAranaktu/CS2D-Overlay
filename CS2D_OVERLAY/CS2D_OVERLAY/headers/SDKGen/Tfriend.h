#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct TfriendDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 48(0x30)
    int(__cdecl* m_Tfriend_New)(Tfriend* pThis); // [New at 0x731FF3] [0x10] ()i
    int(__cdecl* m_Tfriend_Delete)(Tfriend* pThis); // [Delete at 0x73205C] [0x14] ()i
};


// 8 members
struct Tfriend {
    TfriendDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_name; // 0x8 <type_$>
    long long m_id; // 0x10 <type_l>
    int m_online; // 0x18 <type_i>
    int m_playing; // 0x1C <type_i>
    int m_ip; // 0x20 <type_i>
    int m_port; // 0x24 <type_i>
    tpl* m_pl; // 0x28 <type_:tpl>
    int m_personastate; // 0x2C <type_i>
};


