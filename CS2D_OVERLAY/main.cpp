#include <windows.h>
#include <ctime>
#include <Shlobj.h>
#include <string> 
#include <vector>
#include <fstream>
#include <d3d9.h>

#pragma comment(lib, "d3d9.lib")

#include "DXSDK\d3dx9.h"
#if defined _M_X64
#pragma comment(lib, "DXSDK/x64/d3dx9.lib") 
#elif defined _M_IX86
#pragma comment(lib, "DXSDK/x86/d3dx9.lib")
#endif

#pragma comment(lib, "winmm.lib")
#include "MinHook/include/MinHook.h" //detour
using namespace std;

#pragma warning (disable: 4244) //


#include "main.h" //less important stuff & helper funcs here


typedef HRESULT(APIENTRY *SetVertexShaderConstantF)(IDirect3DDevice9*, UINT, const float*, UINT);
HRESULT APIENTRY SetVertexShaderConstantF_hook(IDirect3DDevice9*, UINT, const float*, UINT);
SetVertexShaderConstantF SetVertexShaderConstantF_orig = 0;

typedef HRESULT(APIENTRY *DrawIndexedPrimitive)(IDirect3DDevice9*, D3DPRIMITIVETYPE, INT, UINT, UINT, UINT, UINT);
HRESULT APIENTRY DrawIndexedPrimitive_hook(IDirect3DDevice9*, D3DPRIMITIVETYPE, INT, UINT, UINT, UINT, UINT);
DrawIndexedPrimitive DrawIndexedPrimitive_orig = 0;

typedef HRESULT(APIENTRY *DrawPrimitive)(IDirect3DDevice9*, D3DPRIMITIVETYPE, UINT, UINT);
HRESULT APIENTRY DrawPrimitive_hook(IDirect3DDevice9*, D3DPRIMITIVETYPE, UINT, UINT);
DrawPrimitive DrawPrimitive_orig = 0;

typedef HRESULT(APIENTRY* EndScene) (IDirect3DDevice9*);
HRESULT APIENTRY EndScene_hook(IDirect3DDevice9*);
EndScene EndScene_orig = 0;

typedef HRESULT(APIENTRY* Present) (IDirect3DDevice9*, CONST RECT*, CONST RECT*, HWND, CONST RGNDATA*);
HRESULT APIENTRY Present_hook(IDirect3DDevice9*, CONST RECT*, CONST RECT*, HWND, CONST RGNDATA*);
Present Present_orig = 0;

typedef HRESULT(APIENTRY *Reset)(IDirect3DDevice9*, D3DPRESENT_PARAMETERS*);
HRESULT APIENTRY Reset_hook(IDirect3DDevice9*, D3DPRESENT_PARAMETERS*);
Reset Reset_orig = 0;

typedef HRESULT(APIENTRY *SetStreamSource)(IDirect3DDevice9*, UINT, IDirect3DVertexBuffer9*, UINT, UINT);
HRESULT APIENTRY SetStreamSource_hook(IDirect3DDevice9*, UINT, IDirect3DVertexBuffer9*, UINT, UINT);
SetStreamSource SetStreamSource_orig = 0;

typedef HRESULT(APIENTRY *SetIndices)(IDirect3DDevice9*,IDirect3DIndexBuffer9 *pIndexData);
HRESULT APIENTRY SetIndices_hook(IDirect3DDevice9*, IDirect3DIndexBuffer9 *pIndexData);
SetIndices SetIndices_orig = 0;

typedef HRESULT(APIENTRY *SetVertexDeclaration)(IDirect3DDevice9*, IDirect3DVertexDeclaration9*);
HRESULT APIENTRY SetVertexDeclaration_hook(IDirect3DDevice9*, IDirect3DVertexDeclaration9*);
SetVertexDeclaration SetVertexDeclaration_orig = 0;

typedef HRESULT(APIENTRY *SetVertexShader)(IDirect3DDevice9*, IDirect3DVertexShader9*);
HRESULT APIENTRY SetVertexShader_hook(IDirect3DDevice9*, IDirect3DVertexShader9*);
SetVertexShader SetVertexShader_orig = 0;

