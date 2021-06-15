#ifndef COLORS_H
#define COLORS_H

#include <string>
#include <vector>
#include <windows.h>

inline namespace colors {

    // Initialises the console so the ANSCI colour codes colour text.
    void init_console() {
#if defined(_WIN32)
        DWORD consoleMode;
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        GetConsoleMode(hConsole, &consoleMode);
        SetConsoleMode(hConsole, consoleMode | 0x0004);
#endif
    }

    // Returns an ANSCI colour code in RGB.
    std::string rgb(int r, int g, int b, bool bg = false) {
        if (bg) {
            return "\33[48;2;"+std::to_string(r)+";"
                              +std::to_string(g)+";"
                              +std::to_string(b)+"m";
        } else {
            return "\33[38;2;"+std::to_string(r)+";"
                              +std::to_string(g)+";"
                              +std::to_string(b)+"m";
        }
    }

    // Built-in colours

    std::string black  = "\33[38;5;16m";
    std::string white  = "\33[38;5;15m";
    std::string red    = "\33[38;5;196m";
    std::string blue   = "\33[38;5;21m";
    std::string green  = "\33[38;5;46m";
    std::string yellow = "\33[38;5;226m";

    std::string black_bg  = "\33[48;5;16m";
    std::string white_bg  = "\33[48;5;15m";
    std::string red_bg    = "\33[48;5;196m";
    std::string blue_bg   = "\33[48;5;21m";
    std::string green_bg  = "\33[48;5;46m";
    std::string yellow_bg = "\33[48;5;226m";

    std::string reset  = "\33[m";

    namespace style {

        // Returns an std::string in rainbow colours.
        std::string rainbow(std::string text, bool bg = false) {
            std::vector<std::string> rainbow_colors;
            if (!bg) {
                rainbow_colors = {red, yellow, green, blue};
            } else {
                rainbow_colors = {red_bg, yellow_bg, green_bg, blue_bg};
            }
            std::string new_text;
            int i = 0;
            int current_color;
            for (i = 0; i < text.length(); i++) {
                new_text += rainbow_colors[current_color] + text[i];
                current_color++;
                if (current_color >= rainbow_colors.size()) {
                    current_color = 0;
                }
            }
            new_text += colors::reset;
            return new_text;
        }

    }

}

#endif
