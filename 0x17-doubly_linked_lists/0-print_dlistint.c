#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a doubly linked list
 *
 * @h: head node of the list ot print
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int elems = 0;

	while (current)
	{
		printf("%d\n", (int)current->n);
		elems++;
		current = current->next;
	}
	return (elems);
}
