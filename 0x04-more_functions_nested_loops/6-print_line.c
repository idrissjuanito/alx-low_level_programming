#include "main.h"

/**
 * print_line - prints a straight line
 *
 * Return: returns nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
