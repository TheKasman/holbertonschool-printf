#include "main.h"

/**
 * printString - handles string printout
 * @args: the argument to print
 * Return: returns the length of the string
 */

int printString(va_list args)
{
	char *str = va_arg(args, char *);
	int length = 0;

	if (str == NULL)
		str = "(null)";

	while (str[length])
		length++;

	write(1, str, length);
	return (length);
}
