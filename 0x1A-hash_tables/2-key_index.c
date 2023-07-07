#include "hash_tables.h"

/**
 * key_index - calculates the index to store a value
 *
 * @key: the key to use for calculation
 * @size: the size of the hash table array
 *
 * Return: The index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
