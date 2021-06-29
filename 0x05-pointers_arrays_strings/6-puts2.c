#include "holberton.h"

/**
 * puts2 -prints a string
 * then a new line
 * @str: points to the string to print i
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
