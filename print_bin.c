#include "main.h"

/**
 * print_bin - prints binary conversion of integer
 * @n: unsigned integer
 * Return: length of printed chars
 */

int print_bin(unsigned int n)
{
	int a = 0;
	unsigned long int array[32];
	unsigned int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		array[a] = n % 2;
		n = n / 2;
		a++;
	}

	a -= 1;

	while (a >= 0)
	{
		_putchar(array[a] + '0');
		count++;
		a--;
	}

	return (count);
}

