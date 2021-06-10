#pragma once

#include "defines.h"

// 2 methods, 16 functions
struct DynamicRecoilDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_DynamicRecoil_New)(DynamicRecoil* pThis); // [New at 0x5D8DCF] [0x10] ()i
    int(__cdecl* m_DynamicRecoil_Delete)(DynamicRecoil* pThis); // [Delete at 0x5D8DF1] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_SetCrosshairThickNess)(float a1); // [SetCrosshairThickNess at 0x5D8DFF] [0x30] (f)i
    int(__cdecl* fn_SetCrosshairBoarderSize)(float a1); // [SetCrosshairBoarderSize at 0x5D8E16] [0x34] (f)i
    int(__cdecl* fn_SetCrosshairSize)(float a1); // [SetCrosshairSize at 0x5D8E2D] [0x38] (f)i
    int(__cdecl* fn_SetCrosshairColorRed)(float a1); // [SetCrosshairColorRed at 0x5D8E44] [0x3C] (f)i
    int(__cdecl* fn_SetCrosshairColorGreen)(float a1); // [SetCrosshairColorGreen at 0x5D8E5B] [0x40] (f)i
    int(__cdecl* fn_SetCrosshairColorBlue)(float a1); // [SetCrosshairColorBlue at 0x5D8E72] [0x44] (f)i
    float(__cdecl* fn_GetCrosshairThickNess)(); // [GetCrosshairThickNess at 0x5D8E89] [0x48] ()f
    float(__cdecl* fn_GetCrosshairBoarderSize)(); // [GetCrosshairBoarderSize at 0x5D8E98] [0x4C] ()f
    float(__cdecl* fn_GetCrosshairSize)(); // [GetCrosshairSize at 0x5D8EA7] [0x50] ()f
    float(__cdecl* fn_GetCrosshairColorRed)(); // [GetCrosshairColorRed at 0x5D8EB6] [0x54] ()f
    float(__cdecl* fn_GetCrosshairColorGreen)(); // [GetCrosshairColorGreen at 0x5D8EC5] [0x58] ()f
    float(__cdecl* fn_GetCrosshairColorBlue)(); // [GetCrosshairColorBlue at 0x5D8ED4] [0x5C] ()f
    int(__cdecl* fn_Draw)(int a1, int a2, float a3, float a4); // [Draw at 0x5D8EE3] [0x60] (i,i,f,f)i
    int(__cdecl* fn_Update)(); // [Update at 0x5D945C] [0x64] ()i
    int(__cdecl* fn_Attack)(Tpl* a1); // [Attack at 0x5D95B6] [0x68] (:Tpl)i
    float(__cdecl* fn_GetRange)(Tpl* a1); // [GetRange at 0x5D95F7] [0x6C] (:Tpl)f
};


// 0 members
struct DynamicRecoil {
    DynamicRecoilDecl* decl; // 0x0
    int    refs;  // 0x4
};


