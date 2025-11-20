#include "main.h"

/**
 * printUInt - prints an integer (%d or %i)
 * @args: argument list
 * Return: number of characters printed
 */

int printUInt(va_list args)
{
	unsigned int num = va_arg(args, int);
	char buffer[1024]; /* enough for 32-bit int */
	int i = 0, count = 0;
	long n = num;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}


	/*gets the numbers from left to right*/
	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
		count++;
	}

	/*print the numbers left to right*/
	write(1, buffer, count);
	return (count);
}
