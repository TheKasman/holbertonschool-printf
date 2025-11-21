#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int  getType(char letter, char *buff, va_list args);
int printString(char *buff, va_list args);
int printInt(char *buff, va_list args);
int printBin(char *buff, va_list args);
int printUInt(char *buff, va_list args);
int printOct(char *buff, va_list args);
int print_HEX(char *buff, va_list args);
int print_hex(char *buff, va_list args);
int print_2BHex(char *buff, unsigned char c);
int printSuper(char *buff, va_list args);

#endif
