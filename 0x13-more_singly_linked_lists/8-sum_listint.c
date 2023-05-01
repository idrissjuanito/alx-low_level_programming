#include "lists.h"

/**
 * sum_listint - sums up all the intergers in the list
 *
 * @head: the head of the list
 *
 * Return: returns the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
