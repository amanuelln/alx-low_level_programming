#include "main.h"

/**
 * more_numbers - prints number upto 14
 */
void more_numbers(void)
{
	char j, c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			c = j;
			if (j > 9)
			{
				_putchar('1');
				c = j % 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
	}
