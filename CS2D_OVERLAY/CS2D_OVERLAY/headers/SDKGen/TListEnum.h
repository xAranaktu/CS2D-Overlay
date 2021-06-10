#pragma once

#include "defines.h"

// 4 methods, 0 functions
struct TListEnumDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TListEnum_New)(TListEnum* pThis); // [New at 0x7B00D2] [0x10] ()i
    int(__cdecl* m_TListEnum_Delete)(TListEnum* pThis); // [Delete at 0x7B00FF] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TListEnum_HasNext)(TListEnum* pThis); // [HasNext at 0x7B0121] [0x30] ()i
    Object*(__cdecl* m_TListEnum_NextObject)(TListEnum* pThis); // [NextObject at 0x7B013C] [0x34] ():Object
};


// 1 members
struct TListEnum {
    TListEnumDecl* decl; // 0x0
    int    refs;  // 0x4
    TLink* m__link; // 0x8 <type_:TLink>
};


