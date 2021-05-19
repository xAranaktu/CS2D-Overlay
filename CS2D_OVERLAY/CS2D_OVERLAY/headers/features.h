#pragma once

#include "dllmain.h"
#include "sdk.h"

namespace Features {
    void WriteToMemory(uintptr_t addressToWrite, char* valueToWrite, int byteNum);
    void changeSpecMode(int new_val);
    void changeNoFlash();
    void changeNoFOW();
}