#include <stdio.h>

/**
 * main - print the alphabet letters
 * in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
