#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct LeaderboardRequestDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_LeaderboardRequest_New)(LeaderboardRequest* pThis); // [New at 0x72EF74] [0x10] ()i
    int(__cdecl* m_LeaderboardRequest_Delete)(LeaderboardRequest* pThis); // [Delete at 0x72EFA4] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_Clear)(); // [Clear at 0x72EFB2] [0x30] ()i
    int(__cdecl* fn_update)(); // [update at 0x72EFFD] [0x34] ()i
    int(__cdecl* fn_add)(int a1); // [add at 0x72F15B] [0x38] (i)i
};


// 2 members
struct LeaderboardRequest {
    LeaderboardRequestDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_id; // 0x8 <type_i>
    int m_timer; // 0xC <type_i>
};


