#include "main.h"
#include <stdio.h>

/**
 * print_hex - prints hexadecimal conversion of integer
 * @n: unsigned integer
 * @c: flag for uppercase or lowercase
 * Return: length of printed chars
 */

int print_hex(unsigned int n, unsigned int c)
{
	unsigned int array[11];
	int a = 0;
	int size = 0;

	while (n)
	{
		array[a] = n % 16;
		n /= 16;
		a++;
	}
	a--;

	while (a >= 0)
	{
		if (array[a] > 9 && c == 0)
			_putchar((array[a] - 10) + 97);

		else if (array[a] > 9 && c == 1)
			_putchar((array[a] - 10) + 65);

		else
			_putchar(array[a] + '0');
		size++;
		a--;
	}
	return (size);
}

