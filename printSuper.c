#include "main.h"

/**
 * printSuper - prints valid ascii characters
 * @buff: buffer
 * @args: the string
 * Return: returns the number of characters to write.
 */

int printSuper(char *buff, va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0, j = 0;


	/*no contents in num*/
	if (!str)
	{
		char *nullStr = "(null)";
		int n = 0;

		while (nullStr[n] != '\0')
		{
			buff[i++] = nullStr[n++];
		}
		return (i);
	}

	/*go through each char in num and do the math*/
	while (str[j] != '\0')
	{
		unsigned char c = (unsigned char) str[j];

		/*if the character is between ascii32 and ascii127*/
		if (c >= 32 && c < 127)
		{
			buff[i++] = c;
		}
		else
		{
			buff[i++] = '\\';
			buff[i++] = 'x';
			i += print_2BHex(buff + i, str[i]);
		}
		j++;
	}

	return (i);
}
