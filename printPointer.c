#include "main.h"

/**
 * printPointer - prints a memory address in hex with "0x" prefix
 * @buff: the buffer
 * @args: argument list
 * Return: number of characters printed
 */
int printPointer(char *buff, va_list args)
{
	unsigned long addr = (unsigned long) va_arg(args, void *);
	char tmp[20];
	char *hex = "0123456789abcdef";
	int i = 0, j = 0;

	/* NULL pointer prints "(nil)" */
	if (addr == 0)
	{
		buff[0] = '(';
		buff[1] = 'n';
		buff[2] = 'i';
		buff[3] = 'l';
		buff[4] = ')';
		return (5);
	}

	/*  0x */
	buff[i++] = '0';
	buff[i++] = 'x';

	/* convert pointer to hex */
	while (addr != 0)
	{
		tmp[j++] = hex[addr % 16];
		addr /= 16;
	}

	/* correct order */
	while (j > 0)
		buff[i++] = tmp[--j];

	return (i);
}
