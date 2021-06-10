#pragma once

#include "defines.h"

// 27 methods, 1 functions
struct TTextStreamDecl {
    void* pSuper;  // 0x0 0x8FC564
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 20(0x14)
    int(__cdecl* m_TTextStream_New)(TTextStream* pThis); // [New at 0x7AF083] [0x10] ()i
    int(__cdecl* m_TTextStream_Delete)(TTextStream* pThis); // [Delete at 0x7AF0B3] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    void* nothing_13; // 0x38
    void* nothing_14; // 0x3C
    void* nothing_15; // 0x40
    void* nothing_16; // 0x44
    int(__cdecl* m_TTextStream_Read)(TTextStream* pThis, void* a1, int a2); // [Read at 0x7AF0D3] [0x48] (*b,i)i
    int(__cdecl* m_TTextStream_Write)(TTextStream* pThis, void* a1, int a2); // [Write at 0x7AF16B] [0x4C] (*b,i)i
    void* nothing_19; // 0x50
    void* nothing_20; // 0x54
    void* nothing_21; // 0x58
    int(__cdecl* m_TTextStream_ReadByte)(TTextStream* pThis); // [ReadByte at 0x7AF1FE] [0x5C] ()i
    int(__cdecl* m_TTextStream_WriteByte)(TTextStream* pThis, int a1); // [WriteByte at 0x7AF22D] [0x60] (i)i
    int(__cdecl* m_TTextStream_ReadShort)(TTextStream* pThis); // [ReadShort at 0x7AF267] [0x64] ()i
    int(__cdecl* m_TTextStream_WriteShort)(TTextStream* pThis, int a1); // [WriteShort at 0x7AF296] [0x68] (i)i
    int(__cdecl* m_TTextStream_ReadInt)(TTextStream* pThis); // [ReadInt at 0x7AF2D0] [0x6C] ()i
    int(__cdecl* m_TTextStream_WriteInt)(TTextStream* pThis, int a1); // [WriteInt at 0x7AF2FF] [0x70] (i)i
    long long(__cdecl* m_TTextStream_ReadLong)(TTextStream* pThis); // [ReadLong at 0x7AF339] [0x74] ()l
    int(__cdecl* m_TTextStream_WriteLong)(TTextStream* pThis, long long a1); // [WriteLong at 0x7AF37F] [0x78] (l)i
    float(__cdecl* m_TTextStream_ReadFloat)(TTextStream* pThis); // [ReadFloat at 0x7AF3C8] [0x7C] ()f
    int(__cdecl* m_TTextStream_WriteFloat)(TTextStream* pThis, float a1); // [WriteFloat at 0x7AF3F7] [0x80] (f)i
    void*(__cdecl* m_TTextStream_ReadDouble)(TTextStream* pThis); // [ReadDouble at 0x7AF42E] [0x84] ()d
    int(__cdecl* m_TTextStream_WriteDouble)(TTextStream* pThis, void* a1); // [WriteDouble at 0x7AF45D] [0x88] (d)i
    BBString*(__cdecl* m_TTextStream_ReadLine)(TTextStream* pThis); // [ReadLine at 0x7AF49A] [0x8C] ()$
    int(__cdecl* m_TTextStream_WriteLine)(TTextStream* pThis, BBString* a1); // [WriteLine at 0x7AF5FF] [0x90] ($)i
    BBString*(__cdecl* m_TTextStream_ReadString)(TTextStream* pThis, int a1); // [ReadString at 0x7AF641] [0x94] (i)$
    int(__cdecl* m_TTextStream_WriteString)(TTextStream* pThis, BBString* a1); // [WriteString at 0x7AF6BD] [0x98] ($)i
    void* nothing_38; // 0x9C
    void* nothing_39; // 0xA0
    void* nothing_40; // 0xA4
    BBString*(__cdecl* m_TTextStream_ReadFile)(TTextStream* pThis); // [ReadFile at 0x7AF557] [0xA8] ()$
    int(__cdecl* m_TTextStream_ReadChar)(TTextStream* pThis); // [ReadChar at 0x7AF713] [0xAC] ()i
    int(__cdecl* m_TTextStream_WriteChar)(TTextStream* pThis, int a1); // [WriteChar at 0x7AF80B] [0xB0] (i)i
    TTextStream*(__cdecl* fn_Create)(TStream* a1, int a2); // [Create at 0x7AF979] [0xB4] (:TStream,i):TTextStream
    int(__cdecl* m_TTextStream__ReadByte)(TTextStream* pThis); // [_ReadByte at 0x7AF9B1] [0xB8] ()i
    int(__cdecl* m_TTextStream__WriteByte)(TTextStream* pThis, int a1); // [_WriteByte at 0x7AF9C6] [0xBC] (i)i
    int(__cdecl* m_TTextStream__FlushRead)(TTextStream* pThis); // [_FlushRead at 0x7AF9E4] [0xC0] ()i
    int(__cdecl* m_TTextStream__FlushWrite)(TTextStream* pThis); // [_FlushWrite at 0x7AFA3A] [0xC4] ()i
};


// Super: 0x8FC564
// 2 members
struct TTextStream {
    TTextStreamDecl* decl; // 0x0
    int    refs;  // 0x4
    int m__encoding; // 0xC <type_i>
    int m__bufcount; // 0x10 <type_i>
};


