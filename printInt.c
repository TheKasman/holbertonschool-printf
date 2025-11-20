#include "main.h"

/**
 * printInt - prints an integer (%d or %i)
 * @args: argument list
 * Return: number of characters printed
 */

int printInt(char *buff, va_list args)
{
	int num = va_arg(args, int);
	int i = 0, j = 0; /*loops*/
	char temp[20]; /*temporary buffer*/
	long n = num;

	if (num == 0)
	{
		buff[i++] = '0';
		return (i);
	}

	if (num < 0)
	{
		buff[i++] = '-';
		n = -n;
	}

	/*gets the numbers from left to right*/
	while (n > 0)
	{
		temp[j++] = (n % 10) + '0';
		n /= 10;
	}
	while (j > 0)
	{
		buff[i++] = temp[--j];
	}
	/*print the numbers left to right*/
	return (i);
}
