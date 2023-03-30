#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: where to copy
 * @src: source of copy
 * @n: number of chars to copy
 *
 * Return: The resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		if (src[j] != '\0')
		{
			dest[i] = src[i];
			j++;
		} else
		{
			dest[i] = 0;
		}
	}
	return (dest);
}
