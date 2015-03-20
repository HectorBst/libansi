
#include <stdio.h>
#include <stdlib.h>

#include "ansi_sequences.h"

void to_defaults() {
	ansi_reset_format();
	puts("Default format");
	ansi_text_color(ANSI_COLOR_DEFAULT);
	puts("Default text color");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	puts("Default background color");
	putchar('\n');
}

void test_text_colors() {
	to_defaults();
	puts("Testing basic text colors...");
	ansi_text_color(ANSI_COLOR_DEFAULT);
	puts("Default color");
	ansi_text_color(ANSI_COLOR_BLACK);
	puts("Black");
	ansi_text_color(ANSI_COLOR_RED);
	puts("Red");
	ansi_text_color(ANSI_COLOR_GREEN);
	puts("Green");
	ansi_text_color(ANSI_COLOR_BROWN);
	puts("Brown");
	ansi_text_color(ANSI_COLOR_BLUE);
	puts("Blue");
	ansi_text_color(ANSI_COLOR_MAGENTA);
	puts("Magenta");
	ansi_text_color(ANSI_COLOR_CYAN);
	puts("Cyan");
	ansi_text_color(ANSI_COLOR_DARK_GREY);
	puts("Dark grey");
	ansi_text_color(ANSI_COLOR_GREY);
	puts("Grey");
	ansi_text_color(ANSI_COLOR_LIGHT_RED);
	puts("Light red");
	ansi_text_color(ANSI_COLOR_LIGHT_GREEN);
	puts("Light green");
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
	to_defaults();
}

void test_text_colors_index() {
	unsigned short i;
	to_defaults();
	puts("Testing index text colors...");
	for (i = 0 ; i < 256 ; i++) {
		ansi_text_color_index(i);
		printf("Color #%hhu\n", i);
	}
	to_defaults();
}

void test_text_colors_rgb() {
	unsigned short red, green, blue;
	to_defaults();
	puts("Testing RGB text colors...");
	for (red = 0 ; red < 256 ; red++) {
		for (green = 0 ; green < 256 ; green++) {
			for (blue = 0 ; blue < 256 ; blue++) {
				ansi_text_color_rgb(red, green, blue);
				printf("Color %.3hhu %.3hhu %.3hhu\n", red, green, blue);
			}
		}
	}
	to_defaults();
}

void test_background_colors() {
	to_defaults();
	puts("Testing basic background colors...");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	printf("Default color");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	ansi_background_color(ANSI_COLOR_BLACK);
	printf("Black");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	ansi_background_color(ANSI_COLOR_RED);
	printf("Red");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	ansi_background_color(ANSI_COLOR_GREEN);
	printf("Green");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	ansi_background_color(ANSI_COLOR_BROWN);
	printf("Brown");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	ansi_background_color(ANSI_COLOR_BLUE);
	printf("Blue");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	ansi_background_color(ANSI_COLOR_MAGENTA);
	printf("Magenta");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	ansi_background_color(ANSI_COLOR_CYAN);
	printf("Cyan");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	ansi_background_color(ANSI_COLOR_DARK_GREY);
	printf("Dark grey");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	ansi_background_color(ANSI_COLOR_GREY);
	printf("Grey");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	ansi_background_color(ANSI_COLOR_LIGHT_RED);
	printf("Light red");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	ansi_background_color(ANSI_COLOR_LIGHT_GREEN);
	printf("Light green");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	ansi_background_color(ANSI_COLOR_YELLOW);
	printf("Yellow");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	ansi_background_color(ANSI_COLOR_LIGHT_BLUE);
	printf("Light blue");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	ansi_background_color(ANSI_COLOR_PINK);
	printf("Pink");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	ansi_background_color(ANSI_COLOR_LIGHT_CYAN);
	printf("Light cyan");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	ansi_background_color(ANSI_COLOR_WHITE);
	printf("White");
	ansi_background_color(ANSI_COLOR_DEFAULT);
	putchar('\n');
	to_defaults();
}

void test_background_colors_index() {
	unsigned short i;
	to_defaults();
	puts("Testing index background colors...");
	for (i = 0 ; i < 256 ; i++) {
		ansi_background_color_index(i);
		printf("Color #%hhu", i);
		ansi_background_color(ANSI_COLOR_DEFAULT);
		putchar('\n');
	}
	to_defaults();
}

void test_background_colors_rgb() {
	unsigned short red, green, blue;
	to_defaults();
	puts("Testing RGB background colors...");
	for (red = 0 ; red < 256 ; red++) {
		for (green = 0 ; green < 256 ; green++) {
			for (blue = 0 ; blue < 256 ; blue++) {
				ansi_background_color_rgb(red, green, blue);
				printf("Color %.3hhu %.3hhu %.3hhu", red, green, blue);
				ansi_background_color(ANSI_COLOR_DEFAULT);
				putchar('\n');
			}
		}
	}
	to_defaults();
}

int main() {
	putchar('\n');
	to_defaults();
	putchar('\n');
	test_text_colors();
	putchar('\n');
	test_text_colors_index();
	//putchar('\n');
	//test_text_colors_rgb();
	test_background_colors();
	putchar('\n');
	test_background_colors_index();
	//putchar('\n');
	//test_background_colors_rgb();
	putchar('\n');
	to_defaults();
	exit(0);
}
