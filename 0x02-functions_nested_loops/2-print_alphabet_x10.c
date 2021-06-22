#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the lowercase
 * alphabet
 **/
void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
