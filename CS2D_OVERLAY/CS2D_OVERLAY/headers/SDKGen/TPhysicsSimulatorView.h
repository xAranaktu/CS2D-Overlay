#pragma once

#include "defines.h"

// 81 methods, 2 functions
struct TPhysicsSimulatorViewDecl {
    void* pSuper;  // 0x0 0x7C7BE0
    void* pFree;  // 0x4 0x5926E0
    BBDebugScope* pDebugScope; // 0x8
    size_t sz; //0xC 272(0x110)
    int(__cdecl* m_TPhysicsSimulatorView_New)(TPhysicsSimulatorView* pThis); // [New at 0x60CF4D] [0x10] ()i
    int(__cdecl* m_TPhysicsSimulatorView_Delete)(TPhysicsSimulatorView* pThis); // [Delete at 0x60D30D] [0x14] ()i
    void* nothing_5; // 0x18
    void* nothing_6; // 0x1C
    void* nothing_7; // 0x20
    void* nothing_8; // 0x24
    void* nothing_9; // 0x28
    void* nothing_10; // 0x2C
    TPhysicsSimulatorView*(__cdecl* fn_Create)(TPhysicsSimulator* a1); // [Create at 0x60D638] [0x30] (:TPhysicsSimulator):TPhysicsSimulatorView
    TColor*(__cdecl* m_TPhysicsSimulatorView_GetAABBColor)(TPhysicsSimulatorView* pThis); // [GetAABBColor at 0x60D67C] [0x34] ():TColor
    int(__cdecl* m_TPhysicsSimulatorView_SetAABBColor)(TPhysicsSimulatorView* pThis, TColor* a1); // [SetAABBColor at 0x60D68B] [0x38] (:TColor)i
    int(__cdecl* m_TPhysicsSimulatorView_GetAABBLineThickness)(TPhysicsSimulatorView* pThis); // [GetAABBLineThickness at 0x60D6BA] [0x3C] ()i
    int(__cdecl* m_TPhysicsSimulatorView_SetAABBLineThickness)(TPhysicsSimulatorView* pThis, int a1); // [SetAABBLineThickness at 0x60D6C9] [0x40] (i)i
    int(__cdecl* m_TPhysicsSimulatorView_EnableAABBView)(TPhysicsSimulatorView* pThis, int a1); // [EnableAABBView at 0x60D6E0] [0x44] (i)i
    int(__cdecl* m_TPhysicsSimulatorView_GetVerticeRadius)(TPhysicsSimulatorView* pThis); // [GetVerticeRadius at 0x60D6F7] [0x48] ()i
    int(__cdecl* m_TPhysicsSimulatorView_SetVerticesRadius)(TPhysicsSimulatorView* pThis, int a1); // [SetVerticesRadius at 0x60D706] [0x4C] (i)i
    int(__cdecl* m_TPhysicsSimulatorView_SetVerticeColor)(TPhysicsSimulatorView* pThis, TColor* a1); // [SetVerticeColor at 0x60D71D] [0x50] (:TColor)i
    TColor*(__cdecl* m_TPhysicsSimulatorView_GetVerticeColor)(TPhysicsSimulatorView* pThis); // [GetVerticeColor at 0x60D74C] [0x54] ():TColor
    int(__cdecl* m_TPhysicsSimulatorView_EnableVerticeView)(TPhysicsSimulatorView* pThis, int a1); // [EnableVerticeView at 0x60D75B] [0x58] (i)i
    int(__cdecl* m_TPhysicsSimulatorView_GetEdgeLineThickness)(TPhysicsSimulatorView* pThis); // [GetEdgeLineThickness at 0x60D772] [0x5C] ()i
    int(__cdecl* m_TPhysicsSimulatorView_SetEdgeLineThickness)(TPhysicsSimulatorView* pThis, int a1); // [SetEdgeLineThickness at 0x60D781] [0x60] (i)i
    TColor*(__cdecl* m_TPhysicsSimulatorView_GetEdgeColor)(TPhysicsSimulatorView* pThis); // [GetEdgeColor at 0x60D798] [0x64] ():TColor
    int(__cdecl* m_TPhysicsSimulatorView_SetEdgeColor)(TPhysicsSimulatorView* pThis, TColor* a1); // [SetEdgeColor at 0x60D7A7] [0x68] (:TColor)i
    int(__cdecl* m_TPhysicsSimulatorView_EnableEdgeView)(TPhysicsSimulatorView* pThis, int a1); // [EnableEdgeView at 0x60D7D6] [0x6C] (i)i
    int(__cdecl* m_TPhysicsSimulatorView_GetGridRadius)(TPhysicsSimulatorView* pThis); // [GetGridRadius at 0x60D7ED] [0x70] ()i
    int(__cdecl* m_TPhysicsSimulatorView_SetGridRadius)(TPhysicsSimulatorView* pThis, int a1); // [SetGridRadius at 0x60D7FC] [0x74] (i)i
    TColor*(__cdecl* m_TPhysicsSimulatorView_GetGridColor)(TPhysicsSimulatorView* pThis); // [GetGridColor at 0x60D813] [0x78] ():TColor
    int(__cdecl* m_TPhysicsSimulatorView_SetGridColor)(TPhysicsSimulatorView* pThis, TColor* a1); // [SetGridColor at 0x60D822] [0x7C] (:TColor)i
    int(__cdecl* m_TPhysicsSimulatorView_EnableGridView)(TPhysicsSimulatorView* pThis, int a1); // [EnableGridView at 0x60D851] [0x80] (i)i
    int(__cdecl* m_TPhysicsSimulatorView_GetCoordinateAxisLineThickness)(TPhysicsSimulatorView* pThis); // [GetCoordinateAxisLineThickness at 0x60D868] [0x84] ()i
    int(__cdecl* m_TPhysicsSimulatorView_SetCoordinateAxisLineThickness)(TPhysicsSimulatorView* pThis, int a1); // [SetCoordinateAxisLineThickness at 0x60D877] [0x88] (i)i
    TColor*(__cdecl* m_TPhysicsSimulatorView_GetCoordinateAxisColor)(TPhysicsSimulatorView* pThis); // [GetCoordinateAxisColor at 0x60D88E] [0x8C] ():TColor
    int(__cdecl* m_TPhysicsSimulatorView_SetCoordinateAxisColor)(TPhysicsSimulatorView* pThis, TColor* a1); // [SetCoordinateAxisColor at 0x60D89D] [0x90] (:TColor)i
    int(__cdecl* m_TPhysicsSimulatorView_GetCoordinateAxisLineLength)(TPhysicsSimulatorView* pThis); // [GetCoordinateAxisLineLength at 0x60D8CC] [0x94] ()i
    int(__cdecl* m_TPhysicsSimulatorView_SetCoordinateAxisLineLength)(TPhysicsSimulatorView* pThis, int a1); // [SetCoordinateAxisLineLength at 0x60D8DB] [0x98] (i)i
    int(__cdecl* m_TPhysicsSimulatorView_EnableCoordinateAxisView)(TPhysicsSimulatorView* pThis, int a1); // [EnableCoordinateAxisView at 0x60D8F2] [0x9C] (i)i
    int(__cdecl* m_TPhysicsSimulatorView_GetContactRadius)(TPhysicsSimulatorView* pThis); // [GetContactRadius at 0x60D909] [0xA0] ()i
    int(__cdecl* m_TPhysicsSimulatorView_SetContactRadius)(TPhysicsSimulatorView* pThis, int a1); // [SetContactRadius at 0x60D918] [0xA4] (i)i
    int(__cdecl* m_TPhysicsSimulatorView_EnableContactView)(TPhysicsSimulatorView* pThis, int a1); // [EnableContactView at 0x60D92F] [0xA8] (i)i
    TColor*(__cdecl* m_TPhysicsSimulatorView_GetSpringLineColor)(TPhysicsSimulatorView* pThis); // [GetSpringLineColor at 0x60D946] [0xAC] ():TColor
    int(__cdecl* m_TPhysicsSimulatorView_SetSpringLineColor)(TPhysicsSimulatorView* pThis, TColor* a1); // [SetSpringLineColor at 0x60D958] [0xB0] (:TColor)i
    int(__cdecl* m_TPhysicsSimulatorView_GetSpringLineThickness)(TPhysicsSimulatorView* pThis); // [GetSpringLineThickness at 0x60D98D] [0xB4] ()i
    int(__cdecl* m_TPhysicsSimulatorView_SetSpringLineThickness)(TPhysicsSimulatorView* pThis, int a1); // [SetSpringLineThickness at 0x60D99F] [0xB8] (i)i
    int(__cdecl* m_TPhysicsSimulatorView_EnableSpringView)(TPhysicsSimulatorView* pThis, int a1); // [EnableSpringView at 0x60D9B9] [0xBC] (i)i
    TColor*(__cdecl* m_TPhysicsSimulatorView_GetRevoluteJointLineColor)(TPhysicsSimulatorView* pThis); // [GetRevoluteJointLineColor at 0x60D9D3] [0xC0] ():TColor
    int(__cdecl* m_TPhysicsSimulatorView_SetRevoluteJointLineColor)(TPhysicsSimulatorView* pThis, TColor* a1); // [SetRevoluteJointLineColor at 0x60D9E2] [0xC4] (:TColor)i
    int(__cdecl* m_TPhysicsSimulatorView_GetRevoluteJointLineThickness)(TPhysicsSimulatorView* pThis); // [GetRevoluteJointLineThickness at 0x60DA11] [0xC8] ()i
    int(__cdecl* m_TPhysicsSimulatorView_SetRevoluteJointLineThickness)(TPhysicsSimulatorView* pThis, int a1); // [SetRevoluteJointLineThickness at 0x60DA20] [0xCC] (i)i
    int(__cdecl* m_TPhysicsSimulatorView_EnableRevoluteJointView)(TPhysicsSimulatorView* pThis, int a1); // [EnableRevoluteJointView at 0x60DA37] [0xD0] (i)i
    TColor*(__cdecl* m_TPhysicsSimulatorView_GetPintJointLineColor)(TPhysicsSimulatorView* pThis); // [GetPintJointLineColor at 0x60DA51] [0xD4] ():TColor
    int(__cdecl* m_TPhysicsSimulatorView_SetPinJointLineColor)(TPhysicsSimulatorView* pThis, TColor* a1); // [SetPinJointLineColor at 0x60DA63] [0xD8] (:TColor)i
    int(__cdecl* m_TPhysicsSimulatorView_GetPinJointLineThickness)(TPhysicsSimulatorView* pThis); // [GetPinJointLineThickness at 0x60DA98] [0xDC] ()i
    int(__cdecl* m_TPhysicsSimulatorView_SetPinJointLineThickness)(TPhysicsSimulatorView* pThis, int a1); // [SetPinJointLineThickness at 0x60DAAA] [0xE0] (i)i
    int(__cdecl* m_TPhysicsSimulatorView_EnablePinJointView)(TPhysicsSimulatorView* pThis, int a1); // [EnablePinJointView at 0x60DAC4] [0xE4] (i)i
    TColor*(__cdecl* m_TPhysicsSimulatorView_GetSliderJointLineColor)(TPhysicsSimulatorView* pThis); // [GetSliderJointLineColor at 0x60DADE] [0xE8] ():TColor
    int(__cdecl* m_TPhysicsSimulatorView_SetSliderJointLineColor)(TPhysicsSimulatorView* pThis, TColor* a1); // [SetSliderJointLineColor at 0x60DAF0] [0xEC] (:TColor)i
    int(__cdecl* m_TPhysicsSimulatorView_GetSliderJointLineThickness)(TPhysicsSimulatorView* pThis); // [GetSliderJointLineThickness at 0x60DB25] [0xF0] ()i
    int(__cdecl* m_TPhysicsSimulatorView_SetSliderJointLineThickness)(TPhysicsSimulatorView* pThis, int a1); // [SetSliderJointLineThickness at 0x60DB37] [0xF4] (i)i
    int(__cdecl* m_TPhysicsSimulatorView_EnableSliderJointView)(TPhysicsSimulatorView* pThis, int a1); // [EnableSliderJointView at 0x60DB51] [0xF8] (i)i
    TColor*(__cdecl* m_TPhysicsSimulatorView_GetPerformancePanelColor)(TPhysicsSimulatorView* pThis); // [GetPerformancePanelColor at 0x60DB6B] [0xFC] ():TColor
    int(__cdecl* m_TPhysicsSimulatorView_SetPerformancePanelColor)(TPhysicsSimulatorView* pThis, TColor* a1); // [SetPerformancePanelColor at 0x60DB7D] [0x100] (:TColor)i
    TColor*(__cdecl* m_TPhysicsSimulatorView_GetPerformancePanelTextcolor)(TPhysicsSimulatorView* pThis); // [GetPerformancePanelTextcolor at 0x60DBB2] [0x104] ():TColor
    int(__cdecl* m_TPhysicsSimulatorView_SetPerformancePanelTextColor)(TPhysicsSimulatorView* pThis, TColor* a1); // [SetPerformancePanelTextColor at 0x60DBC4] [0x108] (:TColor)i
    int(__cdecl* m_TPhysicsSimulatorView_EnablePerformancePanelView)(TPhysicsSimulatorView* pThis, int a1); // [EnablePerformancePanelView at 0x60DBF9] [0x10C] (i)i
    int(__cdecl* m_TPhysicsSimulatorView_Load)(TPhysicsSimulatorView* pThis); // [Load at 0x60DC13] [0x110] ()i
    int(__cdecl* m_TPhysicsSimulatorView_LoadSliderJointContent)(TPhysicsSimulatorView* pThis); // [LoadSliderJointContent at 0x60DCAA] [0x114] ()i
    int(__cdecl* m_TPhysicsSimulatorView_LoadPinJointContent)(TPhysicsSimulatorView* pThis); // [LoadPinJointContent at 0x60DD3A] [0x118] ()i
    int(__cdecl* m_TPhysicsSimulatorView_LoadRevoluteJointContent)(TPhysicsSimulatorView* pThis); // [LoadRevoluteJointContent at 0x60DDCA] [0x11C] ()i
    int(__cdecl* m_TPhysicsSimulatorView_LoadSpringContent)(TPhysicsSimulatorView* pThis); // [LoadSpringContent at 0x60DE42] [0x120] ()i
    int(__cdecl* m_TPhysicsSimulatorView_LoadVerticeContent)(TPhysicsSimulatorView* pThis); // [LoadVerticeContent at 0x60DED3] [0x124] ()i
    int(__cdecl* m_TPhysicsSimulatorView_LoadEdgeContent)(TPhysicsSimulatorView* pThis); // [LoadEdgeContent at 0x60DF22] [0x128] ()i
    int(__cdecl* m_TPhysicsSimulatorView_LoadGridContent)(TPhysicsSimulatorView* pThis); // [LoadGridContent at 0x60DF6E] [0x12C] ()i
    int(__cdecl* m_TPhysicsSimulatorView_LoadAABBContent)(TPhysicsSimulatorView* pThis); // [LoadAABBContent at 0x60DFBD] [0x130] ()i
    int(__cdecl* m_TPhysicsSimulatorView_LoadCoordinateAxisContent)(TPhysicsSimulatorView* pThis); // [LoadCoordinateAxisContent at 0x60E009] [0x134] ()i
    int(__cdecl* m_TPhysicsSimulatorView_LoadContactContent)(TPhysicsSimulatorView* pThis); // [LoadContactContent at 0x60E055] [0x138] ()i
    int(__cdecl* m_TPhysicsSimulatorView_LoadPerformancePanelContent)(TPhysicsSimulatorView* pThis); // [LoadPerformancePanelContent at 0x60E0A4] [0x13C] ()i
    int(__cdecl* m_TPhysicsSimulatorView_Draw)(TPhysicsSimulatorView* pThis); // [Draw at 0x60E0FF] [0x140] ()i
    int(__cdecl* m_TPhysicsSimulatorView_DrawSliderJoints)(TPhysicsSimulatorView* pThis); // [DrawSliderJoints at 0x60E1DF] [0x144] ()i
    int(__cdecl* m_TPhysicsSimulatorView_DrawPinJoints)(TPhysicsSimulatorView* pThis); // [DrawPinJoints at 0x60E2BC] [0x148] ()i
    int(__cdecl* m_TPhysicsSimulatorView_DrawRevoluteJoints)(TPhysicsSimulatorView* pThis); // [DrawRevoluteJoints at 0x60E399] [0x14C] ()i
    int(__cdecl* m_TPhysicsSimulatorView_DrawSprings)(TPhysicsSimulatorView* pThis); // [DrawSprings at 0x60E4C0] [0x150] ()i
    int(__cdecl* m_TPhysicsSimulatorView_DrawVerticesAndEdges)(TPhysicsSimulatorView* pThis); // [DrawVerticesAndEdges at 0x60E806] [0x154] ()i
    int(__cdecl* m_TPhysicsSimulatorView_DrawAABB)(TPhysicsSimulatorView* pThis); // [DrawAABB at 0x60E919] [0x158] ()i
    int(__cdecl* m_TPhysicsSimulatorView_DrawCoordinateAxis)(TPhysicsSimulatorView* pThis); // [DrawCoordinateAxis at 0x60EA03] [0x15C] ()i
    int(__cdecl* m_TPhysicsSimulatorView_DrawContacts)(TPhysicsSimulatorView* pThis); // [DrawContacts at 0x60EB7C] [0x160] ()i
    int(__cdecl* m_TPhysicsSimulatorView_DrawPerformancePanel)(TPhysicsSimulatorView* pThis); // [DrawPerformancePanel at 0x60EC45] [0x164] ()i
    int(__cdecl* m_TPhysicsSimulatorView_DrawGrid)(TPhysicsSimulatorView* pThis); // [DrawGrid at 0x60EE02] [0x168] ()i
    int(__cdecl* fn_DrawString)(BBString* a1, Vector2* a2); // [DrawString at 0x60EECA] [0x16C] ($,:Vector2)i
    int(__cdecl* m_TPhysicsSimulatorView_JustShowPerformancePanel)(TPhysicsSimulatorView* pThis); // [JustShowPerformancePanel at 0x60EEED] [0x170] ()i
};