typedef HRESULT(APIENTRY *SetPixelShader)(IDirect3DDevice9*, IDirect3DPixelShader9*);
HRESULT APIENTRY SetPixelShader_hook(IDirect3DDevice9*, IDirect3DPixelShader9*);
SetPixelShader SetPixelShader_orig = 0;

typedef HRESULT(APIENTRY *SetTexture)(IDirect3DDevice9*, DWORD, IDirect3DBaseTexture9*);
HRESULT APIENTRY SetTexture_hook(IDirect3DDevice9*, DWORD, IDirect3DBaseTexture9*);
SetTexture SetTexture_orig = 0;

typedef HRESULT(APIENTRY *SetViewport)(IDirect3DDevice9*, CONST D3DVIEWPORT9*);
HRESULT APIENTRY SetViewport_hook(IDirect3DDevice9*, CONST D3DVIEWPORT9*);
SetViewport SetViewport_orig = 0;

//=====================================================================================================================

HRESULT APIENTRY SetVertexShaderConstantF_hook(LPDIRECT3DDEVICE9 pDevice, UINT StartRegister, const float *pConstantData, UINT Vector4fCount)
{
	if (pConstantData != NULL)
	{
		//pConstantDataFloat = (float*)pConstantData;

		mStartRegister = StartRegister;
		mVector4fCount = Vector4fCount;
	}

	return SetVertexShaderConstantF_orig(pDevice, StartRegister, pConstantData, Vector4fCount);
}

//==========================================================================================================================

HRESULT APIENTRY SetStreamSource_hook(LPDIRECT3DDEVICE9 pDevice, UINT StreamNumber, IDirect3DVertexBuffer9* pStreamData, UINT OffsetInBytes, UINT sStride)
{
	if (StreamNumber == 0) 
	{
		Stride = sStride;

		//if (pStreamData)// && Stride == 32)
		//{
			//pStreamData->GetDesc(&vdesc);
		//}
	}

	return SetStreamSource_orig(pDevice, StreamNumber, pStreamData, OffsetInBytes, sStride);
}

//==========================================================================================================================

HRESULT APIENTRY SetIndices_hook(IDirect3DDevice9* pDevice, IDirect3DIndexBuffer9 *pIndexData)
{
	//if (pIndexData != NULL)
	//{
		//pIndexData->GetDesc(&iDesc);
	//}

	return SetIndices_orig(pDevice, pIndexData);
}

//==========================================================================================================================

HRESULT APIENTRY SetVertexDeclaration_hook(LPDIRECT3DDEVICE9 pDevice, IDirect3DVertexDeclaration9* pDecl)
{
	if (pDecl != NULL)
	{
		pDecl->GetDeclaration(decl, &numElements);
	}

	return SetVertexDeclaration_orig(pDevice, pDecl);
}

//==========================================================================================================================

HRESULT APIENTRY SetVertexShader_hook(LPDIRECT3DDEVICE9 pDevice, IDirect3DVertexShader9 *veShader)
{
	if (veShader != NULL)
	{
		vShader = veShader;
		vShader->GetFunction(NULL, &vSize);
	}

	return SetVertexShader_orig(pDevice, veShader);
}

//==========================================================================================================================

HRESULT APIENTRY SetPixelShader_hook(LPDIRECT3DDEVICE9 pDevice, IDirect3DPixelShader9 *piShader)
{
	if (piShader != NULL)
	{
		pShader = piShader;
		pShader->GetFunction(NULL, &pSize);
	}

	return SetPixelShader_orig(pDevice, piShader);
}

//==========================================================================================================================

HRESULT APIENTRY DrawIndexedPrimitive_hook(IDirect3DDevice9* pDevice, D3DPRIMITIVETYPE Type, INT BaseVertexIndex, UINT MinVertexIndex, UINT NumVertices, UINT startIndex, UINT primCount)
{
	return DrawIndexedPrimitive_orig(pDevice, Type, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);
}

//==========================================================================================================================

HRESULT APIENTRY DrawPrimitive_hook(IDirect3DDevice9* pDevice, D3DPRIMITIVETYPE PrimitiveType, UINT StartVertex, UINT PrimitiveCount)
{
	return DrawPrimitive_orig(pDevice, PrimitiveType, StartVertex, PrimitiveCount);
}

