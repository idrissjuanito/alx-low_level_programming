#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: pointer to the hash table
 * @key: is the key associated to the value to store
 * @value: value to be stored
 *
 * Return: 1 if success or 0 if failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_item = NULL;
	unsigned long index;

	if (strlen(key) == 0 || !ht)
		return (0);
	hash_item = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!hash_item)
		return (0);
	hash_item->key = (char *)malloc(strlen(key) + 1);
	hash_item->value = (char *)malloc(strlen(value) + 1);
	strcpy(hash_item->key, key);
	strcpy(hash_item->value, value);
	index = key_index((unsigned char *)key, ht->size);
	if (!ht->array[index])
	{
		ht->array[index] = hash_item;
		return (1);
	}
	ht->array[index]->next = hash_item;
	return (1);
}
