#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string to print
 *
 * Return: returns nothing
 */
void _print_rev_recursion(char *s)
{
	char *ss = s;

	if (*s != '\0')
	{
		ss++;
		_print_rev_recursion(ss);
	}
	_putchar(*s);
}
