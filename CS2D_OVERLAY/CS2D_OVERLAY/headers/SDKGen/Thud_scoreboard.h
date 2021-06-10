#pragma once

#include "defines.h"

// 2 methods, 12 functions
struct Thud_scoreboardDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_Thud_scoreboard_New)(Thud_scoreboard* pThis); // [New at 0x73D71C] [0x10] ()i
    int(__cdecl* m_Thud_scoreboard_Delete)(Thud_scoreboard* pThis); // [Delete at 0x73D73E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_draw)(int a1); // [draw at 0x73D74C] [0x30] (i)i
    int(__cdecl* fn_drawBase)(); // [drawBase at 0x73E013] [0x34] ()i
    int(__cdecl* fn_drawWithTeams)(); // [drawWithTeams at 0x73E59C] [0x38] ()i
    int(__cdecl* fn_drawWithoutTeams)(); // [drawWithoutTeams at 0x73EAE0] [0x3C] ()i
    int(__cdecl* fn_drawTeamHeader)(int a1, int a2, int a3, BBString* a4, int a5, BBString* a6); // [drawTeamHeader at 0x73ED6E] [0x40] (i,i,i,$,i,$)i
    BBString*(__cdecl* fn_columnName)(BBString* a1); // [columnName at 0x73F083] [0x44] ($)$
    int(__cdecl* fn_drawTeamColumns)(int a1, int a2, int a3); // [drawTeamColumns at 0x73F0A9] [0x48] (i,i,i)i
    int(__cdecl* fn_drawPlayer)(Tpl* a1, int a2, int a3, int a4, int a5, int a6); // [drawPlayer at 0x73F2AC] [0x4C] (:Tpl,i,i,i,i,i)i
    float(__cdecl* fn_drawTxt)(BBString* a1, int a2, int a3, int a4); // [drawTxt at 0x740EBE] [0x50] ($,i,i,i)f
    int(__cdecl* fn_drawSpectators)(); // [drawSpectators at 0x74104F] [0x54] ()i
    int(__cdecl* fn_drawHover)(); // [drawHover at 0x74144F] [0x58] ()i
    int(__cdecl* fn_calculatePossibleSlotCount)(); // [calculatePossibleSlotCount at 0x741CFC] [0x5C] ()i
};


// 0 members
struct Thud_scoreboard {
    Thud_scoreboardDecl* decl; // 0x0
    int    refs;  // 0x4
};


