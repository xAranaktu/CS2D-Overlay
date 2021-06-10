#pragma once

#include "defines.h"

// 2 methods, 3 functions
struct TconcmdDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_Tconcmd_New)(Tconcmd* pThis); // [New at 0x623EFF] [0x10] ()i
    int(__cdecl* m_Tconcmd_Delete)(Tconcmd* pThis); // [Delete at 0x623F37] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_loadcmds)(); // [loadcmds at 0x623F6C] [0x30] ()i
    int(__cdecl* fn_showalike)(BBString* a1); // [showalike at 0x6240EB] [0x34] ($)i
    int(__cdecl* fn_clickalike)(BBString* a1); // [clickalike at 0x6242F4] [0x38] ($)i
};


// 2 members
struct Tconcmd {
    TconcmdDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_cmd; // 0x8 <type_$>
    BBString* m_params; // 0xC <type_$>
};