//==========================================================================================================================

HRESULT APIENTRY EndScene_hook(IDirect3DDevice9* pDevice)
{
	
	return EndScene_orig(pDevice);
}

HRESULT Present_Hook(IDirect3DDevice9* pDevice, CONST RECT *pSrcRect, CONST RECT *pDestRect, HWND hDestWindow, CONST RGNDATA *pDirtyRegion)
{
	if (pDevice == nullptr) return Present_orig(pDevice, pSrcRect, pDestRect, hDestWindow, pDirtyRegion);
	DWORD localPlayer = *(DWORD*)0x006CC294;

	int localplayer_tid = *(int*)(localPlayer + 0x134);
	int localplayer_isMoving = *(int*)(localPlayer + 0x1FC);
	int localplayer_curHP = *(int*)(localPlayer + 0x164);

	globaltid = localplayer_tid;
	if (localplayer_tid != 0 && !bRoot || localplayer_isMoving != 0 && !bRoot || localplayer_curHP != 0 && !bRoot) {
		DWORD Specmodeaddr = *(DWORD*)0x006CC400;
		if (OldSpecmode != -1) *(int*)(Specmodeaddr + 0x19) = OldSpecmode;
		if (bNoFow) exit(0);
		bXray = FALSE;
		bNoFow = FALSE;
		bNoFlash = FALSE;
		NoFlash(bNoFlash);
		ShowOverlay = FALSE;
		ShowMenu = FALSE;
		return Present_orig(pDevice, pSrcRect, pDestRect, hDestWindow, pDirtyRegion);
	}

	if (bSpritesCreated == FALSE)
	{
		CreateSprites(pDevice);
	}

	int fsize = 16;

	if (FirstInit == FALSE)
	{
		Log("First Init");
		HitHook();
		iTransparency = Load("Overlay", "Transparency", 0);
		iBorderedText = Load("Overlay", "BorderedText", 0);
		iAutoUpdateScore = Load("Overlay", "AutoUpdateScore", 1);
		team1 = iniLoadString("Teams", "Team1", "");
		team2 = iniLoadString("Teams", "Team2", "");
		setScreenCenter(pDevice);

		if (Viewport.Width == 640 && Viewport.Height == 480)
		{
			HPBarPosY = 140;
			ICCLogoXPos = 0;
			ICCLogoYPos = 0;
			bar_width = bar_width / 2;
			fsize = 8;
		}
		FirstInit = TRUE;
	}

	HRESULT fontret;


	if (guiFont == NULL) {
		fontret = D3DXCreateFont(pDevice, fsize, 0, FW_BOLD, 0, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, TEXT("Arial"), &guiFont);
		if (fontret != D3D_OK)	Log("[guiFont %i]", fontret);
	}
		
	if (symbolFont == NULL)
	{
		fontret = D3DXCreateFont(pDevice, fsize + 16, 0, FW_BOLD, 0, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, TEXT("csp_text"), &symbolFont);
		if (fontret != D3D_OK)	Log("[symbolFont %i]", fontret);
	}
	if (scoreFont == NULL)
	{
		fontret = D3DXCreateFont(pDevice, fsize + 10, 0, FW_BOLD, 0, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, TEXT("csp_text"), &scoreFont);
		if (fontret != D3D_OK)	Log("[scoreFont %i]", fontret);
	}


	if (guiFont)
	{
		BuildOverlay(pDevice);
		BuildMenu(pDevice);
	}

	return Present_orig(pDevice, pSrcRect, pDestRect, hDestWindow, pDirtyRegion);
}

//==========================================================================================================================

HRESULT APIENTRY SetTexture_hook(IDirect3DDevice9* pDevice, DWORD Sampler, IDirect3DBaseTexture9 *pTexture)
{
	return SetTexture_orig(pDevice, Sampler, pTexture);
}

//==========================================================================================================================

HRESULT APIENTRY SetViewport_hook(IDirect3DDevice9* pDevice, CONST D3DVIEWPORT9* pViewport)
{

	return SetViewport_orig(pDevice, pViewport);
}

//==========================================================================================================================

