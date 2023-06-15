#include "lists.h"

/**
 * add_dnodeint_end- adds a node at the ent of a doubly linked list
 *
 * @head: pointer to pointer of the list head
 * @n: the value of the node
 *
 * Return: pointer to the element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *current;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	current = *head;
	new->next = NULL;
	if (!current)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (current->next)
		current = current->next;
	new->prev = current;
	current->next = new;
	return (new);
}
