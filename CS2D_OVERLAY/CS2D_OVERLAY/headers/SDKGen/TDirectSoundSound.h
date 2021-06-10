#pragma once

#include "defines.h"

// 4 methods, 1 functions
struct TDirectSoundSoundDecl {
    void* pSuper;  // 0x0 0x8E69B4
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_TDirectSoundSound_New)(TDirectSoundSound* pThis); // [New at 0x7959C7] [0x10] ()i
    int(__cdecl* m_TDirectSoundSound_Delete)(TDirectSoundSound* pThis); // [Delete at 0x795A10] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TDirectSoundChannel*(__cdecl* m_TDirectSoundSound_Play)(TDirectSoundSound* pThis, TChannel* a1); // [Play at 0x795A5E] [0x30] (:TChannel):TDirectSoundChannel
    TDirectSoundChannel*(__cdecl* m_TDirectSoundSound_Cue)(TDirectSoundSound* pThis, TChannel* a1); // [Cue at 0x795A88] [0x34] (:TChannel):TDirectSoundChannel
    void* nothing_13; // 0x38
    TDirectSoundSound*(__cdecl* fn_Create)(TAudioSample* a1, int a2); // [Create at 0x795ACE] [0x3C] (:TAudioSample,i):TDirectSoundSound
};


// Super: 0x8E69B4
// 5 members
struct TDirectSoundSound {
    TDirectSoundSoundDecl* decl; // 0x0
    int    refs;  // 0x4
    int m__seq; // 0x8 <type_i>
    void* m__buffer; // 0xC <type_?IDirectSoundBuffer>
    int m__hertz; // 0x10 <type_i>
    int m__loop; // 0x14 <type_i>
    TBuf* m__bufs; // 0x18 <type_:TBuf>
};


