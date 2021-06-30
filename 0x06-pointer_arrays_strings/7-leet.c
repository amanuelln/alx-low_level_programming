#include "holberton.h"

/**
 * leet - encode 1337
 * @s: to be encoded
 *
 * Return: the result
 */
char *leet(char *s)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
