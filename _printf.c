#include "main.h"


/**
 * _printf - our  printf function
 * @format: the format we need to work with in the string
 * @...: the text
 * Return: returns the count back to us
 */
int _printf(const char *format, ...)
{
	char buffer[1024];
	va_list args;
	int length = 0, count = 0, buf_index = 0;

	va_start(args, format);

	while (format[length] != '\0')
	{
		if (format[length] == '%')
		{
			length++;
			if(format[length] == '\0')
			{
				va_end(args);
				return (-1);
			}
			buf_index += getType(format[length],
					&buffer[buf_index], args);
		}
		else
		{
			buffer[buf_index++] = format[length];
		}
		length++;
	}

	write(1, buffer, buf_index);

	count = buf_index;
	va_end(args);
	return (count);
}
