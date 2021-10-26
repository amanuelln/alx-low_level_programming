#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elemnts of integres from
 * an array followed by a new line
 * @a: array
 * @n: num of elts to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
