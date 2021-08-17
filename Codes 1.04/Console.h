//
// Created by pwd0kernel on 8/15/2021.
//

#ifndef PRISON_CONSOLE_H
#define PRISON_CONSOLE_H

#include <consoleapi2.h>
#include <stdio.h>

class Console {
private:
public:
        static void AllowConsole(const char *cname, const char *window_name, const char *window_new_name) {
            FILE *c;
            AllocConsole();
            freopen_s(&c, "CONOUT$", "w", stdout);
            freopen_s(&c, "CONIN$", "r", stdin);
            SetWindowTextA(FindWindowA(nullptr, window_name), window_new_name);
            SetConsoleTitleA(cname);
        };

        static void ConsoleOutput(const char *text) {
            printf_s("[Console]: %s \n", text);
        }
};

#endif //PRISON_CONSOLE_H
