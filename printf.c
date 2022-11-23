#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints input to std output
 * @format: string with text to be written to stdout
 * Return: 0 - sucees
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int c = 0, c1;
	char *str;

	va_start(args, format);
	while (format[c] != '\0')
	{
		if (format[c] == '%')
		{
			c++;
			switch (format[c])
			{
				case 'c':
				_putchar(va_arg(args, int));
				break;

				case 's':
				str = va_arg(args, char*);
				for (c1 = 0; str[c1] != '\0'; c1++)
				{
					_putchar(str[c1]);
				}
				break;

				case 'i':
				print_int(va_arg(args, int));
				break;

				case 'd':
				print_double(va_arg(args, double));
			}
		}
		else
		_putchar(format[c]);
		c++;
	}
	va_end(args);
	return (0);
}
