#pragma once

#define INRANGE( x, a, b )   ( x >= a && x <= b )
#define GETBITS( x )      ( INRANGE( x, '0', '9' ) ? ( x - '0' ) : ( ( x & ( ~0x20 ) ) - 'A' + 0xa ) )
#define GETBYTE( x )      ( GETBITS( x[0] ) << 4 | GETBITS( x[1] ) )

namespace PatScanner
{
   inline __int32 ResolvePtr(uintptr_t address, int offsetpos)
   {
      __int32 offset = *reinterpret_cast<__int32*>(address + offsetpos);

      __int32 resolved = address + offset + offsetpos + 4;
      return resolved;
   }

   inline uintptr_t Find(uintptr_t base, uintptr_t size, const char* pattern)
   {
      const unsigned char* pat = reinterpret_cast<const unsigned char*>(pattern);

      uintptr_t firstMatch = 0;
      uintptr_t range = base + size;
      uintptr_t find_result = NULL;

      for (uintptr_t pCurrent = base; pCurrent < range; ++pCurrent)
      {
         if (*const_cast<PBYTE>(pat) == static_cast<BYTE>('\?') || *reinterpret_cast<BYTE*>(pCurrent) == GETBYTE(pat))
         {
            if (!firstMatch)
               firstMatch = pCurrent;

            if (!pat[2]) {
               find_result = firstMatch;
               break;
            }
               

            pat += (*(PWORD)pat == (WORD)'\?\?' || *(PBYTE)pat != (BYTE)'\?') ? 3 : 2;

            if (!*pat) {
               find_result = firstMatch;
               break;
            }

         }
         else if (firstMatch) {

            pCurrent = firstMatch;
            pat = reinterpret_cast<const unsigned char*>(pattern);
            firstMatch = 0;

         }
      }
      return find_result;
   }
}