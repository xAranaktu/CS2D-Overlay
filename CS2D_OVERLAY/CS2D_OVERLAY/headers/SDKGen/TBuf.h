#pragma once

#include "defines.h"

// 4 methods, 0 functions
struct TBufDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_TBuf_New)(TBuf* pThis); // [New at 0x79585E] [0x10] ()i
    int(__cdecl* m_TBuf_Delete)(TBuf* pThis); // [Delete at 0x7958A0] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TBuf_Playing)(TBuf* pThis); // [Playing at 0x7958C2] [0x30] ()i
    int(__cdecl* m_TBuf_Active)(TBuf* pThis); // [Active at 0x795915] [0x34] ()i
};


// 4 members
struct TBuf {
    TBufDecl* decl; // 0x0
    int    refs;  // 0x4
    TBuf* m__succ; // 0x8 <type_:TBuf>
    void* m__buffer; // 0xC <type_?IDirectSoundBuffer>
    int m__seq; // 0x10 <type_i>
    int m__paused; // 0x14 <type_i>
};


