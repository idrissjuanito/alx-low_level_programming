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

	do {
		s--;
		_putchar(*s);
	} while (s != start);
	_putchar('\n');
}
