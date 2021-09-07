#include "main.h"

/**
 * _strlen - returns te length of string
 * @s: string length to print
 *
 * Return: length of string @s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	i++;

	return (i);
}
