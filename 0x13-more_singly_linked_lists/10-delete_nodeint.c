#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a particular index
 *
 * @head: first node in the list
 * @index: index of node to delete
 *
 * Return: 1 if success else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current = *head;
	unsigned int count = 0;

	if (!current)
		return (-1);
	while (current)
	{
		if (count == index)
			break;
		count++;
		prev = current;
		current = current->next;
	}
	if (count < index)
		return (-1);
	if (index == 0)
		*head = current->next;
	else
		prev->next = current->next;
	free(current);
	return (1);
}
