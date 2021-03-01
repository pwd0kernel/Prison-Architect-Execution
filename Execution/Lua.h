#pragma once
#include <Windows.h>
#include <iostream>
#include "MinHook.h"
#include "Console.h"

class Lua
{
private:
	using gettop = int(__cdecl*)(std::uintptr_t lua_state);
	using loadstring = int(__cdecl*)(std::uintptr_t lua_state, const char* buff);
	using pcall = int(__cdecl*)(std::uintptr_t lua_state, int nargs, int nresults, int errfunc);

public:
	static std::uintptr_t lua_state;

	gettop lua_gettop = reinterpret_cast<gettop>(0x955CA0);
	loadstring lua_loadstring = reinterpret_cast<loadstring>(0x957850);
	pcall lua_pcall = reinterpret_cast<pcall>(0x955FE0);

	static int gettop_state(int state)
	{
		std::unique_ptr<Console> console = std::make_unique<Console>();
		if (lua_state == 0) {
			lua_state = state;
			console->ConsoleOutput(("Done."));
		}
		else if (state != lua_state)
		{
			lua_state = state;
		}
		return *reinterpret_cast<DWORD*>(state + 8) - *reinterpret_cast<DWORD*>(state + 12) >> 4;
	}

	void get_lua_state()
	{
		MH_Initialize();
		MH_CreateHook(reinterpret_cast<LPVOID>(lua_gettop), &gettop_state, nullptr);
		MH_EnableHook(reinterpret_cast<LPVOID>(lua_gettop));
	}

	void DisableLuaState() {
		MH_DisableHook(reinterpret_cast<LPVOID>(lua_gettop));
	}
};