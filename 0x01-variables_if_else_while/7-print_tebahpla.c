#include <stdio.h>

/**
 * main - print the lowercase alphabets in reverse,
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	for ( ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
