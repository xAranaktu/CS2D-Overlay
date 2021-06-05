#pragma once

#include "defines.h"

// 5 methods, 1 functions
struct StatsMapDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_StatsMap_New)(StatsMap* pThis); // [New at 0x789CE6] [0x10] ()i
    int(__cdecl* m_StatsMap_Delete)(StatsMap* pThis); // [Delete at 0x789D13] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    StatsMap*(__cdecl* fn_Create)(); // [Create at 0x789D35] [0x30] ():StatsMap
    int(__cdecl* m_StatsMap_GetValue)(StatsMap* pThis, BBString* a1); // [GetValue at 0x789D71] [0x34] ($)i
    int(__cdecl* m_StatsMap_IncValue)(StatsMap* pThis, BBString* a1, int a2); // [IncValue at 0x789DAB] [0x38] ($,i)i
    int(__cdecl* m_StatsMap_clear)(StatsMap* pThis); // [clear at 0x789E18] [0x3C] ()i
};


// 1 members
struct StatsMap {
    StatsMapDecl* decl; // 0x0
    int refs;
    TMap* m_values; // 0x8 <type_:TMap>
};


