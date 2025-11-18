#include "main.h"
#include <limits.h>

int printChar(char *text)
{
    char c = *text;
    return (write(1, &c, 1));
}

int printString(char *value, int *counter)
{
	int i;

	i = 0;
	if (!value)
		value = "(null)";
	while (value[i] != '\0')
	{
		printChar(&(value[i]));
		++(*counter);
		++i;
	}
	return (1);
}




int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
			*counter += printChar(format[0]);
		else
		{
			switch(format[counter])
			{
				case 'c':
				{
					printChar(args);
					break;
				}
				case 's':
					break;
				case '%':
					break;
			}
		}
		++format;
	}
	va_end(args);
	return (counter);
}

int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
   /* _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
  */  return (0);
}
