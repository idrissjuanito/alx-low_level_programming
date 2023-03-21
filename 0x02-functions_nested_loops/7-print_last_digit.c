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
	int ld = n < 0 ? (n * -1) % 10 : n % 10;

	_putchar(ld + '0');
	return (ld);
}
