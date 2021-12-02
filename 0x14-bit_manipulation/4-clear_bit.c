#include "main.h"
/**
 * clear_bit - sets a bit at given index to 0
 * @n: number
 * @index: index
 *
 * Return: 1 or-1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0x01;

	mask = ~(mask << index);
	if (mask == 0x00) /* something went wrong mask is all 0's */
		return (-1);
	*n &= mask;
	return (1);
}

