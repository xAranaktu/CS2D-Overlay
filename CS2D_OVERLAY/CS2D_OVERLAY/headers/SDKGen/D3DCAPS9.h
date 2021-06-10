#pragma once

#include "defines.h"

// 2 methods, 0 functions
struct D3DCAPS9Decl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 312(0x138)
    int(__cdecl* m_D3DCAPS9_New)(D3DCAPS9* pThis); // [New at 0x7A20A1] [0x10] ()i
    int(__cdecl* m_D3DCAPS9_Delete)(D3DCAPS9* pThis); // [Delete at 0x7A234F] [0x14] ()i
};


// 76 members
struct D3DCAPS9 {
    D3DCAPS9Decl* decl; // 0x0
    int    refs;  // 0x4
    int m_DeviceType; // 0x8 <type_i>
    int m_AdapterOrdinal; // 0xC <type_i>
    int m_Caps; // 0x10 <type_i>
    int m_Caps2; // 0x14 <type_i>
    int m_Caps3; // 0x18 <type_i>
    int m_PresentationIntervals; // 0x1C <type_i>
    int m_CursorCaps; // 0x20 <type_i>
    int m_DevCaps; // 0x24 <type_i>
    int m_PrimitiveMiscCaps; // 0x28 <type_i>
    int m_RasterCaps; // 0x2C <type_i>
    int m_ZCmpCaps; // 0x30 <type_i>
    int m_SrcBlendCaps; // 0x34 <type_i>
    int m_DestBlendCaps; // 0x38 <type_i>
    int m_AlphaCmpCaps; // 0x3C <type_i>
    int m_ShadeCaps; // 0x40 <type_i>
    int m_TextureCaps; // 0x44 <type_i>
    int m_TextureFilterCaps; // 0x48 <type_i>
    int m_CubeTextureFilterCaps; // 0x4C <type_i>
    int m_VolumeTextureFilterCaps; // 0x50 <type_i>
    int m_TextureAddressCaps; // 0x54 <type_i>
    int m_VolumeTextureAddressCaps; // 0x58 <type_i>
    int m_LineCaps; // 0x5C <type_i>
    int m_MaxTextureWidth; // 0x60 <type_i>
    int m_MaxTextureHeight; // 0x64 <type_i>
    int m_MaxVolumeExtent; // 0x68 <type_i>
    int m_MaxTextureRepeat; // 0x6C <type_i>
    int m_MaxTextureAspectRatio; // 0x70 <type_i>
    int m_MaxAnisotropy; // 0x74 <type_i>
    float m_MaxVertexW; // 0x78 <type_f>
    float m_GuardBandLeft; // 0x7C <type_f>
    float m_GuardBandTop; // 0x80 <type_f>
    float m_GuardBandRight; // 0x84 <type_f>
    float m_GuardBandBottom; // 0x88 <type_f>
    float m_ExtentsAdjust; // 0x8C <type_f>
    int m_StencilCaps; // 0x90 <type_i>
    int m_FVFCaps; // 0x94 <type_i>
    int m_TextureOpCaps; // 0x98 <type_i>
    int m_MaxTextureBlendStages; // 0x9C <type_i>
    int m_MaxSimultaneousTextures; // 0xA0 <type_i>
    int m_VertexProcessingCaps; // 0xA4 <type_i>
    int m_MaxActiveLights; // 0xA8 <type_i>
    int m_MaxUserClipPlanes; // 0xAC <type_i>
    int m_MaxVertexBlendMatrices; // 0xB0 <type_i>
    int m_MaxVertexBlendMatrixIndex; // 0xB4 <type_i>
    float m_MaxPointSize; // 0xB8 <type_f>
    int m_MaxPrimitiveCount; // 0xBC <type_i>
    int m_MaxVertexIndex; // 0xC0 <type_i>
    int m_MaxStreams; // 0xC4 <type_i>
    int m_MaxStreamStride; // 0xC8 <type_i>
    int m_VertexShaderVersion; // 0xCC <type_i>
    int m_MaxVertexShaderConst; // 0xD0 <type_i>
    int m_PixelShaderVersion; // 0xD4 <type_i>
    float m_PixelShader1xMaxValue; // 0xD8 <type_f>
    int m_DevCaps2; // 0xDC <type_i>
    float m_MaxNpatchTessellationLevel; // 0xE0 <type_f>
    int m_Reserved5; // 0xE4 <type_i>
    int m_MasterAdapterOrdinal; // 0xE8 <type_i>
    int m_AdapterOrdinalInGroup; // 0xEC <type_i>
    int m_NumberOfAdaptersInGroup; // 0xF0 <type_i>
    int m_DeclTypes; // 0xF4 <type_i>
    int m_NumSimultaneousRTs; // 0xF8 <type_i>
    int m_StretchRectFilterCaps; // 0xFC <type_i>
    int m_VS20Caps_Caps; // 0x100 <type_i>
    int m_VS20Caps_DynamicFlowControlDepth; // 0x104 <type_i>
    int m_VS20Caps_NumTemps; // 0x108 <type_i>
    int m_VS20Caps_StaticFlowControlDepth; // 0x10C <type_i>
    int m_PS20Caps_Caps; // 0x110 <type_i>
    int m_PS20Caps_DynamicFlowControlDepth; // 0x114 <type_i>
    int m_PS20Caps_NumTemps; // 0x118 <type_i>
    int m_PS20Caps_StaticFlowControlDepth; // 0x11C <type_i>
    int m_PS20Caps_NumInstructionSlots; // 0x120 <type_i>
    int m_VertexTextureFilterCaps; // 0x124 <type_i>
    int m_MaxVShaderInstructionsExecuted; // 0x128 <type_i>
    int m_MaxPShaderInstructionsExecuted; // 0x12C <type_i>
    int m_MaxVertexShader30InstructionSlots; // 0x130 <type_i>
    int m_MaxPixelShader30InstructionSlots; // 0x134 <type_i>
};


