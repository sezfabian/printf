#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * _printf - prints input to std output
 * @format: string with text to be written to stdout
 * Return: 0 - success
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int c = 0, c1, cp = 0;
	char *str;

	if (format == NULL)
		return (-1);

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
				cp++;
				break;

				case 's':
				str = va_arg(args, char*);
				if (str != 0)
				{
				for (c1 = 0; str[c1] != '\0'; c1++)
				{
					_putchar(str[c1]);
					cp++;
				}
				}
				else
					cp = cp + _printf("(null)");
				break;

				case '%':
				_putchar('%');
				cp++;
				break;

				case 'i': case 'd':
				cp = cp + print_int(va_arg(args, int));
				break;

				case '\0':
					return (-1);

				default:
				_putchar('%');
				_putchar(format[c]);
				cp = cp + 2;
				break;
				}
		}
		else
		{
			_putchar(format[c]);
			cp++;
		}
		c++;
	}
	va_end(args);
	return (cp);
}

