#include "lists.h"

/**
 * get_dnodeint_at_index - get the value at the an index in linked list
 *
 * @head: first node of the list
 * @index: index to return
 *
 * Return: pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node_at = NULL, *current;
	unsigned int i = 0;

	current = head;

	while (current)
	{
		if (i == index)
		{
			node_at = current;
			break;
		}
		current = current->next;
		i++;
	}
	return (node_at);
}
