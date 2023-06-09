#include "main.h"

/**
 * print_times_table - prints n times table
 *
 * @n: number of times
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int prod = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (prod < 10)
			{
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(prod + '0');
			} else if (prod < 100)
			{
				_putchar(' ');
				_putchar((int)(prod / 10) + '0');
				_putchar((prod % 10) + '0');
			} else
			{
				_putchar((int)(prod / 100) + '0');
				_putchar((int)((prod % 100) / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
