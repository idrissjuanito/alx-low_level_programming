#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 101 || ch == 113)
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
