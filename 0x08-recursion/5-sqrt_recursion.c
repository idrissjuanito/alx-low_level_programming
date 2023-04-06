#include "main.h"
#include <stdio.h>

int helper(int n, int y);
int helpy(int n, long y);

/**
 * _sqrt_recursion - calculates the square root of of a number
 *
 * @n: the number to square root
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int y = helpy(n, n/2);

	return (helper(n, y));
}
/**
 * helper - helps keep the value of na and calculates its square root
 *
 * @n: the number to get square root
 * @y: the current root
 *
 * Return: the square root
 */
int helper(int n, int y)
{
	if (n == y * y)
		return (y);
	if (n < 0 || y * y > n)
		return (-1);
	return	(helper(n, y + 1));
}

/**
 * helpy - helps does binary search on n for best y value
 *
 * @n: initial value of y
 * @y: initial y value
 *
 * Return: interger
 */
int helpy(int n, long y)
{
	long  by = y * y;

	if (by <= (long)n)
	{
		return (y);
	}
	y /= 2;
	return	((int)helpy(n, y));
}
