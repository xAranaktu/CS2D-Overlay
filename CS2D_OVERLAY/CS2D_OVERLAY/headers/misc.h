#pragma once
#include <windows.h>

namespace MemPatcher {
    void WriteToMemory(uintptr_t addressToWrite, char* valueToWrite, int byteNum);
}


// Remove Antidebugger
namespace LMAO {
    void PatchIsDebuggerPresent();
    void RestoreOrgIsDebuggerPresent();
}