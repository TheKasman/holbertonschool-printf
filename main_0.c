#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int length = 0, count = 0;
	char c;

	va_start(args, format);

	while (format[length] != '\0')
	{
		if (format[length] == '%')
		{
			length++;
			switch (format[length])
			{
				case 'c':
					c = (char)va_arg(args, int);
					write(1, &c, 1);
					count++;
					break;
			}
		}
		else
		{
			write(1,&format[length], 1);
			count++;
		}
		length++;
	}

	va_end(args);
	return (count);
}
