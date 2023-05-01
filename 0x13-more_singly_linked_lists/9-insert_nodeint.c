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
	listint_t *current;
	listint_t *new;
	listint_t *prev;
	unsigned int count = 0;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
		*head = new;
	while (current)
	{
		if (count == idx)
			break;
		count++;
		prev = current;
		current = current->next;
	}
	if (count < idx)
		return (NULL);
	new->next = current;
	if (idx > 0)
		prev->next = new;
	return (new);
}
