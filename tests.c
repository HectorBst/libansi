
#include <stdio.h>
#include <stdlib.h>

#include "ansi_sequences.h"

int main() {
	unsigned short i, j, k;
	ansi_reset_format();
	puts("Normal");
	ansi_text_color(ANSI_COLOR_DEFAULT);
	puts("Default color");
	ansi_text_color(ANSI_COLOR_BLACK);
	puts("Black");
	ansi_text_color(ANSI_COLOR_DARK_RED);
	puts("Dark red");
	ansi_text_color(ANSI_COLOR_DARK_GREEN);
	puts("Dark green");
	ansi_text_color(ANSI_COLOR_BROWN);
	puts("Brown");
	ansi_text_color(ANSI_COLOR_BLUE);
	puts("Blue");
	ansi_text_color(ANSI_COLOR_MAGENTA);
	puts("Magenta");
	ansi_text_color(ANSI_COLOR_CYAN);
	puts("Cyan");
	ansi_text_color(ANSI_COLOR_GREY);
	puts("Grey");
	ansi_text_color(ANSI_COLOR_DARK_GREY);
	puts("Dark grey");
	ansi_text_color(ANSI_COLOR_RED);
	puts("Red");
	ansi_text_color(ANSI_COLOR_GREEN);
	puts("Green");
	ansi_text_color(ANSI_COLOR_YELLOW);
	puts("Yellow");
	ansi_text_color(ANSI_COLOR_LIGHT_BLUE);
	puts("Light blue");
	ansi_text_color(ANSI_COLOR_PINK);
	puts("Pink");
	ansi_text_color(ANSI_COLOR_LIGHT_CYAN);
	puts("Light cyan");
	ansi_text_color(ANSI_COLOR_WHITE);
	puts("White");
	ansi_text_color(ANSI_COLOR_DEFAULT);
	puts("Default color");
	for (i = 0; i < 256; i++) {
		ansi_text_color_index(i);
		printf("Color #%hhu\n", i);
	}
	ansi_text_color(ANSI_COLOR_DEFAULT);
	puts("Default color");
	exit(0);
}
