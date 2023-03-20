#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
