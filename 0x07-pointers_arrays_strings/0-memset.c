#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to the memory location to work with
 * @b: constant byte to write
 * @n: number of bytes to write
 *
 * Return: Pointer to memory buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned  int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
