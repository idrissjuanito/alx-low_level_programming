#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 *
 * @head: head of the linked list
 * @n: the interger to add
 *
 * Return: return pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current = *head;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (!current)
	{
		*head = new;
		return (new);
	}
	while (current->next)
		current = current->next;
	current->next = new;
	return (new);
}
