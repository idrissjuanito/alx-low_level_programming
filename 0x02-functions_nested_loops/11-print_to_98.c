#include "main.h"

/**
 * print_to_98 - prints all numbers up to 98
 *
 * @n: the starting point for the print
 *
 * Return: void
 */
void print_to_98(int n)
{
	int loop_times = 98 - n;

	if (loop_times < 0)
		loop_times *= -1;
	while (loop_times >= 0)
	{
		int num = n < 0 ? n * -1 : n;

		if (n < 0)
			_putchar('-');
		if (num < 10)
			_putchar(num + '0');
		else if (num < 100)
		{
			int fd = num / 10;

			_putchar(fd + '0');
			_putchar((num % 10) + '0');
		} else
		{
			int first_digit = num / 100;
			int second_digit = (num % 100) / 10;

			_putchar(first_digit + '0');
			_putchar(second_digit + '0');
			_putchar((num % 10) + '0');
		}
		if (num != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (n < 98)
			n++;
		else
			n--;
		loop_times--;
	}
	_putchar('\n');
}
