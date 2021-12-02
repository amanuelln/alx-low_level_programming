#include "main.h"

/**
 * binary_to_uint - a fun that converts a binary to unsigned int
 * @b: pointer to string of 0 and 1
 *
 * Return: converted number or 0 on fail
 */
 unsigned int binary_to_uint( const char *b)
{
	 unsigned int k = 1;
	 unsigned int i=0;
	 int c;
	 unsigned int len;
	 
	 len = _strlen(b);
	 
	 for (c = len-1; c >= 0; c--)
	 {
		 if (b[c] != '0' && b[c] != '1')
			 return (0);
		 if (b[c] == '1')
		 {
			 i += k;
	         }
		 k *= 2;
	 }
		 return (i);
 }

/**
 * _strlen - a function that finds a length of a string
 * @s: the string to check
 *
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
