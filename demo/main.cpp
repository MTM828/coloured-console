#include <iostream>
#include "colors.hpp"

int main() {
    colors::init_console();

    std::cout

        << colors::style::rainbow("Coloured Console\n")
        << colors::white << "Hello, colourful world!\n" << colors::reset

        << std::endl

        << "Built-in colours:\n"
        << "\t" << "Foreground colours:\n"
        << "\t\t" << colors::red    << "Red"    << colors::reset << "\n"
        << "\t\t" << colors::blue   << "Blue"   << colors::reset << "\n"
        << "\t\t" << colors::green  << "Green"  << colors::reset << "\n"
        << "\t\t" << colors::yellow << "Yellow" << colors::reset << "\n"
        << "\t\t" << colors::black  << "Black"  << colors::reset << " (Black)\n"
        << "\t\t" << colors::white  << "White"  << colors::reset << "\n"
        << "\t" << "Background colours:\n"
        << "\t\t" << colors::red_bg    << "Red"    << colors::reset << "\n"
        << "\t\t" << colors::blue_bg   << "Blue"   << colors::reset << "\n"
        << "\t\t" << colors::green_bg  << "Green"  << colors::reset << "\n"
        << "\t\t" << colors::yellow_bg << "Yellow" << colors::reset << "\n"
        << "\t\t" << colors::black_bg  << "Black"  << colors::reset << " (Black background)\n"
        << "\t\t" << colors::white_bg  << "White"  << colors::reset << "\n"
        << "Examples:\n\tstd::string red = colors::red;\n"
        << "\tstd::string blue_bg = colors::blue_bg;\n"
        << "\tstd::string red_text_blue_bg = colors::red + colors::blue_bg;\n"

        << std::endl

        << "Custom colours:\n"
        << "\tRGB:\n"
        << "\t\t" << colors::rgb(0, 150, 150) << "rgb(0, 150, 150)" << colors::reset << " (Envy)\n"
        << "\t\t" << colors::rgb(220, 20, 60) << "rgb(220, 20, 60)" << colors::reset << " (Crimson)\n"
        << "\t\t" << colors::rgb(165, 42, 42) << "rgb(165, 42, 42)" << colors::reset << " (Brown)\n"
        << "\t\t" << colors::rgb(255, 215, 0, true) << "srgb(165, 42, 42)" << colors::reset << " (Gold background)\n"
        << "\tExample:\n\t\tstd::string envy = colors::rgb(0, 150, 150);\n"
        << "\t\tstd::string gold_bg = colors::rgb(255, 215, 0, true);"

        << std::endl

        << "Text styles:\n"
        << "\tRainbow text:\n"
        << "\t\t" << colors::style::rainbow("Rainbow") << "\n"
        << "\t\t" << colors::style::rainbow("Rainbow", true) << "\n"
        << "\tExamples:\n"
        << "\t\tstd::string rainbow = colors::style::rainbow(\"Hello, world!\");\n"
        << "\t\tstd::string rainbow_bg = colors::style::rainbow(\"Hello, world!\", true);\n"

    ;

    system("pause");
    return 0;
}