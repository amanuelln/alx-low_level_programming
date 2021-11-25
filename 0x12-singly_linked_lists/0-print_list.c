#include "list.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 * @h: the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s", h->len, h->str);
		else
			printf("[0] (nil)");
		h->next;
		i++;
	}
	return (i);
}
