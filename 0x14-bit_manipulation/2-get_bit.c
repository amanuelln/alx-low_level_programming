#include "main.h"
#include <stdlib.h>
/**
 * get_bit - gets a bit, 1 or 0, at index
 * @n: number
 * @index: index to find bit at
 *
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int ret = 0;
	unsigned long int mask = 0x01;

	mask = mask << index;
	if (mask == 0)
		return (-1);
	ret = ((n & mask)) ? 1 : 0;
	return (ret);
}

