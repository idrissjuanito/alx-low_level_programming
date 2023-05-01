#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees memory of a linked list
 *
 * @head: head of the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
