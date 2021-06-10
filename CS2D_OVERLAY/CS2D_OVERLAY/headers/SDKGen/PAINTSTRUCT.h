#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct PAINTSTRUCTDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 72(0x48)
    int(__cdecl* m_PAINTSTRUCT_New)(PAINTSTRUCT* pThis); // [New at 0x7A4F82] [0x10] ()i
    int(__cdecl* m_PAINTSTRUCT_Delete)(PAINTSTRUCT* pThis); // [Delete at 0x7A5014] [0x14] ()i
};


// 16 members
struct PAINTSTRUCT {
    PAINTSTRUCTDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_hdc; // 0x8 <type_i>
    int m_fErase; // 0xC <type_i>
    int m_rcPaint_left; // 0x10 <type_i>
    int m_rcPaint_top; // 0x14 <type_i>
    int m_rcPaint_right; // 0x18 <type_i>
    int m_rcPaint_bottom; // 0x1C <type_i>
    int m_fRestore; // 0x20 <type_i>
    int m_fIncUpdate; // 0x24 <type_i>
    int m_res0; // 0x28 <type_i>
    int m_res1; // 0x2C <type_i>
    int m_res2; // 0x30 <type_i>
    int m_res3; // 0x34 <type_i>
    int m_res4; // 0x38 <type_i>
    int m_res5; // 0x3C <type_i>
    int m_res6; // 0x40 <type_i>
    int m_res7; // 0x44 <type_i>
};


