#include "main.h"

/**
 * rev_string - reverses a string
 * @s: to be reversed
 */
void rev_string(char *s)
{
	char *first = s, *last = s;

	while (*last)
		++last;

	if (first < last)
	{
		for (; first < --last; ++first)
		{
			char c = *first;
			*first = *last;
			*last  = c;
		}
	}
}
