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

	while (*s != '\0')
	{
		s++;
	}
	while(!(start >= s)) 
	{
		char tmp = *s;

		*s = *start;
		*start = tmp;
		s--;
		start++;
	}
}
