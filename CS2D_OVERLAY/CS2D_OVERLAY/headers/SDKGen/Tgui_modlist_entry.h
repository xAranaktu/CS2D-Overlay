#pragma once

#include "defines.h"

// 3 methods, 0 functions
struct Tgui_modlist_entryDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_Tgui_modlist_entry_New)(Tgui_modlist_entry* pThis); // [New at 0x735305] [0x10] ()i
    int(__cdecl* m_Tgui_modlist_entry_Delete)(Tgui_modlist_entry* pThis); // [Delete at 0x735344] [0x14] ()i
    void* nothing_5; // 0x18
    int(__cdecl* m_Tgui_modlist_entry_Compare)(Tgui_modlist_entry* pThis, Object* a1); // [Compare at 0x735379] [0x1C] (:Object)i
};


// 3 members
struct Tgui_modlist_entry {
    Tgui_modlist_entryDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_path; // 0x8 <type_$>
    void* m_info; // 0xC <type_[]$>
    int m_enabled; // 0x10 <type_i>
};


