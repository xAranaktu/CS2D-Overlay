#pragma once
#include "../headers/misc.h"

namespace MemPatcher {
    void WriteToMemory(uintptr_t addressToWrite, char* valueToWrite, int byteNum)
    {
        //used to change our file access type, stores the old
        //access type and restores it after memory is written
        unsigned long OldProtection;
        //give that address read and write permissions and store the old permissions at oldProtection
        VirtualProtect((LPVOID)(addressToWrite), byteNum, PAGE_EXECUTE_READWRITE, &OldProtection);

        //write the memory into the program and overwrite previous value
        memcpy((LPVOID)addressToWrite, valueToWrite, byteNum);

        //reset the permissions of the address back to oldProtection after writting memory
        VirtualProtect((LPVOID)(addressToWrite), byteNum, OldProtection, NULL);
    }
}

namespace LMAO {
    void PatchIsDebuggerPresent() {
        auto kernelbase = GetModuleHandle("KERNELBASE.dll");

        if (!kernelbase) {
            return;
        }

        auto addr = reinterpret_cast<uintptr_t>(GetProcAddress(kernelbase, "IsDebuggerPresent"));

        // xor eax, eax
        char BytesToPath[] = "\x31\xC0\x90\x90\x90\x90\x90\x90\x90\x90\xC3";
        MemPatcher::WriteToMemory(addr, BytesToPath, 11);
    }
    void RestoreOrgIsDebuggerPresent() {
        auto kernelbase = GetModuleHandle("KERNELBASE.dll");

        if (!kernelbase) {
            return;
        }

        auto addr = reinterpret_cast<uintptr_t>(GetProcAddress(kernelbase, "IsDebuggerPresent"));

        char BytesToPath[] = "\x64\xA1\x30\x00\x00\x00\x0F\xB6\x40\x02\xC3";
        MemPatcher::WriteToMemory(addr, BytesToPath, 11);
    }
}