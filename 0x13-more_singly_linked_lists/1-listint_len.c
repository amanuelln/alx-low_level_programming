#include <stdio.h>
#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked
 * list
 * @h: the list
 *
 * Return: the number of elements in h
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp
	size_t node_num = 0;

	temp = h;
	while (temp)
	{
		s++;
		temp = temp->next;
	}
	return (node_num);
}

