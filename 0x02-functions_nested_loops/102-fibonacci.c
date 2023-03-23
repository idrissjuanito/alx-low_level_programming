#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	long int first_fib = 0;
	long int sec_fib = 1;

	for (i = 0; i < 50; i++)
	{
		long int new_fib = first_fib + sec_fib;

		first_fib = sec_fib;
		sec_fib = new_fib;
		if (i < 49)
			printf("%li, ", new_fib);
		else
			printf("%li", new_fib);
	}
	printf("\n");
	return (0);
}
