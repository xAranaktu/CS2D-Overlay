#pragma once

#include "defines.h"

// 10 methods, 1 functions
struct TFreeAudioChannelDecl {
    void* pSuper;  // 0x0 0x8E6AD8
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TFreeAudioChannel_New)(TFreeAudioChannel* pThis); // [New at 0x796A28] [0x10] ()i
    int(__cdecl* m_TFreeAudioChannel_Delete)(TFreeAudioChannel* pThis); // [Delete at 0x796A51] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TFreeAudioChannel_Stop)(TFreeAudioChannel* pThis); // [Stop at 0x796A84] [0x30] ()i
    int(__cdecl* m_TFreeAudioChannel_SetPaused)(TFreeAudioChannel* pThis, int a1); // [SetPaused at 0x796AA9] [0x34] (i)i
    int(__cdecl* m_TFreeAudioChannel_SetVolume)(TFreeAudioChannel* pThis, float a1); // [SetVolume at 0x796AC9] [0x38] (f)i
    int(__cdecl* m_TFreeAudioChannel_SetPan)(TFreeAudioChannel* pThis, float a1); // [SetPan at 0x796AEE] [0x3C] (f)i
    int(__cdecl* m_TFreeAudioChannel_SetDepth)(TFreeAudioChannel* pThis, float a1); // [SetDepth at 0x796B13] [0x40] (f)i
    int(__cdecl* m_TFreeAudioChannel_SetRate)(TFreeAudioChannel* pThis, float a1); // [SetRate at 0x796B38] [0x44] (f)i
    int(__cdecl* m_TFreeAudioChannel_Playing)(TFreeAudioChannel* pThis); // [Playing at 0x796B5D] [0x48] ()i
    int(__cdecl* m_TFreeAudioChannel_Position)(TFreeAudioChannel* pThis); // [Position at 0x796BA5] [0x4C] ()i
    TFreeAudioChannel*(__cdecl* fn_CreateWithChannel)(int a1); // [CreateWithChannel at 0x796BBC] [0x50] (i):TFreeAudioChannel
};


// Super: 0x8E6AD8
// 1 members
struct TFreeAudioChannel {
    TFreeAudioChannelDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_fa_channel; // 0x8 <type_i>
};


