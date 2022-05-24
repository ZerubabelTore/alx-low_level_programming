#include "lists.h"
#include <stdio.h>

/**
 * print_listint - THis function will prints all
 * the elements of a listint_t list.
 * @h: is a pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
