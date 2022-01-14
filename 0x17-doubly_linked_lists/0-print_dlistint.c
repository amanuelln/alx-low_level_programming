#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint -print list.
 *Description: Function that prints content of a doubly linked list
 * @h: Head of the list. Pointer to a structure dlistint_s
 * Return: the number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t noNodes;

	for (noNodes = 0; temp != NULL; noNodes++)
	{
		printf("%d\n", temp->n);
		temp = temp->next; /*temp will point to the next node*/
	}
	return (noNodes);
}

