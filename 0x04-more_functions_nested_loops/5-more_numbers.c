#include "holberton.h"
/**
 * more_numbers - print 0..14 ten times
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}

