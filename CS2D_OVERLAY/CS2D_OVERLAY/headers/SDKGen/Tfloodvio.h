#pragma once

#include "defines.h"

// 2 methods, 1 functions
struct TfloodvioDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_Tfloodvio_New)(Tfloodvio* pThis); // [New at 0x7848E7] [0x10] ()i
    int(__cdecl* m_Tfloodvio_Delete)(Tfloodvio* pThis); // [Delete at 0x784917] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_add)(int a1); // [add at 0x784925] [0x30] (i)i
};


// 2 members
struct Tfloodvio {
    TfloodvioDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_ip; // 0x8 <type_i>
    int m_count; // 0xC <type_i>
};


