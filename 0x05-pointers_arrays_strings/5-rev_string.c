#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a string in reverse order
 *
 * @s: string to work with
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	char *start = s;
	char tmp;

	while (*start != '\0')
	{
		start++;
	}

	start--;

	while (s != start && (start - s) > 0)
	{
		tmp = *start;
		*start = *s;
		*s = tmp;
		start--;
		s++;
	}
}
