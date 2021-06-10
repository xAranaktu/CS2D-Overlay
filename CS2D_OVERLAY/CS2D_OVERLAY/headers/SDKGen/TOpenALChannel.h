#pragma once

#include "defines.h"

// 10 methods, 1 functions
struct TOpenALChannelDecl {
    void* pSuper;  // 0x0 0x8E6AD8
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_TOpenALChannel_New)(TOpenALChannel* pThis); // [New at 0x793A9A] [0x10] ()i
    int(__cdecl* m_TOpenALChannel_Delete)(TOpenALChannel* pThis); // [Delete at 0x793AD5] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TOpenALChannel_Stop)(TOpenALChannel* pThis); // [Stop at 0x793B80] [0x30] ()i
    int(__cdecl* m_TOpenALChannel_SetPaused)(TOpenALChannel* pThis, int a1); // [SetPaused at 0x793C52] [0x34] (i)i
    int(__cdecl* m_TOpenALChannel_SetVolume)(TOpenALChannel* pThis, float a1); // [SetVolume at 0x793CB0] [0x38] (f)i
    int(__cdecl* m_TOpenALChannel_SetPan)(TOpenALChannel* pThis, float a1); // [SetPan at 0x793CF2] [0x3C] (f)i
    int(__cdecl* m_TOpenALChannel_SetDepth)(TOpenALChannel* pThis, float a1); // [SetDepth at 0x793D69] [0x40] (f)i
    int(__cdecl* m_TOpenALChannel_SetRate)(TOpenALChannel* pThis, float a1); // [SetRate at 0x793D8C] [0x44] (f)i
    int(__cdecl* m_TOpenALChannel_Playing)(TOpenALChannel* pThis); // [Playing at 0x793DCE] [0x48] ()i
    int(__cdecl* m_TOpenALChannel_Cue)(TOpenALChannel* pThis, TOpenALSound* a1); // [Cue at 0x793DF8] [0x4C] (:TOpenALSound)i
    TOpenALChannel*(__cdecl* fn_Create)(int a1); // [Create at 0x793E82] [0x50] (i):TOpenALChannel
};


// Super: 0x8E6AD8
// 3 members
struct TOpenALChannel {
    TOpenALChannelDecl* decl; // 0x0
    int    refs;  // 0x4
    TOpenALSource* m__source; // 0x8 <type_:TOpenALSource>
    int m__seq; // 0xC <type_i>
    int m__static; // 0x10 <type_i>
};


