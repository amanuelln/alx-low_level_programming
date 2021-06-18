#include <stdio.h>

/**
 * main - all combo of two digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 48; m <= 58; n++)
	{
		if (m > n)
		{
			putchar(n);
			putchar(m);
			if (n != 56 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
