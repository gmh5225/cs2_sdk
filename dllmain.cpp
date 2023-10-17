#include <Windows.h>

BOOL APIENTRY Dllmain(hHandle module, DWORD reason, LPVOID reserved) {
    switch (reason) {

        case DLL_PROCESS_ATTACH:
        case DLL_PROCESS_DEATTACH:
        break;
    }

    reurn TRUE;
