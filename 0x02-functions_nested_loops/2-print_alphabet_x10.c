#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: nothing at all
 */
void print_alphabet_x10(void)
{
	int times = 0;
	int i;

	while (times < 10)
	{
		for (i = 95; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		times++;
	}
}
