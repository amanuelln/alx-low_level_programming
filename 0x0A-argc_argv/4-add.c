#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point for program
 *
 * @argc: count
 * @argv: array
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	unsigned int i;
	unsigned int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i])) 
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

