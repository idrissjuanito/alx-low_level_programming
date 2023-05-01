#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees memory of linked list and it's pointer
 *
 * @head: head to the pointer of the a list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *current;

	if (head)
		current = *head;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	free(head);
	head = NULL;
}
