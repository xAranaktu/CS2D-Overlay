#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>
#include <iostream>
#include <sstream>
#include <map>
#include <filesystem>

#include <d3d9.h>

#include "..\DXSDK\d3dx9.h"
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")
#pragma comment(lib, "winmm.lib")


#define SAFE_RELEASE(p)      { if (p) { (p)->Release();    (p)=nullptr;  }	}

#include "logger.h"
#include "context.h"
#include "patscanner.h"

namespace fs = std::filesystem;

inline core::Context g_ctx_proc;
inline core::Context g_ctx_dll;

inline bool ShowOverlay = false;
inline bool ShowMenu = false;

void CreateDXHook();
