#include "main.h"

/**
 * printOct - Prints an integer to binary (01010110110)
 * args: the list of arguments
 * Return: returns the number
 */

int printOct(char *buff, va_list args)
{
	unsigned int num = va_arg(args, int);
	int i = 0, j = 0;
	char temp[20];

	if (num == 0)
	{
		buff[i++] = '0';
		return (i);
	}

	/*now convert to octal (base8)*/

	while (num != 0)
	{
		temp[j++] = (num % 8) + '0';
		num /= 8;
	}

	/*print it all out*/
	while(j > 0)
		buff[i++] = temp[--j];
	return (i);
}
