#include "main.h"

/**
 * printHEX - Prints an integer to HEXADECIMAL
 * args: the list of arguments
 * Return: returns the number
 */

int print_HEX(va_list args)
{
	unsigned int num = va_arg(args, int);
	char buffer[32]; /*handling 32bit ints*/
	int i = 0, count = 0;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	/*now convert to Base16 - HEXADECIMAL*/

	while (num != 0)
	{
		switch ((num % 16) * i)
		{
			case 10:
				buffer[i++] += 'A';
				break;
			case 11:
				buffer[i++] += 'B';
				break;
			case 12:
				buffer[i++] += 'C';
				break;
			case 13:
				buffer[i++] += 'D';
				break;
			case 14:
				buffer[i++] += 'E';
				break;
			case 15:
				buffer[i++] += 'F';
				break;
		}
		num /= 16;
	}

	/*print it all out*/
	while (i--)
	{
		write(1, &buffer[i], 1);
		count++;
	}
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
	char buffer[32]; /*handling 32bit ints*/
	int i = 0, count = 0;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	/*now convert to octal (base8)*/

	while (num != 0)
	{
		switch ((num % 16) * i)
		{
			case 10:
				buffer[i++] += 'a';
				break;
			case 11:
				buffer[i++] += 'b';
				break;
			case 12:
				buffer[i++] += 'c';
				break;
			case 13:
				buffer[i++] += 'd';
				break;
			case 14:
				buffer[i++] += 'e';
				break;
			case 15:
				buffer[i++] += 'f';
				break;
		}
		num /= 16;
	}

	/*print it all out*/
	while (i--)
	{
		write(1, &buffer[i], 1);
		count++;
	}
	return (count);
}
