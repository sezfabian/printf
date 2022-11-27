#include "main.h"

/**
 * print_octal - prints octal conversion of integer
 * @n: unsigned integer
 * Return: length of printed chars
 */

int print_octal(unsigned int n)
{
	int a = 0;
	unsigned int array[11];
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		array[a] = n % 8;
		n = n / 8;
		a++;
	}

	a--;

	while (a >= 0)
	{
		_putchar(array[a] + '0');
		count++;
		a--;
	}

	return (count);
}

