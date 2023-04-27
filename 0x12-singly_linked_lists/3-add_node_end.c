#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a node at the end of a linked list
 *
 * @head: head of list
 * @str: value of string to add
 *
 * Return: pointer to the added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *current = NULL;

	new = malloc(sizeof(list_t *));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->str = str ? strdup(str) : NULL;
	new->len = str ? strlen(str) : 0;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current)
	{
		if (!current->next)
			break;
		current = current->next;
	}
	current->next = new;
	return (new);
}
