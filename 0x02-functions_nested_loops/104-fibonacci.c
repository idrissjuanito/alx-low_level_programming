#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	unsigned long first_fib = 0;
	unsigned long sec_fib = 1;

	for (i = 0; i < 98; i++)
	{
		unsigned long new_fib = first_fib + sec_fib;

		first_fib = sec_fib;
		sec_fib = new_fib;
		if (i < 97)
			printf("%lu, ", new_fib);
		else
			printf("%lu", new_fib);
	}
	printf("\n");
	return (0);
}
