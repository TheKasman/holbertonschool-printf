#include "main.h"

/**
 * printUInt - prints an integer (%d or %i)
 * @buff: the buffer
 * @args: argument list
 * Return: number of characters printed
 */

int printUInt(char *buff, va_list args)
{
	unsigned int num = va_arg(args, int);
	int i = 0, j = 0;
	char temp[20];
	long n = num;

	if (num == 0)
	{
		buff[i++] = '0';
		return (i);
	}


	/*gets the numbers from left to right*/
	while (n > 0)
	{
		buff[i++] = (n % 10) + '0';
		n /= 10;
	}


	/*print the numbers left to right*/
	while (j > 0)
	{
		buff[i++] = temp[--j];
	}
	return (i);
}
