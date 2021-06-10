#pragma once

#include "defines.h"

// 4 methods, 1 functions
struct TOpenALSoundDecl {
    void* pSuper;  // 0x0 0x8E69B4
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 16(0x10)
    int(__cdecl* m_TOpenALSound_New)(TOpenALSound* pThis); // [New at 0x793865] [0x10] ()i
    int(__cdecl* m_TOpenALSound_Delete)(TOpenALSound* pThis); // [Delete at 0x793895] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TOpenALChannel*(__cdecl* m_TOpenALSound_Play)(TOpenALSound* pThis, TChannel* a1); // [Play at 0x793902] [0x30] (:TChannel):TOpenALChannel
    TOpenALChannel*(__cdecl* m_TOpenALSound_Cue)(TOpenALSound* pThis, TChannel* a1); // [Cue at 0x79392C] [0x34] (:TChannel):TOpenALChannel
    void* nothing_13; // 0x38
    TOpenALSound*(__cdecl* fn_Create)(TAudioSample* a1, int a2); // [Create at 0x793972] [0x3C] (:TAudioSample,i):TOpenALSound
};


// Super: 0x8E69B4
// 2 members
struct TOpenALSound {
    TOpenALSoundDecl* decl; // 0x0
    int    refs;  // 0x4
    int m__buffer; // 0x8 <type_i>
    int m__loop; // 0xC <type_i>
};


