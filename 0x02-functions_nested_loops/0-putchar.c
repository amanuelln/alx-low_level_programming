#include "main.h"

/**
 * main -prints holberton followed
 * by a new line
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char c[8] = "_putchar";
	int i;

	for (i = 0; i < 7; i++)
		_putchar(c[i]);
_putchar('\n');
return (0);
}
