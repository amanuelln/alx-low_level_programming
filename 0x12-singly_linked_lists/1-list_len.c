#include "list.h"
#include <stdio.h>
/**
 * list_len - print number of elements
 * @h: the list
 *
 * Return: number of elts
 */
size_t list_len(const list_t *h)
{
	int i;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
