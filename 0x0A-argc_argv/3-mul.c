#include <stdio.h>
#include <stdlib.h>

/**
 * main - print args
 * @argc: count
 * @argv: vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			mul = mul * atoi(argv[i]);
		printf("%d\n", mul);
	}
	return (0);
}
