#include "main.h"

/**
 * _puts - writes a string to stdout
 *
 * @str: string to output
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
