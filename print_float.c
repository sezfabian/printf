#include "main.h"
/**
 * print_float- prints a float
 * @f:the number
 */

void print_float(double f)
{
	int dec = 1000000;
	int i = (int)f;

	print_int(i);
	f = (f - i) * dec;
	i = (int)f;
	_putchar('.');
	print_int(i);
}
