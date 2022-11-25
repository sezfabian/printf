#include "main.h"
/**
 * print_int- prints integer
 * @n: integer to print
 * Return: cp count of printed chars
 */

int print_int(int n)
{
	int cp = 0;

	if (n < 0)
	{
		_putchar('-');
		cp++;
		n = -n;
	}
	if (n / 10 != 0)
		cp = cp + print_int(n / 10);
	_putchar((n % 10) + '0');
	cp++;
	return (cp);
}
