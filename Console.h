#pragma once
#include <Windows.h>
#include <stdio.h>
#include <iostream>

class Console {
private:

public:

	static void AllowConsole(const char* name) {
		AllocConsole();
		if (freopen("CONOUT$", "w", stdout));
		if (freopen("CONIN$", "r", stdin));
		SetConsoleTitleA(name);
	};

	void ConsoleOutput(const char* text) {
		std::cout << "[Console]: " << text << std::endl;
	}
};