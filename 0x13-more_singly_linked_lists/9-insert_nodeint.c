#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node a given node
 *
 * @head: the head of the linked list
 * @idx: index at which to insert
 * @n: data to insert
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int count = 0;

	if (!*head)
		return (NULL);
	current = *head;
	new = malloc(sizeof(listint_t));
	if (!new || idx < 0)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = current->next;
		current = new;
		return (new);
	}
	while (current)
	{
		if (count == idx - 1)
		{
			new->next = current->next;
			current->next = new;
			break;
		}
		count++;
		current = current->next;
	}
	if (count < idx - 1)
		return (NULL);
	return (new);
}
