#include "main.h"


/**
 * _printf - our  printf function
 * @format: the format we need to work with in the string
 * @...: the text
 * Return: returns the count back to us
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length = 0, count = 0;

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
			count += getType(format[length], args);
		}
		else
		{
			write(1, &format[length], 1);
			count++;
		}
		length++;
	}

	va_end(args);
	return (count);
}
