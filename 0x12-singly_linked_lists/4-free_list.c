#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the memory of a linked list
 *
 * @head: head of the linked list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *next = NULL;

	while (head)
	{
		next = head->next;
		if (head->str)
			free(head->str);
		free(head);
		head = next;
	}
}
