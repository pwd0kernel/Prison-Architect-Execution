//
// Created by pwd0kernel on 8/15/2021.
//

#ifndef UNTITLED14_CONSOLE_H
#define UNTITLED14_CONSOLE_H

#include <consoleapi2.h>
#include <stdio.h>

class Console {
private:
public:
    static void AllowConsole(const char *name) {
        FILE *c;

        AllocConsole();
        freopen_s(&c, "CONOUT$", "w", stdout);
        freopen_s(&c, "CONIN$", "r", stdin);
        SetConsoleTitleA(name);
    };

    static void ConsoleOutput(const char *text) {
        printf_s("[Console]: %s %s", text  , "\n");
    }
};

#endif //UNTITLED14_CONSOLE_H
