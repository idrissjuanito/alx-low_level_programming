#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i > 9)
		{
			putchar(i + 87);
			continue;
		}
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
