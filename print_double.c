#include "main.h"
/**
 * print_double- prints a double
 * @f:the number
 */

void print_double(double f)
{
	int dec = 1000000;
	int i = (int)f;

	print_int(i);
	f = (f - i) * dec;
	i = (int)f;
	_putchar('.');
	print_int(i);
}