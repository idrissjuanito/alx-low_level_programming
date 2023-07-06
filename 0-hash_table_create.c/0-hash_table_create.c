#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a new hashtable
 *
 * @size: this the size of the hash table array
 *
 * Return: pointer to table or NULL if not success
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh_table = NULL;

	if (size <= 0)
		return (NULL);
	hsh_table = malloc(sizeof(hash_table_t));
	if (!hsh_table)
		return (NULL);
	hsh_table->size = size;
	hsh_table->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (!hsh_table->array)
		return (NULL);
	return (hsh_table);
}
