#pragma once

#include "defines.h"

// 9 methods, 0 functions
struct TChannelDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TChannel_New)(TChannel* pThis); // [New at 0x79765F] [0x10] ()i
    int(__cdecl* m_TChannel_Delete)(TChannel* pThis); // [Delete at 0x797681] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TChannel_Stop)(TChannel* pThis); // [Stop at 0x79768F] [0x30] ()i
    int(__cdecl* m_TChannel_SetPaused)(TChannel* pThis, int a1); // [SetPaused at 0x79769D] [0x34] (i)i
    int(__cdecl* m_TChannel_SetVolume)(TChannel* pThis, float a1); // [SetVolume at 0x7976AB] [0x38] (f)i
    int(__cdecl* m_TChannel_SetPan)(TChannel* pThis, float a1); // [SetPan at 0x7976B9] [0x3C] (f)i
    int(__cdecl* m_TChannel_SetDepth)(TChannel* pThis, float a1); // [SetDepth at 0x7976C7] [0x40] (f)i
    int(__cdecl* m_TChannel_SetRate)(TChannel* pThis, float a1); // [SetRate at 0x7976D5] [0x44] (f)i
    int(__cdecl* m_TChannel_Playing)(TChannel* pThis); // [Playing at 0x7976E3] [0x48] ()i
};


// 0 members
struct TChannel {
    TChannelDecl* decl; // 0x0
    int    refs;  // 0x4
};


