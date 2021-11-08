#include <stdio.h>
/**
 * main - entry point for program
 *
 * @argc: count
 * @argv: array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (!*argv)
		return (-1);
	printf("%d\n", argc - 1);
	return (0);
}

