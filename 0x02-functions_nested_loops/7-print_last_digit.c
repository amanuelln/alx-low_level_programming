#include "main.h"

/**
 * print_last_digit - gives last digit back
 * @n: last digit taken from
 * Return : 0 or 1
 */

int print_last_digit(int n)
{
	int nc;

	if (n < 0)
		nc = -1 * (n % 10);
	else
		nc = n % 10;

	_putchar(nc + '0');
	return (nc);
	return (0);
}
