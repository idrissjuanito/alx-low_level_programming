#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: head of the doubly linked list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current)
	{
		head = current->next;
		free(current);
		current = head;
	}
}
