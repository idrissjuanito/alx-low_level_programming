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
	listint_t *current = *h, *tmp;
	size_t n = 0;

	h = NULL;
	while (current)
	{
		n++;
		tmp = current->next;
		if (current >= current->next)
		{
			free(current);
			exit(98);
		}
		free(current);
		current = tmp;
	}
	tmp = NULL;
	return (n);
}
