#include "main.h"

/**
 * printBin - Prints an integer to binary (01010110110)
 * args: the list of arguments
 * Return: returns the number
 */

int printBin(char *buff, va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char temp[32]; /*handling 32bit ints*/
	int i = 0, j = 0;

	if (num == 0)
	{
		buff[i++] = '0';
		return (i);
	}

	/*do binary math until we can't*/
	while (num > 0)
	{
		/*add 1 or 0 to binary*/
		buff[i++] = (num & 1) ? '1' : '0';
		num >>= 1;
	}

	/*print it all out*/
	while (j > 0)
		buff[i++] = temp[--j];
	return (i);
}
