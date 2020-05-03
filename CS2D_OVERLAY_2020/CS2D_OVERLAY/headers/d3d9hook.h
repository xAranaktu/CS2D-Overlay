#pragma once
#include "dllmain.h"
#include "../MinHook/include/MinHook.h"

namespace d3d9hook {
    inline DWORD* dVtable = NULL;

    typedef HRESULT(APIENTRY* Present) (IDirect3DDevice9*, CONST RECT*, CONST RECT*, HWND, CONST RGNDATA*);
    inline HRESULT APIENTRY Present_hook(IDirect3DDevice9*, CONST RECT*, CONST RECT*, HWND, CONST RGNDATA*);
    inline Present Present_orig = 0;

    void GetPresent();
    void SetupDirectXHooks();
    void DeleteDirectXHooks();
}
