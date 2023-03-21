#include "main.h"

/**
 * _abs - computes the absolute value of an interget
 *
 * @n: is the number to compute
 *
 * Return: returns the absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
