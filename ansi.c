
#include <stdio.h>
#include <stdbool.h>

#include "ansi.h"

void ansi_save_cursor() {
	fputs("\033[s", stdout);
}

void ansi_restore_cursor() {
	fputs("\033[u", stdout);
}

void ansi_hide_cursor(const bool hide) {
	fputs(hide ? "\033[?25l" : "\033[?25h", stdout);
}

void ansi_reset_format() {
	fputs("\033[m", stdout);
}

void ansi_bold(const bool bold) {
	fputs(bold ? "\033[1m" : "\033[21m", stdout);
}

void ansi_faint(const bool faint) {
	fputs(faint ? "\033[2m" : "\033[22m", stdout);
}

void ansi_italic(const bool italic) {
	fputs(italic ? "\033[3m" : "\033[23m", stdout);
}

void ansi_underline(const bool underline) {
	fputs(underline ? "\033[4m" : "\033[24m", stdout);
}

void ansi_slow_blink(const bool blink) {
	fputs(blink ? "\033[5m" : "\033[25m", stdout);
}

void ansi_rapid_blink(const bool blink) {
	fputs(blink ? "\033[6m" : "\033[25m", stdout);
}

void ansi_negative(const bool negative) {
	fputs(negative ? "\033[7m" : "\033[27m", stdout);
}

void ansi_conceal(const bool conceal) {
	fputs(conceal ? "\033[8m" : "\033[28m", stdout);
}

void ansi_crossed(const bool crossed) {
	fputs(crossed ? "\033[9m" : "\033[29m", stdout);
}

void ansi_fraktur(const bool fraktur) {
	fputs(fraktur ? "\033[20m" : "\033[23m", stdout);
}

void ansi_framed(const bool framed) {
	fputs(framed ? "\033[51m" : "\033[54m", stdout);
}

void ansi_encircled(const bool encircled) {
	fputs(encircled ? "\033[52m" : "\033[54m", stdout);
}

void ansi_overlined(const bool overlined) {
	fputs(overlined ? "\033[53m" : "\033[55m", stdout);
}

void ansi_font(const unsigned char font) {
	printf("\033[1%hhum", font);
}

void ansi_text_color(const unsigned char color) {
	printf("\033[%hhum", color);
}

void ansi_background_color(const unsigned char color) {
	printf("\033[%hhum", color + 10);
}

void ansi_text_color_index(const unsigned char index) {
	printf("\033[38;5;%hhum", index);
}

void ansi_background_color_index(const unsigned char index) {
	printf("\033[48;5;%hhum", index);
}

void ansi_text_color_rgb(const unsigned char red, const unsigned char green, const unsigned char blue) {
	printf("\033[38;2;%hhu;%hhu;%hhum", red, green, blue);
}

void ansi_background_color_rgb(const unsigned char red, const unsigned char green, const unsigned char blue) {
	printf("\033[48;2;%hhu;%hhu;%hhum", red, green, blue);
}