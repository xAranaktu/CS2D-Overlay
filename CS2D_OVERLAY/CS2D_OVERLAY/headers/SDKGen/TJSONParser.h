#pragma once

#include "defines.h"

// 4 methods, 0 functions
struct TJSONParserDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_TJSONParser_New)(TJSONParser* pThis); // [New at 0x6840D6] [0x10] ()i
    int(__cdecl* m_TJSONParser_Delete)(TJSONParser* pThis); // [Delete at 0x684111] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TJSONValue*(__cdecl* m_TJSONParser_Parse)(TJSONParser* pThis); // [Parse at 0x684133] [0x30] ():TJSONValue
    int(__cdecl* m_TJSONParser_Error)(TJSONParser* pThis, BBString* a1); // [Error at 0x684B7D] [0x34] ($)i
};


// 3 members
struct TJSONParser {
    TJSONParserDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_Source; // 0x8 <type_$>
    int m_Index; // 0xC <type_i>
    int m_MakeLowerCase; // 0x10 <type_i>
};


