#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints elements in a list
 *
 * @h: head node of the list
 *
 * Return: interger number of elements in list
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *current;

	if (!h)
		return (0);
	current = h;

	while (current)
	{
		printf("%d\n", current->n);
		n++;
		current = current->next;
	}
	return (n);
}
