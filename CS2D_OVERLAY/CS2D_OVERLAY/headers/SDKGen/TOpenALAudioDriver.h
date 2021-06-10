#pragma once

#include "defines.h"

// 7 methods, 1 functions
struct TOpenALAudioDriverDecl {
    void* pSuper;  // 0x0 0x8E6C44
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 28(0x1C)
    int(__cdecl* m_TOpenALAudioDriver_New)(TOpenALAudioDriver* pThis); // [New at 0x794129] [0x10] ()i
    int(__cdecl* m_TOpenALAudioDriver_Delete)(TOpenALAudioDriver* pThis); // [Delete at 0x79416F] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    BBString*(__cdecl* m_TOpenALAudioDriver_Name)(TOpenALAudioDriver* pThis); // [Name at 0x7941B3] [0x30] ()$
    int(__cdecl* m_TOpenALAudioDriver_Startup)(TOpenALAudioDriver* pThis); // [Startup at 0x7941C2] [0x34] ()i
    int(__cdecl* m_TOpenALAudioDriver_Shutdown)(TOpenALAudioDriver* pThis); // [Shutdown at 0x7942C9] [0x38] ()i
    TOpenALSound*(__cdecl* m_TOpenALAudioDriver_CreateSound)(TOpenALAudioDriver* pThis, TAudioSample* a1, int a2); // [CreateSound at 0x794317] [0x3C] (:TAudioSample,i):TOpenALSound
    TOpenALChannel*(__cdecl* m_TOpenALAudioDriver_AllocChannel)(TOpenALAudioDriver* pThis); // [AllocChannel at 0x794331] [0x40] ():TOpenALChannel
    void* nothing_16; // 0x44
    TOpenALAudioDriver*(__cdecl* fn_Create)(BBString* a1, BBString* a2); // [Create at 0x794345] [0x48] ($,$):TOpenALAudioDriver
};


// Super: 0x8E6C44
// 4 members
struct TOpenALAudioDriver {
    TOpenALAudioDriverDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m__name; // 0xC <type_$>
    BBString* m__devname; // 0x10 <type_$>
    int m__device; // 0x14 <type_i>
    int m__context; // 0x18 <type_i>
};


