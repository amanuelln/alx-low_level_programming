#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: count
 * @argv: values
 *
 * Return: mul (0 for success)
 * and 1 for error
 */
int main(int argc, char *argv[])
{

	int i;
	int mul = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
		mul = mul * atoi(argv[i]);
	printf("%i\n", product);
	return (0);
}

