#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	unsigned int n;

	if (n < 0)
		n1 = -n;
	_putchar('-');
	else
		n1 = n;
	if (n1 / 10)
		print_number(n1 / 10);

	_puychar((n1 % 10 + '0');
}
