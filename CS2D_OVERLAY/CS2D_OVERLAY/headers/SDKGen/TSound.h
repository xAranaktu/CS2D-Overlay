#pragma once

#include "defines.h"

// 4 methods, 1 functions
struct TSoundDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_TSound_New)(TSound* pThis); // [New at 0x7975A3] [0x10] ()i
    int(__cdecl* m_TSound_Delete)(TSound* pThis); // [Delete at 0x7975C5] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TChannel*(__cdecl* m_TSound_Play)(TSound* pThis, TChannel* a1); // [Play at 0x7975D3] [0x30] (:TChannel):TChannel
    TChannel*(__cdecl* m_TSound_Cue)(TSound* pThis, TChannel* a1); // [Cue at 0x7975E9] [0x34] (:TChannel):TChannel
    TSound*(__cdecl* fn_Load)(Object* a1, int a2); // [Load at 0x7975FF] [0x38] (:Object,i):TSound
};


// 0 members
struct TSound {
    TSoundDecl* decl; // 0x0
    int    refs;  // 0x4
};


