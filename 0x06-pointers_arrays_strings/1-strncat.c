#include "main.h"

/**
 * _strncat - concats two strings
 *
 * @dest: first string to append to
 * @src: second string to append
 * @n: which the number of chars to copy from src
 *
 * Return: pointer to the end string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int len = 0;

	while (src[len] != '\0' && len < n)
	{
		len++;
	}


	while (j < len)
	{
		if (dest[i] == '\0')
		{
			for (j = 0; j < len; j++)
				dest[i + j] = src[j];
			dest[i + j] = '\0';
		}
		i++;
	}
	return (dest);
}
