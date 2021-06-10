#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DPRESENT_PARAMETERSDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 64(0x40)
    int(__cdecl* m_D3DPRESENT_PARAMETERS_New)(D3DPRESENT_PARAMETERS* pThis); // [New at 0x7A1D52] [0x10] ()i
    int(__cdecl* m_D3DPRESENT_PARAMETERS_Delete)(D3DPRESENT_PARAMETERS* pThis); // [Delete at 0x7A1DD6] [0x14] ()i
};


// 14 members
struct D3DPRESENT_PARAMETERS {
    D3DPRESENT_PARAMETERSDecl* decl; // 0x0
    int    refs;  // 0x4
    int m_BackBufferWidth; // 0x8 <type_i>
    int m_BackBufferHeight; // 0xC <type_i>
    int m_BackBufferFormat; // 0x10 <type_i>
    int m_BackBufferCount; // 0x14 <type_i>
    int m_MultiSampleType; // 0x18 <type_i>
    int m_MultiSampleQuality; // 0x1C <type_i>
    int m_SwapEffect; // 0x20 <type_i>
    int m_hDeviceWindow; // 0x24 <type_i>
    int m_Windowed; // 0x28 <type_i>
    int m_EnableAutoDepthStencil; // 0x2C <type_i>
    int m_AutoDepthStencilFormat; // 0x30 <type_i>
    int m_Flags; // 0x34 <type_i>
    int m_FullScreen_RefreshRateInHz; // 0x38 <type_i>
    int m_PresentationInterval; // 0x3C <type_i>
};


