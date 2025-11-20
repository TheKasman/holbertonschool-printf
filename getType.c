#include "main.h"

/**
 * getType - gets the type of letter before % and does something
 * letter: the letter
 * ...: the argument to use
 * Return: returns the text being written or 0
 */


int getType(char letter, char *buff, va_list args)
{

	switch (letter)
	{
		case 'c':
			buff[0] = (char)va_arg(args, int);
			return (1);
		case 's':
			return (printString(buff, args));
		case '%':
			buff[0] = '%';
			return (1);
		case 'd':
		case 'i':
			return (printInt(buff, args));
		case 'b':
			return (printBin(buff, args));
		case 'u':
			return (printUInt(buff, args));
		case 'o':
			return (printOct(buff, args));
		case 'x':
			return (print_hex(buff, args));
		case 'X':
			return (print_HEX(buff, args));
		default:
			buff[0] = '%';
			buff[1] = letter;
			return (2);
	}
}
