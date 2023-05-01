#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at a particular index of a linked list
 *
 * @head: the first node
 * @index: index of the node to find
 *
 * Return: pointer to found node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current, *found = NULL;
	unsigned int n = 0;

	if (!head)
		return (found);
	current = head;

	while (current)
	{
		if (n == index)
		{
			found = current;
			break;
		}
		n++;
		current = current->next;
	}
	return (found);
}
