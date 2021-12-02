#include "main.h"
/**
 * set_bit - sets a bit at given index to 1
 * @n: number
 * @index: index
 *
 * Return: 1 or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0x01;

	mask = mask << index;
	if (mask == 0x00) /* SOMETHING WENT WRONG MASK IS ALL 0'S */
		return (-1);
	*n |= mask;
	return (1);
}

