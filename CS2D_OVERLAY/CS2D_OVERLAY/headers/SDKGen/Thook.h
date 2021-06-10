#pragma once

#include "defines.h"

// 13 methods, 0 functions
struct ThookDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_Thook_New)(Thook* pThis); // [New at 0x76B393] [0x10] ()i
    int(__cdecl* m_Thook_Delete)(Thook* pThis); // [Delete at 0x76B3E0] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_Thook_call)(Thook* pThis); // [call at 0x76B415] [0x30] ()i
    int(__cdecl* m_Thook_pushInt)(Thook* pThis, int a1); // [pushInt at 0x76B508] [0x34] (i)i
    int(__cdecl* m_Thook_pushFloat)(Thook* pThis, float a1); // [pushFloat at 0x76B57E] [0x38] (f)i
    int(__cdecl* m_Thook_pushString)(Thook* pThis, BBString* a1); // [pushString at 0x76B604] [0x3C] ($)i
    int(__cdecl* m_Thook_pushBool)(Thook* pThis, int a1); // [pushBool at 0x76B695] [0x40] (i)i
    int(__cdecl* m_Thook_pushTableString)(Thook* pThis, TList* a1); // [pushTableString at 0x76B730] [0x44] (:TList)i
    int(__cdecl* m_Thook_run)(Thook* pThis); // [run at 0x76B848] [0x48] ()i
    int(__cdecl* m_Thook_runIntResult)(Thook* pThis, void* a1); // [runIntResult at 0x76B886] [0x4C] (*i)i
    int(__cdecl* m_Thook_runFloatResult)(Thook* pThis, void* a1); // [runFloatResult at 0x76B8EB] [0x50] (*f)i
    int(__cdecl* m_Thook_runStringResult)(Thook* pThis, void* a1); // [runStringResult at 0x76B950] [0x54] (*$)i
    int(__cdecl* m_Thook_errorMessage)(Thook* pThis); // [errorMessage at 0x76B9CA] [0x58] ()i
};


// 5 members
struct Thook {
    ThookDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_hookID; // 0x8 <type_i>
    BBString* m_name; // 0xC <type_$>
    int m_priority; // 0x10 <type_i>
    int m_intable; // 0x14 <type_i>
    void* m_tables; // 0x18 <type_[]$>
};


