#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: memory location to copy to
 * @src: memory location to copy from
 * @n: number of bytes of to copy
 *
 * Return: address of destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
