-- Cheat Engine LUA Class Info Printer for CS2D

-- shit code below

local all_decls = {
    0x7C7BE0, -- Object 
    0x86DA0C, -- Func 
    0x86DAF8, -- ImageInfo 
    0x86DBA4, -- Math 
    0x86DCB0, -- Ttimer 
    0x86DE24, -- TDebugTimer 
    0x86DED0, -- Tpf 
    0x86DF8C, -- TConfigHacker 
    0x86E178, -- Tsec 
    0x86E304, -- cLong 
    0x86E45C, -- cInt 
    0x86E5BC, -- cFloat 
    0x86E924, -- tImageBufferDX9 
    0x86EB3C, -- TImageBuffer 
    0x86ED60, -- SmartImageBuffer 
    0x86EF18, -- LightFBOManager 
    0x86F02C, -- GraphicsDriver 
    0x86F218, -- DrawCall 
    0x86F2D0, -- IsoPoint 
    0x86F438, -- IsoEngine 
    0x86F868, -- TSmartRadar 
    0x86F9C8, -- DeathIcon 
    0x86FBF8, -- TSmartMinimap 
    0x86FCF0, -- Trail 
    0x86FDE0, -- Application 
    0x86FECC, -- DebugLine 
    0x870520, -- Tile3D 
    0x870620, -- TProfiler 
    0x870904, -- LoadScreen 
    0x870A50, -- MuzzleFlash 
    0x870B94, -- NativeFlare 
    0x870D80, -- TSparkle 
    0x871050, -- DynamicRecoil 
    0x87134C, -- TLightingRoom 
    0x871578, -- TLightingStripe 
    0x871AA4, -- TLightSource 
    0x871C04, -- TLightingSprite 
    0x871CF0, -- TLightingSpriteFloor 
    0x8722DC, -- TSmartLighting 
    0x872454, -- EntityShadow 
    0x872574, -- ObstacleShadow 
    0x87267C, -- ObstacleShadow2 
    0x872BC4, -- Vector2 
    0x87340C, -- TArbiter 
    0x873530, -- TPool 
    0x8735DC, -- TArbiterPool 
    0x87372C, -- IList 
    0x8737B4, -- TGeomList 
    0x87383C, -- TBodyList 
    0x8746E4, -- TBody 
    0x87484C, -- TControllerList 
    0x874950, -- TController 
    0x8749CC, -- TJointList 
    0x874AA8, -- TJoint 
    0x874B94, -- TArbiterList 
    0x874C58, -- FrictionType 
    0x875258, -- CollisionCategories 
    0x87530C, -- IBroadPhaseCollider 
    0x875ED4, -- TGeom 
    0x876040, -- TBodyEventListener 
    0x876104, -- TGeomBodyListener 
    0x876194, -- TStubComparer 
    0x876418, -- TSelectiveSweepCollider 
    0x8768DC, -- MathHelper 
    0x876CFC, -- TMatrix 
    0x876DD4, -- Vector3 
    0x876F20, -- Calculator 
    0x8770F8, -- TGrid 
    0x8775F4, -- TVertices 
    0x8778A0, -- TAABB 
    0x877A0C, -- TFeature 
    0x877CA8, -- TContact 
    0x877DC4, -- TContactList 
    0x877FA4, -- TContactId 
    0x8780A4, -- TStub 
    0x87825C, -- TWrapper 
    0x87845C, -- TBodyFactory 
    0x8786C8, -- TGeomFactory 
    0x8787BC, -- TBodyEventHandler 
    0x878864, -- TContactPool 
    0x878D1C, -- TFixedRevoluteJoint 
    0x879048, -- TFixedAngleSpring 
    0x879468, -- TJointFactory 
    0x879684, -- TControllerFactory 
    0x87A190, -- TPhysicsSimulator 
    0x87A624, -- TFixedLinearSpring 
    0x87AA84, -- TLinearSpring 
    0x87AFA4, -- TRevoluteJoint 
    0x87B24C, -- TAngleJoint 
    0x87B658, -- TAngleLimitJoint 
    0x87B968, -- TFixedAngleLimitJoint 
    0x87BBD4, -- TFixedAngleJoint 
    0x87BE38, -- TAngleSpring 
    0x87C1D8, -- TInteractiveAngleJoint 
    0x87C3BC, -- TCircularInterpolator 
    0x87C990, -- TPinJoint 
    0x87CF28, -- TSliderJoint 
    0x87D114, -- TBruteForceCollider 
    0x87D398, -- TSweepAndPruneCollider 
    0x87D4B0, -- TCollisionPair 
    0x87D598, -- TExtent 
    0x87D6B0, -- TExtentInfo 
    0x87D83C, -- TExtentList 
    0x87D970, -- TCollisionPairDictionary 
    0x87DA68, -- TExtentInfoList 
    0x87DC5C, -- TBilinearInterpolator 
    0x87DDA4, -- TConvertUnits 
    0x87DE60, -- IFluidContainer 
    0x87DF74, -- TAABBFluidContainer 
    0x87E3C8, -- TFluidDragController 
    0x87E4E0, -- TFluidEntryEventArgs 
    0x87EB28, -- TWaveController 
    0x87ECB4, -- TCollisionEventArgs 
    0x87EFB8, -- PhysicsUniqueID 
    0x87F084, -- PhysicsBulletCollision 
    0x87F17C, -- PhysicsBullet 
    0x87F808, -- PhysicsObject 
    0x87F8F4, -- PhysicsWallArray 
    0x87FAAC, -- PhysicsWall 
    0x87FC5C, -- PhysicsItem 
    0x87FE2C, -- PhysicsProjectile 
    0x880054, -- PhysicsPlayer 
    0x88056C, -- PhysicsController 
    0x880A8C, -- PhysicsPlatform 
    0x880C48, -- PhysicsPlatformWallManager 
    0x880D58, -- PhysicsPlatformWall 
    0x880E14, -- CollisionEvent 
    0x880EDC, -- CollisionHit 
    0x880FF4, -- SmartPhysics 
    0x8811C0, -- SmartPhysicsGraphics 
    0x881380, -- TDrawingHelper 
    0x881594, -- TColor 
    0x881858, -- TLineBrush 
    0x881A10, -- TCircleBrush 
    0x881BE4, -- TRectangleBrush 
    0x883120, -- TPhysicsSimulatorView 
    0x8833C8, -- cp_var 
    0x883538, -- TServer 
    0x8836EC, -- Competitive 
    0x883830, -- LeaderboardEntry 
    0x8839E0, -- TSteamUser 
    0x883B30, -- TGetSteamUserName 
    0x883DF0, -- TSteamWeb 
    0x883F4C, -- TSteamFriend 
    0x88404C, -- GetSteamFriends 
    0x884198, -- TSteamStat 
    0x8855B4, -- TAchievement 
    0x885694, -- TAchievementLaser 
    0x8857F0, -- Steam 
    0x885AA0, -- TSteam 
    0x885B6C, -- ServerInfoContext 
    0x885C90, -- ServerInfoXML 
    0x885EFC, -- ServerInfoObject 
    0x886008, -- ServerInfoImage 
    0x886224, -- GetImageProcess 
    0x8862F0, -- TfirstStart 
    0x886544, -- Tmo 
    0x8865F8, -- Tconhandleremote 
    0x8866D8, -- Tconlog 
    0x8867C8, -- Tconcmd 
    0x8868AC, -- TModFileCounter 
    0x886940, -- TModLoader 
    0x8869F4, -- Tileset 
    0x886A98, -- TileProp 
    0x886C7C, -- Ttilefx 
    0x886DEC, -- Ttileblend 
    0x886F4C, -- Tcustomtile 
    0x88701C, -- Tmap_a 
    0x887110, -- TmapPreview 
    0x8871D4, -- Tmap_scroll 
    0x8872F4, -- Tmap_d 
    0x888F2C, -- Tpl 
    0x88932C, -- Te 
    0x88944C, -- Tee 
    0x8894F4, -- Ted 
    0x889690, -- Trestable 
    0x889AC0, -- TResGfx 
    0x889C38, -- TResSfx 
    0x889FB0, -- Tres 
    0x88A368, -- Tp 
    0x88A4B8, -- Tp_lightpool 
    0x88A7DC, -- Thostage 
    0x88A94C, -- Tdoc 
    0x88B1A8, -- Tdo 
    0x88B4D0, -- Ttween 
    0x88B60C, -- Tserversound 
    0x88B768, -- TPosSound 
    0x88BB28, -- Titem 
    0x88BF24, -- Tpro 
    0x88C0E0, -- Trp 
    0x88C188, -- Trpf 
    0x88C26C, -- Tshoot 
    0x88C338, -- TDecal 
    0x88C3E4, -- TJSONKey 
    0x88C54C, -- TJSONValue 
    0x88C648, -- TJSONObject 
    0x88C770, -- TJSONArray 
    0x88C844, -- TJSONString 
    0x88C91C, -- TJSONNumber 
    0x88C9F4, -- TJSONBoolean 
    0x88CA98, -- TJSONNull 
    0x88CBC0, -- TJSONParser 
    0x88CE6C, -- TJSON 
    0x88D09C, -- TVoiceStreamPlayer 
    0x88D23C, -- TVoiceRecorder 
    0x88D394, -- TVoiceStream 
    0x88D4F8, -- TVoiceChatReiceivePacket 
    0x88D6AC, -- TVoiceChatSendPacket 
    0x88DA9C, -- Tstats_user 
    0x88DC5C, -- Tstats_general 
    0x88DD7C, -- TFlag 
    0x88DEB0, -- burstFire 
    0x88E0AC, -- Tban 
    0x88E364, -- TVote 
    0x88E538, -- Teditor_actionlist 
    0x88E5F8, -- Ted_fill 
    0x88E6E4, -- Ted_tr 
    0x88E898, -- Tgui 
    0x88EB6C, -- Tgui_win 
    0x88EC7C, -- Tgui_lbl 
    0x88EDA4, -- Tgui_info 
    0x88EEAC, -- Tgui_btn 
    0x88EFA0, -- Tgui_ibtn 
    0x88F0CC, -- Tgui_in 
    0x88F1F0, -- Tgui_chk 
    0x88F31C, -- Tgui_opt 
    0x88F4B8, -- Tgui_tab 
    0x88F740, -- Tgui_tb 
    0x88F964, -- Tgui_list 
    0x88FAA4, -- Tgui_vscr 
    0x88FBC0, -- Tgui_hscr 
    0x88FCD0, -- Tgui_col 
    0x88FE08, -- Tgui_img 
    0x88FEE8, -- Tgui_rot 
    0x88FFEC, -- Tgui_cm 
    0x890218, -- Tgui_combo 
    0x89038C, -- Tgui_clist 
    0x8904D4, -- Tgui_alist 
    0x890698, -- Tgui_slist 
    0x890814, -- Tgui_slist_entry 
    0x890978, -- Tgui_c_profile 
    0x890A94, -- Tgui_c_serverlist 
    0x890B98, -- Tgui_c_leaderboard 
    0x890E3C, -- Tgui_hudmen 
    0x89129C, -- Tgui_sl 
    0x891644, -- Tsv 
    0x8917D8, -- Tgui_ml 
    0x891AD4, -- Tgui_joinmen 
    0x891C20, -- Tgui_spray 
    0x891D38, -- Tgui_keys 
    0x891E70, -- Tgui_tilelist 
    0x891F68, -- Tgui_plist 
    0x892060, -- Tgui_leadlist 
    0x89221C, -- LeaderboardPlayer 
    0x892304, -- LeaderboardRequest 
    0x8924F4, -- Tgui_svinfo 
    0x892764, -- Tgui_frlist 
    0x89288C, -- Tfriend 
    0x8929DC, -- Tgui_qp 
    0x892B20, -- Tgui_replaylistentry 
    0x892C50, -- Tgui_replaylist 
    0x892D24, -- Tgui_pointer 
    0x893098, -- Tgui_modlist 
    0x893184, -- Tgui_modlist_entry 
    0x893304, -- Tgui_fx 
    0x893408, -- Thud_radar_blink 
    0x89371C, -- Thud_scoreboard 
    0x894118, -- Thud_contextmenu 
    0x894464, -- Thud_msg 
    0x8945D0, -- thud_cmsg 
    0x894734, -- thud_header 
    0x894850, -- Thud_voice 
    0x894940, -- Thud_killCam 
    0x894A20, -- THudItemHover 
    0x894B8C, -- TPackage 
    0x894C54, -- Talias 
    0x894D9C, -- Tbind 
    0x894E9C, -- Trconfail 
    0x894F54, -- Tparse_cache 
    0x895168, -- Thook 
    0x895274, -- ThookStack 
    0x8953A0, -- lua_http 
    0x895424, -- lua_byte 
    0x8955F0, -- lua_bind 
    0x8956A4, -- lua_font 
    0x8957E8, -- Tluatimer 
    0x895A18, -- Tusgn_ureq 
    0x895AF8, -- Tusgn_clientname 
    0x895CE4, -- Ttrans 
    0x895DFC, -- Ttrans_recv 
    0x895F24, -- Ttrans_spray 
    0x896160, -- Tirc_server 
    0x8962B0, -- Tirc_msg 
    0x8963DC, -- Tirc_channel 
    0x8964E4, -- Tirc_user 
    0x8965CC, -- TSimpleProt 
    0x896690, -- Tfloodvio 
    --0x8967B0, -- Tfloodguard 
    --0x89688C, -- Tnamedguard 
    0x8969B0, -- Thttp 
    0x896C60, -- TSmartSocket 
    0x896D0C, -- Tau_dir 
    0x896DB0, -- Tau_file 
    0x896ED0, -- Tmn 
    0x897250, -- GetAvatarProcess 
    0x897454, -- GetUserDataProcess 
    0x8974F4, -- RoundDataInt 
    0x8975C0, -- StatsMap 
    0x897694, -- TRandom 
    0x8DD924, -- TPipeStream 
    0x8DDB0C, -- TProcess 
    0x8DDD90, -- TxmlBase 
    0x8DE64C, -- TxmlDoc 
    0x8DEE68, -- TxmlNode 
    0x8DF07C, -- TxmlBuffer 
    0x8DF1C8, -- TxmlOutputBuffer 
    0x8DF2C0, -- TxmlNs 
    0x8DF3B8, -- TxmlAttribute 
    0x8DF558, -- TxmlNodeSet 
    0x8DFA9C, -- TxmlXPathObject 
    0x8DFE14, -- TxmlXPathContext 
    0x8E0044, -- TxmlDtd 
    0x8E0244, -- TxmlError 
    0x8E09CC, -- TxmlTextReader 
    0x8E0B3C, -- TxmlEntity 
    0x8E0EE0, -- TxmlCatalog 
    0x8E1084, -- TxmlXIncludeCtxt 
    0x8E138C, -- TxmlURI 
    0x8E152C, -- TxmlLocationSet 
    0x8E15FC, -- TxmlDtdAttribute 
    0x8E16F0, -- TxmlDtdElement 
    0x8E1810, -- TxmlNotation 
    0x8E1BAC, -- TxmlValidCtxt 
    0x8E1D04, -- TxmlElementContent 
    0x8E1E44, -- TxmlXPathCompExpr 
    0x8E2098, -- TxmlOutputStreamHandler 
    0x8E23D0, -- Tudp_con 
    0x8E27A0, -- Tudp_p 
    0x8E2910, -- Tudp_ignore 
    0x8E31B4, -- TSockAddr 
    0x8E32B0, -- TICMP 
    0x8E3398, -- TAdapterInfo 
    0x8E3504, -- TNetwork 
    0x8E36F4, -- TNetStream 
    0x8E3A8C, -- TUDPStream 
    0x8E3D94, -- TTCPStream 
    0x8E3FE0, -- TOpenALSource 
    0x8E4104, -- TOpenALSound 
    0x8E42B0, -- TOpenALChannel 
    0x8E4464, -- TOpenALAudioDriver 
    0x8E5974, -- TBuf 
    0x8E5AD4, -- TDirectSoundSound 
    0x8E5D1C, -- TDirectSoundChannel 
    0x8E5F2C, -- TDirectSoundAudioDriver 
    0x8E625C, -- TFreeAudioSound 
    0x8E63FC, -- TFreeAudioChannel 
    0x8E65B0, -- TFreeAudioAudioDriver 
    0x8E67B0, -- TAudioSampleLoaderOGG 
    0x8E6880, -- TAudioSampleLoaderWAV 
    0x8E69B4, -- TSound 
    0x8E6AD8, -- TChannel 
    0x8E6C44, -- TAudioDriver 
    0x8E6E50, -- TAudioSample 
    0x8E6F34, -- TAudioSampleLoader 
    0x8E70B4, -- THTTPStreamFactory 
    0x8E72D8, -- TSocketStream 
    0x8E7408, -- TSocketStreamFactory 
    0x8E75C0, -- TRamStream 
    0x8E76E0, -- TRamStreamFactory 
    0x8E77A0, -- TSocketException 
    0x8E7AD4, -- TSocket 
    0x8E7C74, -- TKeyValue 
    0x8E7DD8, -- TNode 
    0x8E7EA8, -- TNodeEnumerator 
    0x8E7F2C, -- TKeyEnumerator 
    0x8E7FB4, -- TValueEnumerator 
    0x8E8088, -- TMapEnumerator 
    0x8E837C, -- TMap 
    0x8E8540, -- TFreeTypeGlyph 
    0x8E876C, -- TFreeTypeFont 
    0x8E882C, -- TFreeTypeFontLoader 
    0x8E8B74, -- FTFace 
    0x8E8CDC, -- FTMetrics 
    0x8E9048, -- FTGlyph 
    0x8E90F8, -- TPixmapLoaderJPG 
    0x8E91B8, -- TPixmapLoaderPNG 
    0x8E92C0, -- TPixmapLoaderBMP 
    0x8E9524, -- TXEndianStream 
    0x8E9660, -- TXEndianStreamFactory 
    0x8E9884, -- TD3D9ImageFrame 
    0x8E9C78, -- TD3D9Max2DDriver 
    0x8EA0D0, -- TD3D9AutoRelease 
    0x8EA35C, -- TD3D9Graphics 
    0x8EA4F4, -- TD3D9GraphicsDriver 
    0x8EA688, -- TD3D7Surface 
    0x8EA950, -- TD3D7Graphics 
    0x8EAE18, -- TD3D7GraphicsDriver 
    0x8EB74C, -- DSCAPS 
    0x8EB838, -- DSBCAPS 
    0x8EB96C, -- WAVEFORMATEX 
    0x8EBAC4, -- DSBUFFERDESC 
    0x8EBC48, -- D3DCLIPSTATUS 
    0x8EBDF0, -- D3DMATRIX 
    0x8EBEBC, -- D3DDISPLAYMODE 
    0x8EBF5C, -- D3DRASTER_STATUS 
    0x8EC19C, -- D3DPRESENT_PARAMETERS 
    0x8EC29C, -- D3DSURFACE_DESC 
    0x8EC338, -- D3DLOCKED_RECT 
    0x8EC45C, -- D3DRECTPATCH_INFO 
    0x8EC528, -- D3DTRIPATCH_INFO 
    0x8EC6AC, -- D3DDEVTYPE 
    0x8ED128, -- D3DCAPS9 
    0x8ED1D0, -- D3DCLIPSTATUS9 
    0x8ED2B4, -- D3DVIEWPORT9 
    0x8ED4DC, -- D3DMATERIAL9 
    0x8ED76C, -- D3DLIGHT9 
    0x8ED868, -- D3DVERTEXELEMENT9 
    0x8EF704, -- D3DADAPTER_IDENTIFIER9 
    0x8EFA78, -- DDSURFACEDESC 
    0x8EFCE0, -- DDSURFACEDESC2 
    0x8EFE70, -- DDOPTSURFACEDESC 
    0x8EFFD0, -- DDCOLORCONTROL 
    0x8F008C, -- DDARGB 
    0x8F0130, -- DDRGBA 
    0x8F01E4, -- DDCOLORKEY 
    0x8F0550, -- DDBLTFX 
    0x8F05CC, -- DDSCAPS 
    0x8F0644, -- DDOSCAPS 
    0x8F06F4, -- DDSCAPSEX 
    0x8F079C, -- DDSCAPS2 
    0x8F0D30, -- DDCAPS_DX1 
    0x8F1438, -- DDCAPS_DX3 
    0x8F1B18, -- DDCAPS_DX5 
    0x8F2184, -- DDCAPS_DX6 
    0x8F27DC, -- DDCAPS_DX7 
    0x8F2900, -- DDPIXELFORMAT 
    0x8F2A48, -- DDOVERLAYFX 
    0x8F2D44, -- D3DMATERIAL7 
    0x8F2E38, -- D3DVIEWPORT7 
    0x8F2F0C, -- D3DVERTEXBUFFERDESC 
    0x8F3090, -- SCROLLINFO 
    0x8F3218, -- MENUITEMINFOW 
    0x8F3314, -- MSG 
    0x8F3488, -- WNDCLASS 
    0x8F3590, -- WNDCLASSW 
    0x8F36D4, -- MINMAXINFO 
    0x8F38F0, -- WINDOWINFO 
    0x8F3AD8, -- PAINTSTRUCT 
    0x8F3C54, -- GUID 
    0x8F3D24, -- VARIANT 
    0x8F3E88, -- COMBOBOXEXITEMW 
    0x8F3F70, -- TCITEMW 
    0x8F40B0, -- TVITEMW 
    0x8F4298, -- TVINSERTSTRUCTW 
    0x8F4338, -- TINITCOMMONCONTROLSEX 
    0x8F44A0, -- TOOLINFOW 
    0x8F45C8, -- TBBUTTON 
    0x8F4680, -- COLORSCHEME 
    0x8F47DC, -- LVITEMW 
    0x8F48C4, -- FINDINFOW 
    0x8F4980, -- LVHITTESTINFO 
    0x8F4A74, -- LVCOLUMNW 
    0x8F4BEC, -- CHOOSECOLOR 
    0x8F4DA8, -- CHOOSEFONT 
    0x8F52E8, -- DEVMODE 
    0x8F5628, -- PIXELFORMATDESCRIPTOR 
    0x8F57C4, -- BITMAPINFOHEADER 
    0x8F5D34, -- LOGFONTW 
    0x8F6014, -- TEXTMETRIC 
    0x8F60FC, -- EDITSTREAM 
    0x8F61AC, -- TEXTRANGEW 
    0x8F6234, -- CHARRANGE 
    0x8F6724, -- CHARFORMATW 
    0x8F6A1C, -- CHARFORMAT 
    0x8F6EA4, -- PARAFORMAT 
    0x8F7044, -- TGLImageFrame 
    0x8F7430, -- TGLMax2DDriver 
    0x8F7CC0, -- TGLGraphics 
    0x8F7E1C, -- TGLGraphicsDriver 
    0x8F8184, -- TImage 
    0x8F8734, -- TMax2DGraphics 
    0x8F88E4, -- rpoly 
    0x8F8A40, -- TQuad 
    0x8F8B70, -- TImageFrame 
    0x8F8E2C, -- TMax2DDriver 
    0x8F9618, -- TImageGlyph 
    0x8F9804, -- TImageFont 
    0x8F9924, -- TGlyph 
    0x8F9A24, -- TFont 
    0x8F9AF0, -- TFontLoader 
    0x8F9BF4, -- TGraphics 
    0x8F9CE8, -- TGraphicsMode 
    0x8F9E30, -- TGraphicsDriver 
    0x8FA178, -- TPixmap 
    0x8FA264, -- TPixmapLoader 
    0x8FA3A0, -- TCStandardIO 
    0x8FA858, -- TTextStream 
    0x8FA998, -- TTextStreamFactory 
    0x8FAB9C, -- TLink 
    0x8FAC5C, -- TListEnum 
    0x8FAFF4, -- TList 
    0x8FB344, -- TSystemDriver 
    0x8FB518, -- TWin32SystemDriver 
    0x8FB7F4, -- TBankStream 
    0x8FB918, -- TBankStreamFactory 
    0x8FBCC4, -- TBank 
    0x8FBDA8, -- TStreamException 
    0x8FBE38, -- TStreamReadException 
    0x8FBEBC, -- TStreamWriteException 
    0x8FBFD4, -- TIO 
    0x8FC2BC, -- TStream 
    0x8FC564, -- TStreamWrapper 
    0x8FC688, -- TStreamStream 
    0x8FC8E8, -- TCStream 
    0x8FCA2C, -- TStreamFactory 
    0x8FCE1C, -- TEvent 
    0x8FD4B4, -- THook 
    0x8FD578, -- TBlitzException 
    0x8FD608, -- TNullObjectException 
    0x8FD68C, -- TNullMethodException 
    0x8FD710, -- TNullFunctionException 
    0x8FD794, -- TArrayBoundsException 
    0x8FD814, -- TOutOfDataException 
    0x8FD8D8 -- TRuntimeException 

}

