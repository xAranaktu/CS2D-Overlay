#pragma once

#include "defines.h"

// 9 methods, 2 functions
struct TCStreamDecl {
    void* pSuper;  // 0x0 0x8FC2BC
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_TCStream_New)(TCStream* pThis); // [New at 0x7B470F] [0x10] ()i
    int(__cdecl* m_TCStream_Delete)(TCStream* pThis); // [Delete at 0x7B474D] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    int(__cdecl* m_TCStream_Pos)(TCStream* pThis); // [Pos at 0x7B4778] [0x34] ()i
    int(__cdecl* m_TCStream_Size)(TCStream* pThis); // [Size at 0x7B4787] [0x38] ()i
    int(__cdecl* m_TCStream_Seek)(TCStream* pThis, int a1); // [Seek at 0x7B4796] [0x3C] (i)i
    int(__cdecl* m_TCStream_Flush)(TCStream* pThis); // [Flush at 0x7B4820] [0x40] ()i
    int(__cdecl* m_TCStream_Close)(TCStream* pThis); // [Close at 0x7B4842] [0x44] ()i
    int(__cdecl* m_TCStream_Read)(TCStream* pThis, void* a1, int a2); // [Read at 0x7B47C6] [0x48] (*b,i)i
    int(__cdecl* m_TCStream_Write)(TCStream* pThis, void* a1, int a2); // [Write at 0x7B47EC] [0x4C] (*b,i)i
    void* nothing_19; // 0x50
    void* nothing_20; // 0x54
    void* nothing_21; // 0x58
    void* nothing_22; // 0x5C
    void* nothing_23; // 0x60
    void* nothing_24; // 0x64
    void* nothing_25; // 0x68
    void* nothing_26; // 0x6C
    void* nothing_27; // 0x70
    void* nothing_28; // 0x74
    void* nothing_29; // 0x78
    void* nothing_30; // 0x7C
    void* nothing_31; // 0x80
    void* nothing_32; // 0x84
    void* nothing_33; // 0x88
    void* nothing_34; // 0x8C
    void* nothing_35; // 0x90
    void* nothing_36; // 0x94
    void* nothing_37; // 0x98
    void* nothing_38; // 0x9C
    void* nothing_39; // 0xA0
    TCStream*(__cdecl* fn_OpenFile)(BBString* a1, int a2, int a3); // [OpenFile at 0x7B488B] [0xA4] ($,i,i):TCStream
    TCStream*(__cdecl* fn_CreateWithCStream)(int a1, int a2); // [CreateWithCStream at 0x7B4908] [0xA8] (i,i):TCStream
};


// Super: 0x8FC2BC
// 4 members
struct TCStream {
    TCStreamDecl* decl; // 0x0
    int    refs;  // 0x4
    int m__pos; // 0x8 <type_i>
    int m__size; // 0xC <type_i>
    int m__cstream; // 0x10 <type_i>
    int m__mode; // 0x14 <type_i>
};


