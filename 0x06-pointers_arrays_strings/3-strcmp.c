#include "main.h"
#include <stdio.h>

/**
 * _strcmp - companres two strings
 *
 * @s1: first string param
 * @s2: second string param
 *
 * Return: 0 if strings are equal and any other number if they aren't
 */
int _strcmp(char *s1, char *s2)
{
	unsigned char *ss1 = (unsigned char *)s1;
	unsigned char *ss2 = (unsigned char *)s2;

	while (*ss1 != '\0')
	{
			if (*ss2 == '\0')
				return (15);
			if (*ss2 > *ss1)
				return (-15);
			if (*ss2 < *ss1)
				return (15);

			ss1++;
			ss2++;
	}

	if (*ss2 != '\0')
		return (-15);
	return (0);
}
