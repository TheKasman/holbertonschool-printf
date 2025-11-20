#include "main.h"

/**
 * printBin - Prints an integer to binary (01010110110)
 * args: the list of arguments
 * Return: returns the number
 */

int printBin(va_list args)
{
	unsigned int num = va_arg(args, int);
	char buffer[1024]; /*handling 32bit ints*/
	int i = 0, count = 0;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	/*do binary math until we can't*/
	while (num > 0)
	{
		/*add 1 or 0 to binary*/
		buffer[i++] = (num & 1) ? '1' : '0';
		num >>= 1;
		count++;
	}

	/*print it all out*/
	write(1, &buffer[i], count);
	return (count);
}
