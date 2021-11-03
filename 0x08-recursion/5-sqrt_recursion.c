#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a number
 *
 * Return: if no sq root return -1, otherwise return n
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);

	if (n == 0)
		return (n);

	return (_sqrt_helper(n, 1));
}
