#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: is the first node in the linked list
 *
 * Return: the data stored in the deleted node
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *current;

	if (!*head)
		return (n);
	current = *head;
	n = current->n;
	*head = current->next;
	free(current);
	return (n);
}
