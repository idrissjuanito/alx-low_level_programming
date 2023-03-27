#include "main.h"

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
		_putchar(*s);
		s--;
	} while (s != start -1);
	_putchar('\n');
}
