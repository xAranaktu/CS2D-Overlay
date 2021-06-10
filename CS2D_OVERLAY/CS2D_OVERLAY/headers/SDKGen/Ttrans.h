#pragma once

#include "defines.h"

// 3 methods, 7 functions
struct TtransDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 32(0x20)
    int(__cdecl* m_Ttrans_New)(Ttrans* pThis); // [New at 0x77E0CE] [0x10] ()i
    int(__cdecl* m_Ttrans_Delete)(Ttrans* pThis); // [Delete at 0x77E12A] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_freeall)(); // [freeall at 0x77E181] [0x30] ()i
    int(__cdecl* fn_free)(int a1); // [free at 0x77E22B] [0x34] (i)i
    int(__cdecl* fn_hastransfer)(int a1); // [hastransfer at 0x77E2D7] [0x38] (i)i
    Ttrans*(__cdecl* fn_addForCurrentConnection)(); // [addForCurrentConnection at 0x77E342] [0x3C] ():Ttrans
    int(__cdecl* fn_addFileToCurrentConnection)(BBString* a1); // [addFileToCurrentConnection at 0x77E4CF] [0x40] ($)i
    int(__cdecl* fn_send)(); // [send at 0x77E639] [0x44] ()i
    int(__cdecl* m_Ttrans_isOutBufferOk)(Ttrans* pThis); // [isOutBufferOk at 0x77F10E] [0x48] ()i
    TBank*(__cdecl* fn_getBufferBankIfSendable)(BBString* a1); // [getBufferBankIfSendable at 0x77F16A] [0x4C] ($):TBank
};


// 6 members
struct Ttrans {
    TtransDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_id; // 0x8 <type_i>
    BBString* m_cfile; // 0xC <type_$>
    TBank* m_cbank; // 0x10 <type_:TBank>
    int m_cpos; // 0x14 <type_i>
    TList* m_filest; // 0x18 <type_:TList>
    TList* m_files; // 0x1C <type_:TList>
};


