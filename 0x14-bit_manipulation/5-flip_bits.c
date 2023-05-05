#include "main.h"

unsigned long int _pow(int x, int y);
/**
 * flip_bits - computes the number of bits to flip from one num to another
 *
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;	
	unsigned long int flipper = _pow(2, 63);
	unsigned int num = 0;

	while (flipper > 0)
	{
		if ((flipper & flipped) != 0)
			num++;
		flipper = flipper >> 1;
	}
	return (num);
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
