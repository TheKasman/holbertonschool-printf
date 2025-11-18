#include "main.h"

/**
 * getType - gets the type of letter before % and does something
 * letter: the letter
 * ...: the argument to use
 * Return: returns the text being written or 0
 */


int getType(char letter, va_list args)
{
	char c;

	switch (letter)
	{
		case 'c':
			c = (char)va_arg(args, int);
			return (write(1, &c, 1));
		case 's':
			return (printString(args));
		case '%':
			return (write(1, "%", 1));
		default:
			return (0);
	}
}
