#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates the position of a character in a string
 *
 * @s: the string to work with
 * @c: is the character to locate
 *
 * Return: the pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	char *fc = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			fc = s;
			break;
		}
		s++;
	}
	return (fc);
}
