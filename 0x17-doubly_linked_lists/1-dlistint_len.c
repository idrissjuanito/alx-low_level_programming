#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - prints all elements of a doubly linked list
 *
 * @h: head node of the list ot print
 *
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int elems = 0;

	while (current)
	{
		elems++;
		current = current->next;
	}
	return (elems);
}
