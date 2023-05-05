
#include "main.h"


unsigned long int _pow(int x, int y);
/**
 * clear_bit - sets the bit at an index to 0
 *
 * @n: pointer to the number to modify
 * @index: index to transform
 *
 * Return: 1 if success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);
	*n = *n - _pow(2,  index);
	return (1);
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
	if (y == 0)
		return (1);
	return ((unsigned long int)(x * _pow(x, y - 1)));
}
