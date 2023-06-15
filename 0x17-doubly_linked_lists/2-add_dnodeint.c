#include "lists.h"

/**
 * add_dnodeint - adds a node in a doubly linked list
 *
 * @head: pointer to pointer of the list head
 * @n: the value of the node
 *
 * Return: pointer to the element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *current;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (!*head)
		new->next = NULL;
	else
	{
		current = *head;
		new->next = current;
		current->prev = new;
	}
	return (new);
}
