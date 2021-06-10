#pragma once

#include "defines.h"

// 4 methods, 1 functions
struct TrpDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 36(0x24)
    int(__cdecl* m_Trp_New)(Trp* pThis); // [New at 0x67CD72] [0x10] ()i
    int(__cdecl* m_Trp_Delete)(Trp* pThis); // [Delete at 0x67CDD5] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_recordreplay)(BBString* a1, int a2, int a3); // [recordreplay at 0x67CE2C] [0x30] ($,i,i)i
    int(__cdecl* m_Trp_recordframe)(Trp* pThis); // [recordframe at 0x67CEDC] [0x34] ()i
    int(__cdecl* m_Trp_save)(Trp* pThis, BBString* a1); // [save at 0x67CFB6] [0x38] ($)i
};


// 7 members
struct Trp {
    TrpDecl* decl; // 0x0
    int    refs;  // 0x4
    BBString* m_name; // 0x8 <type_$>
    TStream* m_stream; // 0xC <type_:TStream>
    BBString* m_sv_name; // 0x10 <type_$>
    int m_sv_ip; // 0x14 <type_i>
    int m_sv_port; // 0x18 <type_i>
    int m_frames; // 0x1C <type_i>
    TList* m_fd; // 0x20 <type_:TList>
};