HRESULT APIENTRY Reset_hook(IDirect3DDevice9* pDevice, D3DPRESENT_PARAMETERS *pPresentationParameters)
{
	DeleteSurfaces();
	if (guiFont) guiFont->OnLostDevice();
	if (symbolFont) symbolFont->OnLostDevice();
	if (scoreFont) scoreFont->OnLostDevice();

	HRESULT ResetReturn = Reset_orig(pDevice, pPresentationParameters);

	if (SUCCEEDED(ResetReturn))
	{
		if (guiFont) guiFont->OnResetDevice();
		if (symbolFont) symbolFont->OnResetDevice();
		if (scoreFont) scoreFont->OnResetDevice();
	}

	return ResetReturn;
}

//==========================================================================================================================

DWORD WINAPI DirectXInit(__in  LPVOID lpParameter)
{
	while (GetModuleHandle("d3d9.dll") == 0)
	{
		Sleep(100);
	}

	IDirect3D9* d3d = NULL;
	IDirect3DDevice9* d3ddev = NULL;
	HWND tmpWnd = NULL;
	#if defined _M_X64
		DWORD64* dVtable = NULL;
	#elif defined _M_IX86
		DWORD* dVtable = NULL;
	#endif
	
	DWORD TableAddress = FindPattern((DWORD)GetModuleHandle("d3d9.dll"), 0x128000, (PBYTE)"\xC7\x06\x00\x00\x00\x00\x89\x86\x00\x00\x00\x00\x89\x86", "xx????xx????xx");

	if (TableAddress == 0) {
		Log("[PATTERN NOT FOUND]");
		tmpWnd = CreateWindowA("BUTTON", "Temp Window", WS_SYSMENU | WS_MINIMIZEBOX, CW_USEDEFAULT, CW_USEDEFAULT, 300, 300, NULL, NULL, dllHandle, NULL);
		if (tmpWnd == NULL)
		{
			Log("[DirectX] Failed to create temp window");
			return 0;
		}

		d3d = Direct3DCreate9(D3D_SDK_VERSION);
		if (d3d == NULL)
		{
			DestroyWindow(tmpWnd);
			Log("[DirectX] Failed to create temp Direct3D interface");
			return 0;
		}

		D3DPRESENT_PARAMETERS d3dpp;
		ZeroMemory(&d3dpp, sizeof(d3dpp));
		d3dpp.Windowed = TRUE;
		d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
		d3dpp.hDeviceWindow = tmpWnd;
		d3dpp.BackBufferFormat = D3DFMT_UNKNOWN;

		HRESULT result = d3d->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, tmpWnd, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &d3ddev);
		if (result != D3D_OK)
		{
			d3d->Release();
			DestroyWindow(tmpWnd);
			Log("[DirectX] Failed to create temp Direct3D device");
			return 0;
		}

		// We have the device, so walk the vtable to get the address of all the dx functions in d3d9.dll
		#if defined _M_X64
			dVtable = (DWORD64*)d3ddev;
			dVtable = (DWORD64*)dVtable[0];
		#elif defined _M_IX86
			dVtable = (DWORD*)d3ddev;
			dVtable = (DWORD*)dVtable[0]; // == *d3ddev
		#endif
	}
	else 
	{
		Log("[PATTERN FOUND - 0x%x]", TableAddress);
		#if defined _M_X64
			dVtable = (DWORD64*)(TableAddress + 2);
			dVtable = (DWORD64*)dVtable[0]; // == *d3ddev
		#elif defined _M_IX86
			dVtable = (DWORD*)(TableAddress + 2);
			dVtable = (DWORD*)dVtable[0]; // == *d3ddev
		#endif
	}

	// Set EndScene_orig to the original EndScene etc.
	Present_orig = (Present)dVtable[17];
	EndScene_orig = (EndScene)dVtable[42];
	SetVertexShaderConstantF_orig = (SetVertexShaderConstantF)dVtable[94];
	DrawIndexedPrimitive_orig = (DrawIndexedPrimitive)dVtable[82];
	DrawPrimitive_orig = (DrawPrimitive)dVtable[81];
	Reset_orig = (Reset)dVtable[16];
	SetStreamSource_orig = (SetStreamSource)dVtable[100];
	//SetIndices_orig = (SetIndices)dVtable[104];
	SetVertexDeclaration_orig = (SetVertexDeclaration)dVtable[87];
	SetVertexShader_orig = (SetVertexShader)dVtable[92];
	SetPixelShader_orig = (SetPixelShader)dVtable[107];
	SetTexture_orig = (SetTexture)dVtable[65];
	SetViewport_orig = (SetViewport)dVtable[47];

	// Detour functions x86 & x64
	if (MH_Initialize() != MH_OK) { return 1; }
	if (MH_CreateHook((DWORD_PTR*)dVtable[17], &Present_Hook, reinterpret_cast<void**>(&Present_orig)) != MH_OK) { return 1; }
	if (MH_EnableHook((DWORD_PTR*)dVtable[17]) != MH_OK) { return 1; }
	if (MH_CreateHook((DWORD_PTR*)dVtable[42], &EndScene_hook, reinterpret_cast<void**>(&EndScene_orig)) != MH_OK) { return 1; }
	if (MH_EnableHook((DWORD_PTR*)dVtable[42]) != MH_OK) { return 1; }
	if (MH_CreateHook((DWORD_PTR*)dVtable[94], &SetVertexShaderConstantF_hook, reinterpret_cast<void**>(&SetVertexShaderConstantF_orig)) != MH_OK) { return 1; }
	if (MH_EnableHook((DWORD_PTR*)dVtable[94]) != MH_OK) { return 1; }
	if (MH_CreateHook((DWORD_PTR*)dVtable[82], &DrawIndexedPrimitive_hook, reinterpret_cast<void**>(&DrawIndexedPrimitive_orig)) != MH_OK) { return 1; }
	if (MH_EnableHook((DWORD_PTR*)dVtable[82]) != MH_OK) { return 1; }
	if (MH_CreateHook((DWORD_PTR*)dVtable[81], &DrawPrimitive_hook, reinterpret_cast<void**>(&DrawPrimitive_orig)) != MH_OK) { return 1; }
	if (MH_EnableHook((DWORD_PTR*)dVtable[81]) != MH_OK) { return 1; }
	if (MH_CreateHook((DWORD_PTR*)dVtable[16], &Reset_hook, reinterpret_cast<void**>(&Reset_orig)) != MH_OK) { return 1; }
	if (MH_EnableHook((DWORD_PTR*)dVtable[16]) != MH_OK) { return 1; }
	if (MH_CreateHook((DWORD_PTR*)dVtable[100], &SetStreamSource_hook, reinterpret_cast<void**>(&SetStreamSource_orig)) != MH_OK) { return 1; }
	if (MH_EnableHook((DWORD_PTR*)dVtable[100]) != MH_OK) { return 1; }
	//if (MH_CreateHook((DWORD_PTR*)dVtable[104], &SetIndices_hook, reinterpret_cast<void**>(&SetIndices_orig)) != MH_OK) { return 1; }
	//if (MH_EnableHook((DWORD_PTR*)dVtable[104]) != MH_OK) { return 1; }
	if (MH_CreateHook((DWORD_PTR*)dVtable[87], &SetVertexDeclaration_hook, reinterpret_cast<void**>(&SetVertexDeclaration_orig)) != MH_OK) { return 1; }
	if (MH_EnableHook((DWORD_PTR*)dVtable[87]) != MH_OK) { return 1; }
	if (MH_CreateHook((DWORD_PTR*)dVtable[92], &SetVertexShader_hook, reinterpret_cast<void**>(&SetVertexShader_orig)) != MH_OK) { return 1; }
	if (MH_EnableHook((DWORD_PTR*)dVtable[92]) != MH_OK) { return 1; }
	if (MH_CreateHook((DWORD_PTR*)dVtable[107], &SetPixelShader_hook, reinterpret_cast<void**>(&SetPixelShader_orig)) != MH_OK) { return 1; }
	if (MH_EnableHook((DWORD_PTR*)dVtable[107]) != MH_OK) { return 1; }
	if (MH_CreateHook((DWORD_PTR*)dVtable[65], &SetTexture_hook, reinterpret_cast<void**>(&SetTexture_orig)) != MH_OK) { return 1; }
	if (MH_EnableHook((DWORD_PTR*)dVtable[65]) != MH_OK) { return 1; }
	if (MH_CreateHook((DWORD_PTR*)dVtable[47], &SetViewport_hook, reinterpret_cast<void**>(&SetViewport_orig)) != MH_OK) { return 1; }
	if (MH_EnableHook((DWORD_PTR*)dVtable[47]) != MH_OK) { return 1; }

	if (TableAddress == 0) {
		d3ddev->Release();
		d3d->Release();
		DestroyWindow(tmpWnd);
	}

	return 1;
}

