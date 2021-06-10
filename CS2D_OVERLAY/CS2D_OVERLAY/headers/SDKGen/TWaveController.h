#pragma once

#include "defines.h"

// 29 methods, 1 functions
struct TWaveControllerDecl {
    void* pSuper;  // 0x0 0x87DE60
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 112(0x70)
    int(__cdecl* m_TWaveController_New)(TWaveController* pThis); // [New at 0x5FA4E9] [0x10] ()i
    int(__cdecl* m_TWaveController_Delete)(TWaveController* pThis); // [Delete at 0x5FA5DB] [0x14] ()i
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
    int(__cdecl* m_TWaveController_Update)(TWaveController* pThis, float a1); // [Update at 0x5FAA91] [0x40] (f)i
    int(__cdecl* m_TWaveController_Intersect)(TWaveController* pThis, TAABB* a1); // [Intersect at 0x5FAC58] [0x44] (:TAABB)i
    int(__cdecl* m_TWaveController_Contains)(TWaveController* pThis, Vector2* a1); // [Contains at 0x5FAC74] [0x48] (:Vector2)i
    float(__cdecl* m_TWaveController_GetWidth)(TWaveController* pThis); // [GetWidth at 0x5FA6B8] [0x4C] ()f
    int(__cdecl* m_TWaveController_SetWidth)(TWaveController* pThis, float a1); // [SetWidth at 0x5FA6C7] [0x50] (f)i
    float(__cdecl* m_TWaveController_GetHeight)(TWaveController* pThis); // [GetHeight at 0x5FA6DE] [0x54] ()f
    int(__cdecl* m_TWaveController_SetHeight)(TWaveController* pThis, float a1); // [SetHeight at 0x5FA6ED] [0x58] (f)i
    Vector2*(__cdecl* m_TWaveController_GetPosition)(TWaveController* pThis); // [GetPosition at 0x5FA704] [0x5C] ():Vector2
    int(__cdecl* m_TWaveController_SetPosition)(TWaveController* pThis, Vector2* a1); // [SetPosition at 0x5FA71C] [0x60] (:Vector2)i
    int(__cdecl* m_TWaveController_GetNodeCount)(TWaveController* pThis); // [GetNodeCount at 0x5FA73D] [0x64] ()i
    int(__cdecl* m_TWaveController_SetNodeCount)(TWaveController* pThis, int a1); // [SetNodeCount at 0x5FA74C] [0x68] (i)i
    float(__cdecl* m_TWaveController_GetDampningCoefficient)(TWaveController* pThis); // [GetDampningCoefficient at 0x5FA763] [0x6C] ()f
    int(__cdecl* m_TWaveController_SetDampningCoefficient)(TWaveController* pThis, float a1); // [SetDampningCoefficient at 0x5FA772] [0x70] (f)i
    void*(__cdecl* m_TWaveController_GetCurrentWave)(TWaveController* pThis); // [GetCurrentWave at 0x5FA789] [0x74] ()[]f
    void*(__cdecl* m_TWaveController_GetPreviousWave)(TWaveController* pThis); // [GetPreviousWave at 0x5FA798] [0x78] ()[]f
    void*(__cdecl* m_TWaveController_GetXPosition)(TWaveController* pThis); // [GetXPosition at 0x5FA7A7] [0x7C] ()[]f
    int(__cdecl* m_TWaveController_SetXPosition)(TWaveController* pThis, void* a1); // [SetXPosition at 0x5FA7B6] [0x80] ([]f)i
    float(__cdecl* m_TWaveController_GetWaveGeneratorMax)(TWaveController* pThis); // [GetWaveGeneratorMax at 0x5FA7E5] [0x84] ()f
    int(__cdecl* m_TWaveController_SetWaveGeneratorMax)(TWaveController* pThis, float a1); // [SetWaveGeneratorMax at 0x5FA7F4] [0x88] (f)i
    float(__cdecl* m_TWaveController_GetWaveGeneratorMin)(TWaveController* pThis); // [GetWaveGeneratorMin at 0x5FA80B] [0x8C] ()f
    int(__cdecl* m_TWaveController_SetWaveGeneratorMin)(TWaveController* pThis, float a1); // [SetWaveGeneratorMin at 0x5FA81A] [0x90] (f)i
    float(__cdecl* m_TWaveController_GetWaveGeneratorStep)(TWaveController* pThis); // [GetWaveGeneratorStep at 0x5FA831] [0x94] ()f
    int(__cdecl* m_TWaveController_SetWaveGeneratorStep)(TWaveController* pThis, float a1); // [SetWaveGeneratorStep at 0x5FA840] [0x98] (f)i
    float(__cdecl* m_TWaveController_GetFrequency)(TWaveController* pThis); // [GetFrequency at 0x5FA857] [0x9C] ()f
    int(__cdecl* m_TWaveController_SetFrequency)(TWaveController* pThis, float a1); // [SetFrequency at 0x5FA866] [0xA0] (f)i
    TWaveController*(__cdecl* fn_Create)(Vector2* a1, Vector2* a2, int a3); // [Create at 0x5FA87D] [0xA4] (:Vector2,:Vector2,i):TWaveController
    int(__cdecl* m_TWaveController_Disturb)(TWaveController* pThis, int a1, float a2); // [Disturb at 0x5FA8D9] [0xA8] (i,f)i
    int(__cdecl* m_TWaveController_Initialize)(TWaveController* pThis); // [Initialize at 0x5FA900] [0xAC] ()i
};


// Super: 0x87DE60
// 24 members
struct TWaveController {
    TWaveControllerDecl* decl; // 0x0
    int    refs;  // 0x4
    float m__width; // 0x10 <type_f>
    float m__height; // 0x14 <type_f>
    Vector2* m__position; // 0x18 <type_:Vector2>
    float m__singleWaveWidth; // 0x1C <type_f>
    int m__nodeCount; // 0x20 <type_i>
    float m__dampningCoefficient; // 0x24 <type_f>
    float m__frequency; // 0x28 <type_f>
    void* m__currentWave; // 0x2C <type_[]f>
    void* m__previousWave; // 0x30 <type_[]f>
    void* m__resultWave; // 0x34 <type_[]f>
    void* m__xPosition; // 0x38 <type_[]f>
    float m__waveGeneratorMax; // 0x3C <type_f>
    float m__waveGeneratorMin; // 0x40 <type_f>
    float m__waveGeneratorStep; // 0x44 <type_f>
    int m__goingUp; // 0x48 <type_i>
    float m__waveGeneratorCount; // 0x4C <type_f>
    TAABB* m__aabb; // 0x50 <type_:TAABB>
    float m__aabbMin; // 0x54 <type_f>
    float m__timePassed; // 0x58 <type_f>
    Vector2* m_vectorNearWaveEdge; // 0x5C <type_:Vector2>
    Vector2* m_vectorFarWaveEdge; // 0x60 <type_:Vector2>
    Vector2* m_vectorPoint; // 0x64 <type_:Vector2>
    Vector2* m__waveEdgeVector; // 0x68 <type_:Vector2>
    Vector2* m__pointVector; // 0x6C <type_:Vector2>
};


