#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum all of the data.
 * @head: Address of the first node
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
