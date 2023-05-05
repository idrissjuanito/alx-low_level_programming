#include "main.h"

unsigned long int _pow(int x, int y);

/**
 * print_binary - prints the binary of an interger
 *
 * @n: integer to print
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = _pow(2, 63);
	int init = 0;

	while (m > 0)
	{
		if ((n & m) == 0)
		{
			if (init)
				_putchar('0');
		}
		else
		{
			if (!init)
				init = 1;
			_putchar('1');
		}
		m = m >> 1;
	}
	if (n == 0)
		_putchar('0');
}

/**
 * _pow - computes a number raise to a power y
 *
 * @x: base number
 * @y: power
 *
 * Return: the result of the power
 */
unsigned long int _pow(int x, int y)
{
	if (y == 1)
		return (x);
	return ((unsigned long int)(x * _pow(x, y - 1)));
}
