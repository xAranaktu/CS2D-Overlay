#pragma once

#include "defines.h"

// 7 methods, 1 functions
struct TFreeAudioAudioDriverDecl {
    void* pSuper;  // 0x0 0x8E6C44
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_TFreeAudioAudioDriver_New)(TFreeAudioAudioDriver* pThis); // [New at 0x796BDA] [0x10] ()i
    int(__cdecl* m_TFreeAudioAudioDriver_Delete)(TFreeAudioAudioDriver* pThis); // [Delete at 0x796C0E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    BBString*(__cdecl* m_TFreeAudioAudioDriver_Name)(TFreeAudioAudioDriver* pThis); // [Name at 0x796C41] [0x30] ()$
    int(__cdecl* m_TFreeAudioAudioDriver_Startup)(TFreeAudioAudioDriver* pThis); // [Startup at 0x796C50] [0x34] ()i
    int(__cdecl* m_TFreeAudioAudioDriver_Shutdown)(TFreeAudioAudioDriver* pThis); // [Shutdown at 0x796CA1] [0x38] ()i
    TFreeAudioSound*(__cdecl* m_TFreeAudioAudioDriver_CreateSound)(TFreeAudioAudioDriver* pThis, TAudioSample* a1, int a2); // [CreateSound at 0x796CB4] [0x3C] (:TAudioSample,i):TFreeAudioSound
    TFreeAudioChannel*(__cdecl* m_TFreeAudioAudioDriver_AllocChannel)(TFreeAudioAudioDriver* pThis); // [AllocChannel at 0x796D8E] [0x40] ():TFreeAudioChannel
    void* nothing_16; // 0x44
    TFreeAudioAudioDriver*(__cdecl* fn_Create)(BBString* a1, int a2); // [Create at 0x796DB2] [0x48] ($,i):TFreeAudioAudioDriver
};


// Super: 0x8E6C44
// 2 members
struct TFreeAudioAudioDriver {
    TFreeAudioAudioDriverDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m__name; // 0xC <type_$>
    int m__mode; // 0x10 <type_i>
};


