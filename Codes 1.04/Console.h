//
// Created by pwd0kernel on 8/15/2021.
//

#ifndef UNTITLED14_CONSOLE_H
#define UNTITLED14_CONSOLE_H

#include <consoleapi2.h>
#include <cstdio>

class Console {
private:
public:
    static void AllowConsole(const char *name) {
        AllocConsole();
        if (freopen("CONOUT$", "w", stdout));
        if (freopen("CONIN$", "r", stdin));
        SetConsoleTitleA(name);
    };

    static void ConsoleOutput(const char *text) {
        printf("[Console]: %s %s", text  , "\n");
    }
};

#endif //UNTITLED14_CONSOLE_H
