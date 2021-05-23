#pragma once

#include "defines.h"

// 27 methods, 1 functions
struct TListDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TList_New)(TList* pThis); // [New at 0x7B0175] [0x10] ()i
    int(__cdecl* m_TList_Delete)(TList* pThis); // [Delete at 0x7B022A] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TList__pad)(TList* pThis); // [_pad at 0x7B02BF] [0x30] ()i
    int(__cdecl* m_TList_Clear)(TList* pThis); // [Clear at 0x7B02CD] [0x34] ()i
    int(__cdecl* m_TList_IsEmpty)(TList* pThis); // [IsEmpty at 0x7B02FC] [0x38] ()i
    int(__cdecl* m_TList_Contains)(TList* pThis, Object* a1); // [Contains at 0x7B0317] [0x3C] (:Object)i
    TLink*(__cdecl* m_TList_AddFirst)(TList* pThis, Object* a1); // [AddFirst at 0x7B035A] [0x40] (:Object):TLink
    TLink*(__cdecl* m_TList_AddLast)(TList* pThis, Object* a1); // [AddLast at 0x7B0376] [0x44] (:Object):TLink
    Object*(__cdecl* m_TList_First)(TList* pThis); // [First at 0x7B0392] [0x48] ():Object
    Object*(__cdecl* m_TList_Last)(TList* pThis); // [Last at 0x7B03BE] [0x4C] ():Object
    Object*(__cdecl* m_TList_RemoveFirst)(TList* pThis); // [RemoveFirst at 0x7B03EA] [0x50] ():Object
    Object*(__cdecl* m_TList_RemoveLast)(TList* pThis); // [RemoveLast at 0x7B0429] [0x54] ():Object
    TLink*(__cdecl* m_TList_FirstLink)(TList* pThis); // [FirstLink at 0x7B0468] [0x58] ():TLink
    TLink*(__cdecl* m_TList_LastLink)(TList* pThis); // [LastLink at 0x7B048C] [0x5C] ():TLink
    TLink*(__cdecl* m_TList_InsertBeforeLink)(TList* pThis, Object* a1, TLink* a2); // [InsertBeforeLink at 0x7B04B0] [0x60] (:Object,:TLink):TLink
    TLink*(__cdecl* m_TList_InsertAfterLink)(TList* pThis, Object* a1, TLink* a2); // [InsertAfterLink at 0x7B0564] [0x64] (:Object,:TLink):TLink
    TLink*(__cdecl* m_TList_FindLink)(TList* pThis, Object* a1); // [FindLink at 0x7B0618] [0x68] (:Object):TLink
    Object*(__cdecl* m_TList_ValueAtIndex)(TList* pThis, int a1); // [ValueAtIndex at 0x7B0658] [0x6C] (i):Object
    int(__cdecl* m_TList_Count)(TList* pThis); // [Count at 0x7B0696] [0x70] ()i
    int(__cdecl* m_TList_Remove)(TList* pThis, Object* a1); // [Remove at 0x7B06BA] [0x74] (:Object)i
    int(__cdecl* m_TList_Swap)(TList* pThis, TList* a1); // [Swap at 0x7B06FB] [0x78] (:TList)i
    TList*(__cdecl* m_TList_Copy)(TList* pThis); // [Copy at 0x7B0754] [0x7C] ():TList
    int(__cdecl* m_TList_Reverse)(TList* pThis); // [Reverse at 0x7B0795] [0x80] ()i
    TList*(__cdecl* m_TList_Reversed)(TList* pThis); // [Reversed at 0x7B07FC] [0x84] ():TList
    void*(__cdecl* m_TList_Sort)(TList* pThis, int a1, void* a2, Object* a3); // [Sort at 0x7B083D] [0x88] (i,(:Object,:Object)i)i
    TListEnum*(__cdecl* m_TList_ObjectEnumerator)(TList* pThis); // [ObjectEnumerator at 0x7B0A1B] [0x8C] ():TListEnum
    void*(__cdecl* m_TList_ToArray)(TList* pThis); // [ToArray at 0x7B0A59] [0x90] ()[]:Object
    TList*(__cdecl* fn_FromArray)(void* a1); // [FromArray at 0x7B0ACD] [0x94] ([]:Object):TList
};


// 1 members
struct TList {
    TListDecl* decl; // 0x0
    unsigned int    kind;  // 0x4 DebugeclCodes (?)
    TLink* m__head; // 0x8 <type_:TLink>
};