DWORD WINAPI GetUserInput(LPVOID)
{
	while (1)
	{
		if (GetAsyncKeyState(VK_MENU) & 1)
		{
			ShowOverlay = !ShowOverlay;

			DWORD localPlayer = *(DWORD*)0x006CC294;
			int localplayer_tid = *(int*)(localPlayer + 0x134);
			
			if (localplayer_tid != 0 && !bRoot) ShowOverlay = FALSE;
			ShowOverlay ? Log("[Show Overlay - true]") : Log("[Show Overlay - false]");

		}

		if (GetAsyncKeyState(VK_F9) & 1)
		{
			ShowMenu = !ShowMenu;
			DWORD localPlayer = *(DWORD*)0x006CC294;
			int localplayer_tid = *(int*)(localPlayer + 0x134);

			if (localplayer_tid != 0 && !bRoot) ShowMenu = FALSE;
			
			ShowMenu ? Log("[Show Menu - true]") : Log("[Show Menu - false]");
		}

		if (GetAsyncKeyState(VK_INSERT) & 1)
		{
			bSpecmode = !bSpecmode;
			bSpecmode ? Log("[Free Look - true]") : Log("[Free Look - false]");
			DWORD localPlayer = *(DWORD*)0x006CC294;
			DWORD Specmodeaddr = *(DWORD*)0x006CC400;

			int localplayer_tid = *(int*)(localPlayer + 0x134);
			if (bSpecmode && localplayer_tid == 0) {
				OldSpecmode = *(int*)(Specmodeaddr + 0x19);
				*(int*)(Specmodeaddr + 0x19) = 1;
			}
			else if (!bSpecmode && localplayer_tid == 0)
			{
				*(int*)(Specmodeaddr + 0x19) = OldSpecmode;
			}
		}

		if (GetAsyncKeyState(VK_F6) & 1)
		{
			scoreTT += 1;
		}

		if (GetAsyncKeyState(VK_F7) & 1)
		{
			scoreCT += 1;
		}
		if (GetAsyncKeyState(VK_F8) & 1)
		{
			scoreCT = 0;
			scoreTT = 0;
		}

		if (GetAsyncKeyState(0x58) & 1)		//  X
		{
			XrayHook();
			bXray = !bXray;
		}

		if (GetAsyncKeyState(VK_CAPITAL) & 1)
		{
			iShowDMGDealt++;
			if (iShowDMGDealt == 4) iShowDMGDealt = 1;
		}

		if (GetAsyncKeyState(VK_END) & 1)
		{
			exit(0);
		}
		if (GetAsyncKeyState(VK_PRIOR) & 1)
		{
			DWORD localPlayer = *(DWORD*)0x006CC294;
			int localplayer_tid = *(int*)(localPlayer + 0x134);
			bNoFow = !bNoFow;
			if (localplayer_tid != 0) bNoFow = FALSE;
			bNoFow ? Log("[No FOW - true]") : Log("[No FOW - false]");
			NoFow(bNoFow);
		}

		if (GetAsyncKeyState(VK_NEXT) & 1)
		{
			DWORD localPlayer = *(DWORD*)0x006CC294;
			int localplayer_tid = *(int*)(localPlayer + 0x134);
			bNoFlash = !bNoFlash;
			if (localplayer_tid != 0) bNoFlash = FALSE;
			bNoFlash ? Log("[No Flash - true]") : Log("[No Flash - false]");
			NoFlash(bNoFlash);
		}
		Sleep(10);
	}
	return 0;
}

