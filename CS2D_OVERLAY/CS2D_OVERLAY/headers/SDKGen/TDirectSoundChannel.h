#pragma once

#include "defines.h"

// 10 methods, 1 functions
struct TDirectSoundChannelDecl {
    void* pSuper;  // 0x0 0x8E6AD8
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 44(0x2C)
    int(__cdecl* m_TDirectSoundChannel_New)(TDirectSoundChannel* pThis); // [New at 0x795D7A] [0x10] ()i
    int(__cdecl* m_TDirectSoundChannel_Delete)(TDirectSoundChannel* pThis); // [Delete at 0x795DDD] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TDirectSoundChannel_Stop)(TDirectSoundChannel* pThis); // [Stop at 0x795E65] [0x30] ()i
    int(__cdecl* m_TDirectSoundChannel_SetPaused)(TDirectSoundChannel* pThis, int a1); // [SetPaused at 0x795EF4] [0x34] (i)i
    int(__cdecl* m_TDirectSoundChannel_SetVolume)(TDirectSoundChannel* pThis, float a1); // [SetVolume at 0x795FB4] [0x38] (f)i
    int(__cdecl* m_TDirectSoundChannel_SetPan)(TDirectSoundChannel* pThis, float a1); // [SetPan at 0x796079] [0x3C] (f)i
    int(__cdecl* m_TDirectSoundChannel_SetDepth)(TDirectSoundChannel* pThis, float a1); // [SetDepth at 0x796199] [0x40] (f)i
    int(__cdecl* m_TDirectSoundChannel_SetRate)(TDirectSoundChannel* pThis, float a1); // [SetRate at 0x7961E1] [0x44] (f)i
    int(__cdecl* m_TDirectSoundChannel_Playing)(TDirectSoundChannel* pThis); // [Playing at 0x796260] [0x48] ()i
    int(__cdecl* m_TDirectSoundChannel_Cue)(TDirectSoundChannel* pThis, TDirectSoundSound* a1); // [Cue at 0x7962AF] [0x4C] (:TDirectSoundSound)i
    TDirectSoundChannel*(__cdecl* fn_Create)(int a1); // [Create at 0x7964A2] [0x50] (i):TDirectSoundChannel
};


// Super: 0x8E6AD8
// 9 members
struct TDirectSoundChannel {
    TDirectSoundChannelDecl* decl; // 0x0
    int    refs;  // 0x4
    float m__volume; // 0x8 <type_f>
    float m__pan; // 0xC <type_f>
    float m__rate; // 0x10 <type_f>
    int m__static; // 0x14 <type_i>
    TSound* m__sound; // 0x18 <type_:TSound>
    TBuf* m__buf; // 0x1C <type_:TBuf>
    int m__seq; // 0x20 <type_i>
    int m__hertz; // 0x24 <type_i>
    int m__playFlags; // 0x28 <type_i>
};