local generated_classes = {}
local _idc = {}

local DebugeclCodes = {
    "BBDEBUGDECL_END",              -- 0
    "BBDEBUGDECL_CONST",            -- 1
    "BBDEBUGDECL_LOCAL",
    "BBDEBUGDECL_FIELD",
    "BBDEBUGDECL_GLOBAL",
    "BBDEBUGDECL_VARPARAM",
    "BBDEBUGDECL_TYPEMETHOD",
    "BBDEBUGDECL_TYPEFUNCTION"
}

local DebugScopeCodes = {
    "BBDEBUGSCOPE_FUNCTION",        -- 0
    "BBDEBUGSCOPE_USERTYPE",        -- 1
    "BBDEBUGSCOPE_LOCALBLOCK",
    "BBDEBUGSCOPE_USERINTERFACE",
    "BBDEBUGSCOPE_USERSTRUCT",
    "BBDEBUGSCOPE_USERENUM"
}

function array_has_value (tab, val)
    for index, value in ipairs(tab) do
        if value == val then
            return true
        end
    end

    return false
end


function tablelength(T)
  local count = 0
  for _ in pairs(T) do count = count + 1 end
  return count
end


function split(s, delimiter)
    local result = {};
    for match in (s..delimiter):gmatch("(.-)"..delimiter) do
        table.insert(result, match);
    end
    return result;
