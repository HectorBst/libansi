
#include <stdio.h>
#include <stdbool.h>

#include "ansi_sequences.h"

void ansi_save_cursor() {
	puts("\033[s");
}

void ansi_restore_cursor() {
	puts("\033[u");
}

void ansi_hide_cursor(const bool hide) {
	puts(hide ? "\033[?25l" : "\033[?25h");
}

void ansi_reset_format() {
	puts("\033[m");
}

void ansi_bold(const bool bold) {
	puts(bold ? "\033[1m" : "\033[21m");
}

void ansi_faint(const bool faint) {
	puts(faint ? "\033[2m" : "\033[22m");
}

void ansi_italic(const bool italic) {
	puts(italic ? "\033[3m" : "\033[23m");
}

void ansi_underline(const bool underline) {
	puts(underline ? "\033[4m" : "\033[24m");
}

void ansi_slow_blink(const bool blink) {
	puts(blink ? "\033[5m" : "\033[25m");
}

void ansi_rapid_blink(const bool blink) {
	puts(blink ? "\033[6m" : "\033[25m");
}

void ansi_negative(const bool negative) {
	puts(negative ? "\033[7m" : "\033[27m");
}

void ansi_conceal(const bool conceal) {
	puts(conceal ? "\033[8m" : "\033[28m");
}

void ansi_crossed(const bool crossed) {
	puts(crossed ? "\033[9m" : "\033[29m");
}

void ansi_fraktur(const bool fraktur) {
	puts(fraktur ? "\033[20m" : "\033[23m");
}

void ansi_framed(const bool framed) {
	puts(framed ? "\033[51m" : "\033[54m");
}

void ansi_encircled(const bool encircled) {
	puts(encircled ? "\033[52m" : "\033[54m");
}

void ansi_overlined(const bool overlined) {
	puts(overlined ? "\033[53m" : "\033[55m");
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
	printf("\033[38;2;%hhum;%hhum;%hhum", red, green, blue);
}

void ansi_background_color_rgb(const unsigned char red, const unsigned char green, const unsigned char blue) {
	printf("\033[48;2;%hhum;%hhum;%hhum", red, green, blue);
}