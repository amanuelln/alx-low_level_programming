#include "holberton.h"

/**
 * _isalpha - check for alphabet character
 * @c: character to be checked
 * return: 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
