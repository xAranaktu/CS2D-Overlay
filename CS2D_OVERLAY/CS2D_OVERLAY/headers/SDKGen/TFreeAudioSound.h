#pragma once

#include "defines.h"

// 4 methods, 1 functions
struct TFreeAudioSoundDecl {
    void* pSuper;  // 0x0 0x8E69B4
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TFreeAudioSound_New)(TFreeAudioSound* pThis); // [New at 0x796845] [0x10] ()i
    int(__cdecl* m_TFreeAudioSound_Delete)(TFreeAudioSound* pThis); // [Delete at 0x79686E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TFreeAudioChannel*(__cdecl* m_TFreeAudioSound_Play)(TFreeAudioSound* pThis, TChannel* a1); // [Play at 0x7968D2] [0x30] (:TChannel):TFreeAudioChannel
    TFreeAudioChannel*(__cdecl* m_TFreeAudioSound_Cue)(TFreeAudioSound* pThis, TChannel* a1); // [Cue at 0x79696E] [0x34] (:TChannel):TFreeAudioChannel
    void* nothing_13; // 0x38
    TFreeAudioSound*(__cdecl* fn_CreateWithSound)(int a1, TAudioSample* a2); // [CreateWithSound at 0x796A0A] [0x3C] (i,:TAudioSample):TFreeAudioSound
};


// Super: 0x8E69B4
// 1 members
struct TFreeAudioSound {
    TFreeAudioSoundDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_fa_sound; // 0x8 <type_i>
};


