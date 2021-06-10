#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DVERTEXELEMENT9Decl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_D3DVERTEXELEMENT9_New)(D3DVERTEXELEMENT9* pThis); // [New at 0x7A252A] [0x10] ()i
    int(__cdecl* m_D3DVERTEXELEMENT9_Delete)(D3DVERTEXELEMENT9* pThis); // [Delete at 0x7A2568] [0x14] ()i
};


// 6 members
struct D3DVERTEXELEMENT9 {
    D3DVERTEXELEMENT9Decl* decl; // 0x0
    int    refs;  // 0x4
    short m_Stream; // 0x8 <type_s>
    short m_Offset; // 0xA <type_s>
    char m_Type_; // 0xC <type_b>
    char m_Method_; // 0xD <type_b>
    char m_Usage; // 0xE <type_b>
    char m_UsageIndex; // 0xF <type_b>
};


