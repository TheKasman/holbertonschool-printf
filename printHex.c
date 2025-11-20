#include "main.h"

/**
 * printHEX - Prints an integer to HEXADECIMAL
 * args: the list of arguments
 * Return: returns the number
 */

int print_HEX(va_list args)
{
	unsigned int num = va_arg(args, int);
	char buffer[1024]; /*handling 32bit ints*/
	int i = 0, count = 0;
 	char *hex = "0123456789ABCDEF";
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	/*now convert to Base16 - HEXADECIMAL*/
	while (num != 0)
	{
        	buffer[i++] = hex[num % 16];
		num /= 16;
		count++;
	}

	/*print it all out*/
	write(1, &buffer, count);
	return (count);
}

/**
 * print_hex - prints hexadecimal in lowercase
 * args: the list of arguments
 * Return: returns the count
 */

int print_hex(va_list args)
{
	unsigned int num = va_arg(args, int);
	char buffer[1024]; /*handling 32bit ints*/
	int i = 0, count = 0;

 	char *hex = "0123456789abcdef";
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	/*now convert to octal (base8)*/

	while (num != 0)
	{
		buffer[i++] = hex[num % 16];
		num /= 16;
		count++;
	}

	/*print it all out*/
	write(1, &buffer, count);
	return (count);
}
