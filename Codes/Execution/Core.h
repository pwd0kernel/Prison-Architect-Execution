#pragma once
#include <string>
#include <memory>
#include "Lua.h"

std::uintptr_t Lua::lua_state = 0;

class Core {
private:
	int execution(const std::string& Data) {
		std::unique_ptr<Lua> lua = std::make_unique<Lua>();
		if (lua->lua_state != 0) {
			lua->lua_loadstring(lua->lua_state, Data.c_str()) || lua->lua_pcall(lua->lua_state, 1, 0, 0);
		}
		return 0;
	}

public:
	int executor() {
		std::unique_ptr<Lua> lua = std::make_unique<Lua>();
		std::unique_ptr<Console> console = std::make_unique<Console>();
		std::string data;
		console->ConsoleOutput(("Getting Lua State..."));
		lua->get_lua_state();

		while (true) {
			Sleep(100);

			if (lua->lua_state == 0);
			else {
				while (true) {
					std::cout << "> ";
					std::getline(std::cin, data);
					if (data == ("exit"))
						exit(1);
					if (data == ("detach")) {
						lua->DisableLuaState();
						FreeConsole();
						FreeLibraryAndExitThread(GetModuleHandleA("re.dll"), 0);
					}
					execution(data);
					data.clear();
				}
			}
		}
	}
};
