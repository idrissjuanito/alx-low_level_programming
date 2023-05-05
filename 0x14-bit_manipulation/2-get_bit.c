#include "main.h"

/**
 * get_bit - gets the bit at a particular index
 *
 * @n: integer to scan
 * @index: index of the bit to find
 *
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	int bit = -1;

	for (i = 0; n > 0;  i++)
	{
		bit = n % 2;

		if (i == index)
			return (bit);
		n /= 2;
	}
	return (-1);
}
