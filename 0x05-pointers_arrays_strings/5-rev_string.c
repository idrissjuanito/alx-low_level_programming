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
	int len, i = 0;
	char tmp;

	while (*start != '\0')
	{
		len++;
		start++;
	}

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
