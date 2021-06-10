#pragma once

#include "defines.h"

// 8 methods, 0 functions
struct TAudioDriverDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TAudioDriver_New)(TAudioDriver* pThis); // [New at 0x7976F1] [0x10] ()i
    int(__cdecl* m_TAudioDriver_Delete)(TAudioDriver* pThis); // [Delete at 0x797759] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    BBString*(__cdecl* m_TAudioDriver_Name)(TAudioDriver* pThis); // [Name at 0x79777B] [0x30] ()$
    int(__cdecl* m_TAudioDriver_Startup)(TAudioDriver* pThis); // [Startup at 0x797789] [0x34] ()i
    int(__cdecl* m_TAudioDriver_Shutdown)(TAudioDriver* pThis); // [Shutdown at 0x797797] [0x38] ()i
    TSound*(__cdecl* m_TAudioDriver_CreateSound)(TAudioDriver* pThis, TAudioSample* a1, int a2); // [CreateSound at 0x7977A5] [0x3C] (:TAudioSample,i):TSound
    TChannel*(__cdecl* m_TAudioDriver_AllocChannel)(TAudioDriver* pThis); // [AllocChannel at 0x7977BB] [0x40] ():TChannel
    TSound*(__cdecl* m_TAudioDriver_LoadSound)(TAudioDriver* pThis, Object* a1, int a2); // [LoadSound at 0x7977D1] [0x44] (:Object,i):TSound
};


// 1 members
struct TAudioDriver {
    TAudioDriverDecl* decl; // 0x0
    int    refs;  // 0x4
    TAudioDriver* m__succ; // 0x8 <type_:TAudioDriver>
};


