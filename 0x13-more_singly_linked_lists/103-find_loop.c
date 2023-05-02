#include "lists.h"

/**
 * find_listint_loop - finds  the node that starts the loop
 *
 * @head: first node of the list
 *
 * Return: returns the address of the loop node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp, *node = NULL;

	if (!head)
		return (node);
	tmp = head;
	while (tmp)
	{
		if (tmp->next >= tmp)
		{
			node = tmp->next;
			break;
		}
		tmp = tmp->next;
	}
	return (node);
}
