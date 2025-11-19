#include "main.h"

/**
 * printInt - prints an integer (%d or %i)
 * @args: argument list
 * Return: number of characters printed
 */

int printInt(va_list args)
{
	int num = va_arg(args, int);
	char buffer[20]; /* enough for 32-bit int */
	int i = 0, count = 0;
	long n = num;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	if (num < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
	}

	/*gets the numbers from left to right*/
	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}

	/*print the numbers left to right*/
	while (i--)
	{
		write(1, &buffer[i], 1);
		count++;
	}
	return (count);
}
