#include "lists.h"

/**
 * list_len - list number of elements in linked_list
 *
 * @h: the list
 *
 * Return: a size_t number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *current = h;

	while (current)
	{
		n++;
		current = current->next;
	}
	return (n);
}
