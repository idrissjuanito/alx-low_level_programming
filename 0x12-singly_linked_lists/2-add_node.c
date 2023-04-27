#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node ot a linked list
 *
 * @head: pointer to the first node
 * @str: string to add to node
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *myStr = strdup(str);
	int length = strlen(myStr);
	list_t *new = malloc(sizeof(list_t *));

	if (!new)
		return (NULL);
	new->str = myStr;
	new->len = length;
	new->next = *head;
	*head = new;

	return (new);
}
