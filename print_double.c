#include "main.h"
/**
 * print_int- prints integer
 * @n: integer to print
 *
 */

void print_double(double n)
{

int x;
if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		print_double(n / 10);
	x = (int)n;
	_putchar((x % 10) + '0');
}

