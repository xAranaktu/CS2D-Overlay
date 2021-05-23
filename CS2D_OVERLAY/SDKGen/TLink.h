#pragma once

#include "defines.h"

// 6 methods, 0 functions
struct TLinkDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_TLink_New)(TLink* pThis); // [New at 0x7AFF87] [0x10] ()i
    int(__cdecl* m_TLink_Delete)(TLink* pThis); // [Delete at 0x7AFFCA] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Object*(__cdecl* m_TLink_Value)(TLink* pThis); // [Value at 0x7B0010] [0x30] ():Object
    TLink*(__cdecl* m_TLink_NextLink)(TLink* pThis); // [NextLink at 0x7B001F] [0x34] ():TLink
    TLink*(__cdecl* m_TLink_PrevLink)(TLink* pThis); // [PrevLink at 0x7B0040] [0x38] ():TLink
    int(__cdecl* m_TLink_Remove)(TLink* pThis); // [Remove at 0x7B0061] [0x3C] ()i
};


// 3 members
struct TLink {
    TLinkDecl* decl; // 0x0
    unsigned int    kind;  // 0x4 DebugeclCodes (?)
    Object* m__value; // 0x8 <type_:Object>
    TLink* m__succ; // 0xC <type_:TLink>
    TLink* m__pred; // 0x10 <type_:TLink>
};