//==========================================================================================================================

BOOL WINAPI DllMain(HMODULE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH: // A process is loading the DLL.
		dllHandle = hinstDLL;
		DisableThreadLibraryCalls(hinstDLL); // disable unwanted thread notifications to reduce overhead
		CreateThread(0, 0, DirectXInit, 0, 0, 0); //init our hooks
		CreateThread(0, 0, GetUserInput, 0, 0, 0); //init our hooks
		break;

	case DLL_PROCESS_DETACH: // A process unloads the DLL.
		/*
		if (MH_Uninitialize() != MH_OK) { return 1; }
		if (MH_DisableHook((DWORD_PTR*)dVtable[42]) != MH_OK) { return 1; }
		*/
		break;
	}
	return TRUE;
}

/*
vTable Numbers

QueryInterface // 0
AddRef // 1
Release // 2
TestCooperativeLevel // 3
GetAvailableTextureMem // 4
EvictManagedResources // 5
GetDirect3D // 6
GetDeviceCaps // 7
GetDisplayMode // 8
GetCreationParameters // 9
SetCursorProperties // 10
SetCursorPosition // 11
ShowCursor // 12
CreateAdditionalSwapChain // 13
GetSwapChain // 14
GetNumberOfSwapChains // 15
Reset // 16
Present // 17
GetBackBuffer // 18
GetRasterStatus // 19
SetDialogBoxMode // 20
SetGammaRamp // 21
GetGammaRamp // 22
CreateTexture // 23
CreateVolumeTexture // 24
CreateCubeTexture // 25
CreateVertexBuffer // 26
CreateIndexBuffer // 27
CreateRenderTarget // 28
CreateDepthStencilSurface // 29
UpdateSurface // 30
UpdateTexture // 31
GetRenderTargetData // 32
GetFrontBufferData // 33
StretchRect // 34
ColorFill // 35
CreateOffscreenPlainSurface // 36
SetRenderTarget // 37
GetRenderTarget // 38
SetDepthStencilSurface // 39
GetDepthStencilSurface // 40
BeginScene // 41
EndScene // 42
Clear // 43
SetTransform // 44
GetTransform // 45
MultiplyTransform // 46
SetViewport // 47
GetViewport // 48
SetMaterial // 49
GetMaterial // 50
SetLight // 51
GetLight // 52
LightEnable // 53
GetLightEnable // 54
SetClipPlane // 55
GetClipPlane // 56
SetRenderState // 57
GetRenderState // 58
CreateStateBlock // 59
BeginStateBlock // 60
EndStateBlock // 61
SetClipStatus // 62
GetClipStatus // 63
GetTexture // 64
SetTexture // 65
GetTextureStageState // 66
SetTextureStageState // 67
GetSamplerState // 68
SetSamplerState // 69
ValidateDevice // 70
SetPaletteEntries // 71
GetPaletteEntries // 72
SetCurrentTexturePalette // 73
GetCurrentTexturePalette // 74
SetScissorRect // 75
GetScissorRect // 76
SetSoftwareVertexProcessing // 77
GetSoftwareVertexProcessing // 78
SetNPatchMode // 79
GetNPatchMode // 80
DrawPrimitive // 81
DrawIndexedPrimitive // 82
DrawPrimitiveUP // 83
DrawIndexedPrimitiveUP // 84
ProcessVertices // 85
CreateVertexDeclaration // 86
SetVertexDeclaration // 87
GetVertexDeclaration // 88
SetFVF // 89
GetFVF // 90
CreateVertexShader // 91
SetVertexShader // 92
GetVertexShader // 93
SetVertexShaderConstantF // 94
GetVertexShaderConstantF // 95
SetVertexShaderConstantI // 96
GetVertexShaderConstantI // 97
SetVertexShaderConstantB // 98
GetVertexShaderConstantB // 99
SetStreamSource // 100
GetStreamSource // 101
SetStreamSourceFreq // 102
GetStreamSourceFreq // 103
SetIndices // 104
GetIndices // 105
CreatePixelShader // 106
SetPixelShader // 107
GetPixelShader // 108
SetPixelShaderConstantF // 109
GetPixelShaderConstantF // 110
SetPixelShaderConstantI // 111
GetPixelShaderConstantI // 112
SetPixelShaderConstantB // 113
GetPixelShaderConstantB // 114
DrawRectPatch // 115
DrawTriPatch // 116
DeletePatch // 117
CreateQuery // 118
*/