#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a linked list
 *
 * @h: head of the list to print
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	char *strg;
	int length;
	const list_t *current = h;
	size_t n = 0;

	while (current)
	{
		strg = current->str;
		length = current->len;
		if (!current->str)
		{
			length = 0;
			strg = "(nil)";
		}
		printf("[%d] %s\n", length, strg);
		current = current->next;
		n++;
	}
	return (n);
}
