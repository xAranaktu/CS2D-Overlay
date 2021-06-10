#pragma once

#include "defines.h"

// 4 methods, 4 functions
struct TEventDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_TEvent_New)(TEvent* pThis); // [New at 0x7B55E0] [0x10] ()i
    int(__cdecl* m_TEvent_Delete)(TEvent* pThis); // [Delete at 0x7B563B] [0x14] ()i
    BBString*(__cdecl* m_TEvent_ToString)(TEvent* pThis); // [ToString at 0x7B5690] [0x18] ()$
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TEvent_Emit)(TEvent* pThis); // [Emit at 0x7B5670] [0x30] ()i
    TEvent*(__cdecl* fn_Create)(int a1, Object* a2, int a3, int a4, int a5, int a6, Object* a7); // [Create at 0x7B57CC] [0x34] (i,:Object,i,i,i,i,:Object):TEvent
    int(__cdecl* fn_AllocUserId)(); // [AllocUserId at 0x7B5840] [0x38] ()i
    int(__cdecl* fn_RegisterId)(int a1, BBString* a2); // [RegisterId at 0x7B5855] [0x3C] (i,$)i
    BBString*(__cdecl* fn_DescriptionForId)(int a1); // [DescriptionForId at 0x7B58C7] [0x40] (i)$
};


// 7 members
struct TEvent {
    TEventDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_id; // 0x8 <type_i>
    Object* m_source; // 0xC <type_:Object>
    int m_data; // 0x10 <type_i>
    int m_mods; // 0x14 <type_i>
    int m_x; // 0x18 <type_i>
    int m_y; // 0x1C <type_i>
    Object* m_extra; // 0x20 <type_:Object>
};


