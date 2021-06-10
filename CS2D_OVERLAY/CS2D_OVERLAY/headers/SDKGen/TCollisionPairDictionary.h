#pragma once

#include "defines.h"

// 6 methods, 0 functions
struct TCollisionPairDictionaryDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 12(0xC)
    int(__cdecl* m_TCollisionPairDictionary_New)(TCollisionPairDictionary* pThis); // [New at 0x5F94A4] [0x10] ()i
    int(__cdecl* m_TCollisionPairDictionary_Delete)(TCollisionPairDictionary* pThis); // [Delete at 0x5F94F1] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* m_TCollisionPairDictionary_RemovePair)(TCollisionPairDictionary* pThis, TGeom* a1, TGeom* a2); // [RemovePair at 0x5F9513] [0x30] (:TGeom,:TGeom)i
    int(__cdecl* m_TCollisionPairDictionary_AddPair)(TCollisionPairDictionary* pThis, TGeom* a1, TGeom* a2); // [AddPair at 0x5F9544] [0x34] (:TGeom,:TGeom)i
    TMapEnumerator*(__cdecl* m_TCollisionPairDictionary_Keys)(TCollisionPairDictionary* pThis); // [Keys at 0x5F9597] [0x38] ():TMapEnumerator
    int(__cdecl* m_TCollisionPairDictionary_Clear)(TCollisionPairDictionary* pThis); // [Clear at 0x5F95AF] [0x3C] ()i
};


// 1 members
struct TCollisionPairDictionary {
    TCollisionPairDictionaryDecl* decl; // 0x0
    int    refs;  // 0x4
    TMap* m__map; // 0x8 <type_:TMap>
};


