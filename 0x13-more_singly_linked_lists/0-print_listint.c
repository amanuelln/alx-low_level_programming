#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the elements in linked list
 * @h: head of listint_t type
 *
 * Return: size_t, number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_num = 0;
	const listint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		nodes_num++;
		temp = temp->next;
	}
	return (nodes_num);
}

