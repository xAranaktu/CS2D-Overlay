#pragma once

#include "defines.h"

// 2 methods, 8 functions
struct TVoteDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TVote_New)(TVote* pThis); // [New at 0x6DC271] [0x10] ()i
    int(__cdecl* m_TVote_Delete)(TVote* pThis); // [Delete at 0x6DC293] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_votekick)(int a1, int a2, int a3); // [votekick at 0x6DC2A1] [0x30] (i,i,i)i
    int(__cdecl* fn_votemap)(int a1, int a2, int a3); // [votemap at 0x6DC7BD] [0x34] (i,i,i)i
    int(__cdecl* fn_sendVoteAsClient)(int a1, int a2); // [sendVoteAsClient at 0x6DCD0D] [0x38] (i,i)i
    int(__cdecl* fn_forwardVoteAsServer)(int a1, int a2, int a3); // [forwardVoteAsServer at 0x6DCD85] [0x3C] (i,i,i)i
    int(__cdecl* fn_getVotesForPlayer)(int a1); // [getVotesForPlayer at 0x6DCE91] [0x40] (i)i
    int(__cdecl* fn_getVotesForMap)(int a1); // [getVotesForMap at 0x6DCF1D] [0x44] (i)i
    int(__cdecl* fn_tryKickPlayerWithVotes)(); // [tryKickPlayerWithVotes at 0x6DCFA9] [0x48] ()i
    int(__cdecl* fn_tryChangeMapWithVotes)(); // [tryChangeMapWithVotes at 0x6DD1A8] [0x4C] ()i
};


// 0 members
struct TVote {
    TVoteDecl* decl; // 0x0
    int    refs;  // 0x4
};


