#pragma once

#include "defines.h"

// 2 methods, 9 functions
struct TresDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 40(0x28)
    int(__cdecl* m_Tres_New)(Tres* pThis); // [New at 0x6520D0] [0x10] ()i
    int(__cdecl* m_Tres_Delete)(Tres* pThis); // [Delete at 0x65213E] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_freeall)(); // [freeall at 0x6521A6] [0x30] ()i
    int(__cdecl* fn_freeunused)(); // [freeunused at 0x652256] [0x34] ()i
    int(__cdecl* fn_counttype)(int a1); // [counttype at 0x652264] [0x38] (i)i
    Tres*(__cdecl* fn_add)(BBString* a1, int a2, int a3, int a4); // [add at 0x6522CD] [0x3C] ($,i,i,i):Tres
    Tres*(__cdecl* fn_get)(BBString* a1, int a2); // [get at 0x6529AD] [0x40] ($,i):Tres
    int(__cdecl* fn_isres)(BBString* a1); // [isres at 0x652A2B] [0x44] ($)i
    int(__cdecl* fn_addToServerTransfer)(BBString* a1); // [addToServerTransfer at 0x652AA2] [0x48] ($)i
    int(__cdecl* fn_loadServerTransfer)(); // [loadServerTransfer at 0x652BD2] [0x4C] ()i
    int(__cdecl* fn_loadDirectory)(BBString* a1, BBString* a2); // [loadDirectory at 0x652DA4] [0x50] ($,$)i
};


// 8 members
struct Tres {
    TresDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_file; // 0x8 <type_$>
    BBString* m_rpath; // 0xC <type_$>
    int m_typ; // 0x10 <type_i>
    int m_mode; // 0x14 <type_i>
    TImage* m_image; // 0x18 <type_:TImage>
    TSound* m_sound; // 0x1C <type_:TSound>
    TBank* m_buffer; // 0x20 <type_:TBank>
    int m_size; // 0x24 <type_i>
};


