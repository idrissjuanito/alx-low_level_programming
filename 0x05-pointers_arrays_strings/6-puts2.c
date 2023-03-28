#include "main.h"

/**
 * puts2 - prints every other char of a string
 *
 * @str: string to work on
 *
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		if (*(str + 1) == '\0')
			break;
		str += 2;
	}
	_putchar('\n');
}
