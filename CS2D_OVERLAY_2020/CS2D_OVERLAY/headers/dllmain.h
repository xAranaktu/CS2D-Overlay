#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>
#include <iostream>
#include <sstream>
#include <map>
#include <filesystem>

#include <d3d9.h>
#pragma comment(lib, "d3d9.lib")

#include "logger.h"
#include "context.h"
#include "patscanner.h"

namespace fs = std::filesystem;

inline core::Context g_ctx_proc;
inline core::Context g_ctx_dll;

void CreateDXHook();
