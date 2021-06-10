#pragma once

#include "defines.h"

// 8 methods, 0 functions
struct IListDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_IList_New)(IList* pThis); // [New at 0x5EBBF6] [0x10] ()i
    int(__cdecl* m_IList_Delete)(IList* pThis); // [Delete at 0x5EBC23] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    void* nothing_11; // 0x30
    void* nothing_12; // 0x34
    int(__cdecl* m_IList_Clear)(IList* pThis); // [Clear at 0x5EBC75] [0x38] ()i
    int(__cdecl* m_IList_Contains)(IList* pThis, Object* a1); // [Contains at 0x5EBC92] [0x3C] (:Object)i
    int(__cdecl* m_IList_Add)(IList* pThis, Object* a1); // [Add at 0x5EBCAE] [0x40] (:Object)i
    int(__cdecl* m_IList_Remove)(IList* pThis, Object* a1); // [Remove at 0x5EBCCF] [0x44] (:Object)i
    TListEnum*(__cdecl* m_IList_ObjectEnumerator)(IList* pThis); // [ObjectEnumerator at 0x5EBCF0] [0x48] ():TListEnum
    Object*(__cdecl* m_IList_AtIndex)(IList* pThis, int a1); // [AtIndex at 0x5EBD0B] [0x4C] (i):Object
};


// 1 members
struct IList {
    IListDecl* decl; // 0x0
    int    refs;  // 0x4
    TList* m__list; // 0x8 <type_:TList>
};


