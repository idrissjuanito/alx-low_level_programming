#include "main.h"

/**
 * print_last_digit - prints the last digit of the number it receives
 *
 * @n: is the number to retrieve the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		n++;
		n *= -1;
		ld = (n % 10) + 1;
	} else
		ld = n % 10;
	_putchar(ld + '0');
	return (ld);
}
