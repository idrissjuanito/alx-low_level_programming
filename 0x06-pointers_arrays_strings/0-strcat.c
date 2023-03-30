#include "main.h"
#include <stdio.h>

/**
 * _strcat - concats two strings
 *
 * @dest: first string to append to
 * @src: second string to append
 *
 * Return: pointer to the end string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[j] != '\0')
	{
		if (dest[i] == '\0')
		{
			while (src[j] != '\0')
			{
				dest[i + j] = src[j];
				j++;
			}
			dest[i + j] = '\0';
		}
		i++;
	}
	return (dest);
}
