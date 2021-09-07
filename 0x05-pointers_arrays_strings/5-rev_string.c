#include "main.h"

/**
 * rev_string - reverses a string
 * @s: to be reversed
 */

void rev_string(char *s)
{
	char tmp;
	int i, len, leng;

	len = 0;
	leng = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	leng = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[leng];
		s[leng--] = tmp;
	}
}
