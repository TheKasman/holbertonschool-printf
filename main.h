#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int printString(char *value, int *counter);
int printChar(char *text);
void printPercent();

#endif
