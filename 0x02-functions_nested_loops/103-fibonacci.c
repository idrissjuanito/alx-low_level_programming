#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	long int first_fib = 0;
	long int sec_fib = 1;
	long int new_fib;
	int sum;

	while (new_fib <= 4000000)
	{
		new_fib = first_fib + sec_fib;
		if (new_fib % 2 == 0)
		{
			sum += new_fib;
		}
		first_fib = sec_fib;
		sec_fib = new_fib;
	}
	printf("%i\n", sum);
	return (0);
}
