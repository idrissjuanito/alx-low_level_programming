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
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		times++;
	}
}
