#pragma once

#include "defines.h"

// 6 methods, 23 functions
struct Tile3DDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 96(0x60)
    int(__cdecl* m_Tile3D_New)(Tile3D* pThis); // [New at 0x5CC566] [0x10] ()i
    int(__cdecl* m_Tile3D_Delete)(Tile3D* pThis); // [Delete at 0x5CC610] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    int(__cdecl* fn_SetCameraCenter)(float a1, float a2, float a3); // [SetCameraCenter at 0x5CC632] [0x30] (f,f,f)i
    int(__cdecl* fn_CreateCube)(float a1, float a2, float a3, float a4, float a5, int a6); // [CreateCube at 0x5CC65D] [0x34] (f,f,f,f,f,i)i
    int(__cdecl* fn_CreateCube2)(float a1, float a2, float a3, float a4, float a5, float a6); // [CreateCube2 at 0x5CC6CB] [0x38] (f,f,f,f,f,f)i
    int(__cdecl* fn_CreateRect)(TImage* a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8); // [CreateRect at 0x5CC73E] [0x3C] (:TImage,f,f,f,f,f,f,i)i
    int(__cdecl* fn_CreateImg)(TImage* a1, float a2, float a3, float a4, float a5); // [CreateImg at 0x5CC831] [0x40] (:TImage,f,f,f,f)i
    int(__cdecl* fn_CreateParticleImg)(TImage* a1, float a2, float a3, float a4, float a5); // [CreateParticleImg at 0x5CC91E] [0x44] (:TImage,f,f,f,f)i
    int(__cdecl* fn_CreateTile)(TImage* a1, float a2, float a3, float a4, float a5, float a6, int a7, int a8); // [CreateTile at 0x5CCA0B] [0x48] (:TImage,f,f,f,f,f,i,i)i
    int(__cdecl* fn_CreateMapTile)(TImage* a1, float a2, float a3, float a4, int a5, int a6, int a7); // [CreateMapTile at 0x5CCADF] [0x4C] (:TImage,f,f,f,i,i,i)i
    int(__cdecl* fn_CreateLine)(float a1, float a2, float a3, float a4, float a5); // [CreateLine at 0x5CCC29] [0x50] (f,f,f,f,f)i
    int(__cdecl* fn_CreateParticleLine)(float a1, float a2, float a3, float a4, float a5); // [CreateParticleLine at 0x5CCCE1] [0x54] (f,f,f,f,f)i
    int(__cdecl* fn_CreateParticlePlot)(float a1, float a2, float a3); // [CreateParticlePlot at 0x5CCD99] [0x58] (f,f,f)i
    int(__cdecl* fn_Comparess)(Object* a1, Object* a2); // [Comparess at 0x5CCE17] [0x5C] (:Object,:Object)i
    int(__cdecl* fn_Draw3DPlot)(float a1, float a2, float a3); // [Draw3DPlot at 0x5CCE5E] [0x60] (f,f,f)i
    int(__cdecl* fn_Draw3DLine)(float a1, float a2, float a3, float a4, float a5); // [Draw3DLine at 0x5CCEA3] [0x64] (f,f,f,f,f)i
    int(__cdecl* fn_Draw3DSprite)(TImage* a1, float a2, float a3, float a4, int a5); // [Draw3DSprite at 0x5CCF08] [0x68] (:TImage,f,f,f,i)i
    int(__cdecl* fn_Draw3DCube)(float a1, float a2, float a3, float a4, float a5, float a6); // [Draw3DCube at 0x5CCF59] [0x6C] (f,f,f,f,f,f)i
    int(__cdecl* fn_Draw3DCube2)(float a1, float a2, float a3, float a4, float a5); // [Draw3DCube2 at 0x5CD1FE] [0x70] (f,f,f,f,f)i
    int(__cdecl* fn_Draw3DTileTop)(TImage* a1, float a2, float a3, float a4, int a5, float a6, float a7, float a8, float a9, float a10); // [Draw3DTileTop at 0x5CD554] [0x74] (:TImage,f,f,f,i,f,f,f,f,f)i
    int(__cdecl* m_Tile3D_Draw3DTileSides)(Tile3D* pThis, float a1, float a2); // [Draw3DTileSides at 0x5CD7BC] [0x78] (f,f)i
    int(__cdecl* m_Tile3D_Draw3DTileMapSides)(Tile3D* pThis, float a1, float a2, float a3, float a4, int a5, float a6, float a7, int a8, int a9); // [Draw3DTileMapSides at 0x5CDE6C] [0x7C] (f,f,f,f,i,f,f,i,i)i
    int(__cdecl* fn_Draw3DRect)(TImage* a1, float a2, float a3, float a4, float a5, float a6, int a7, float a8, int a9); // [Draw3DRect at 0x5D3AE7] [0x80] (:TImage,f,f,f,f,f,i,f,i)i
    int(__cdecl* m_Tile3D_DrawGraphic)(Tile3D* pThis); // [DrawGraphic at 0x5D3C94] [0x84] ()i
    int(__cdecl* m_Tile3D_DrawObject)(Tile3D* pThis, float a1, float a2, TList* a3); // [DrawObject at 0x5D40D8] [0x88] (f,f,:TList)i
    int(__cdecl* fn_Draw)(int a1, int a2); // [Draw at 0x5D437A] [0x8C] (i,i)i
    int(__cdecl* fn_Transform)(void* a1, void* a2, float a3); // [Transform at 0x5D45FA] [0x90] (*f,*f,f)i
    int(__cdecl* fn_TransformRotation)(void* a1, void* a2, float a3, float a4, float a5); // [TransformRotation at 0x5D4643] [0x94] (*f,*f,f,f,f)i
    float(__cdecl* fn_GetDistance)(float a1, float a2); // [GetDistance at 0x5D4701] [0x98] (f,f)f
};


// 22 members
struct Tile3D {
    Tile3DDecl* decl; // 0x0
    int    refs;  // 0x4
    float m_x; // 0x8 <type_f>
    float m_y; // 0xC <type_f>
    float m_z; // 0x10 <type_f>
    float m_height; // 0x14 <type_f>
    float m_w; // 0x18 <type_f>
    float m_h; // 0x1C <type_f>
    TImage* m_img; // 0x20 <type_:TImage>
    float m_dist; // 0x24 <type_f>
    int m_typeID; // 0x28 <type_i>
    float m_alpha; // 0x2C <type_f>
    float m_rot; // 0x30 <type_f>
    float m_sx; // 0x34 <type_f>
    float m_sy; // 0x38 <type_f>
    int m_cr; // 0x3C <type_i>
    int m_cg; // 0x40 <type_i>
    int m_cb; // 0x44 <type_i>
    int m_blend; // 0x48 <type_i>
    int m_frame; // 0x4C <type_i>
    int m_Push; // 0x50 <type_i>
    int m_mirror; // 0x54 <type_i>
    int m_FlipY; // 0x58 <type_i>
    int m_nonRotated; // 0x5C <type_i>
};


