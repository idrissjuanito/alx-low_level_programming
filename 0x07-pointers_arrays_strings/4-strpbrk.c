#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: the string to search
 * @accept: the acceptable bytes to search for
 *
 * Return: returns the first occurence found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	char *fc = NULL;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				fc = &s[i];
				break;
			}
			j++;
		}
		if (fc != NULL)
			break;
		i++;
	}
	return (fc);
}
