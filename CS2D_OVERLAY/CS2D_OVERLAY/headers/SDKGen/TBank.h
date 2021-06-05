#pragma once

#include "defines.h"

// 24 methods, 3 functions
struct TBankDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 24(0x18)
    int(__cdecl* m_TBank_New)(TBank* pThis); // [New at 0x7B33F1] [0x10] ()i
    int(__cdecl* m_TBank_Delete)(TBank* pThis); // [Delete at 0x7B342F] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TBank__pad)(TBank* pThis); // [_pad at 0x7B3451] [0x30] ()i
    void*(__cdecl* m_TBank_Buf)(TBank* pThis); // [Buf at 0x7B345F] [0x34] ()*b
    void*(__cdecl* m_TBank_Lock)(TBank* pThis); // [Lock at 0x7B346E] [0x38] ()*b
    int(__cdecl* m_TBank_Unlock)(TBank* pThis); // [Unlock at 0x7B3481] [0x3C] ()i
    int(__cdecl* m_TBank_Size)(TBank* pThis); // [Size at 0x7B3496] [0x40] ()i
    int(__cdecl* m_TBank_Capacity)(TBank* pThis); // [Capacity at 0x7B34A5] [0x44] ()i
    int(__cdecl* m_TBank_Resize)(TBank* pThis, int a1); // [Resize at 0x7B34B4] [0x48] (i)i
    int(__cdecl* m_TBank_Read)(TBank* pThis, TStream* a1, int a2, int a3); // [Read at 0x7B351C] [0x4C] (:TStream,i,i)i
    int(__cdecl* m_TBank_Write)(TBank* pThis, TStream* a1, int a2, int a3); // [Write at 0x7B3543] [0x50] (:TStream,i,i)i
    int(__cdecl* m_TBank_PeekByte)(TBank* pThis, int a1); // [PeekByte at 0x7B356A] [0x54] (i)i
    int(__cdecl* m_TBank_PokeByte)(TBank* pThis, int a1, int a2); // [PokeByte at 0x7B3582] [0x58] (i,i)i
    int(__cdecl* m_TBank_PeekShort)(TBank* pThis, int a1); // [PeekShort at 0x7B35A8] [0x5C] (i)i
    int(__cdecl* m_TBank_PokeShort)(TBank* pThis, int a1, int a2); // [PokeShort at 0x7B35C0] [0x60] (i,i)i
    int(__cdecl* m_TBank_PeekInt)(TBank* pThis, int a1); // [PeekInt at 0x7B35E7] [0x64] (i)i
    int(__cdecl* m_TBank_PokeInt)(TBank* pThis, int a1, int a2); // [PokeInt at 0x7B35FC] [0x68] (i,i)i
    long long(__cdecl* m_TBank_PeekLong)(TBank* pThis, int a1); // [PeekLong at 0x7B3619] [0x6C] (i)l
    int(__cdecl* m_TBank_PokeLong)(TBank* pThis, int a1, long long a2); // [PokeLong at 0x7B364E] [0x70] (i,l)i
    float(__cdecl* m_TBank_PeekFloat)(TBank* pThis, int a1); // [PeekFloat at 0x7B3686] [0x74] (i)f
    int(__cdecl* m_TBank_PokeFloat)(TBank* pThis, int a1, float a2); // [PokeFloat at 0x7B369B] [0x78] (i,f)i
    void*(__cdecl* m_TBank_PeekDouble)(TBank* pThis, int a1); // [PeekDouble at 0x7B36B8] [0x7C] (i)d
    int(__cdecl* m_TBank_PokeDouble)(TBank* pThis, int a1, void* a2); // [PokeDouble at 0x7B36CD] [0x80] (i,d)i
    int(__cdecl* m_TBank_Save)(TBank* pThis, Object* a1); // [Save at 0x7B36EA] [0x84] (:Object)i
    TBank*(__cdecl* fn_Load)(Object* a1); // [Load at 0x7B373D] [0x88] (:Object):TBank
    TBank*(__cdecl* fn_Create)(int a1); // [Create at 0x7B37BA] [0x8C] (i):TBank
    TBank*(__cdecl* fn_CreateStatic)(void* a1, int a2); // [CreateStatic at 0x7B37ED] [0x90] (*b,i):TBank
};


// 4 members
struct TBank {
    TBankDecl* decl; // 0x0
    int refs;
    void* m__buf; // 0x8 <type_*b>
    int m__size; // 0xC <type_i>
    int m__capacity; // 0x10 <type_i>
    int m__locked; // 0x14 <type_i>
};


