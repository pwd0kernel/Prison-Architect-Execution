#include <Windows.h>
#include "Execution/Core.h"
#include "Console.h"

int main() {
    std::unique_ptr<Core> core = std::make_unique<Core>();
    std::unique_ptr<Console> console = std::make_unique<Console>();

    console->AllowConsole("Lua", "Prison Achritect", "P-Lua Exploit");
    core->executor();
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(main)
            , nullptr, 0, nullptr);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