end

function convert_type_tag(type_tag)
-- const char *bbVoidTypeTag="?";
-- const char *bbByteTypeTag="b";
-- const char *bbShortTypeTag="s";
-- const char *bbIntTypeTag="i";
-- const char *bbUIntTypeTag="u";
-- const char *bbLongTypeTag="l";
-- const char *bbULongTypeTag="y";
-- const char *bbSizetTypeTag="z";
-- const char *bbFloatTypeTag="f";
-- const char *bbDoubleTypeTag="d";
-- const char *bbStringTypeTag="$";
-- const char *bbObjectTypeTag=":Object";
-- const char *bbBytePtrTypeTag="*b";

    local type_tags = {
        ["$"] = "BBString*",
        ["b"] = "char",
        ["s"] = "short",
        ["i"] = "int",
        ["l"] = "long long",
        ["f"] = "float"
    }
    
    local result = type_tags[type_tag]
    if result == nil then
        if (type_tag:sub(1,1) == ":") then
            result = type_tag:sub(2)
            result = string.format("%s*", result)
        end
    end

    return result or "void*"
end

function convert_typedef(_type)
    local result = {
        ["params"] = "",
        ["return"] = ""
    }
    
    local splited = split(_type, "%)")
    local params = string.format("%s)", splited[1])
    local _returns = splited[2]:sub(1, #splited[2] - 1)
    
    if params == "()" then
        result["params"] = ""
    else
        local no_parentheses = params:sub(1, #params - 1)
        no_parentheses = no_parentheses:sub(2)
        
        local params_splited = split(no_parentheses, ",")

        for i=1, #params_splited do
            result["params"] = result["params"] .. string.format(
                "%s a%d, ",
                convert_type_tag(params_splited[i]),
                i
            )
        end
        local x = result["params"]
        result["params"] = x:sub(1, #x - 2)
        
    end
    
    --print(_type)
    --print(params)
    
    
    
    result["return"] = convert_type_tag(_returns)
    return result
end

function get_class_name(class_addr)
    local pTypeInfos = ReadPointer(class_addr+0x8)
    if pTypeInfos then
        local addr = pTypeInfos + 0x4
        return ReadString(ReadPointer(addr), 100)
    else 
        return "Empty"
    end
end

function get_pBBDebugScope(class_addr)
    return ReadPointer(class_addr+0x8)
end

function add_member(class_inst, addr, members)
    local mName = ReadString(ReadPointer(addr + 0x4), 100)
    local mType = ReadString(ReadPointer(addr + 0x8), 100)
    local mOffset = ReadInteger(addr + 0xC)
    
    if members[mOffset] ~= nil then
        print(string.format(
            "Duplicated member? at %d [0x%X]",
            mOffset, mOffset
        ))
    end

    if mType:sub(1,1) == ":" and class_inst > 0 then
        local sub_inst = ReadPointer(class_inst+mOffset)
        if sub_inst > 0 then
            local sub_inst_class = ReadPointer(sub_inst)
            if sub_inst_class > 0 and not array_has_value(generated_classes, ReadPointer(sub_inst)) then
                table.insert(generated_classes, sub_inst_class)
                -- gen_sdk(get_class(sub_inst, 0))
            end
        end
    end

    members[mOffset] = string.format(
        "%s m_%s; // 0x%X <type_%s>",
        convert_type_tag(mType),
        mName,
        mOffset,
        mType
    )

end

function add_type_method(class_inst, pThis, addr, type_methods, cls_name)
    -- typedef void(__cdecl* _test)();
    -- first param = this

    local mOffset = ReadInteger(addr + 0xC)
    local fnAddr = ReadPointer(pThis + mOffset)
    
    if (fnAddr == nil) then
        -- i.e IList.Count method is function
        table.insert(_idc, string.format(
            'set_name(0x%X, "fn_%s");\n',
            ReadPointer(addr + 0xC),
            mName
        ))
        return
    end
    
    local mName = ReadString(ReadPointer(addr + 0x4), 100)
    local mType = ReadString(ReadPointer(addr + 0x8), 100)
    
    local _typedef = convert_typedef(mType)
    
    local s_params = string.format(
        "(%s* pThis)",
        cls_name
    )

    if #_typedef["params"] > 0 then
        s_params = string.format(
            "(%s* pThis, %s)",
            cls_name,
            _typedef["params"]
        )
    end
    
    if type_methods[mOffset] ~= nil then
        print(string.format(
            "Duplicated type_method? at %d [0x%X]",
            mOffset, mOffset
        ))
    end
    
    assert(fnAddr ~= nil, string.format("[add_type_method] m_%s_%s is nil 0x%X", cls_name, mName, ReadPointer(addr + 0xC)))
    
    table.insert(_idc, string.format(
        'set_name(0x%X, "m_%s_%s");\n',
        fnAddr,
        cls_name,
        mName
    ))
    
    type_methods[mOffset] = string.format(
        "%s(__cdecl* m_%s_%s)%s; // [%s at 0x%X] [0x%X] %s",
        _typedef["return"],
        cls_name,
        mName,
        s_params,
        mName,
        fnAddr,
        mOffset,
        mType
    )
end
function add_type_functions(class_inst, pThis, addr, type_functions)
    local mOffset = ReadInteger(addr + 0xC)
    local fnAddr = ReadPointer(pThis + mOffset)
    local mName = ReadString(ReadPointer(addr + 0x4), 100)
    local mType = ReadString(ReadPointer(addr + 0x8), 100)
    
    local _typedef = convert_typedef(mType)
    
    local s_params = "()"

    if #_typedef["params"] > 0 then
        s_params = string.format(
            "(%s)",
            _typedef["params"]
        )
    end
    
    if type_functions[mOffset] ~= nil then
        print(string.format(
            "Duplicated type_functions? at %d [0x%X]",
            mOffset, mOffset
        ))
    end
    table.insert(_idc, string.format(
        'set_name(0x%X, "fn_%s");\n',
        fnAddr,
        mName
    ))

    type_functions[mOffset] = string.format(
        "%s(__cdecl* fn_%s)%s; // [%s at 0x%X] [0x%X] %s",
        _typedef["return"],
        mName,
        s_params,
        mName,
        fnAddr,
        mOffset,
        mType
    )
end

function get_class(class_inst, class_addr)
    if class_inst then
        class_addr = ReadPointer(class_inst)
    end

    local result = {}
    local cls_name = get_class_name(class_addr)
    local super_class = ReadPointer(class_addr) or 0
    
    result["name"] = cls_name
    result["super"] = string.format("0x%X", super_class)
    result["has_super"] = (ReadPointer(super_class) or 0) > 0
    result["free"] = string.format("0x%X", ReadPointer(class_addr+0x4))
    result["size"] = ReadInteger(class_addr+0xC)
    result["members"] = {}
    result["type_methods"] = {}
    result["type_functions"] = {}
    
    
    local pBBDebugScope = get_pBBDebugScope(class_addr)
    local BBDebugDeclStart = pBBDebugScope + 0x8

    if ReadInteger(BBDebugDeclStart) == 0 then 
        print(string.format(
            "No decls for %s",
            cls_name
        ))
        
        return result
    end
    
    local decl_sz = 0x10
    local DebugeclCode = 0
    for i=1, 999 do
        DebugeclCode = ReadInteger(BBDebugDeclStart)
        if DebugeclCode == 0 then 
            return result 
        end
        
        if DebugeclCode == 3 then
            add_member(class_inst, BBDebugDeclStart, result["members"])
        elseif DebugeclCode == 6 then
            add_type_method(class_inst, class_addr, BBDebugDeclStart, result["type_methods"], cls_name)
        elseif DebugeclCode == 7 then
            add_type_functions(class_inst, class_addr, BBDebugDeclStart, result["type_functions"])
        else
            print(string.format(
                "TODO: Handle DebugeclCode %d, 0x%X",
                DebugeclCode,
                BBDebugDeclStart
            ))
        end

        BBDebugDeclStart = BBDebugDeclStart + decl_sz
    end
    
    return result
end

function gen_sdk(cls)
    -- print("gen_sdk")
    local fpath = string.format("SDKGen/%s.h", cls["name"])
    local fo, err = io.open(fpath, "w+")

    local n_methods = tablelength(cls["type_methods"])
    local n_functions = tablelength(cls["type_functions"])
    local n_members = tablelength(cls["members"])
    local n_methods_and_funcs = n_methods + n_functions
    
    -- print(n_methods_and_funcs)
    assert(n_methods_and_funcs < 999, n_methods_and_funcs)
    
    print(string.format(
        "typedef struct %s;",
        cls["name"]
    ))
    print(string.format(
        "typedef struct %sDecl;",
        cls["name"]
    ))

    fo:write(string.format(
        '#pragma once\n\n#include "defines.h"\n\n// %d methods, %d functions\n',
        n_methods, n_functions
    ))
    fo:write(string.format(
        "struct %sDecl {\n",
        cls["name"]
    ))
    
    fo:write(string.format(
        "    void* pSuper;  // 0x0 0x%X\n",
        cls["super"]
    ))
    fo:write(string.format(
        "    void* pFree;  // 0x4 0x%X\n",
        cls["free"]
    ))
    fo:write("    BBDebugScope* pDebugScope; // 0x8\n")
    fo:write(string.format(
        "    size_t sz; //0xC %d(0x%X)\n",
        cls["size"], cls["size"]
    ))
    
    local can_continue = true
    local step = 0x4
    local offset = 0xC + step
    while (can_continue) do
        local method = cls["type_methods"][offset]
        local func = cls["type_functions"][offset]
        
        if method then
            fo:write(string.format(
                "    %s\n",
                method
            ))
            -- print(method)
            n_methods_and_funcs = n_methods_and_funcs - 1
        elseif func then
            fo:write(string.format(
                "    %s\n",
                func
            ))
            n_methods_and_funcs = n_methods_and_funcs - 1
            -- print(func)
        else
            local inothing = (offset/step)-1
            fo:write(string.format(
                "    void* nothing_%d; // 0x%X\n",
                inothing,
                offset
            ))
            -- print("nothing")
            
            if inothing > 100 then n_methods_and_funcs = 0 end
            
        end
        
        can_continue = n_methods_and_funcs > 0
        offset = offset + step
    end
    -- print("funcs and members done")
    
    fo:write("};\n\n\n")
    if cls["has_super"] then
        fo:write(string.format(
            "// Super: %s\n",
            cls["super"]
        ))
    end
    
    fo:write(string.format(
        "// %d members\n",
        n_members
    ))
    fo:write(string.format(
        "struct %s {\n",
        cls["name"]
    ))
    
    fo:write(string.format(
        "    %sDecl* decl; // 0x0\n",
        cls["name"]
    ))
    fo:write("    int    refs;  // 0x4\n")
    
    can_continue = true
    step = 0x1
    offset = 0x8
    local limit = offset * 100
    
    -- print("gen members")
    -- print(n_members)
    while (can_continue) do
        local member = cls["members"][offset]
        
        if member then
            fo:write(string.format(
                "    %s\n",
                member
            ))
            n_members = n_members - 1
        end
        
        can_continue = n_members > 0
        offset = offset + step
        
        if offset >= limit then can_continue = false end
    end
    -- print("gen done")
    fo:write("};\n\n\n")
    io.close(fo)
end

local _addrlist =  getAddressList()
local x = _addrlist.getMemoryRecordByDescription("globalalloc")
x.Active = true

local rec = _addrlist.getMemoryRecordByDescription("fakecls")
g_fakecls = rec.CurrentAddress



for i=1, #all_decls do
   local decl = all_decls[i]
   writeInteger(g_fakecls, decl)
   -- print(string.format("0x%X", decl))
   gen_sdk(get_class(g_fakecls, 0))
end

fpath = "SDKGen/idc_commands.idc"
local fo, err = io.open(fpath, "w+")

for i=1, #_idc do
    fo:write(_idc[i])
end
io.close(fo)
print("Done")
