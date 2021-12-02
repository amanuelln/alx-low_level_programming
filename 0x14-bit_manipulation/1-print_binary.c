#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints a binary number using bit shifting and masks
 * @n: number to print
 *
 * Return: always void
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = 32768;
	char rel_flag = 0;

	while (mask > 0)
	{
		if ((n & mask) == 0 && (rel_flag || mask == 0x01))
			_putchar('0');
		else if ((n & mask) != 0)
		{
			_putchar('1');
			rel_flag = 1;
		}
		mask = mask >> 1;
	}
}