// 66 members
struct TPhysicsSimulatorView {
    TPhysicsSimulatorViewDecl* decl; // 0x0
    int    refs;  // 0x4
    TPhysicsSimulator* m__physicsSimulator; // 0x8 <type_:TPhysicsSimulator>
    TColor* m__aabbColor; // 0xC <type_:TColor>
    int m__aabbLineThickness; // 0x10 <type_i>
    TLineBrush* m__aabbLineBrush; // 0x14 <type_:TLineBrush>
    int m__enableAABBView; // 0x18 <type_i>
    int m__verticeRadius; // 0x1C <type_i>
    TColor* m__verticeColor; // 0x20 <type_:TColor>
    TCircleBrush* m__verticeCircleBrush; // 0x24 <type_:TCircleBrush>
    int m__enableVerticeView; // 0x28 <type_i>
    int m__edgeLineThickness; // 0x2C <type_i>
    TColor* m__edgeColor; // 0x30 <type_:TColor>
    TLineBrush* m__edgeLineBrush; // 0x34 <type_:TLineBrush>
    int m__enableEdgeView; // 0x38 <type_i>
    int m__gridradius; // 0x3C <type_i>
    TColor* m__gridColor; // 0x40 <type_:TColor>
    TCircleBrush* m__gridCircleBrush; // 0x44 <type_:TCircleBrush>
    int m__enableGridView; // 0x48 <type_i>
    TColor* m__coordinateAxisColor; // 0x4C <type_:TColor>
    int m__coordinateAxisLineThickness; // 0x50 <type_i>
    int m__coordinateAxisLineLength; // 0x54 <type_i>
    TLineBrush* m__coordinateAxisLineBrush; // 0x58 <type_:TLineBrush>
    int m__enableCoordinateAxisView; // 0x5C <type_i>
    TColor* m__contactColor; // 0x60 <type_:TColor>
    int m__contactRadius; // 0x64 <type_i>
    TCircleBrush* m__contactCircleBrush; // 0x68 <type_:TCircleBrush>
    int m__enableContactView; // 0x6C <type_i>
    TColor* m__revoluteJointColor; // 0x70 <type_:TColor>
    int m__revoluteJointLineThickness; // 0x74 <type_i>
    TLineBrush* m__revoluteJointLineBrush; // 0x78 <type_:TLineBrush>
    TRectangleBrush* m__revoluteJointRectangleBrush; // 0x7C <type_:TRectangleBrush>
    int m__enableRevoluteJointView; // 0x80 <type_i>
    TColor* m__pinJointColor; // 0x84 <type_:TColor>
    int m__pinJointLineThickness; // 0x88 <type_i>
    TLineBrush* m__pinJointLineBrush; // 0x8C <type_:TLineBrush>
    TRectangleBrush* m__pinJointRectangleBrush; // 0x90 <type_:TRectangleBrush>
    int m__enablePinJointView; // 0x94 <type_i>
    TColor* m__sliderJointColor; // 0x98 <type_:TColor>
    int m__sliderJointLineThickness; // 0x9C <type_i>
    TLineBrush* m__sliderJointLineBrush; // 0xA0 <type_:TLineBrush>
    TRectangleBrush* m__sliderJointRectangleBrush; // 0xA4 <type_:TRectangleBrush>
    int m__enableSliderJointView; // 0xA8 <type_i>
    TColor* m__springLineColor; // 0xAC <type_:TColor>
    int m__springLineThickness; // 0xB0 <type_i>
    TLineBrush* m__springLineBrush; // 0xB4 <type_:TLineBrush>
    TCircleBrush* m__springCircleBrush; // 0xB8 <type_:TCircleBrush>
    int m__enableSpringView; // 0xBC <type_i>
    TColor* m__performancePanelColor; // 0xC0 <type_:TColor>
    TColor* m__performancePanelTextColor; // 0xC4 <type_:TColor>
    TImage* m__performancePanelTexture; // 0xC8 <type_:TImage>
    int m__enablePerformancePanelView; // 0xCC <type_i>
    Vector2* m__performancePanelPosition; // 0xD0 <type_:Vector2>
    int m__performancePanelWidth; // 0xD4 <type_i>
    int m__performancePanelHeight; // 0xD8 <type_i>
    BBString* m__updateTotal; // 0xDC <type_$>
    BBString* m__cleanUp; // 0xE0 <type_$>
    BBString* m__broadPhaseCollision; // 0xE4 <type_$>
    BBString* m__narrowPhaseCollision; // 0xE8 <type_$>
    BBString* m__applyForces; // 0xEC <type_$>
    BBString* m__applyImpulses; // 0xF0 <type_$>
    BBString* m__updatePosition; // 0xF4 <type_$>
    Vector2* m__body1AttachPointInWorldCoordinates; // 0xF8 <type_:Vector2>
    Vector2* m__body2AttachPointInWorldCoordinates; // 0xFC <type_:Vector2>
    Vector2* m__vectorTemp1; // 0x100 <type_:Vector2>
    Vector2* m__worldAttachPoint; // 0x104 <type_:Vector2>
    Vector2* m__attachPoint1; // 0x108 <type_:Vector2>
    Vector2* m__attachPoint2; // 0x10C <type_:Vector2>
};


