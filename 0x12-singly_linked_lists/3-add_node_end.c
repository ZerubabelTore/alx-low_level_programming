#include "lists.h"

int _strlen_recursion(char *s);

/**
 * add_node_end - this function will adds a new node at
 * the end of a list_t list.
 * @head: is pointer to the first element of the list.
 * @str: is string to set in the new node.
 * Return: the address of the new element, or NULL if it failed
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *aux = *head;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);

	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen_recursion(new->str);
	new->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
	else
		*head = new;


	return (new);
}

/**
 * _strlen_recursion - Ths function will returns the
 * length of a string.
 * @s: is string.
 * Return: the length of @s.
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
