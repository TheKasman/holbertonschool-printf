#include "main.h"

/**
 * printHEX - Prints an integer to HEXADECIMAL
 * args: the list of arguments
 * Return: returns the number
 */

int print_HEX(char *buff, va_list args)
{
	unsigned int num = va_arg(args, int);
	int i = 0, j = 0;
	char tmp[20];
 	char *hex = "0123456789ABCDEF";

	if (num == 0)
	{
		buff[i++] = '0';
		return (i);
	}

	/*now convert to Base16 - HEXADECIMAL*/
	while (num != 0)
	{
        	tmp[i++] = hex[num % 16];
		num /= 16;
	}

	/*print it all out*/
	while (j > 0)
	{
		buff[i++] = tmp[--j];
	}
	return (i);
}

/**
 * print_hex - prints hexadecimal in lowercase
 * args: the list of arguments
 * Return: returns the count
 */

int print_hex(char *buff, va_list args)
{
	unsigned int num = va_arg(args, int);
	int i = 0, j = 0;
	char tmp[20];
 	char *hex = "0123456789abcdef";

	if (num == 0)
	{
		buff[i++] = '0';
		return (i);
	}

	/*now convert to octal (base8)*/

	while (num != 0)
	{
		tmp[i++] = hex[num % 16];
		num /= 16;
	}

	/*print it all out*/
	while (j > 0)
		buff[i++] = tmp[--j];
	return (i);
}
