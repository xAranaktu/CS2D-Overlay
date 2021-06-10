#pragma once

#include "defines.h"

// 9 methods, 1 functions
struct cp_varDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_cp_var_New)(cp_var* pThis); // [New at 0x60EF46] [0x10] ()i
    int(__cdecl* m_cp_var_Delete)(cp_var* pThis); // [Delete at 0x60EF7B] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    cp_var*(__cdecl* fn_Create)(int a1); // [Create at 0x60EF89] [0x30] (i):cp_var
    int(__cdecl* m_cp_var_SetCur)(cp_var* pThis, int a1); // [SetCur at 0x60EFBC] [0x34] (i)i
    int(__cdecl* m_cp_var_Reset)(cp_var* pThis); // [Reset at 0x60EFD3] [0x38] ()i
    int(__cdecl* m_cp_var_SetPrev)(cp_var* pThis, int a1); // [SetPrev at 0x60EFEF] [0x3C] (i)i
    int(__cdecl* m_cp_var_GetCur)(cp_var* pThis); // [GetCur at 0x60F012] [0x40] ()i
    int(__cdecl* m_cp_var_GetPrev)(cp_var* pThis); // [GetPrev at 0x60F021] [0x44] ()i
    int(__cdecl* m_cp_var_GetDisplay)(cp_var* pThis); // [GetDisplay at 0x60F030] [0x48] ()i
    int(__cdecl* m_cp_var_GetDiff)(cp_var* pThis); // [GetDiff at 0x60F0AF] [0x4C] ()i
};


// 3 members
struct cp_var {
    cp_varDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_cur; // 0x8 <type_i>
    int m_prev; // 0xC <type_i>
    float m_display; // 0x10 <type_f>
};


