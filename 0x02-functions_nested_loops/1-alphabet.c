#include "holberton.h"

/**
 * main - print the alphabet in
 * lowercase letters
 * Return: Always 0 (Succeses)
 **/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
	return (0);
}
