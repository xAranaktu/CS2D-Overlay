#pragma once

#include "defines.h"

// 9 methods, 1 functions
struct TDirectSoundAudioDriverDecl {
    void* pSuper;  // 0x0 0x8E6C44
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_TDirectSoundAudioDriver_New)(TDirectSoundAudioDriver* pThis); // [New at 0x7964C0] [0x10] ()i
    int(__cdecl* m_TDirectSoundAudioDriver_Delete)(TDirectSoundAudioDriver* pThis); // [Delete at 0x796506] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    BBString*(__cdecl* m_TDirectSoundAudioDriver_Name)(TDirectSoundAudioDriver* pThis); // [Name at 0x79654A] [0x30] ()$
    int(__cdecl* m_TDirectSoundAudioDriver_Startup)(TDirectSoundAudioDriver* pThis); // [Startup at 0x796559] [0x34] ()i
    int(__cdecl* m_TDirectSoundAudioDriver_Shutdown)(TDirectSoundAudioDriver* pThis); // [Shutdown at 0x7965C5] [0x38] ()i
    TDirectSoundSound*(__cdecl* m_TDirectSoundAudioDriver_CreateSound)(TDirectSoundAudioDriver* pThis, TAudioSample* a1, int a2); // [CreateSound at 0x796629] [0x3C] (:TAudioSample,i):TDirectSoundSound
    TDirectSoundChannel*(__cdecl* m_TDirectSoundAudioDriver_AllocChannel)(TDirectSoundAudioDriver* pThis); // [AllocChannel at 0x796643] [0x40] ():TDirectSoundChannel
    void* nothing_16; // 0x44
    TDirectSoundAudioDriver*(__cdecl* fn_Create)(BBString* a1, int a2); // [Create at 0x796657] [0x48] ($,i):TDirectSoundAudioDriver
    int(__cdecl* m_TDirectSoundAudioDriver_AddLonely)(TDirectSoundAudioDriver* pThis, TBuf* a1); // [AddLonely at 0x79669B] [0x4C] (:TBuf)i
    int(__cdecl* m_TDirectSoundAudioDriver_FlushLonely)(TDirectSoundAudioDriver* pThis); // [FlushLonely at 0x7966F9] [0x50] ()i
};


// Super: 0x8E6C44
// 4 members
struct TDirectSoundAudioDriver {
    TDirectSoundAudioDriverDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m__name; // 0xC <type_$>
    int m__mode; // 0x10 <type_i>
    void* m__dsound; // 0x14 <type_?IDirectSound>
    TBuf* m__lonely; // 0x18 <type_:TBuf>
};


