#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a list with a loop
 *
 * @head: first node in the list
 *
 * Return: number of elements in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	const listint_t *current = head;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		n++;
		if (current->next >= current)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}
		current = current->next;
	}
	if (!n)
		exit(98);
	return (n);
}
