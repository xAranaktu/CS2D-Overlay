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


//features
inline bool bNoFlash = true;
inline bool bNoFOW = true;
inline int oldSpecMode = 0;
inline int iSpecMode = 1;

inline bool ShowOverlay = false;
inline bool ShowMenu = false;

inline int iAutoUpdateScore = 1;
inline int iBorderedText = 1;
inline int iTransparency = 1;
inline std::string team1;
inline std::string team2;

inline bool bScoreSaved;
inline int Team1Score = 0;
inline int Team2Score = 0;
inline bool bSwap;

inline int scoreTT = 0;
inline int scoreCT = 0;
inline int mr = 15;

void CreateDXHook();
