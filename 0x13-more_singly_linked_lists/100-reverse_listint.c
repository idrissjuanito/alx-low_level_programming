#include "lists.h"

/**
 * reverse_listint - reverse a linked linked list
 *
 * @head: first element of the list
 *
 * Return: the address of the new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL, *current = *head;

	if (!current)
		return (NULL);
	while (current)
	{
		*head = current->next;
		current->next = tmp;
		tmp = current;
		current = *head;
	}
	*head = tmp;
	return (tmp);
}
