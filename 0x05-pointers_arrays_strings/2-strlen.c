#include "main.h"

/**
 * _strlen - calculates the length of a string
 *
 * @s: string to work on
 *
 * Return: An integer which is the lenght of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s) != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
