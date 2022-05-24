#include "lists.h"

/**
 * free_listint - This function will frees a listint_t list.
 * @head: is a pointer to the head of the listint_t list to be freed.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
