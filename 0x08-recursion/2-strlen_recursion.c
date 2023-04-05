#include "main.h"

/**
 * _strlen_recursion - computes the length of a string
 *
 * @s: string to compute
 *
 * Return: return the length of the string as int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
