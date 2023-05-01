#include <stddef.h>
#include "lists.h"

/**
 * listint_len - computes and returns lenght of a linked list
 *
 * @h: head of the linked list
 *
 * Return: size of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	const listint_t *current = h;

	if (!h)
		return (n);

	while (current)
	{
		n++;
		current = current->next;
	}
	return (n);
}
