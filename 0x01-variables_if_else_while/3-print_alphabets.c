#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 96;

	do {
		i++;
		putchar(i);
		if (i == 122)
			i = 64;
	} while (i != 90);
	putchar('\n');
	return (0);
}

