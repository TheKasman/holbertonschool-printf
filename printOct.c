#include "main.h"

/**
 * printOct - Prints an integer to binary (01010110110)
 * args: the list of arguments
 * Return: returns the number
 */

int printOct(va_list args)
{
	unsigned int num = va_arg(args, int);
	char buffer[32]; /*handling 32bit ints*/
	int i = 0;
	int count = 0;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	/*now convert to octal (base8)*/

	while (num != 0)
	{
		buffer[i++] = (num % 8) + '0';
		num /= 8;
		i *= 10;
	}

	/*print it all out*/
	while (i--)
	{
		write(1, &buffer[i], 1);
		count++;
	}
	return (count);
}
