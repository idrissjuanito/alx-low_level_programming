#include <stdio.h>

/**
 * _strcpy - copies the content of a string to another
 *
 * @dest: The destination of the string to copy
 * @src: The source string to copy
 *
 * Return: returns the address of the dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + i) = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
