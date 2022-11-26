#include "main.h"
/**
 * print_int- prints integer
 * @n: integer to print
 * Return: cp count of printed chars
 */

int print_int(double n)
{
	int cp = 0, x;

	if (n < 0)
	{
		_putchar('-');
		cp++;
		n = -n;
	}
	if (n / 10 >= 1)
		cp = cp + print_int(n / 10);
	x = (unsigned int)n;
	_putchar((x % 10) + '0');
	cp++;
	return (cp);
}
