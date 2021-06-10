#pragma once

#include "defines.h"

// 2 methods, 2 functions
struct TfloodguardDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 22(0x16)
    int(__cdecl* m_Tfloodguard_New)(Tfloodguard* pThis); // [New at 0x784A5A] [0x10] ()i
    int(__cdecl* m_Tfloodguard_Delete)(Tfloodguard* pThis); // [Delete at 0x784A9C] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_guard)(int a1, char a2, char a3, void* a4); // [guard at 0x784AAA] [0x30] (i,b,b,s)i
    int(__cdecl* fn_iguard)(char a1, int a2, char a3, char a4, void* a5); // [iguard at 0x784CC2] [0x34] (b,i,b,b,s)i
};


// 6 members
struct Tfloodguard {
    TfloodguardDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_ip; // 0x8 <type_i>
    char m_id; // 0xC <type_b>
    char m_msg; // 0xD <type_b>
    char m_count; // 0xE <type_b>
    int m_stamp; // 0x10 <type_i>
    void* m_frame; // 0x14 <type_s>
};


