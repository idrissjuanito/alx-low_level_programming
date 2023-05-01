#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 *
 * @head: pointer to the pointer of the first element in the list
 * @n: the interger to add ot the list
 *
 * Return: the address of the newly created element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*head)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	new->next = *head;
	*head = new;
	return (new);
}

