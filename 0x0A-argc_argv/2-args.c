#include <stdio.h>

/**
 * main - print args
 * @argc: count
 * @argv: vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
