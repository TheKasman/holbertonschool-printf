#include "main.h"

/**
 * printInt - prints an integer (%d or %i)
 * @args: argument list
 * Return: number of characters printed
 */

int printInt(va_list args)
{
	int num = va_arg(args, int);
	char buffer[1024]; /*the BEEEG BUFFER*/
	int i = 0, count = 0;
	long n = num;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	if (num < 0)
	{
		buffer[i++] = '-';
		count++;
		n = -n;
	}

	/*gets the numbers from left to right*/
	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
		count++;
	}

	/*print the numbers left to right*/
	write(1, &buffer, count);
	return (count);
}
