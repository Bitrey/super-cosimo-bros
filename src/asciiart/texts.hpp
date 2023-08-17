#ifndef _ASCII_TEXTS_HPP_
#define _ASCII_TEXTS_HPP_

#include "asciitext.hpp"

const char* title_text[] = {
    "  /$$$$$$                      /$$                         /$$$$$$$                               ",
    " /$$__  $$                    |__/                        | $$__  $$                              ",
    "| $$  \\__/  /$$$$$$   /$$$$$$$ /$$ /$$$$$$/$$$$   /$$$$$$ | $$  \\ $$  /$$$$$$   /$$$$$$   /$$$$$$$",
    "| $$       /$$__  $$ /$$_____/| $$| $$_  $$_  $$ /$$__  $$| $$$$$$$  /$$__  $$ /$$__  $$ /$$_____/",
    "| $$      | $$  \\ $$|  $$$$$$ | $$| $$ \\ $$ \\ $$| $$  \\ $$| $$__  $$| $$  \\__/| $$  \\ $$|  $$$$$$ ",
    "| $$    $$| $$  | $$ \\____  $$| $$| $$ | $$ | $$| $$  | $$| $$  \\ $$| $$      | $$  | $$ \\____  $$",
    "|  $$$$$$/|  $$$$$$/ /$$$$$$$/| $$| $$ | $$ | $$|  $$$$$$/| $$$$$$$/| $$      |  $$$$$$/ /$$$$$$$/",
    " \\______/  \\______/ |_______/ |__/|__/ |__/ |__/ \\______/ |_______/ |__/       \\______/ |_______/ ",
    "                                                                                                  ",
    "                  ____                     _   ____  ____   _     ________ ___                    ",
    "                 |  _ \\ _ __ ___ _ __ ___ (_) / ___||  _ \\ / \\   |__  /_ _/ _ \\                   ",
    "                 | |_) | '__/ _ \\ '_ ` _ \\| | \\___ \\| |_) / _ \\    / / | | | | |                  ",
    "                 |  __/| | |  __/ | | | | | |  ___) |  __/ ___ \\  / /_ | | |_| |                  ",
    "                 |_|   |_|  \\___|_| |_| |_|_| |____/|_| /_/   \\_\\/____|___\\___/                   ",
};

/** 8x99 */
AsciiText title = {
    .text = title_text,
    .height = 14,
};

#endif  // _ASCII_TEXTS_HPP_
