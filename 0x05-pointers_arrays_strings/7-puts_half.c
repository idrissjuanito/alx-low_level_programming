#include "main.h"

/**
 * puts_half - prints the second half of a string
 *
 * @str: The string to work on
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	char *start = str;
	int len = 0;
	int first_half_len;

	while (*start != '\0')
	{
		len++;
		start++;
	}

	first_half_len = len % 2 == 0 ? len / 2 : (len / 2) + 1;
	str += first_half_len;

	for (i = 0; str != start; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
