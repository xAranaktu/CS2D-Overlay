#pragma once

#include "defines.h"

// 2 methods, 6 functions
struct CalculatorDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 8(0x8)
    int(__cdecl* m_Calculator_New)(Calculator* pThis); // [New at 0x5ED539] [0x10] ()i
    int(__cdecl* m_Calculator_Delete)(Calculator* pThis); // [Delete at 0x5ED55B] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    float(__cdecl* fn_CrossVV)(Vector2* a1, Vector2* a2); // [CrossVV at 0x5ED569] [0x30] (:Vector2,:Vector2)f
    Vector2*(__cdecl* fn_CrossVF)(Vector2* a1, float a2); // [CrossVF at 0x5ED586] [0x34] (:Vector2,f):Vector2
    Vector2*(__cdecl* fn_CrossVFRef)(Vector2* a1, float a2, Vector2* a3); // [CrossVFRef at 0x5ED5B4] [0x38] (:Vector2,f,:Vector2):Vector2
    Vector2*(__cdecl* fn_CrossFV)(float a1, Vector2* a2); // [CrossFV at 0x5ED5DB] [0x3C] (f,:Vector2):Vector2
    int(__cdecl* fn_CrossFVRef)(float a1, Vector2* a2, Vector2* a3); // [CrossFVRef at 0x5ED609] [0x40] (f,:Vector2,:Vector2)i
    int(__cdecl* fn_TruncateRef)(Vector2* a1, float a2, Vector2* a3); // [TruncateRef at 0x5ED630] [0x44] (:Vector2,f,:Vector2)i
};


// 0 members
struct Calculator {
    CalculatorDecl* decl; // 0x0
    int    refs;  // 0x4
};


