#pragma once

#include "defines.h"

// 3 methods, 1 functions
struct Tgui_replaylistentryDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_Tgui_replaylistentry_New)(Tgui_replaylistentry* pThis); // [New at 0x732987] [0x10] ()i
    int(__cdecl* m_Tgui_replaylistentry_Delete)(Tgui_replaylistentry* pThis); // [Delete at 0x7329DF] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Tgui_replaylistentry*(__cdecl* fn_Create)(BBString* a1, BBString* a2); // [Create at 0x732A25] [0x30] ($,$):Tgui_replaylistentry
    int(__cdecl* m_Tgui_replaylistentry_LoadData)(Tgui_replaylistentry* pThis); // [LoadData at 0x732A7F] [0x34] ()i
};


// 6 members
struct Tgui_replaylistentry {
    Tgui_replaylistentryDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_fileName; // 0x8 <type_$>
    BBString* m_folder; // 0xC <type_$>
    int m_isLoaded; // 0x10 <type_i>
    int m_replayType; // 0x14 <type_i>
    BBString* m_map; // 0x18 <type_$>
    int m_duration; // 0x1C <type_i>
};


