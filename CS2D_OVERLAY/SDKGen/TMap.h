#pragma once

#include "defines.h"

// 20 methods, 0 functions
struct TMapDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TMap_New)(TMap* pThis); // [New at 0x79A245] [0x10] ()i
    int(__cdecl* m_TMap_Delete)(TMap* pThis); // [Delete at 0x79A272] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TMap_Clear)(TMap* pThis); // [Clear at 0x79A29F] [0x30] ()i
    int(__cdecl* m_TMap_IsEmpty)(TMap* pThis); // [IsEmpty at 0x79A2EE] [0x34] ()i
    int(__cdecl* m_TMap_Insert)(TMap* pThis, Object* a1, Object* a2); // [Insert at 0x79A309] [0x38] (:Object,:Object)i
    int(__cdecl* m_TMap_Contains)(TMap* pThis, Object* a1); // [Contains at 0x79A476] [0x3C] (:Object)i
    Object*(__cdecl* m_TMap_ValueForKey)(TMap* pThis, Object* a1); // [ValueForKey at 0x79A49B] [0x40] (:Object):Object
    int(__cdecl* m_TMap_Remove)(TMap* pThis, Object* a1); // [Remove at 0x79A4C6] [0x44] (:Object)i
    TMapEnumerator*(__cdecl* m_TMap_Keys)(TMap* pThis); // [Keys at 0x79A4FF] [0x48] ():TMapEnumerator
    TMapEnumerator*(__cdecl* m_TMap_Values)(TMap* pThis); // [Values at 0x79A568] [0x4C] ():TMapEnumerator
    TMap*(__cdecl* m_TMap_Copy)(TMap* pThis); // [Copy at 0x79A5D1] [0x50] ():TMap
    TNodeEnumerator*(__cdecl* m_TMap_ObjectEnumerator)(TMap* pThis); // [ObjectEnumerator at 0x79A61D] [0x54] ():TNodeEnumerator
    TNode*(__cdecl* m_TMap__FirstNode)(TMap* pThis); // [_FirstNode at 0x79A660] [0x58] ():TNode
    TNode*(__cdecl* m_TMap__LastNode)(TMap* pThis); // [_LastNode at 0x79A67F] [0x5C] ():TNode
    TNode*(__cdecl* m_TMap__FindNode)(TMap* pThis, Object* a1); // [_FindNode at 0x79A69E] [0x60] (:Object):TNode
    int(__cdecl* m_TMap__RemoveNode)(TMap* pThis, TNode* a1); // [_RemoveNode at 0x79A6E4] [0x64] (:TNode)i
    int(__cdecl* m_TMap__InsertFixup)(TMap* pThis, TNode* a1); // [_InsertFixup at 0x79A828] [0x68] (:TNode)i
    int(__cdecl* m_TMap__RotateLeft)(TMap* pThis, TNode* a1); // [_RotateLeft at 0x79A962] [0x6C] (:TNode)i
    int(__cdecl* m_TMap__RotateRight)(TMap* pThis, TNode* a1); // [_RotateRight at 0x79AA8C] [0x70] (:TNode)i
    int(__cdecl* m_TMap__DeleteFixup)(TMap* pThis, TNode* a1, TNode* a2); // [_DeleteFixup at 0x79ABB6] [0x74] (:TNode,:TNode)i
};


// 3 members
struct TMap {
    TMapDecl* decl; // 0x0
    unsigned int    kind;  // 0x4 DebugeclCodes (?)
    TNode* m__root; // 0x8 <type_:TNode>
    int m_RED; // 0x8E80C8 <type_i>
    int m_BLACK; // 0x8E80E0 <type_i>
};


