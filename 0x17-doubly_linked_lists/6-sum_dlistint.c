#include "lists.h"

/**
 * sum_dlistint - sums all values of linked list
 *
 * @head: first node of the list
 *
 * Return: sum of values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
