// conio.h for ANSI C and C++
// Extra functions are also provided.
// (C) 2013 Nandakumar <nandakumar96@gmail.com>

#ifndef CONIO_H
#define CONIO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// General Utility

#define CLEAR "\x1b[2J"
#define SET11 "\x1b[1;1f" // Set the Cursor at 1,1

// Text Modification

#define BLINK_SLOW "\x1b[5m"
#define BLINK_RAPID "\x1b[6m"

// Colors

#define CC_CLEAR "\x1b[0m" // Console Color CLEAR

// FG Colours
#define BLACK "\x1b[30m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define WHITE "\x1b[37m"

// FG Intense Colors
#define IBLACK "\x1b[30;1m"
#define IRED "\x1b[31;1m"
#define IGREEN "\x1b[32;1m"
#define IYELLOW "\x1b[33;1m"
#define IBLUE "\x1b[34;1m"
#define IMAGENTA "\x1b[35;1m"
#define ICYAN "\x1b[36;1m"
#define IWHITE "\x1b[37;1m"

// BG Colors
#define BGC_BLACK "\x1b[40m"
#define BGC_RED "\x1b[41m"
#define BGC_GREEN "\x1b[42m"
#define BGC_YELLOW "\x1b[43m"
#define BGC_BLUE "\x1b[44m"
#define BGC_MAGENTA "\x1b[45m"
#define BGC_CYAN "\x1b[46m"
#define BGC_WHITE "\x1b[47m"

// BG Intense Colors
#define BGC_IBLACK "\x1b[40;1m"
#define BGC_IRED "\x1b[41;1m"
#define BGC_IGREEN "\x1b[42;1m"
#define BGC_IYELLOW "\x1b[43;1m"
#define BGC_IBLUE "\x1b[44;1m"
#define BGC_IMAGENTA "\x1b[45;1m"
#define BGC_ICYAN "\x1b[46;1m"
#define BGC_IWHITE "\x1b[47;1m"

// General Utility Functions

void cagxy(unsigned int x, unsigned int y); // Clear and Goto X,Y

void clrscr(); // Clear the Screen

char getch();

void gotox(unsigned int x);

void gotoxy(unsigned int x, unsigned int y);

void nocursor();

void reset_video();

void showcursor();

void textcolor(char *color);

void textbackground(char color[11]);

#endif
