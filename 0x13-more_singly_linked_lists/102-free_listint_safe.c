#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * free_listint_safe - frees a list with loop
 *
 * @h: pointer to the first element in the list
 *
 * Return: the size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t *tmp;
	size_t n = 0;

	if (!h)
		exit(98);
	current = *h;
	while (current)
	{
		n++;
		tmp = current->next;
		if (current <= current->next)
		{
			free(current);
			break;
		}
		free(current);
		current = tmp;
	}
	*h = NULL;
	return (n);
}
