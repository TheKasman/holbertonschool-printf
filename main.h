#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int  getType(char letter, va_list args);
int printString(va_list args);
int printInt(va_list args);

#endif
