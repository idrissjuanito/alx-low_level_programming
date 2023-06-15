#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at particular index
 *
 * @h: first node of list
 * @idx: index to store the node at
 * @n: value of the node to add
 *
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	while (current)
	{
		if (i + 1 == idx)
			break;
		current = current->next;
		i++;
	}
	if (!current)
		return (NULL);
	if (!current->next)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = current->next;
	current->next = new;
	new->prev = current;
	return (new);
}
