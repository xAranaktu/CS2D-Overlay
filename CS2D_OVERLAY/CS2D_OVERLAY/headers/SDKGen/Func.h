#pragma once

#include "defines.h"

// 8 methods, 4 functions
struct FuncDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 21(0x15)
    int(__cdecl* m_Func_New)(Func* pThis); // [New at 0x5B3B94] [0x10] ()i
    int(__cdecl* m_Func_Delete)(Func* pThis); // [Delete at 0x5B3BD7] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    Func*(__cdecl* fn_Create)(void* a1); // [Create at 0x5B3C0C] [0x30] (*b):Func
    int(__cdecl* m_Func_SetCat)(Func* pThis, char a1); // [SetCat at 0x5B3CAB] [0x34] (b)i
    int(__cdecl* m_Func_SetAddr)(Func* pThis, int a1); // [SetAddr at 0x5B3CD1] [0x38] (i)i
    int(__cdecl* m_Func_Print)(Func* pThis, char a1); // [Print at 0x5B3D10] [0x3C] (b)i
    int(__cdecl* fn_SetSize)(int a1); // [SetSize at 0x5B3DF0] [0x40] (i)i
    int(__cdecl* m_Func_SetName)(Func* pThis, BBString* a1); // [SetName at 0x5B3E0F] [0x44] ($)i
    char(__cdecl* m_Func_Check)(Func* pThis); // [Check at 0x5B3E6C] [0x48] ()b
    int(__cdecl* m_Func_Count)(Func* pThis); // [Count at 0x5B3EF1] [0x4C] ()i
    char(__cdecl* fn_CheckAll)(char a1, char a2); // [CheckAll at 0x5B3F08] [0x50] (b,b)b
    BBString*(__cdecl* fn_Hex)(int a1); // [Hex at 0x5B3FE2] [0x54] (i)$
};


// 4 members
struct Func {
    FuncDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_name; // 0x8 <type_$>
    void* m_olddata; // 0xC <type_[]b>
    void* m_funcptr; // 0x10 <type_*b>
    char m_cat; // 0x14 <type_b>
};


