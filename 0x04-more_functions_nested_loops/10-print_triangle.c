#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: the size of the triangle to print
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(' ');
		for (k = 0; k < i; k++)
			_putchar('#');
		_putchar('\n');
	}
}
