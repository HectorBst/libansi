
#ifndef ANSI_SEQUENCES_H

#define ANSI_SEQUENCES_H

#include <stdbool.h>


void ansi_save_cursor();

void ansi_restore_cursor();

void ansi_hide_cursor(const bool hide);


void ansi_reset_format();

void ansi_bold(const bool bold);

void ansi_faint(const bool faint);

void ansi_italic(const bool italic);

void ansi_underline(const bool underline);

void ansi_slow_blink(const bool blink);

void ansi_rapid_blink(const bool blink);

void ansi_negative(const bool negative);

void ansi_conceal(const bool conceal);

void ansi_crossed(const bool crossed);

void ansi_fraktur(const bool fraktur);

void ansi_framed(const bool framed);

void ansi_encircled(const bool encircled);

void ansi_overlined(const bool overlined);


#define ANSI_FONT_DEFAULT 0
#define ANSI_FONT_1 1
#define ANSI_FONT_2 2
#define ANSI_FONT_3 3
#define ANSI_FONT_4 4
#define ANSI_FONT_5 5
#define ANSI_FONT_6 6
#define ANSI_FONT_7 7
#define ANSI_FONT_8 8
#define ANSI_FONT_9 9

void ansi_font(const unsigned char font);


#define ANSI_COLOR_DEFAULT 39
#define ANSI_COLOR_BLACK 30
#define ANSI_COLOR_RED 31
#define ANSI_COLOR_GREEN 32
#define ANSI_COLOR_BROWN 33
#define ANSI_COLOR_BLUE 34
#define ANSI_COLOR_MAGENTA 35
#define ANSI_COLOR_CYAN 36
#define ANSI_COLOR_GREY 37
#define ANSI_COLOR_DARK_GREY 90
#define ANSI_COLOR_LIGHT_RED 91
#define ANSI_COLOR_LIGHT_GREEN 92
#define ANSI_COLOR_YELLOW 93
#define ANSI_COLOR_LIGHT_BLUE 94
#define ANSI_COLOR_PINK 95
#define ANSI_COLOR_LIGHT_CYAN 96
#define ANSI_COLOR_WHITE 97

void ansi_text_color(const unsigned char color);

void ansi_background_color(const unsigned char color);

void ansi_text_color_index(const unsigned char index);

void ansi_background_color_index(const unsigned char index);

void ansi_text_color_rgb(const unsigned char red, const unsigned char green, const unsigned char blue);

void ansi_background_color_rgb(const unsigned char red, const unsigned char green, const unsigned char blue);

#endif