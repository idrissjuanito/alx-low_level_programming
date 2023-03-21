#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
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
					_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar((int)(prod / 10) + '0');
				_putchar((int)(prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
