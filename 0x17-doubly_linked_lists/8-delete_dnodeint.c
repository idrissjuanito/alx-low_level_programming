#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index
 *
 * @head: first node of the list
 * @index: index to delete
 *
 * Return: 1 on success and -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	current = *head;
	while (current)
	{
		if (index == i)
			break;
		current = current->next;
		i++;
	}
	if (!current)
		return (-1);
	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);
	return (1);
}
