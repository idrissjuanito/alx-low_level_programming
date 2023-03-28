#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse order
 *
 * @s: string to work with
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	char *start = s;

	while (*s != '\0')
	{
		s++;
	}

	while (s != start) {
		s--;
		_putchar(*s);
	} 
	_putchar('\n');
}
