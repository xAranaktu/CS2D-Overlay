#pragma once

#include "defines.h"

// 27 methods, 0 functions
struct TStreamWrapperDecl {
    void* pSuper;  // 0x0 0x8FC2BC
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TStreamWrapper_New)(TStreamWrapper* pThis); // [New at 0x7B4324] [0x10] ()i
    int(__cdecl* m_TStreamWrapper_Delete)(TStreamWrapper* pThis); // [Delete at 0x7B4351] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TStreamWrapper_Eof)(TStreamWrapper* pThis); // [Eof at 0x7B43B3] [0x30] ()i
    int(__cdecl* m_TStreamWrapper_Pos)(TStreamWrapper* pThis); // [Pos at 0x7B43CB] [0x34] ()i
    int(__cdecl* m_TStreamWrapper_Size)(TStreamWrapper* pThis); // [Size at 0x7B43E3] [0x38] ()i
    int(__cdecl* m_TStreamWrapper_Seek)(TStreamWrapper* pThis, int a1); // [Seek at 0x7B43FB] [0x3C] (i)i
    int(__cdecl* m_TStreamWrapper_Flush)(TStreamWrapper* pThis); // [Flush at 0x7B4417] [0x40] ()i
    int(__cdecl* m_TStreamWrapper_Close)(TStreamWrapper* pThis); // [Close at 0x7B4434] [0x44] ()i
    int(__cdecl* m_TStreamWrapper_Read)(TStreamWrapper* pThis, void* a1, int a2); // [Read at 0x7B4451] [0x48] (*b,i)i
    int(__cdecl* m_TStreamWrapper_Write)(TStreamWrapper* pThis, void* a1, int a2); // [Write at 0x7B4471] [0x4C] (*b,i)i
    void* nothing_19; // 0x50
    void* nothing_20; // 0x54
    void* nothing_21; // 0x58
    int(__cdecl* m_TStreamWrapper_ReadByte)(TStreamWrapper* pThis); // [ReadByte at 0x7B4491] [0x5C] ()i
    int(__cdecl* m_TStreamWrapper_WriteByte)(TStreamWrapper* pThis, int a1); // [WriteByte at 0x7B44A9] [0x60] (i)i
    int(__cdecl* m_TStreamWrapper_ReadShort)(TStreamWrapper* pThis); // [ReadShort at 0x7B44CA] [0x64] ()i
    int(__cdecl* m_TStreamWrapper_WriteShort)(TStreamWrapper* pThis, int a1); // [WriteShort at 0x7B44E2] [0x68] (i)i
    int(__cdecl* m_TStreamWrapper_ReadInt)(TStreamWrapper* pThis); // [ReadInt at 0x7B4503] [0x6C] ()i
    int(__cdecl* m_TStreamWrapper_WriteInt)(TStreamWrapper* pThis, int a1); // [WriteInt at 0x7B451B] [0x70] (i)i
    void* nothing_28; // 0x74
    void* nothing_29; // 0x78
    float(__cdecl* m_TStreamWrapper_ReadFloat)(TStreamWrapper* pThis); // [ReadFloat at 0x7B453C] [0x7C] ()f
    int(__cdecl* m_TStreamWrapper_WriteFloat)(TStreamWrapper* pThis, float a1); // [WriteFloat at 0x7B4554] [0x80] (f)i
    void*(__cdecl* m_TStreamWrapper_ReadDouble)(TStreamWrapper* pThis); // [ReadDouble at 0x7B457D] [0x84] ()d
    int(__cdecl* m_TStreamWrapper_WriteDouble)(TStreamWrapper* pThis, void* a1); // [WriteDouble at 0x7B4598] [0x88] (d)i
    BBString*(__cdecl* m_TStreamWrapper_ReadLine)(TStreamWrapper* pThis); // [ReadLine at 0x7B45C1] [0x8C] ()$
    int(__cdecl* m_TStreamWrapper_WriteLine)(TStreamWrapper* pThis, BBString* a1); // [WriteLine at 0x7B45DC] [0x90] ($)i
    BBString*(__cdecl* m_TStreamWrapper_ReadString)(TStreamWrapper* pThis, int a1); // [ReadString at 0x7B45FB] [0x94] (i)$
    int(__cdecl* m_TStreamWrapper_WriteString)(TStreamWrapper* pThis, BBString* a1); // [WriteString at 0x7B461A] [0x98] ($)i
    Object*(__cdecl* m_TStreamWrapper_ReadObject)(TStreamWrapper* pThis); // [ReadObject at 0x7B463E] [0x9C] ():Object
    int(__cdecl* m_TStreamWrapper_WriteObject)(TStreamWrapper* pThis, Object* a1); // [WriteObject at 0x7B4659] [0xA0] (:Object)i
    int(__cdecl* m_TStreamWrapper_SetStream)(TStreamWrapper* pThis, TStream* a1); // [SetStream at 0x7B4384] [0xA4] (:TStream)i
};


// Super: 0x8FC2BC
// 1 members
struct TStreamWrapper {
    TStreamWrapperDecl* decl; // 0x0
    int    refs;  // 0x4
    TStream* m__stream; // 0x8 <type_:TStream>
};


