#include "main.h"
#include <string.h>

int _pow_recursion(int x, int y);
/**
 * binary_to_uint - converts a binary number to an integer
 *
 * @b: binary to convert
 *
 * Return: the integer obtained
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numb = 0;
	unsigned int n;
	int x, i;

	if (!b)
		return (0);
	n = (unsigned int)strlen(b);
	for (i = 0; b[i] != '\0'; i++)
	{
		x = b[i] - '0';
		if (x < 0 || x > 1)
			return (0);
		numb += (x * _pow_recursion(2, n - 1));
		n--;
	}
	return (numb);
}

/**
 * _pow_recursion - computes a number raised to a power
 *
 * @x: base value
 * @y: power value
 *
 * Return: x to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
